// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

struct Encounter;


struct RoomMarker {
	float x;
	float y;

	RoomMarker(float _x, float _y) {
		x = _x;
		y = _y;
	}
};


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

protected:

	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;
	void GenerateMap();
	void MakeRoom(int x, int y);
	void PlaceEncounter(Encounter encounter, int x, int y);
	void SetTile(int x, int y, int terrain, int size, bool generating_floor);
	void SetOverlayTile(int x, int y, int terrain, int rotation);
	FPaperTileInfo* GetTile(int x, int y);

	const int LEVEL_WIDTH = 1024;
	const int LEVEL_HEIGHT = 1024;
	const int CURSOR_LIFETIME = 60;

	const int MAP_WIDTH = 16;
	const int MAP_HEIGHT = 16;

	const int TILE_WIDTH = 16;
	const int TILE_HEIGHT = 16;

	int floor_material;
	int wall_material;
	int void_material;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ExposeOnSpawn = "true"))
	int floor = 0;

	UPaperTileSet* LevelTileSet;
	UPaperTileSet* LevelOverlayTileSet;
	std::vector<RoomMarker> rooms;
	

public:
	//std::vector<std::vector<UPaperTileMapComponent*>> TerrainMap;
	void InitializeTileMap(int grid_x, int grid_y);

	UPaperTileMapComponent* GetTileMap(int grid_x, int grid_y);

	UPaperTileMapComponent* GetOverlayTileMap(int grid_x, int grid_y);

	void SetTileMap(int grid_x, int grid_y, UPaperTileMapComponent* tilemap);

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "TileMap", meta = (AllowPrivateAccess = "true"))
	TArray<UPaperTileMapComponent*> TerrainMapData;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "TileMap", meta = (AllowPrivateAccess = "true"))
	TArray<UPaperTileMapComponent*> TerrainOverlayMapData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ExposeOnSpawn = "true"))
	TArray<TSubclassOf<AActor>> Enemies;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ExposeOnSpawn = "true"))
	TArray<TSubclassOf<AActor>> Objects;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ExposeOnSpawn = "true"))
	TSubclassOf<AActor> Player ;
};


