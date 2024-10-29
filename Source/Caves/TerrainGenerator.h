// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include<vector>

enum TERRAIN {
	LVL1_VOID = 15,
	STONE_WALL_0 = 5,
	STONE_WALL_1 = 6,
	STONE_WALL_2 = 7,
	STONE_WALL_3 = 8,
	STONE_WALL_4 = 9,
	STONE_FLOOR_0 = 0,
	STONE_FLOOR_1 = 1,
	STONE_FLOOR_2 = 2,
	STONE_FLOOR_3 = 3,
	STONE_FLOOR_4 = 4,

	LVL2_VOID = 31,
	FIRE_WALL_0 = 21,
	FIRE_WALL_1 = 22,
	FIRE_WALL_2 = 23,
	FIRE_WALL_3 = 24,
	FIRE_WALL_4 = 25,
	FIRE_FLOOR_0 = 16,
	FIRE_FLOOR_1 = 17,
	FIRE_FLOOR_2 = 18,
	FIRE_FLOOR_3 = 19,
	FIRE_FLOOR_4 = 20,

	LVL3_VOID = 47,
	ICE_WALL_0 = 37,
	ICE_WALL_1 = 38,
	ICE_WALL_2 = 39,
	ICE_WALL_3 = 40,
	ICE_WALL_4 = 41,
	ICE_FLOOR_0 = 32,
	ICE_FLOOR_1 = 33,
	ICE_FLOOR_2 = 34,
	ICE_FLOOR_3 = 35,
	ICE_FLOOR_4 = 36,

	LVL4_VOID = 63,
	LVL4_WALL_0 = 53,
	LVL4_WALL_1 = 54,
	LVL4_WALL_2 = 55,
	LVL4_WALL_3 = 56,
	LVL4_WALL_4 = 57,
	LVL4_FLOOR_0 = 48,
	LVL4_FLOOR_1 = 49,
	LVL4_FLOOR_2 = 50,
	LVL4_FLOOR_3 = 51,
	LVL4_FLOOR_4 = 52,

	LVL5_VOID = 79,
	LVL5_WALL_0 = 69,
	LVL5_WALL_1 = 70,
	LVL5_WALL_2 = 71,
	LVL5_WALL_3 = 72,
	LVL5_WALL_4 = 73,
	LVL5_FLOOR_0 = 64,
	LVL5_FLOOR_1 = 65,
	LVL5_FLOOR_2 = 66,
	LVL5_FLOOR_3 = 67,
	LVL5_FLOOR_4 = 68,

	LVL6_VOID = 95,
	LVL6_WALL_0 = 85,
	LVL6_WALL_1 = 86,
	LVL6_WALL_2 = 87,
	LVL6_WALL_3 = 88,
	LVL6_WALL_4 = 89,
	LVL6_FLOOR_0 = 80,
	LVL6_FLOOR_1 = 81,
	LVL6_FLOOR_2 = 82,
	LVL6_FLOOR_3 = 83,
	LVL6_FLOOR_4 = 84,

	LVL7_VOID = 111,
	LVL7_WALL_0 = 101,
	LVL7_WALL_1 = 102,
	LVL7_WALL_2 = 103,
	LVL7_WALL_3 = 104,
	LVL7_WALL_4 = 105,
	LVL7_FLOOR_0 = 96,
	LVL7_FLOOR_1 = 97,
	LVL7_FLOOR_2 = 98,
	LVL7_FLOOR_3 = 99,
	LVL7_FLOOR_4 = 100,
};

namespace LEVEL {

	enum args {
		WallPiece = 0,
		FloorPiece = 1,
	};

	const int TILES[7][2][5] = {

		{ { TERRAIN::STONE_WALL_0,TERRAIN::STONE_WALL_1,TERRAIN::STONE_WALL_2, TERRAIN::STONE_WALL_3, TERRAIN::STONE_WALL_4 },
		{TERRAIN::STONE_FLOOR_0,TERRAIN::STONE_FLOOR_1,TERRAIN::STONE_FLOOR_2, TERRAIN::STONE_FLOOR_3, TERRAIN::STONE_FLOOR_4 } },

		{ { TERRAIN::FIRE_WALL_0,TERRAIN::FIRE_WALL_1,TERRAIN::FIRE_WALL_2, TERRAIN::FIRE_WALL_3, TERRAIN::FIRE_WALL_4 },
		{ TERRAIN::FIRE_FLOOR_0,TERRAIN::FIRE_FLOOR_1,TERRAIN::FIRE_FLOOR_2, TERRAIN::FIRE_FLOOR_3, TERRAIN::FIRE_FLOOR_4  }},

		{ { TERRAIN::ICE_WALL_0,TERRAIN::ICE_WALL_1,TERRAIN::ICE_WALL_2, TERRAIN::ICE_WALL_3, TERRAIN::ICE_WALL_4  },
		{ TERRAIN::ICE_FLOOR_0,TERRAIN::ICE_FLOOR_1,TERRAIN::ICE_FLOOR_2, TERRAIN::ICE_FLOOR_3, TERRAIN::ICE_FLOOR_4 } },

		{ { TERRAIN::LVL4_WALL_0,TERRAIN::LVL4_WALL_1,TERRAIN::LVL4_WALL_2, TERRAIN::LVL4_WALL_3, TERRAIN::LVL4_WALL_4 },
		{ TERRAIN::LVL4_FLOOR_0,TERRAIN::LVL4_FLOOR_1,TERRAIN::LVL4_FLOOR_2, TERRAIN::LVL4_FLOOR_3, TERRAIN::LVL4_FLOOR_4  } },

		{ { TERRAIN::LVL5_WALL_0,TERRAIN::LVL5_WALL_1,TERRAIN::LVL5_WALL_2, TERRAIN::LVL5_WALL_3, TERRAIN::LVL5_WALL_4  },
		{ TERRAIN::LVL5_FLOOR_0,TERRAIN::LVL5_FLOOR_1,TERRAIN::LVL5_FLOOR_2, TERRAIN::LVL5_FLOOR_3, TERRAIN::LVL5_FLOOR_4  } },

		{ { TERRAIN::LVL6_WALL_0,TERRAIN::LVL6_WALL_1,TERRAIN::LVL6_WALL_2, TERRAIN::LVL6_WALL_3, TERRAIN::LVL6_WALL_4  },
		{ TERRAIN::LVL6_FLOOR_0,TERRAIN::LVL6_FLOOR_1,TERRAIN::LVL6_FLOOR_2, TERRAIN::LVL6_FLOOR_3, TERRAIN::LVL6_FLOOR_4  } },

		{ { TERRAIN::LVL7_WALL_0,TERRAIN::LVL7_WALL_1,TERRAIN::LVL7_WALL_2,  TERRAIN::LVL7_WALL_2, TERRAIN::LVL7_WALL_2  },
		{ TERRAIN::LVL7_FLOOR_0,TERRAIN::LVL7_FLOOR_1,TERRAIN::LVL7_FLOOR_2, TERRAIN::LVL7_FLOOR_3, TERRAIN::LVL7_FLOOR_4  } }

	};
}

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

enum ENEMIES {
	Demon = 0,
	Hellhound = 1,
	Goblin = 2,
	Shade = 3,
	RifleSoldier = 4,
	GoblinSoldier = 5,
	GoblinKnight = 6,
	Walker = 7,
	Shadowman = 8,
	GrenadeSoldier = 9,
	KatanaSoldier = 10,
	BipedRobot = 11,
	FourLegsRobot = 12,
	WheelRobot = 13,
	Chomper = 14,
	IceSkeleton = 15,
	Yeti = 16,
	Alien = 17,
	CosmicBeing = 18,
};

enum OBJECTS {
	Portal = 0,
	Chest = 1,
	Altar = 2
};


struct Encounter {

	std::vector<ENEMIES> enemies;
	std::vector<OBJECTS> objects;

public:

	Encounter(std::vector<ENEMIES> _enemies, std::vector<OBJECTS> _objects) {
		enemies = _enemies;
		objects = _objects;
	}


};


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
	std::vector<std::vector<Encounter>> encounters;

	

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


