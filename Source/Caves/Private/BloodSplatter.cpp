// Fill out your copyright notice in the Description page of Project Settings.


#include "BloodSplatter.h"
#include "Engine/Texture2D.h"
#include "Engine/Texture2DDynamic.h"
#include "DrawDebugHelpers.h"
#include "PhysicsEngine/ConvexElem.h"

#include "Runtime/Engine/Public/TextureResource.h"
#include "RenderUtils.h"



#include <format>
#define ENGINEPRINT(message) GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT(message));

//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, std::format("absorbing. x: {}, y: {}", actual_x, actual_y).c_str());

ABloodSplatter::ABloodSplatter(){
    PrimaryActorTick.bCanEverTick = true;

    SpriteComponent = CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("SpriteComponent"));
    RootComponent = SpriteComponent;
    this->SetActorEnableCollision(true);
    

}


// Sets default values
void ABloodSplatter::InitParams(int _num_probes, int _blood_quantity, float _max_angle, int _probe_lifetime, int _num_frames, int _probe_variance, int _probe_speed, FVector _direction, FVector _location, FColor _color)
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
    color = _color;

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
            Vertices.Add({(Point[0] - float(texture_width / 2)), 0, -(Point[1] - float(texture_height / 2) )}); 
        }

        UPaperSprite* Sprite = SpriteComponent->GetSprite();
        Sprite->BodySetup->AggGeom.EmptyElements();

        FKConvexElem NewConvex;
        NewConvex.VertexData = Vertices;
        NewConvex.UpdateElemBox();


        FVector geometric_mean;
        for (int32 i = 0; i < Vertices.Num(); i++) {
            geometric_mean += Vertices[i];
        }
        geometric_mean /= Vertices.Num();

        for (int32 i = 0; i < Vertices.Num(); i++) {

            
            FVector dir = (Vertices[i] - geometric_mean);
            dir.Normalize();
            dir *= 5.0;
            Vertices[i] += dir;

        }




        ////render hitbox here
        //for (int32 i = 0; i < Vertices.Num(); ++i)
        //{
        //    // Get the current vertex and the next one (wrap around at the end)
        //    FVector Start = Vertices[i] + this->GetActorLocation();
        //    FVector End = Vertices[(i + 1) % Vertices.Num()] + this->GetActorLocation();
        //    // Draw a line between the two vertices
        //    DrawDebugLine(GetWorld(), Start, End, FColor::Green, true, -1.f, 0, 1.f); // Thickness = 5.f
        //}


        
        Sprite->BodySetup->InvalidatePhysicsData();
        Sprite->BodySetup->AggGeom.ConvexElems.Add(NewConvex);

        Sprite->BodySetup->CreatePhysicsMeshes();
        SpriteComponent->SetSprite(Sprite);
        SpriteComponent->RecreatePhysicsState();
        SpriteComponent->MarkRenderStateDirty();


        frame_timer++;

    }

}







struct BeccaColor {
public:
    BeccaColor(std::vector<int> _base, float _variance) {
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
        color[2] = FMath::Min(FMath::Max(color[2] + FMath::RandRange(-bias_2,bias_2),0),255);




        //color[0] = FMath::Min(FMath::Max(color[0] + FMath::RandRange(-variance, variance), 0), 255);
        //color[1] = FMath::Min(FMath::Max(color[0] + FMath::RandRange(-variance, variance), 0), 255);
        //color[2] = FMath::Min(FMath::Max(color[0] + FMath::RandRange(-variance, variance), 0), 255);
    }


};




void ABloodSplatter::PlaceDot(int start_x, int start_y, int size, void* Data) {

    BeccaColor Red = BeccaColor({ 0,0,160 }, 80);
    BeccaColor Green = BeccaColor({ 0,160,0 }, 80);

    BeccaColor BlueprintColor = BeccaColor({ color.B,color.G, color.R }, 100.0);

    for (int x = 0; x < size; x++) {
        for (int y = 0; y < size; y++){
            PlacePixel(start_x + x, start_y + y, Data, BlueprintColor);
        }
    }
}

void ABloodSplatter::PlacePixel(int x, int y, void* Data, BeccaColor in_color) {

    // Calculate the pixel location

    if ( ((y >= texture_height) || (x >= texture_width)) || ((y <0) || (x <0)) ) {
        GEngine->AddOnScreenDebugMessage(-1,5.0,FColor::Red, FString::Printf(TEXT("X:%d, Y:%d is out of bounds"), x, y));
        return;
    }

    int32 PixelIndex = ((y * texture_width) + x);
    uint8* Ptr = (uint8*)Data + PixelIndex * 4;

    



    // Set the pixel color
    Ptr[0] = in_color.color[0];
    Ptr[1] = in_color.color[1];
    Ptr[2] = in_color.color[2];
    Ptr[3] = 255;

}













void ABloodSplatter::Splatter() {
    InitSplatter();
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



int ABloodSplatter::AbsorbSplatter(FVector input) {
    int quantity_of_blood_absorbed = 0;

    //where the interaction is happening
    int world_x = input.X;
    int world_y = input.Z;

    //where the blood splatter begins
    int splatter_x = location.X;
    int splatter_y = location.Z;

    //where the interaction is happening, relative to the start of the texture. might want to reverse the order of the subtractions.
    int relative_x = world_x - splatter_x;
    int relative_y = splatter_y - world_y;

    //where the interaction is happening relative to the actual coordinates of the texture
    int actual_x = relative_x + (texture_width / 2);
    int actual_y = relative_y + (texture_height / 2);

    int x_var = FMath::RandRange(-2, 2);
    int y_var = FMath::RandRange(-2, 2);
    
    actual_x += x_var;
    actual_y += y_var;


   

    FTexture2DMipMap& Mip = splatter_texture->GetPlatformData()->Mips[0];
    void* Data = Mip.BulkData.Lock(LOCK_READ_WRITE);


    int radius = 5;

    for (int x = -radius; x <= radius; x++) {
        for (int y = -radius; y <= radius; y++) {




            int remove_x = actual_x + x;
            int remove_y = actual_y + y;

            if (sqrt((x*x) + (y*y)) >= (radius)) {
                continue;
            }

            if (((remove_y >= texture_height) || (remove_x >= texture_width)) || ((remove_y < 0) || (remove_x < 0))) {
                GEngine->AddOnScreenDebugMessage(-1, 5.0, FColor::Red, FString::Printf(TEXT("X:%d, Y:%d is out of bounds"), x, y));
                return quantity_of_blood_absorbed;
            }

            int32 PixelIndex = ((remove_y * texture_width) + remove_x);
            uint8* Ptr = (uint8*)Data + PixelIndex * 4;




            if (Ptr[0] + Ptr[1] + Ptr[2] + Ptr[3] != 0) {
                Ptr[0] = 0;
                Ptr[1] = 0;
                Ptr[2] = 0;
                Ptr[3] = 0;

                quantity_of_blood_absorbed++;
            }


            // Set the pixel color






        }
    }

    Mip.BulkData.Unlock();
    splatter_texture->UpdateResource();
    return quantity_of_blood_absorbed;
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
                PlaceDot(probe_locations[probe][0] + placement[0], probe_locations[probe][1] + placement[1], 3, Data);
            }

            //make medium dots
            for (int m = 0; m < num_medium_dots; m++) {
                FVector2d placement = { FMath::FRandRange(-2.0 * probe_variance - step,2.0f * probe_variance + step),FMath::FRandRange(-2.0f * probe_variance - step,2.0f * probe_variance + step) };

                PlaceDot(probe_locations[probe][0] + placement[0], probe_locations[probe][1] + placement[1], 2, Data);
            }

            //make small dots
            for (int s = 0; s < num_small_dots; s++) {
                FVector2d placement = { FMath::FRandRange(-3.0f * probe_variance - step,3.0f * probe_variance + step),FMath::FRandRange(-3.0f * probe_variance - step,3.0f * probe_variance + step) };

                PlaceDot(probe_locations[probe][0] + placement[0], probe_locations[probe][1] + placement[1], 1, Data);
            }






        } //end step

    } //end probe


    Mip.BulkData.Unlock();
    splatter_texture->UpdateResource();

    PlaceSplatter();

    Mip.BulkData.Lock(LOCK_READ_WRITE);

    Mip.BulkData.Unlock();
    splatter_texture->UpdateResource();
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

