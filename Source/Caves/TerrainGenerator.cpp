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
#include "Kismet/GameplayStatics.h"


#define ENGINEPRINT(message) GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT(message));
#define PRINT(message) UE_LOG(LogTemp, Warning, TEXT(message));


enum TERRAIN {
    STONE_WALL_0 = 0,
    STONE_WALL_1 = 2,
    STONE_WALL_2 = 4,
    STONE_FLOOR_0 = 1,
    STONE_FLOOR_1 = 3,
    STONE_FLOOR_2 = 5,
    FIRE_WALL_0 = 19,
    FIRE_WALL_1 = 20,
    FIRE_WALL_2 = 21,
    FIRE_FLOOR_0 = 16,
    FIRE_FLOOR_1 = 17,
    FIRE_FLOOR_2 = 18,
    ICE_WALL_0 = 35,
    ICE_WALL_1 = 36,
    ICE_WALL_2 = 37,
    ICE_FLOOR_0 = 32,
    ICE_FLOOR_1 = 33,
    ICE_FLOOR_2 = 34,
};

UPaperTileMapComponent* ATerrainGenerator::GetTileMap(int grid_x, int grid_y) {
    int index = (grid_x * LEVEL_HEIGHT) + grid_y;
    return TerrainMapData[index];
}

void ATerrainGenerator::SetTileMap(int grid_x, int grid_y, UPaperTileMapComponent* tilemap) {
    PRINT("setting tilemap")
        int index = (grid_x * LEVEL_HEIGHT) + grid_y;
    TerrainMapData[index] = tilemap;

}

//ATerrainGenerator::ATerrainGenerator(){}

// Sets default values
ATerrainGenerator::ATerrainGenerator()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = false;

    PRINT("constructing TerrainGenerator")

        //floor = _floor;



    LevelTileSet = LoadObject<UPaperTileSet>(nullptr, TEXT("/Game/Assets/Level/Terrain1_TileSet"));

    TerrainMapData.Init(nullptr, LEVEL_HEIGHT * LEVEL_WIDTH);





}



// Called when the game starts or when spawned
void ATerrainGenerator::BeginPlay()
{
	Super::BeginPlay();

    PRINT("Beginning play");
   

    switch (floor) {
    case 0: 
        floor_material = TERRAIN::STONE_FLOOR_0;
        wall_material = TERRAIN::STONE_WALL_1;
        break;
    case 1:
        floor_material = TERRAIN::FIRE_FLOOR_0;
        wall_material = TERRAIN::FIRE_WALL_1;
        break;
    case 2:
        floor_material = TERRAIN::ICE_FLOOR_0;
        wall_material = TERRAIN::ICE_WALL_1;
        break;
    default: break;
    }
    
        

    //SetTile(MAP_WIDTH / 2, MAP_HEIGHT / 2, TERRAIN::FLOOR, 5);
    //SetTile(126, 126, TERRAIN::FLOOR, 5);

    
    GenerateMap();
   
}



void ATerrainGenerator::GenerateMap() {

    PRINT("Generating Map")
    //static ConstructorHelpers::FClassFinder<AActor> EnemyBlueprint(TEXT("/Game/Caves/Content/Blueprints/enemy.uasset"));


    //figure out how to expose lifetime to unreal
    int lifetime = CURSOR_LIFETIME;
    int cursor_x = 128;
    int cursor_y = 128;



    while (lifetime > 0) {

        //move
       

        //clear mode: random x and y added
        int add_x = FMath::RandRange(-1, 1);
        int add_y = FMath::RandRange(-1, 1);


        //path mode: move in a direction
        //int add_x = 1;
        //int add_y = 1;




        cursor_x += add_x;
        cursor_y += add_y;



        //set tile
        SetTile(cursor_x, cursor_y, floor_material, 4);
        


        //place enemy
        int encounter = FMath::RandRange(0, 100);
        if (encounter > 98) {
            FVector location;
            location = { (float)cursor_x * 16, 2.0, (float)((cursor_y * 16) - (16*15))};
            FRotator rotation = { 0,0,0 };
            //GetWorld()->SpawnActor<AActor>( Enemies[FMath::RandRange(0,3)], location, rotation);
        }


        lifetime--;
    }
    
   /* FVector SpawnLocation(cursor_x, 0.0f, cursor_y );
    FRotator SpawnRotation(0.0f, 0.0f, -90.0f);
    UPlayer* NewPlayerCharacter = Cast<UPlayer>(UGameplayStatics::BeginDeferredActorSpawnFromClass(GetWorld(), UPlayer::StaticClass(), FTransform(SpawnRotation, SpawnLocation)));*/


    //USpringArmComponent* SpringArm = Cast<USpringArmComponent>(NewPlayerCharacter->GetRootComponent()->GetChildComponent(1));
    //FRotator SpringarmRotation(0.0f, 0.0f, -90.0f);
    //SpringArm->SetWorldRotation(SpringarmRotation);

    for (int i = 0; i < TerrainMapData.Num(); i++) {
        UPaperTileMapComponent* target = TerrainMapData[i];
        if (target != nullptr) {
            //target->SetCollisionObjectType(ECC_EngineTraceChannel5);
            target->RebuildCollision();
            target->TileMap->RebuildCollision();
            //target->MarkPackageDirty();
        }

    }



}

void ATerrainGenerator::SetTile(int input_x, int input_y, int terrain, int size) {

    //input_x and input_y are in terms of the world coordinates on a tile level

    //probably inefficient, make tileset a member of TerrainGenerator and initialize on startup
    FPaperTileInfo TileInfo;
    TileInfo.TileSet = *LevelTileSet;
    TileInfo.PackedTileIndex = terrain;

    //set tiles according to brush size
    for (int xx = 0; xx < size; xx++) {
        for (int yy = 0; yy < size; yy++) {

            //input coords plus brush placement
            int world_x = input_x + xx;
            int world_y = input_y + yy;

            //how far into the target tilemap are we placing the tile
            int target_x = world_x % MAP_WIDTH;
            int target_y = world_y % MAP_HEIGHT;

            int tilemap_x = (world_x - target_x)/MAP_WIDTH;
            int tilemap_y = (world_y - target_y)/MAP_HEIGHT;




            //check if we have violated bounds. if so, do not initialize a new map.
            

            if (GetTileMap(tilemap_x, tilemap_y) == nullptr) {
                InitializeTileMap(tilemap_x, tilemap_y);
            }


            if ((target_x == 0)||(target_x == MAP_WIDTH-1)||(target_y == 0)||(target_y == MAP_HEIGHT-1)) {

                for (int i = -1; i <= 1; i++) {
                    for (int ii = -1; ii <= 1; ii++) {
                        if (GetTileMap(tilemap_x + i, tilemap_y + ii) == nullptr) {
                            InitializeTileMap(tilemap_x + i, tilemap_y + ii);
                        }
                    }
                }




            }

            



            UPaperTileMapComponent* host_tile = GetTileMap(tilemap_x, tilemap_y);
            host_tile->TileMap->TileLayers[0]->SetCell(target_x, MAP_WIDTH - (target_y) -1, TileInfo);
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
    //tile->SetCollisionObjectType(ECollisionChannel::ECC_EngineTraceChannel5);
    //tile->RebuildCollision();
    UPaperTileLayer* TileLayer = NewObject<UPaperTileLayer>(tile->TileMap, UPaperTileLayer::StaticClass());

    if (TileLayer)
    {
        TileLayer->ResizeMap(MAP_WIDTH, MAP_HEIGHT);
        tile->TileMap->TileLayers.Add(TileLayer);
    }

    for (int xxx = 0; xxx < MAP_WIDTH; xxx++) {
        for (int yyy = 0; yyy < MAP_HEIGHT; yyy++) {
            TileInfo.PackedTileIndex = wall_material;
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

