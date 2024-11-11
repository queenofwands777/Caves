// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

struct Color;
struct BloodTile;

#include "DrawDebugHelpers.h"
#include "PaperSprite.h"
#include"vector"
#include "PaperSpriteComponent.h"
#include"vector"
#include "PaperSpriteAtlas.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BloodField.generated.h"

UCLASS()
class CAVES_API ABloodField : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABloodField();

	int TEXTURE_SIZE = 256;
	TMap<int, TMap<int, BloodTile*>> TextureGrid;

	void* buffer = nullptr;
	std::vector<int> target_tile_grid_loc;

	void InitTexture(int grid_x, int grid_y);
	void PlacePixel(int world_x, int world_y, Color color);
	void PlaceDot(int world_x, int world_y, int size);


	UFUNCTION(BlueprintCallable, Category = "Splatter")
	void Splatter(FVector location, FVector direction);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
