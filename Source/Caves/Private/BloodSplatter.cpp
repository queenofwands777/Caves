// Fill out your copyright notice in the Description page of Project Settings.


#include "BloodSplatter.h"
#include "Engine/Texture2D.h"
#include "Engine/Texture2DDynamic.h"

#include "Runtime/Engine/Public/TextureResource.h"
#include "RenderUtils.h"


ABloodSplatter::ABloodSplatter(){}

// Sets default values
ABloodSplatter::ABloodSplatter(int _num_probes, float _max_angle, int _probe_lifetime, int _probe_variance, int _probe_speed, FVector2d _direction, FVector2d _location)
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

    num_probes = _num_probes;
    max_angle = _max_angle;
    probe_lifetime = _probe_lifetime;
    probe_variance = _probe_variance;
    probe_speed = _probe_speed;
    direction = _direction;
    location = _location;


    SpriteComponent = CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("SpriteComponent"));
    RootComponent = SpriteComponent;

    

}

// Called when the game starts or when spawned
void ABloodSplatter::BeginPlay()
{
	Super::BeginPlay();

    InitSplatter();
	//GenerateSplatter();
	PlaceSplatter();
	
}

// Called every frame
void ABloodSplatter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABloodSplatter::PlaceDot(int start_x, int start_y, int size) {


    for (int x = 0; x < size; x++) {
        for (int y = 0; y < size; y++){
            PlacePixel(start_x + x, start_y + y);
        }
    }
}

void ABloodSplatter::PlacePixel(int x, int y) {

    FTexture2DMipMap& Mip = splatter->GetPlatformData()->Mips[0];
    void* Data = Mip.BulkData.Lock(LOCK_READ_WRITE);


    // Calculate the pixel location
    int32 PixelIndex = ((y * 32) + x);
    uint8* Ptr = (uint8*)Data + PixelIndex * 4;

    // Set the pixel color
    Ptr[0] = 30;
    Ptr[1] = 30;
    Ptr[2] = 200;
    Ptr[3] = 255;


    Mip.BulkData.Unlock();
    splatter->UpdateResource();

}

//initialize the texture to be printed on
void ABloodSplatter::InitSplatter() {
    int Width = 32;
    int Height = 32;

    splatter = UTexture2D::CreateTransient(Width, Height, PF_B8G8R8A8);

    // Ensure no compression and proper settings
    splatter->MipGenSettings = TMGS_NoMipmaps;
    splatter->CompressionSettings = TC_EditorIcon;
    splatter->SRGB = false;
    splatter->AddToRoot();
    splatter->UpdateResource();

    // Lock the texture to be able to modify it
    FTexture2DMipMap& Mip = splatter->GetPlatformData()->Mips[0];
    void* Data = Mip.BulkData.Lock(LOCK_READ_WRITE);

    // Initialize the texture data
    FMemory::Memset(Data, 0, Mip.BulkData.GetBulkDataSize());

    // Fill the texture with the specified color
    for (int32 y = 0; y < 32; y++)
    {
        for (int32 x = 0; x < 32; x++)
        {
            PlacePixel(x, y);
        }
    }

    // Unlock the texture
    Mip.BulkData.Unlock();
    splatter->UpdateResource();
}

void ABloodSplatter::GenerateSplatter() {

    int num_small_dots = 3;
    int num_medium_dots = 2;
    int num_large_dots = 1;

    for (int i = 0; i < num_probes; i++) {

        float probe_rotation = (i * (max_angle / num_probes)) - (max_angle / 2);
        float rotation_radians = FMath::DegreesToRadians(probe_rotation);

        FVector2d probe_direction = { (direction[0] * FMath::Cos(rotation_radians)) - (direction[1] * FMath::Sin(rotation_radians)),
            (direction[0] * FMath::Sin(rotation_radians)) + (direction[1] * FMath::Cos(rotation_radians))};

        FVector2d probe_location = location;
        for (int ii = 0; ii < probe_lifetime; ii++) {

            probe_location[0] += (probe_direction[0] * probe_speed) + FMath::FRandRange(-probe_variance, probe_variance);
            probe_location[1] += (probe_direction[1] * probe_speed) + FMath::FRandRange(-probe_variance, probe_variance);


            //make large dots
            for (int l = 0; l < num_large_dots; l++) {
                FVector2d placement = {FMath::FRandRange(-3.0f,3.0f),FMath::FRandRange(-3.0f,3.0f)};
                PlaceDot(placement[0], placement[1], 7);
            }

            //make medium dots
            for (int m = 0; m < num_medium_dots; m++) {
                FVector2d placement = { FMath::FRandRange(-5.0f,5.0f),FMath::FRandRange(-5.0f,5.0f) };

                PlaceDot(placement[0], placement[1], 5);
            }

            //make small dots
            for (int s = 0; s < num_small_dots; s++) {
                FVector2d placement = { FMath::FRandRange(-7.0f,7.0f),FMath::FRandRange(-7.0f,7.0f) };

                PlaceDot(placement[0], placement[1], 3);
            }

        }


    }


}

void ABloodSplatter::PlaceSplatter() {

    // Create a new sprite
    FSpriteAssetInitParameters params = FSpriteAssetInitParameters();

    params.SetTextureAndFill(splatter);

    UPaperSprite* NewSprite = NewObject<UPaperSprite>();

    NewSprite->InitializeSprite(params);

    SpriteComponent->SetSprite(NewSprite);
}

