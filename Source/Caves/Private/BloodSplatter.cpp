// Fill out your copyright notice in the Description page of Project Settings.


#include "BloodSplatter.h"
#include "Engine/Texture2D.h"
#include "Engine/Texture2DDynamic.h"
#include "Runtime/Engine/Public/TextureResource.h"
#include "RenderUtils.h"

// Sets default values
ABloodSplatter::ABloodSplatter()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABloodSplatter::BeginPlay()
{
	Super::BeginPlay();
	GenerateSplatter();
	PlaceSplatter();
	
}

// Called every frame
void ABloodSplatter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

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
            // Calculate the pixel location
            int32 PixelIndex = ((y * Width) + x);
            uint8* Ptr = (uint8*)Data + PixelIndex * 4;

            // Set the pixel color
            Ptr[0] = 30;
            Ptr[1] = 30;
            Ptr[2] = 200;
            Ptr[3] = 255;
        }
    }

    // Unlock the texture
    Mip.BulkData.Unlock();
    splatter->UpdateResource();

    //qustionable. will the texture delete itself once the block ends?

}

void ABloodSplatter::GenerateSplatter() {
}

void ABloodSplatter::PlaceSplatter() {

}

