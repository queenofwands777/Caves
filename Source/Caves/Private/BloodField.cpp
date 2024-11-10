// Fill out your copyright notice in the Description page of Project Settings.


#include "BloodField.h"



#include <format>
#define ENGINEPRINT(message) GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT(message));

struct BloodTile {
public:
    UTexture2D* texture;
    UPaperSpriteComponent* sprite;
    int TEXTURE_SIZE = 256;

    BloodTile(UTexture2D* _texture, UPaperSpriteComponent* _sprite) {
        texture = _texture;
        sprite = _sprite;
    }

    void ApplyTexture() {
        FSpriteAssetInitParameters params;
        params.SetTextureAndFill(texture);
        params.SetPixelsPerUnrealUnit(1);
        params.Dimension = { TEXTURE_SIZE,TEXTURE_SIZE };
        params.Offset = { 0,0 };

        UPaperSprite* NewSprite = NewObject<UPaperSprite>();
        NewSprite->InitializeSprite(params);
        NewSprite->SetPivotMode(ESpritePivotMode::Center_Center, { 0,0 });
        NewSprite->RebuildRenderData();

        sprite->SetSprite(NewSprite);
        sprite->RecreatePhysicsState();
        sprite->MarkRenderStateDirty();
    }

};

struct Color {
public:
    Color(std::vector<int> _base, float _variance) {
        color = _base;
        variance = _variance;

        Mix();
    }

    std::vector<int> color;
    float variance;

    void Mix() {

        float bias_0 = float(color[0]) / 255.0;
        float bias_1 = float(color[1]) / 255.0;
        float bias_2 = float(color[2]) / 255.0;
        bias_0 *= variance;
        bias_1 *= variance;
        bias_2 *= variance;


        color[0] = FMath::Min(FMath::Max(color[0] + FMath::RandRange(-bias_0, bias_0), 0), 255);
        color[1] = FMath::Min(FMath::Max(color[1] + FMath::RandRange(-bias_1, bias_1), 0), 255);
        color[2] = FMath::Min(FMath::Max(color[2] + FMath::RandRange(-bias_2, bias_2), 0), 255);
    }


};

// Sets default values
ABloodField::ABloodField()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void ABloodField::InitTexture(int grid_x, int grid_y) {

    UTexture2D* new_texture = UTexture2D::CreateTransient(TEXTURE_SIZE, TEXTURE_SIZE, PF_B8G8R8A8);
    new_texture->Source.Init(TEXTURE_SIZE, TEXTURE_SIZE, 1, 0, ETextureSourceFormat::TSF_BGRA8);

    // Ensure no compression and proper settings
    new_texture->MipGenSettings = TMGS_NoMipmaps;
    new_texture->CompressionSettings = TC_VectorDisplacementmap;
    new_texture->SRGB = false;
    new_texture->Filter = TF_Nearest;

    new_texture->AddToRoot();

    // Lock the texture to be able to modify it
    FTexture2DMipMap& Mip = new_texture->GetPlatformData()->Mips[0];
    void* Data = Mip.BulkData.Lock(LOCK_READ_WRITE);

    // Initialize the texture data
    FMemory::Memset(Data, 128, Mip.BulkData.GetBulkDataSize());

    // Unlock the texture
    Mip.BulkData.Unlock();
    new_texture->UpdateResource();

    UPaperSpriteComponent* SpriteComponent = NewObject<UPaperSpriteComponent>(this);
    //this->SetActorEnableCollision(true);
    SpriteComponent->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);

    // Register the component to activate it
    SpriteComponent->RegisterComponent();

    //x = 0.5, y = 1
    float offset_x = 0;
    float offset_y = 0;
    SpriteComponent->SetRelativeLocation({(grid_x + offset_x) * float(TEXTURE_SIZE), 0, ((grid_y) + offset_y) * float(TEXTURE_SIZE)});






    //call once
    UMaterialInterface* BloodMaterial = LoadObject<UMaterialInterface>(nullptr, TEXT("/Game/Assets/Materials/BloodMaterial.BloodMaterial"));
    UMaterialInstanceDynamic* BloodMaterialInstance = UMaterialInstanceDynamic::Create(BloodMaterial, this);
    //call once
    SpriteComponent->SetTranslucentSortPriority(FMath::RandRange(0, 5000));
    SpriteComponent->SetMaterial(0, BloodMaterialInstance);
    //call once
    //SpriteComponent->GetCollisionShape();
    SpriteComponent->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
    SpriteComponent->SetCollisionProfileName(TEXT("OverlapAll"));
    SpriteComponent->SetCollisionObjectType(ECC_WorldDynamic);
    SpriteComponent->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Overlap);
    SpriteComponent->SetGenerateOverlapEvents(true);

    FSpriteAssetInitParameters params;
    params.SetTextureAndFill(new_texture);
    params.SetPixelsPerUnrealUnit(1);
    params.Dimension = {TEXTURE_SIZE,TEXTURE_SIZE };
    params.Offset = { 0,0 };

    UPaperSprite* NewSprite = NewObject<UPaperSprite>();
    NewSprite->InitializeSprite(params);
    NewSprite->SetPivotMode(ESpritePivotMode::Center_Center, { 0,0 });
    NewSprite->RebuildRenderData();

    SpriteComponent->SetSprite(NewSprite);
    SpriteComponent->RecreatePhysicsState();
    SpriteComponent->MarkRenderStateDirty();

    BloodTile* new_tile = new BloodTile(new_texture, SpriteComponent);

    TextureGrid[grid_x].Add(grid_y, new_tile);
}

void ABloodField::PlaceDot(int world_x, int world_y, int size) {

    Color color = { {0,0,160},40 };


    for (int x = -size; x < size; x++) {
        for (int y = -size; y < size; y++) {
            PlacePixel(world_x + x, world_y + y, color );
        }
    }


}

void ABloodField::PlacePixel(int world_x, int world_y, Color color) {


    //get coords within tile
    int local_x = (world_x % TEXTURE_SIZE);
    int local_y = (world_y % TEXTURE_SIZE);

    //get position of tile within field
    int grid_x = (world_x + local_x) / TEXTURE_SIZE;
    int grid_y = (world_y + local_y) / TEXTURE_SIZE;











    if (TextureGrid.Contains(grid_x)) {
        if (!TextureGrid[grid_x].Contains(grid_y)) {
            InitTexture(grid_x, grid_y);

        }
    }
    else {
        TextureGrid.Add(grid_x, TMap<int, BloodTile*>());
        InitTexture(grid_x, grid_y);
    }

    BloodTile* target_tile = TextureGrid[grid_x][grid_y];








    FTexture2DMipMap& Mip = target_tile->texture->GetPlatformData()->Mips[0];
    void* Data = Mip.BulkData.Lock(LOCK_READ_WRITE);

    if (((local_y >= TEXTURE_SIZE) || (local_x >= TEXTURE_SIZE)) || ((local_y < 0) || (local_x < 0))) {
        GEngine->AddOnScreenDebugMessage(-1, 5.0, FColor::Red, FString::Printf(TEXT("X:%d, Y:%d is out of bounds"), local_x, local_y));
        return;
    }







    int32 PixelIndex = (((TEXTURE_SIZE - local_y - 1) * TEXTURE_SIZE) + (local_x));





    uint8* Ptr = (uint8*)Data + (PixelIndex * 4);

    // Set the pixel color
    Ptr[0] = color.color[0];
    Ptr[1] = color.color[1];
    Ptr[2] = color.color[2];
    Ptr[3] = 255;

    Mip.BulkData.Unlock();
    target_tile->texture->UpdateResource();

    target_tile->ApplyTexture();
}

void ABloodField::Splatter(FVector world_location, FVector direction) {

    int world_x = world_location[0];
    int world_y = world_location[2];

    PlaceDot(world_x, world_y, 10);








}

// Called when the game starts or when spawned
void ABloodField::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABloodField::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

