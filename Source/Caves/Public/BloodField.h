// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

struct Color;
struct BloodTile;
struct ActiveSplatter;

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
	std::vector<ActiveSplatter*> ActiveSplatters;

	void* buffer = nullptr;
	std::vector<int> target_tile_grid_loc = {0,0};

	void InitTexture(int grid_x, int grid_y);
	void PlacePixel(int world_x, int world_y, Color color);
	void PlaceDot(int world_x, int world_y, int size);
	BloodTile* GetTileWorldCoords(int world_x, int world_y) {
		//get coords within tile
		int local_x = (world_x % TEXTURE_SIZE);
		int local_y = (world_y % TEXTURE_SIZE);

		//get position of tile within field
		int grid_x = (world_x - local_x) / TEXTURE_SIZE;
		int grid_y = (world_y - local_y) / TEXTURE_SIZE;
		
		return GetTileGridCoords(grid_x, grid_y);
	}
	BloodTile* GetTileGridCoords(int grid_x, int grid_y) {
		if (TextureGrid.Contains(grid_x)) {
			if (!TextureGrid[grid_x].Contains(grid_y)) {
				InitTexture(grid_x, grid_y);

			}
		}
		else {
			TextureGrid.Add(grid_x, TMap<int, BloodTile*>());
			InitTexture(grid_x, grid_y);
		}

		return TextureGrid[grid_x][grid_y];
	}


	UFUNCTION(BlueprintCallable, Category = "Splatter")
	void Splatter(FVector location, FVector direction);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
