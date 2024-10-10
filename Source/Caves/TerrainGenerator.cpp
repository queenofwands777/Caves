// Fill out your copyright notice in the Description page of Project Settings.


#include "TerrainGenerator.h"
#include "PaperTileSet.h"
#include "PaperTileMap.h"
#include"PaperTileLayer.h"
#include "PaperCharacter.h"
#include "Engine/World.h"
#include "GameFramework/PlayerStart.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/Actor.h"
#include "string"
#include "Kismet/GameplayStatics.h"


#define ENGINEPRINT(message) GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT(message));
#define PRINT(message) UE_LOG(LogTemp, Warning, TEXT(message));

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

UPaperTileMapComponent* ATerrainGenerator::GetTileMap(int grid_x, int grid_y) {
    int index = (grid_x * LEVEL_HEIGHT) + grid_y;
    return TerrainMapData[index];
}

void ATerrainGenerator::SetTileMap(int grid_x, int grid_y, UPaperTileMapComponent* tilemap) {
    PRINT("setting tilemap")
        int index = (grid_x * LEVEL_HEIGHT) + grid_y;
    TerrainMapData[index] = tilemap;

}

void ATerrainGenerator::SetTile(int input_x, int input_y, int terrain, int size, bool generating_floor = true) {

    //input_x and input_y are in terms of the world coordinates on a tile level








    //probably inefficient, make tileset a member of TerrainGenerator and initialize on startup
    FPaperTileInfo TileInfo;
    TileInfo.TileSet = *LevelTileSet;








    //set tiles according to brush size
    for (int xx = -size/2; xx <= size/2; ++xx) {
        for (int yy = -size/2; yy <= size/2; ++yy) {

            
            TileInfo.PackedTileIndex = terrain;

                //input coords plus brush placement
                int world_x = input_x + xx;
                int world_y = input_y + yy;

                //how far into the target tilemap are we placing the tile
                int target_x = world_x % MAP_WIDTH;
                int target_y = world_y % MAP_HEIGHT;

                int tilemap_x = (world_x - target_x) / MAP_WIDTH;
                int tilemap_y = (world_y - target_y) / MAP_HEIGHT;

                //check if the target tilemap is initialized. if not, initialize a new tilemap.
                if (GetTileMap(tilemap_x, tilemap_y) == nullptr) {
                    InitializeTileMap(tilemap_x, tilemap_y);
                }

                //check if we are on the edges of this tilemap. if so, initialize surrounding tilemaps.
                if ((target_x == 0) || (target_x == MAP_WIDTH - 1) || (target_y == 0) || (target_y == MAP_HEIGHT - 1)) {

                    for (int i = -1; i <= 1; i++) {
                        for (int ii = -1; ii <= 1; ii++) {
                            if (GetTileMap(tilemap_x + i, tilemap_y + ii) == nullptr) {
                                InitializeTileMap(tilemap_x + i, tilemap_y + ii);
                            }
                        }
                    }
                }

                //set the tile
                UPaperTileMapComponent* host_tile = GetTileMap(tilemap_x, tilemap_y);
                host_tile->TileMap->TileLayers[0]->SetCell(target_x, MAP_WIDTH - (target_y)-1, TileInfo);

                if (generating_floor) {
                    TileInfo.PackedTileIndex = wall_material;
                    //set surrounding tiles to wall, if they are void
                    for (int mod_x = -1; mod_x <= 1; mod_x++) {
                        for (int mod_y = -1; mod_y <= 1; mod_y++) {

                            int neighbor_x = target_x + mod_x;
                            int neighbor_y = MAP_WIDTH - (target_y)-1 - mod_y;





                            if ((neighbor_x < MAP_WIDTH) && (neighbor_y < MAP_HEIGHT) && (neighbor_x >= 0) && (neighbor_y >= 0)) {
                                FPaperTileInfo neighbor_cell = host_tile->TileMap->TileLayers[0]->GetCell(neighbor_x, neighbor_y);
                                if (neighbor_cell.PackedTileIndex == void_material) {
                                    host_tile->TileMap->TileLayers[0]->SetCell(neighbor_x, neighbor_y, TileInfo);
                                }
                            }



                            else {
                                int x_over_violation = neighbor_x >= MAP_WIDTH;
                                int x_under_violation = neighbor_x < 0;
                                int y_over_violation = neighbor_y >= MAP_HEIGHT;
                                int y_under_violation = neighbor_y < 0;

                                int nudge_x = 0 - x_under_violation + x_over_violation;
                                int nudge_y = 0 + y_under_violation - y_over_violation;







                                int relative_x = ((MAP_WIDTH)*x_under_violation) + neighbor_x + (-MAP_WIDTH * x_over_violation);
                                int relative_y = ((MAP_HEIGHT)*y_under_violation) + neighbor_y + (-MAP_HEIGHT * y_over_violation);

                                UPaperTileMapComponent* target_tile = GetTileMap(tilemap_x + nudge_x, tilemap_y + nudge_y);
                                FPaperTileInfo neighbor_cell = target_tile->TileMap->TileLayers[0]->GetCell(relative_x, relative_y);

                                if (neighbor_cell.PackedTileIndex == void_material) {
                                    target_tile->TileMap->TileLayers[0]->SetCell(relative_x, relative_y, TileInfo);
                                }








                            }

                        }
                    }
                }
                
        }
    }
}

FPaperTileInfo* ATerrainGenerator::GetTile(int input_x, int input_y) {

    FPaperTileInfo* result;
    UPaperTileMapComponent* tilemap;

    int x_within_tilemap = input_x % MAP_WIDTH;
    int y_within_tilemap = input_y % MAP_HEIGHT;
    int tilemap_x = (input_x - x_within_tilemap)/MAP_WIDTH;
    int tilemap_y = (input_y - y_within_tilemap) / MAP_HEIGHT;

    tilemap = GetTileMap(tilemap_x, tilemap_y);
    if (tilemap == nullptr) {
        result = nullptr;
    }
    else {
        FPaperTileInfo buffer = tilemap->GetTile(x_within_tilemap, MAP_WIDTH - y_within_tilemap - 1, 0);
        result = &buffer;
    }

    return result;

}

// Sets default values
ATerrainGenerator::ATerrainGenerator()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = false;

    //load tileset
    LevelTileSet = LoadObject<UPaperTileSet>(nullptr, TEXT("/Game/Assets/Level/Terrain1_TileSet"));

    //load enemies
    static ConstructorHelpers::FClassFinder<AActor> EnemyDemon(TEXT("/Game/Blueprints/Entities/Enemies/Ranged/Demon"));
    static ConstructorHelpers::FClassFinder<AActor> EnemyHellhound(TEXT("/Game/Blueprints/Entities/Enemies/Melee/Hellhound"));
    static ConstructorHelpers::FClassFinder<AActor> EnemyImp(TEXT("/Game/Blueprints/Entities/Enemies/Ranged/Imp"));
    static ConstructorHelpers::FClassFinder<AActor> EnemyShade(TEXT("/Game/Blueprints/Entities/Enemies/Ranged/Shade"));
    static ConstructorHelpers::FClassFinder<AActor> EnemySoldier(TEXT("/Game/Blueprints/Entities/Enemies/Ranged/Soldier"));
    //static ConstructorHelpers::FClassFinder<AActor> EnemyWalker(TEXT("/Game/Blueprints/Entities/Enemies/Melee/Walker"));

    Enemies.Add(EnemyDemon.Class);
    Enemies.Add(EnemyHellhound.Class);
    Enemies.Add(EnemyImp.Class);
    Enemies.Add(EnemyShade.Class);
    Enemies.Add(EnemySoldier.Class);
    //Enemies.Add(EnemyWalker.Class);

    //load objects
    static ConstructorHelpers::FClassFinder<AActor> Portal(TEXT("/Game/Blueprints/Level/Portal"));
    static ConstructorHelpers::FClassFinder<AActor> Chest(TEXT("/Game/Blueprints/Pickups/Chest"));
    static ConstructorHelpers::FClassFinder<AActor> Altar(TEXT("/Game/Blueprints/Level/Altar"));
    static ConstructorHelpers::FClassFinder<AActor> RoomMarker(TEXT("/Game/Blueprints/Level/RoomMarker"));

    Objects.Add(Portal.Class);
    Objects.Add(Chest.Class);
    Objects.Add(Altar.Class);
    Objects.Add(RoomMarker.Class);


    //load player
    static ConstructorHelpers::FClassFinder<AActor> PlayerPawn(TEXT("/Game/Blueprints/Entities/player"));
    Player = PlayerPawn.Class;

    TerrainMapData.Init(nullptr, LEVEL_HEIGHT * LEVEL_WIDTH);
}

enum ENEMIES {
    Demon = 0,
    Hellhound = 1,
    Imp = 2,
    Shade = 3,
    Soldier = 4,
    
};

enum OBJECTS {
    Portal = 0,
    Chest = 1,
    Altar = 2
};

// Called when the game starts or when spawned
void ATerrainGenerator::BeginPlay()
{
	Super::BeginPlay();
   
    switch (floor) {
    case 0: 
        floor_material = TERRAIN::STONE_FLOOR_0;
        wall_material = TERRAIN::STONE_WALL_0;
        void_material = TERRAIN::LVL1_VOID;
        break;
    case 1:
        floor_material = TERRAIN::FIRE_FLOOR_0;
        wall_material = TERRAIN::FIRE_WALL_0;
        void_material = TERRAIN::LVL2_VOID;

        break;
    case 2:
        floor_material = TERRAIN::ICE_FLOOR_0;
        wall_material = TERRAIN::ICE_WALL_0;
        void_material = TERRAIN::LVL3_VOID;

        break;
    case 3:
        floor_material = TERRAIN::LVL4_FLOOR_0;
        wall_material = TERRAIN::LVL4_WALL_0;
        void_material = TERRAIN::LVL4_VOID;

        break;

    case 4:
        floor_material = TERRAIN::LVL5_FLOOR_0;
        wall_material = TERRAIN::LVL5_WALL_0;
        void_material = TERRAIN::LVL5_VOID;

        break;

    case 5:
        floor_material = TERRAIN::LVL6_FLOOR_0;
        wall_material = TERRAIN::LVL6_WALL_0;
        void_material = TERRAIN::LVL6_VOID;

        break;
    case 6:
        floor_material = TERRAIN::LVL7_FLOOR_0;
        wall_material = TERRAIN::LVL7_WALL_0;
        void_material = TERRAIN::LVL7_VOID;

        break;
    default: 
        floor_material = TERRAIN::LVL5_FLOOR_0;
        wall_material = TERRAIN::LVL5_WALL_0;
        void_material = TERRAIN::LVL5_VOID;
        break;
    }
        
    GenerateMap();
   
}

void ATerrainGenerator::MakeRoom(int x, int y) {
    for (int i = 0; i < 6; i++) {
        x += FMath::RandRange(-1, 1);
        y += FMath::RandRange(-1, 1);
        SetTile(x, y, floor_material, 7);

    }

    //spawn marker
    FVector marker_location;
    marker_location = { (float)x * 16, 2.0, (float)((y * 16) - (16 * 15)) };
    RoomMarker marker = RoomMarker(marker_location[0], marker_location[2]);
    rooms.push_back(marker);
    
}

struct GeneratorProbe {
public:
    GeneratorProbe(int _lifetime, float _cursor_x, float _cursor_y, float _heading, ATerrainGenerator* _parent) {
        lifetime = _lifetime;
        cursor_x = _cursor_x;
        cursor_y = _cursor_y;
        heading = _heading;
        parent = _parent;

        direction = {1, 0};

        Generate();
    }

public:
    int lifetime;
    float cursor_x;
    float cursor_y;
    float heading;
    FVector2d direction;
    ATerrainGenerator* parent;

public:

    void Generate() {
        while (lifetime > 0) {

            //move
            heading += FMath::RandRange(-10, 10);
            float rotation_radians = FMath::DegreesToRadians(heading);

            FVector2D new_direction = { 
                (direction[0] * FMath::Cos(rotation_radians)) - (direction[1] * FMath::Sin(rotation_radians)),
                (direction[0] * FMath::Sin(rotation_radians)) + (direction[1] * FMath::Cos(rotation_radians))
            };

            //direction = new_direction;

            cursor_x += new_direction[0];
            cursor_y += new_direction[1];

            //set tile
            parent->SetTile(cursor_x, cursor_y, parent->floor_material, 4);

            //generate offshoot
            int offshoot = FMath::RandRange(0, 1000);
            if ((offshoot > 960)&&(lifetime > parent->CURSOR_LIFETIME/5)) {
                GeneratorProbe new_offshoot = GeneratorProbe(lifetime/2, cursor_x, cursor_y, heading + (FMath::RandRange(45, 135) * ((FMath::RandBool() * 2) - 1)), parent);
            }
            
            //generate room
            int room = FMath::RandRange(0, 1000);
            if ((room > 990) && (lifetime > parent->CURSOR_LIFETIME / 5)) {
                parent->MakeRoom(cursor_x, cursor_y);
            }

            //place enemy
            int encounter = FMath::RandRange(0, 100);
            if (encounter > 95) {
                FVector location;
                location = { (float)cursor_x * 16, 2.0, (float)((cursor_y * 16) - (16 * 15)) };
                FRotator rotation = { 0,0,0 };
                parent->GetWorld()->SpawnActor<AActor>(parent->Enemies[FMath::RandRange(0, 4)], location, rotation);
            }


            lifetime--;
        }
        parent->MakeRoom(cursor_x, cursor_y);
    }
};


void ATerrainGenerator::GenerateMap() {

#pragma region init
    PRINT("Generating Map");

    //set start location
    float cursor_x = (LEVEL_WIDTH * MAP_WIDTH) / 2;
    float cursor_y = (LEVEL_HEIGHT * MAP_HEIGHT) / 2;
    
    //create spawn area
    SetTile(cursor_x, cursor_y, floor_material, 7);
    FVector spawn_location = { float(cursor_x * TILE_WIDTH) + (1*TILE_WIDTH), 2, float(cursor_y * TILE_HEIGHT )-(16*TILE_HEIGHT) };
    FRotator spawn_rotation = { 0,0,0 };
    GetWorld()->SpawnActor<AActor>(Player, spawn_location, spawn_rotation);
    FVector portal_location = { float(cursor_x * TILE_WIDTH) - (2 * TILE_WIDTH), 1.9, float(cursor_y * TILE_HEIGHT) - (16 * TILE_HEIGHT) };
    GetWorld()->SpawnActor<AActor>(Objects[0], portal_location, spawn_rotation);


    int num_chests = 3;
    int num_altars = 1;

#pragma endregion

    while (num_chests+num_altars > rooms.size()) {
        float heading = FMath::RandRange(0, 360);
        GeneratorProbe new_offshoot = GeneratorProbe(CURSOR_LIFETIME, cursor_x, cursor_y, heading, this);
    }

    for (int i = 0; i < num_altars; i++) {
        int num_rooms = rooms.size();
        if (num_rooms > 0) {
            int rand_room = FMath::RandRange(0, num_rooms - 1);
            float room_x = rooms[rand_room].x;
            float room_y = rooms[rand_room].y;
            float offset_x = FMath::FRandRange(-5.0, 5.0);
            float offset_y = FMath::FRandRange(-5.0, 5.0);
            float spawn_x = room_x + offset_x;
            float spawn_y = room_y + offset_y;

            FVector chest_location;
            chest_location = { spawn_x, 2.0, spawn_y };
            FRotator rotation = { 0,0,0 };
            GetWorld()->SpawnActor<AActor>(Objects[OBJECTS::Altar], chest_location, rotation);
            rooms.erase(rooms.begin() + rand_room);
        }

    }

    for (int i = 0; i < num_chests; i++) {
        int num_rooms = rooms.size();
        if (num_rooms > 0) {
            int rand_room = FMath::RandRange(0, num_rooms-1);
            float room_x = rooms[rand_room].x;
            float room_y = rooms[rand_room].y;
            float offset_x = FMath::FRandRange(-5.0, 5.0);
            float offset_y = FMath::FRandRange(-5.0, 5.0);
            float spawn_x = room_x + offset_x;
            float spawn_y = room_y + offset_y;

            FVector chest_location;
            chest_location = { spawn_x, 2.0, spawn_y };
            FRotator rotation = { 0,0,0 };
            GetWorld()->SpawnActor<AActor>(Objects[OBJECTS::Chest], chest_location, rotation);
            rooms.erase(rooms.begin() + rand_room);
        }
    }

    //give border to floor tiles

    //loop through every individual tile
        //check if that tile is a floor tile
            //if it is, count how many neighbors it has
            //depending on how may neighbors are wall, switch the texture





    /*

    //loop through every individual tile
    for (int tilemap_x = 0; tilemap_x < LEVEL_WIDTH; tilemap_x++) {
        for (int tilemap_y = 0; tilemap_y < LEVEL_HEIGHT; tilemap_y++) {
            if (GetTileMap(tilemap_x, tilemap_y) != nullptr) {



                for (int x_within_tilemap = 0; x_within_tilemap < MAP_WIDTH; x_within_tilemap++) {
                    for (int y_within_tilemap = 0; y_within_tilemap < MAP_HEIGHT; y_within_tilemap++) {



                        //check if that tile is a floor tile
                        FPaperTileInfo target_tile = GetTileMap(tilemap_x, tilemap_y)->GetTile(x_within_tilemap, y_within_tilemap, 0);

                        if (target_tile.PackedTileIndex == floor_material) {

                            int world_x = (tilemap_x * MAP_WIDTH) + x_within_tilemap;
                            int world_y = (tilemap_y * MAP_HEIGHT) + ( MAP_HEIGHT - y_within_tilemap - 1);


                            //if it is, count how many neighbors it has
                            int num_neighboring_walls = 0;
                            int rotation = 0;

                            if (GetTile(world_x, world_y + 1)) {
                                if (GetTile(world_x, world_y + 1)->PackedTileIndex == wall_material) {
                                    num_neighboring_walls++;
                                }
                            }
                            if (GetTile(world_x + 1, world_y)) {
                                if (GetTile(world_x + 1, world_y)->PackedTileIndex == wall_material) {
                                    num_neighboring_walls++;
                                }
                            }
                            if (GetTile(world_x, world_y - 1)) {
                                if (GetTile(world_x, world_y - 1)->PackedTileIndex == wall_material) {
                                    num_neighboring_walls++;
                                }
                            }

                            if (GetTile(world_x-1, world_y)) {
                                if (GetTile(world_x-1, world_y)->PackedTileIndex == wall_material) {
                                    num_neighboring_walls++;
                                }
                            }

                            SetTile(world_x, world_y, LEVEL::TILES[floor][1][num_neighboring_walls], 0, false);
                            

                        }
                    }
                }
            }
        }
    }
    */

    //rebuild terrain map
    for (int i = 0; i < TerrainMapData.Num(); i++) {
        UPaperTileMapComponent* target = TerrainMapData[i];
        if (target != nullptr) {
            target->RebuildCollision();
            target->TileMap->RebuildCollision();
        }
    }
}


void ATerrainGenerator::InitializeTileMap(int grid_x, int grid_y) {

    PRINT("Initializing tilemap")

    FPaperTileInfo TileInfo;
    TileInfo.TileSet = *LevelTileSet;
    TileInfo.PackedTileIndex = wall_material;

    UPaperTileMapComponent* tile = NewObject<UPaperTileMapComponent>(this, UPaperTileMapComponent::StaticClass());

    tile->RegisterComponent();
    tile->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);




    tile->CreateNewTileMap(MAP_WIDTH, MAP_HEIGHT, TILE_WIDTH, TILE_HEIGHT);



    FVector placement(double(grid_x * MAP_WIDTH*TILE_WIDTH), 0.0, double(grid_y * MAP_HEIGHT*TILE_HEIGHT));
    tile->SetWorldLocation(placement);

    tile->TileMap->SetCollisionThickness(10.0);
    tile->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
    tile->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Block);
    UPaperTileLayer* TileLayer = NewObject<UPaperTileLayer>(tile->TileMap, UPaperTileLayer::StaticClass());

    if (TileLayer)
    {
        TileLayer->ResizeMap(MAP_WIDTH, MAP_HEIGHT);
        tile->TileMap->TileLayers.Add(TileLayer);
    }

    for (int xxx = 0; xxx < MAP_WIDTH; xxx++) {
        for (int yyy = 0; yyy < MAP_HEIGHT; yyy++) {
            TileInfo.PackedTileIndex = void_material;
            tile->TileMap->TileLayers[0]->SetCell(xxx, yyy, TileInfo);
        }
    }

    tile->TileMap->MarkPackageDirty();
    tile->MarkPackageDirty();

    SetTileMap(grid_x, grid_y, tile);



}

// Called every frame
void ATerrainGenerator::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

