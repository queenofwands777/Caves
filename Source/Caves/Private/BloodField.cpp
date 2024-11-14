// Fill out your copyright notice in the Description page of Project Settings.


#include "BloodField.h"
#include <format>
#define ENGINEPRINT(message) GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT(message));

struct BloodTile {
public:
    UTexture2D* texture;
    UPaperSpriteComponent* sprite;
    int TEXTURE_SIZE = 256;
    std::vector<float> world_coords;

    

    BloodTile(UTexture2D* _texture, UPaperSpriteComponent* _sprite, std::vector<float> _world_coords) {
        texture = _texture;
        sprite = _sprite;
        world_coords = _world_coords;
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


struct ActiveSplatter {
    UTexture2D* texture;
    int TEXTURE_SIZE = 32;
    std::vector<float> location;
    std::vector<std::vector<float>> probe_locations;
    bool finished = false;
    int frame = 0;
    int max_frames = 5;
    ABloodField* parent;



public:
    void PlaceDot(int local_x, int local_y, int size) {

        Color color = { {0,0,160},40 };

        for (int x = -size; x < size; x++) {
            for (int y = -size; y < size; y++) {
                PlacePixel(local_x + x, local_y + y, color);
            }
        }

    }

    void PlacePixel(int local_x, int local_y, Color color) {

        if ((local_x < 0)||(local_y < 0)||(local_x >= TEXTURE_SIZE)||(local_y >= TEXTURE_SIZE)) {
            return;
        }

        FTexture2DMipMap& Mip = texture->GetPlatformData()->Mips[0];
        void* Data = Mip.BulkData.Lock(LOCK_READ_WRITE);


        int32 PixelIndex = (local_y * TEXTURE_SIZE) + (local_x);
        uint8* Ptr = (uint8*)Data + (PixelIndex * 4);

        // Set the pixel color
        Ptr[0] = color.color[0];
        Ptr[1] = color.color[1];
        Ptr[2] = color.color[2];
        Ptr[3] = 255;


        Mip.BulkData.Unlock();
        texture->UpdateResource();

    }


public:
    ActiveSplatter(float _start_x, float _start_y, ABloodField* _parent) {
        location = { _start_x, _start_y };
        parent = _parent;
        InitTexture();
    }

    void InitTexture() {
        texture = UTexture2D::CreateTransient(TEXTURE_SIZE, TEXTURE_SIZE, PF_B8G8R8A8);
        texture->Source.Init(TEXTURE_SIZE, TEXTURE_SIZE, 1, 0, ETextureSourceFormat::TSF_BGRA8);

        // Ensure no compression and proper settings
        texture->MipGenSettings = TMGS_NoMipmaps;
        texture->CompressionSettings = TC_VectorDisplacementmap;
        texture->SRGB = false;
        texture->Filter = TF_Nearest;

        texture->AddToRoot();

        // Lock the texture to be able to modify it
        FTexture2DMipMap& Mip = texture->GetPlatformData()->Mips[0];
        void* Data = Mip.BulkData.Lock(LOCK_READ_WRITE);

        // Initialize the texture data
        FMemory::Memset(Data, 128, Mip.BulkData.GetBulkDataSize());

        // Unlock the texture
        Mip.BulkData.Unlock();
        texture->UpdateResource();
    }

    void DrawSplatter() {

        PlaceDot(TEXTURE_SIZE / 2, TEXTURE_SIZE / 2, 10);

        finished = true;

    }

    void PlaceSplatter() {

        //all in terms of world coords
        int half_texture = TEXTURE_SIZE / 2;
        std::vector<float> center = { location[0], location[1] };
        std::vector<float> top_left_corner  = { center[0] - half_texture, center[1] + half_texture };
        std::vector<float> top_right_corner = { center[0] + half_texture, center[1] + half_texture };
        std::vector<float> bot_left_corner  = { center[0] - half_texture, center[1] - half_texture };
        std::vector<float> bot_right_corner = { center[0] + half_texture, center[1] - half_texture };
        
        std::vector<BloodTile*> quadrants = 
            { 
              parent->GetTileWorldCoords(top_left_corner[0],top_left_corner[1]),
              parent->GetTileWorldCoords(top_right_corner[0],top_right_corner[1]),
              parent->GetTileWorldCoords(bot_left_corner[0],bot_left_corner[1]),
              parent->GetTileWorldCoords(bot_right_corner[0],bot_right_corner[1]),
            };
        
        FTexture2DMipMap& MipSplatter = texture->GetPlatformData()->Mips[0];
        void* DataSplatter = MipSplatter.BulkData.Lock(LOCK_READ_ONLY);



        GEngine->AddOnScreenDebugMessage(-1, 60.0, FColor::Red, FString::Printf(TEXT("Blood Splatter WorldLoc: X:%d, Y:%d"), center[0], center[1]));

        for (int quadrant = 0; quadrant < 1; quadrant++) {

            FTexture2DMipMap& TileMip = quadrants[quadrant]->texture->GetPlatformData()->Mips[0];
            void* TileData = TileMip.BulkData.Lock(LOCK_READ_WRITE);

            float x_diff = quadrants[quadrant]->world_coords[0] - center[0];
            float y_diff = quadrants[quadrant]->world_coords[2] - center[1];
            float x_offset = (TEXTURE_SIZE / 2) - (x_diff - (parent->TEXTURE_SIZE / 2));
            float y_offset = (TEXTURE_SIZE / 2) - (y_diff - (parent->TEXTURE_SIZE / 2));


            GEngine->AddOnScreenDebugMessage(-1, 60.0, FColor::Red, FString::Printf(TEXT("Quadrant:%d, WorldLoc: X:%d, Y:%d, x_diff:%d, y_diff:%d "), quadrant, quadrants[quadrant]->world_coords[0], quadrants[quadrant]->world_coords[2], x_diff, y_diff));

            for (int x = 0; x < TEXTURE_SIZE; x++) {
                for (int y = 0; y < TEXTURE_SIZE; y++) {
                    int tile_x = (x) + (parent->TEXTURE_SIZE / 2);
                    int tile_y = (y) + (parent->TEXTURE_SIZE / 2);
                    int32 TilePixelIndex = (tile_y * parent->TEXTURE_SIZE) + (tile_x);
                    uint8* TilePtr = (uint8*)TileData + (TilePixelIndex * 4);

                    int32 SplatterPixelIndex = (y * TEXTURE_SIZE) + (x);
                    uint8* SplatterPtr = (uint8*)DataSplatter + (SplatterPixelIndex * 4);


                    // Set the pixel color
                    TilePtr[0] = SplatterPtr[0];
                    TilePtr[1] = SplatterPtr[1];
                    TilePtr[2] = SplatterPtr[2];
                    TilePtr[3] = std::min(std::max(TilePtr[3] + SplatterPtr[3], 0), 255);

                }
            }

            TileMip.BulkData.Unlock();
            quadrants[quadrant]->texture->UpdateResource();



        }










        
        ////top left
        //FTexture2DMipMap& MipTL = quadrants[0]->texture->GetPlatformData()->Mips[0];
        //void* DataTL = MipTL.BulkData.Lock(LOCK_READ_WRITE);

        //float x_diff = quadrants[0]->world_coords[0] - center[0];
        //float y_diff = quadrants[0]->world_coords[1] - center[1];
        //float x_offset = (TEXTURE_SIZE / 2) - (x_diff - (parent->TEXTURE_SIZE / 2));
        //float y_offset = (TEXTURE_SIZE / 2) - (y_diff - (parent->TEXTURE_SIZE / 2));
        //for (int x = 0; x < TEXTURE_SIZE - x_offset;x++) {
        //    for (int y = 0; y < TEXTURE_SIZE - y_offset; y++) {
        //        int tile_x = x+(parent->TEXTURE_SIZE/2)+x_diff;
        //        int tile_y = y + (parent->TEXTURE_SIZE/2) + y_diff;
        //        int32 TilePixelIndex = (tile_y * TEXTURE_SIZE) + (tile_x);
        //        uint8* TilePtr = (uint8*)DataTL + (TilePixelIndex * 4);

        //        int32 SplatterPixelIndex = (y * TEXTURE_SIZE) + (x);
        //        uint8* SplatterPtr = (uint8*)DataSplatter + (SplatterPixelIndex * 4);


        //        // Set the pixel color
        //        TilePtr[0] = SplatterPtr[0];
        //        TilePtr[1] = SplatterPtr[1];
        //        TilePtr[2] = SplatterPtr[2];
        //        TilePtr[3] = std::min(std::max(TilePtr[3] + SplatterPtr[3],0),255);

        //    }
        //}
        //MipTL.BulkData.Unlock();
        //quadrants[0]->texture->UpdateResource();


        ////top right
        //FTexture2DMipMap& MipTR = quadrants[1]->texture->GetPlatformData()->Mips[0];
        //void* DataTR = MipTR.BulkData.Lock(LOCK_READ_WRITE);

        //x_diff = quadrants[1]->world_coords[0] - center[0];
        //y_diff = quadrants[1]->world_coords[1] - center[1];
        //x_offset = (TEXTURE_SIZE / 2) - (x_diff - (parent->TEXTURE_SIZE / 2));
        //y_offset = (TEXTURE_SIZE / 2) - (y_diff - (parent->TEXTURE_SIZE / 2));
        //for (int x = TEXTURE_SIZE - x_offset; x < TEXTURE_SIZE; x++) {
        //    for (int y = 0; y < TEXTURE_SIZE - x_offset; y++) {
        //        int tile_x = x + (parent->TEXTURE_SIZE / 2) + x_diff;
        //        int tile_y = y + (parent->TEXTURE_SIZE / 2) + y_diff;
        //        int32 TilePixelIndex = (tile_y * TEXTURE_SIZE) + (tile_x);
        //        uint8* TilePtr = (uint8*)DataTR + (TilePixelIndex * 4);

        //        int32 SplatterPixelIndex = (y * TEXTURE_SIZE) + (x);
        //        uint8* SplatterPtr = (uint8*)DataSplatter + (SplatterPixelIndex * 4);


        //        // Set the pixel color
        //        TilePtr[0] = SplatterPtr[0];
        //        TilePtr[1] = SplatterPtr[1];
        //        TilePtr[2] = SplatterPtr[2];
        //        TilePtr[3] = std::min(std::max(TilePtr[3] + SplatterPtr[3], 0), 255);

        //    }
        //}
        //MipTR.BulkData.Unlock();
        //quadrants[1]->texture->UpdateResource();


        ////bot left
        //FTexture2DMipMap& MipBL = quadrants[2]->texture->GetPlatformData()->Mips[0];
        //void* DataBL = MipBL.BulkData.Lock(LOCK_READ_WRITE);

        //x_diff = quadrants[2]->world_coords[0] - center[0];
        //y_diff = quadrants[2]->world_coords[1] - center[1];
        //x_offset = (TEXTURE_SIZE / 2) - (x_diff - (parent->TEXTURE_SIZE / 2));
        //y_offset = (TEXTURE_SIZE / 2) - (y_diff - (parent->TEXTURE_SIZE / 2));
        //for (int x = 0; x < TEXTURE_SIZE - x_offset; x++) {
        //    for (int y = TEXTURE_SIZE - x_offset; y < TEXTURE_SIZE; y++) {

        //        int tile_x = x + (parent->TEXTURE_SIZE / 2) + x_diff;
        //        int tile_y = y + (parent->TEXTURE_SIZE / 2) + y_diff;
        //        int32 TilePixelIndex = (tile_y * TEXTURE_SIZE) + (tile_x);
        //        uint8* TilePtr = (uint8*)DataBL + (TilePixelIndex * 4);

        //        int32 SplatterPixelIndex = (y * TEXTURE_SIZE) + (x);
        //        uint8* SplatterPtr = (uint8*)DataSplatter + (SplatterPixelIndex * 4);


        //        // Set the pixel color
        //        TilePtr[0] = SplatterPtr[0];
        //        TilePtr[1] = SplatterPtr[1];
        //        TilePtr[2] = SplatterPtr[2];
        //        TilePtr[3] = std::min(std::max(TilePtr[3] + SplatterPtr[3], 0), 255);

        //    }
        //}
        //MipBL.BulkData.Unlock();
        //quadrants[2]->texture->UpdateResource();


        ////bot right
        //FTexture2DMipMap& MipBR = quadrants[3]->texture->GetPlatformData()->Mips[0];
        //void* DataBR = MipBR.BulkData.Lock(LOCK_READ_WRITE);

        //x_diff = quadrants[3]->world_coords[0] - center[0];
        //y_diff = quadrants[3]->world_coords[1] - center[1];
        //x_offset = (TEXTURE_SIZE / 2) - (x_diff - (parent->TEXTURE_SIZE / 2));
        //y_offset = (TEXTURE_SIZE / 2) - (y_diff - (parent->TEXTURE_SIZE / 2));
        //for (int x = TEXTURE_SIZE - x_offset; x < TEXTURE_SIZE; x++) {
        //    for (int y = TEXTURE_SIZE - x_offset; y < TEXTURE_SIZE; y++) {

        //        int tile_x = x + (parent->TEXTURE_SIZE / 2) + x_diff;
        //        int tile_y = y + (parent->TEXTURE_SIZE / 2) + y_diff;
        //        int32 TilePixelIndex = (tile_y * TEXTURE_SIZE) + (tile_x);
        //        uint8* TilePtr = (uint8*)DataBR + (TilePixelIndex * 4);

        //        int32 SplatterPixelIndex = (y * TEXTURE_SIZE) + (x);
        //        uint8* SplatterPtr = (uint8*)DataSplatter + (SplatterPixelIndex * 4);


        //        // Set the pixel color
        //        TilePtr[0] = SplatterPtr[0];
        //        TilePtr[1] = SplatterPtr[1];
        //        TilePtr[2] = SplatterPtr[2];
        //        TilePtr[3] = std::min(std::max(TilePtr[3] + SplatterPtr[3], 0), 255);

        //    }
        //}
        //MipBR.BulkData.Unlock();
        //quadrants[3]->texture->UpdateResource();


        MipSplatter.BulkData.Unlock();


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
    FMemory::Memset(Data, 64, Mip.BulkData.GetBulkDataSize());

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

    BloodTile* new_tile = new BloodTile(new_texture, SpriteComponent, {float(SpriteComponent->GetRelativeLocation()[0]),float(SpriteComponent->GetRelativeLocation()[2])});

    TextureGrid[grid_x].Add(grid_y, new_tile);
}

void ABloodField::PlaceDot(int world_x, int world_y, int size) {

    //get coords within tile
    int local_x = (world_x % TEXTURE_SIZE);
    int local_y = (world_y % TEXTURE_SIZE);

    //get position of tile within field
    int grid_x = (world_x - local_x) / TEXTURE_SIZE;
    int grid_y = (world_y - local_y) / TEXTURE_SIZE;

    Color color = { {0,0,160},40 };

    for (int x = -size; x < size; x++) {
        for (int y = -size; y < size; y++) {
            PlacePixel(world_x + x, world_y + y, color);
        }
    }

}

void ABloodField::PlacePixel(int world_x, int world_y, Color color) {

    //get coords within tile
    int local_x = (world_x % TEXTURE_SIZE);
    int local_y = (world_y % TEXTURE_SIZE);

    //get position of tile within field
    int grid_x = (world_x - local_x) / TEXTURE_SIZE;
    int grid_y = (world_y - local_y) / TEXTURE_SIZE;

    local_y = TEXTURE_SIZE - local_y - 1;

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


    int32 PixelIndex = (local_y * TEXTURE_SIZE) + (local_x);
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

    int world_x = world_location[0] + (TEXTURE_SIZE/2);
    int world_y = world_location[2] + (TEXTURE_SIZE/2);


    ActiveSplatter* new_splatter = new ActiveSplatter(world_x, world_y, this);
    ActiveSplatters.push_back(new_splatter);

    //PlaceDot(world_x, world_y, 10);







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


    for (int i = 0; i < ActiveSplatters.size(); i++) {
        ActiveSplatter* target = ActiveSplatters[i];
        target->DrawSplatter();
        target->PlaceSplatter();
    }

    //does this delete the splatter too?
    ActiveSplatters.erase(
        std::remove_if(ActiveSplatters.begin(), ActiveSplatters.end(), [](const ActiveSplatter* obj) {
            return obj->finished;
            }),
        ActiveSplatters.end()
    );

}

