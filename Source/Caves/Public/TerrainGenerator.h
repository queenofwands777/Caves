// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include<vector>










enum OVERLAY {
	side_1_0 = 0,
	side_2_0 = 1,
	side_2_1 = 2,
	side_3_0 = 3,
	side_4_0 = 4,
	corner_1_0 = 16,
	corner_2_0 = 17,
	corner_2_1 = 18,
	corner_3_0 = 19,
	corner_4_0 = 20,

};


enum OBJECTS {
	Exit = 0,
	Chest = 1,
	Altar = 2,
	Elevator = 3,
	ElevatorDoor = 4,
	Shelf = 5,
	PlayerSpawn = 6
};




struct RoomMarker {
	float x;
	float y;

	RoomMarker(float _x, float _y) {
		x = _x;
		y = _y;
	}
};

class APathfinding;

#include"FloorInfo.h"
#include"GeneratorPattern.h"
#include "DrawDebugHelpers.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PaperTileMapComponent.h"

#define ENGINEPRINT(message) GEngine->AddOnScreenDebugMessage(-1, 500.f, FColor::Red, TEXT(message));
#define PRINT(message) UE_LOG(LogTemp, Warning, TEXT(message));

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
	void MakeRegularHouse(float x, float y, float size, float variance);
	void MakeRegularRoom(float x, float y, float width, float height, float variance);
	void MakeIrregularRoom(float x, float y, float width, float height, float variance);
	void PlaceEncounter(AEncounter* encounter,int x, int y);
	void SetTile(int x, int y, int terrain, int size, bool generating_floor);
	void SetOverlayTile(int x, int y, int terrain, int rotation);
	FPaperTileInfo* GetTile(int x, int y);


	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ExposeOnSpawn = "true"))
	int LEVEL_SIZE;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ExposeOnSpawn = "true"))
	int MAP_SIZE;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ExposeOnSpawn = "true"))
	int TILE_SIZE;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ExposeOnSpawn = "true"))
	int CURSOR_LIFETIME;

	




	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ExposeOnSpawn = "true"))
	int floor_num = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int true_floor;

	UPaperTileSet* LevelOverlayTileSet;
	std::vector<RoomMarker> rooms;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AFloorInfo* floor_info;


	APathfinding* pathfinder;

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
	TArray<TSubclassOf<AFloorInfo>> Floors;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ExposeOnSpawn = "true"))
	TArray<TSubclassOf<AFloorInfo>> SpecialFloors;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ExposeOnSpawn = "true"))
	TSubclassOf<AActor> Player ;


//pathfinding stuff
public:

	


};


