// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DrawDebugHelpers.h"
#include "Engine/Texture2D.h"
#include "Engine/Texture2DDynamic.h"
#include "PhysicsEngine/ConvexElem.h"
#include "PaperSprite.h"
#include "PaperSpriteAtlas.h"
#include "Runtime/Engine/Public/TextureResource.h"
#include "RenderUtils.h"
#include "Engine/CollisionProfile.h"
#include "PhysicsEngine/BodySetup.h"
#include "PaperSpriteComponent.h"
#include"vector"

#include "GameFramework/Actor.h"
#include "LightningBolt.generated.h"

UCLASS()
class CAVES_API ALightningBolt : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALightningBolt();

	float texture_width = 2048;
	float texture_height = 2048;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Texture", meta = (AllowPrivateAccess = "true"))
	UTexture2D* lightning_texture = nullptr;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Sprite", meta = (AllowPrivateAccess = "true"))
	UPaperSpriteComponent* SpriteComponent = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ExposeOnSpawn = "true"))
	FVector start_location;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ExposeOnSpawn = "true"))
	FVector end_location;

	void InitTexture();

	UFUNCTION(BlueprintCallable, Category = "Functions")
	void DrawLightning();

	void PlaceLightning();

	void PlaceDot(int target_x, int target_y, int size, void* Data, std::vector<int>color) {
		for (int x = -size; x <= size; x++) {
			for (int y = -size; y <= size; y++) {
				PlacePixel(target_x + x, target_y + y, Data, color);
			}
		}
	}

	void PlacePixel(int x, int y, void* Data, std::vector<int> color) {

		// Calculate the pixel location

		if (((y >= texture_height) || (x >= texture_width)) || ((y < 0) || (x < 0))) {
			GEngine->AddOnScreenDebugMessage(-1, 5.0, FColor::Red, FString::Printf(TEXT("X:%d, Y:%d is out of bounds"), x, y));
			return;
		}

		int32 PixelIndex = ((y * texture_width) + x);
		uint8* Ptr = (uint8*)Data + PixelIndex * 4;





		// Set the pixel color
		Ptr[0] = color[0];
		Ptr[1] = color[1];
		Ptr[2] = color[2];
		Ptr[3] = 255;

	}

	float lifetime = 10;
	float lifetimer = 0;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
