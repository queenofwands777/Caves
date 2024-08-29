// Fill out your copyright notice in the Description page of Project Settings.


#include "BloodSplatter.h"
#include "Engine/Texture2D.h"
#include "Engine/Texture2DDynamic.h"

#include "Runtime/Engine/Public/TextureResource.h"
#include "RenderUtils.h"


ABloodSplatter::ABloodSplatter(){
    PrimaryActorTick.bCanEverTick = true;

    SpriteComponent = CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("SpriteComponent"));
    RootComponent = SpriteComponent;
    this->SetActorEnableCollision(true);
    

}

// Sets default values
void ABloodSplatter::InitParams(int _num_probes, int _blood_quantity, float _max_angle, int _probe_lifetime, int _num_frames, int _probe_variance, int _probe_speed, FVector _direction, FVector _location)
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	

    num_probes = _num_probes;
    max_angle = _max_angle;
    probe_lifetime = _probe_lifetime / _num_frames;
    num_frames = _num_frames;
    probe_variance = _probe_variance;
    probe_speed = _probe_speed;
    direction = _direction;
    location = _location;
    blood_quantity = _blood_quantity;

}

// Called when the game starts or when spawned
void ABloodSplatter::BeginPlay()
{
	Super::BeginPlay();


}

// Called every frame
void ABloodSplatter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
    
    if (frame_rate_timer < 1) {
        frame_rate_timer++;
    } else
    if (frame_timer < num_frames) {
        //update texture in level
        GenerateSplatter(frame_timer);




        frame_timer++;
        frame_rate_timer = 0;
    }

    //consider putting a flag up to skip this after the first time
    if (frame_timer == num_frames) {

        SpriteComponent->GetSprite()->RebuildCollisionData();

        TArray<FVector2D> Points = {{0, 0}};
        for (int i = 0; i < probe_locations.Num(); i++) {
            Points.Add(probe_locations[i]);
        }

        if (Points.Num() < 3) {
            Points.Add({ Points[1][0] + FMath::FRandRange(-1.0,1.0),Points[1][1] + FMath::FRandRange(-1.0,1.0) });
        }









        TArray<FVector> Vertices;
        Vertices.Add({0, 0, 0});
        for (int i = 1; i < Points.Num(); i++)
        {
            const FVector2D& Point = Points[i];
            Vertices.Add({(Point[0] - float(texture_width / 2)), 0, -(Point[1] - float(texture_height / 2) )}); // Z is 0 for a 2D collision plane
            //GEngine->AddOnScreenDebugMessage(-1, 999.0f, FColor::Cyan, TEXT("point added to vertices:"));
            //GEngine->AddOnScreenDebugMessage(-1, 999.0f, FColor::Cyan, Vertices[i].ToString());
        }

        UPaperSprite* Sprite = SpriteComponent->GetSprite();
        Sprite->BodySetup->AggGeom.EmptyElements();
        // Create a new convex collision element
        FKConvexElem NewConvex;
        NewConvex.VertexData = Vertices;
        NewConvex.UpdateElemBox(); // Update the bounding box based on vertices
        // Add the convex element to the BodySetup
        
        Sprite->BodySetup->InvalidatePhysicsData();
        Sprite->BodySetup->AggGeom.ConvexElems.Add(NewConvex);
        // Update the physics state
        Sprite->BodySetup->CreatePhysicsMeshes();
        //Sprite->RebuildCollisionData();
        SpriteComponent->SetSprite(Sprite);
        SpriteComponent->RecreatePhysicsState();
        SpriteComponent->MarkRenderStateDirty();
        //GEngine->AddOnScreenDebugMessage(-1, 999.0f, FColor::Yellow, TEXT("searching for hull..."));
        //for (int i = 0; i < SpriteComponent->GetSprite()->BodySetup->AggGeom.ConvexElems.Num(); i++) {
        //    GEngine->AddOnScreenDebugMessage(-1, 999.0f, FColor::Yellow, TEXT("found convex hull"));
        //    for (int ii = 0; ii < SpriteComponent->GetSprite()->BodySetup->AggGeom.ConvexElems[i].VertexData.Num(); ii++) {
        //        GEngine->AddOnScreenDebugMessage(-1, 999.0f, FColor::Yellow, TEXT("found vertex"));
        //        GEngine->AddOnScreenDebugMessage(-1, 999.0f, FColor::Yellow, SpriteComponent->GetSprite()->BodySetup->AggGeom.ConvexElems[i].VertexData[ii].ToString());
        //    }
        //}












        frame_timer++;

    }

}

void ABloodSplatter::PlaceDot(int start_x, int start_y, int size, void* Data, int variance) {


    for (int x = 0; x < size; x++) {
        for (int y = 0; y < size; y++){
            PlacePixel(start_x + x, start_y + y, Data, variance);
        }
    }
}

void ABloodSplatter::PlacePixel(int x, int y, void* Data, int variance) {

    // Calculate the pixel location

    if ( ((y >= texture_height) || (x >= texture_width)) || ((y <0) || (x <0)) ) {
        GEngine->AddOnScreenDebugMessage(-1,5.0,FColor::Red, FString::Printf(TEXT("X:%d, Y:%d is out of bounds"), x, y));
        return;
    }

    int32 PixelIndex = ((y * texture_width) + x);
    uint8* Ptr = (uint8*)Data + PixelIndex * 4;

    // Set the pixel color
    Ptr[0] = 0;
    Ptr[1] = 0;
    Ptr[2] = 170 + variance;
    Ptr[3] = 255;

}

void ABloodSplatter::Splatter() {
    InitSplatter();
    //GenerateSplatter(1);
    //PlaceSplatter();
}

//initialize the texture to be printed on
void ABloodSplatter::InitSplatter() {
;

    splatter_texture = UTexture2D::CreateTransient(texture_width, texture_height, PF_B8G8R8A8);
    splatter_texture->Source.Init(texture_width, texture_height, 1, 0, ETextureSourceFormat::TSF_BGRA8);
    
    // Ensure no compression and proper settings
    splatter_texture->MipGenSettings = TMGS_NoMipmaps;
    splatter_texture->CompressionSettings = TC_VectorDisplacementmap;
    splatter_texture->SRGB = false;
    splatter_texture->Filter = TF_Nearest;


    splatter_texture->AddToRoot();

    // Lock the texture to be able to modify it
    FTexture2DMipMap& Mip = splatter_texture->GetPlatformData()->Mips[0];
    void* Data = Mip.BulkData.Lock(LOCK_READ_WRITE);

    // Initialize the texture data
    FMemory::Memset(Data, 0, Mip.BulkData.GetBulkDataSize());

    // Unlock the texture
    Mip.BulkData.Unlock();
    splatter_texture->UpdateResource();

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



    //initialize probes
    for (int i = 0; i < num_probes; i++) {

        //calculate and apply local rotation (spread)
        float probe_rotation = (i * (max_angle / num_probes)) - (max_angle / 2);
        float rotation_radians = FMath::DegreesToRadians(probe_rotation);
        FVector2d probe_direction = {
                (direction[0] * FMath::Cos(rotation_radians)) - (direction[2] * FMath::Sin(rotation_radians)),
                (direction[0] * FMath::Sin(rotation_radians)) + (direction[2] * FMath::Cos(rotation_radians))
        };

        //set origin
        FVector2d probe_location = { float(texture_width / 2), float(texture_height / 2) };

        probe_locations.Add(probe_location);
        probe_directions.Add(probe_direction);

    }




}

void ABloodSplatter::GenerateSplatter(int snapshot) {


    int num_small_dots = 3 * blood_quantity;
    int num_medium_dots = 2 * blood_quantity;
    int num_large_dots = 1 * blood_quantity;

    FTexture2DMipMap& Mip = splatter_texture->GetPlatformData()->Mips[0];
    void* Data = Mip.BulkData.Lock(LOCK_READ_WRITE);






    //move probes
    

        for (int probe = 0; probe < num_probes; probe++) {

            for (int step = probe_lifetime * snapshot; step < probe_lifetime + (probe_lifetime * snapshot); step++) {

                probe_locations[probe][0] += (probe_directions[probe][0] * probe_speed) + FMath::FRandRange(-probe_variance, probe_variance);
                probe_locations[probe][1] += (probe_directions[probe][1] * probe_speed) + FMath::FRandRange(-probe_variance, probe_variance);



                //perform raytrace. if collision detected, break out of the loop


                FHitResult HitResult;
                FVector Start = location;  // The starting point of your splatter
                FVector End = { probe_locations[probe][0] + location[0] - (texture_width / 2), location[1], -(probe_locations[probe][1] - (texture_height / 2)) + location[2] };  // The current probe's location
                FCollisionQueryParams TraceParams(FName(TEXT("BloodSplatterTrace")), true);

                // Perform the line trace
                bool bHit = GetWorld()->LineTraceSingleByChannel(
                    HitResult,
                    Start,
                    End,
                    ECC_GameTraceChannel1,  // You can choose the appropriate collision channel
                    TraceParams
                );


                if (HitResult.bBlockingHit) {
                    //DrawDebugLine(GetWorld(), Start, HitResult.Location, FColor::Green, false, 100, 0, 1);
                    //break;
                    probe_directions[probe][0] = 0;
                    probe_directions[probe][1] = 0;
                }





                //make large dots
                for (int l = 0; l < num_large_dots; l++) {
                    FVector2d placement = { FMath::FRandRange(-1.0f * probe_variance - step,1.0f * probe_variance + step),FMath::FRandRange(-1.0f * probe_variance - step,1.0f * probe_variance + step) };
                    PlaceDot(probe_locations[probe][0] + placement[0], probe_locations[probe][1] + placement[1], 3, Data,FMath::RandRange(-40,40));
                }

                //make medium dots
                for (int m = 0; m < num_medium_dots; m++) {
                    FVector2d placement = { FMath::FRandRange(-2.0 * probe_variance - step,2.0f * probe_variance + step),FMath::FRandRange(-2.0f * probe_variance - step,2.0f * probe_variance + step) };

                    PlaceDot(probe_locations[probe][0] + placement[0], probe_locations[probe][1] + placement[1], 2, Data, FMath::RandRange(-40,40));
                }

                //make small dots
                for (int s = 0; s < num_small_dots; s++) {
                    FVector2d placement = { FMath::FRandRange(-3.0f * probe_variance - step,3.0f * probe_variance + step),FMath::FRandRange(-3.0f * probe_variance - step,3.0f * probe_variance + step) };

                    PlaceDot(probe_locations[probe][0] + placement[0], probe_locations[probe][1] + placement[1], 1, Data, FMath::RandRange(-40,40));
                }






            } //end step

        } //end probe


        Mip.BulkData.Unlock();
        splatter_texture->UpdateResource();

        
        //HERE IS THE PROBLEM!! I want to add a copy of the current state of the texture to the list of frames. OR, print the texture as it currently is into the level, and make the whole thing
        //generate based on the tick.
        PlaceSplatter();



        Mip.BulkData.Lock(LOCK_READ_WRITE);




    Mip.BulkData.Unlock();
    splatter_texture->UpdateResource();
}

void ABloodSplatter::PlaceFrame(int frame) {

    // Create a new sprite
    //FSpriteAssetInitParameters params;
    //params.SetTextureAndFill(splatter_frames[frame]);
    //params.SetPixelsPerUnrealUnit(1);
    //params.Dimension = { texture_width,texture_height };
    //params.Offset = { 0,0 };

    //UPaperSprite* NewSprite = NewObject<UPaperSprite>();


    //NewSprite->InitializeSprite(params);

    //NewSprite->SetPivotMode(ESpritePivotMode::Center_Center, { 0,0 });
    //NewSprite->RebuildRenderData();

    //SpriteComponent->SetSprite(NewSprite);
    //SpriteComponent->MarkRenderStateDirty();
    //SpriteComponent->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Overlap);

}

void ABloodSplatter::PlaceSplatter() {

    FSpriteAssetInitParameters params;
    params.SetTextureAndFill(splatter_texture);
    params.SetPixelsPerUnrealUnit(1);
    params.Dimension = { texture_width,texture_height };
    params.Offset = { 0,0 };

    UPaperSprite* NewSprite = NewObject<UPaperSprite>();
    NewSprite->InitializeSprite(params);
    NewSprite->SetPivotMode(ESpritePivotMode::Center_Center, {0,0});
    NewSprite->RebuildRenderData();

    NewSprite->BodySetup->AggGeom.EmptyElements();
    NewSprite->BodySetup->InvalidatePhysicsData();
    NewSprite->BodySetup->CreatePhysicsMeshes();
    SpriteComponent->SetSprite(NewSprite);
    SpriteComponent->RecreatePhysicsState();
    SpriteComponent->MarkRenderStateDirty();
  
}

