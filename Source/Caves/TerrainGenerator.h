// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PaperTileMapComponent.h"
#include<vector>

#include "TerrainGenerator.generated.h"

UCLASS()
class CAVES_API ATerrainGenerator : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATerrainGenerator();
	//ATerrainGenerator(int _floor);

protected:

	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;
	void CreateMap();
	void FillMap();
	void GenerateMap();
	void SetTile(int x, int y, int terrain, int size);

	const int LEVEL_WIDTH = 128;
	const int LEVEL_HEIGHT = 128;
	const int CURSOR_LIFETIME = 1000;

	const int MAP_WIDTH = 16;
	const int MAP_HEIGHT = 16;

	const int TILE_WIDTH = 16;
	const int TILE_HEIGHT = 16;

	int floor_material;
	int wall_material;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ExposeOnSpawn = "true"))
	int floor = 0;

	UPaperTileSet* LevelTileSet;
	

public:
	//std::vector<std::vector<UPaperTileMapComponent*>> TerrainMap;
	void InitializeTileMap(int grid_x, int grid_y);

	UPaperTileMapComponent* GetTileMap(int grid_x, int grid_y);
	void SetTileMap(int grid_x, int grid_y, UPaperTileMapComponent* tilemap);

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "TileMap", meta = (AllowPrivateAccess = "true"))
	TArray<UPaperTileMapComponent*> TerrainMapData;

	TArray<TSubclassOf<AActor>> Enemies;
};
