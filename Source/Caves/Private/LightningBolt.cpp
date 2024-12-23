// Fill out your copyright notice in the Description page of Project Settings.


#include "LightningBolt.h"

// Sets default values
ALightningBolt::ALightningBolt()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


    this->SetActorEnableCollision(false);

    SpriteComponent = CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("SpriteComponent"));
    RootComponent = SpriteComponent;
    InitTexture();
}

void ALightningBolt::InitTexture() {
    lightning_texture = UTexture2D::CreateTransient(texture_width, texture_height, PF_B8G8R8A8);
    lightning_texture->Source.Init(texture_width, texture_height, 1, 0, ETextureSourceFormat::TSF_BGRA8);

    // Ensure no compression and proper settings
    lightning_texture->MipGenSettings = TMGS_NoMipmaps;
    lightning_texture->CompressionSettings = TC_VectorDisplacementmap;
    lightning_texture->SRGB = false;
    lightning_texture->Filter = TF_Nearest;


    lightning_texture->AddToRoot();

    // Lock the texture to be able to modify it
    FTexture2DMipMap& Mip = lightning_texture->GetPlatformData()->Mips[0];
    void* Data = Mip.BulkData.Lock(LOCK_READ_WRITE);

    // Initialize the texture data
    FMemory::Memset(Data, 0, Mip.BulkData.GetBulkDataSize());

    // Unlock the texture
    Mip.BulkData.Unlock();
    lightning_texture->UpdateResource();

    ////call once
    //UMaterialInterface* BloodMaterial = LoadObject<UMaterialInterface>(nullptr, TEXT("/Game/Assets/Materials/BloodMaterial.BloodMaterial"));
    //UMaterialInstanceDynamic* BloodMaterialInstance = UMaterialInstanceDynamic::Create(BloodMaterial, this);

    ////call once
    //SpriteComponent->SetTranslucentSortPriority(FMath::RandRange(0, 5000));
    //SpriteComponent->SetMaterial(0, BloodMaterialInstance);

    //call once
    //SpriteComponent->GetCollisionShape();
    //SpriteComponent->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
    //SpriteComponent->SetCollisionProfileName(TEXT("OverlapAll"));
    //SpriteComponent->SetCollisionObjectType(ECC_WorldDynamic);
    //SpriteComponent->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Overlap);
    //SpriteComponent->SetGenerateOverlapEvents(true);
}

// Called when the game starts or when spawned
void ALightningBolt::BeginPlay()
{
	Super::BeginPlay();



	DrawLightning();
    PlaceLightning();
	
}

// Called every frame
void ALightningBolt::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


    lifetimer += DeltaTime *80;
    if (lifetimer > lifetime) {
        Destroy();
    }

}


void ALightningBolt::PlaceLightning() {
    FSpriteAssetInitParameters params;
    params.SetTextureAndFill(lightning_texture);
    params.SetPixelsPerUnrealUnit(1);
    params.Dimension = { (int)texture_width,(int)texture_height };
    params.Offset = { 0,0 };

    UPaperSprite* NewSprite = NewObject<UPaperSprite>();
    NewSprite->InitializeSprite(params);
    NewSprite->SetPivotMode(ESpritePivotMode::Center_Center, { 0,0 });
    NewSprite->RebuildRenderData();

    NewSprite->BodySetup->AggGeom.EmptyElements();
    NewSprite->BodySetup->InvalidatePhysicsData();
    NewSprite->BodySetup->CreatePhysicsMeshes();

    SpriteComponent->SetSprite(NewSprite);
    SpriteComponent->RecreatePhysicsState();
    SpriteComponent->MarkRenderStateDirty();
}


void ALightningBolt::DrawLightning() {

	TArray<FVector> points;

	FVector displacement = start_location - end_location;
    displacement[0] *= -1;
    //displacement *= -1;
	FVector direction = displacement;
	direction.Normalize();


	float distance = FVector::Distance(start_location, end_location);
	float num_breaks = 10;
	float segment_length = distance / num_breaks;

    FVector texture_center = { texture_width / 2, 0, texture_height / 2 };

	for (int i = 0; i < num_breaks + 1; i++) {
		points.Add((texture_center - displacement) + (direction * i * segment_length));
		//points.Add(start_location - displacement + (direction * i * segment_length));
	}

	FVector perpendicular = { -direction[2], direction[1], direction[0] };
	for (int i = 1; i < points.Num()-1; i++) {
		float point_displacement = FMath::FRandRange(-10.0, 10.0);
		points[i] += perpendicular * point_displacement;
	}

	//for (int i = 0; i < points.Num() - 1; i++) {
	//	DrawDebugLine(GetWorld(), points[i], points[i+1], FColor::Cyan, false, 0.1, 255, 1);

	//}

    FTexture2DMipMap& Mip = lightning_texture->GetPlatformData()->Mips[0];
    void* Data = Mip.BulkData.Lock(LOCK_READ_WRITE);

    for (int i = 0; i < points.Num() - 1;i++) {
        FVector local_displacement = points[i + 1] - points[i];
        FVector local_direction = local_displacement;
        float local_distance = FVector::Distance(points[i + 1], points[i]);
        local_direction.Normalize();

        for (int ii = 0; ii < local_distance;ii++) {
            //PlacePixel(points[i][0] + (local_direction[0]*ii), points[i][2] + (local_direction[2] * ii), Data);
            PlaceDot(points[i][0] + (local_direction[0] * ii), points[i][2] + (local_direction[2] * ii), 1, Data, {200,200,0});
        }

        for (int ii = 0; ii < local_distance; ii++) {
            //PlacePixel(points[i][0] + (local_direction[0]*ii), points[i][2] + (local_direction[2] * ii), Data);
            PlacePixel(points[i][0] + (local_direction[0] * ii), points[i][2] + (local_direction[2] * ii), Data, {255,255,55});
        }
    }

    Mip.BulkData.Unlock();
    lightning_texture->UpdateResource();

 


}