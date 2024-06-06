// Fill out your copyright notice in the Description page of Project Settings.


#include "TerrainGenerator.h"
#include "PaperTileSet.h"
#include "PaperTileMap.h"
#include"PaperTileLayer.h"


#define ENGINEPRINT(message) GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT(message));
#define PRINT(message) UE_LOG(LogTemp, Warning, TEXT(message));


enum TERRAIN {
    WALL = 17,
    FLOOR = 19
};

UPaperTileMapComponent* ATerrainGenerator::GetTileMap(int grid_x, int grid_y) {
    int index = (grid_x * LEVEL_HEIGHT) + grid_y;
    return TerrainMapData[index];
}


// Sets default values
ATerrainGenerator::ATerrainGenerator()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = false;

    PRINT("constructing TerrainGenerator")

    LevelTileSet = LoadObject<UPaperTileSet>(nullptr, TEXT("/Game/Assets/Terrain_TileSet"));

    TerrainMapData.Init(nullptr, LEVEL_HEIGHT * LEVEL_WIDTH);





}



// Called when the game starts or when spawned
void ATerrainGenerator::BeginPlay()
{
	Super::BeginPlay();

    PRINT("Beginning play")
    
        

    //SetTile(MAP_WIDTH / 2, MAP_HEIGHT / 2, TERRAIN::FLOOR, 5);
    //SetTile(126, 126, TERRAIN::FLOOR, 5);

    
    GenerateMap();
   
}

void ATerrainGenerator::GenerateMap() {

    PRINT("Generating Map")

    //figure out how to expose lifetime to unreal
    int lifetime = CURSOR_LIFETIME;
    int cursor_x = MAP_WIDTH/2;
    int cursor_y = MAP_HEIGHT/2;


    while (lifetime > 0) {

        //move
       

        //clear mode: random x and y added
        int add_x = FMath::RandRange(-1, 1);
        int add_y = FMath::RandRange(-1, 1);

        //path mode: move in a direction



        cursor_x += add_x;
        cursor_y += add_y;



        //set tile
        SetTile(cursor_x, cursor_y, TERRAIN::FLOOR, 5);
        



        lifetime--;
    }
    



    for (int i = 0; i < TerrainMapData.Num(); i++) {
        UPaperTileMapComponent* target = TerrainMapData[i];
        if (target != nullptr) {
            target->RebuildCollision();
            target->TileMap->RebuildCollision();
        }

    }



}

void ATerrainGenerator::SetTile(int input_x, int input_y, int terrain, int size) {

    //probably inefficient, make tileset a member of TerrainGenerator and initialize on startup
    
    

    FPaperTileInfo TileInfo;
    TileInfo.TileSet = *LevelTileSet;
    TileInfo.PackedTileIndex = terrain;

    //set tiles according to brush size
    for (int xx = 0; xx < size; xx++) {
        for (int yy = 0; yy < size; yy++) {

            int world_x = input_x + xx;
            int world_y = input_y + yy;

            int target_x = world_x % MAP_WIDTH;
            int target_y = world_y % MAP_HEIGHT;

            int tilemap_x = (world_x - target_x)/LEVEL_WIDTH;
            int tilemap_y = (world_y - target_y)/LEVEL_HEIGHT;




            //has to be here
            if (GetTileMap(tilemap_x, tilemap_y) == nullptr) {
                InitializeTileMap(tilemap_x, tilemap_y);
            }





            UPaperTileMapComponent* host_tile = GetTileMap(tilemap_x, tilemap_y);
            host_tile->TileMap->TileLayers[0]->SetCell(target_x, target_y, TileInfo);
        }
    }
}

void ATerrainGenerator::InitializeTileMap(int grid_x, int grid_y) {

    PRINT("Initializing tilemap")

    FPaperTileInfo TileInfo;
    TileInfo.TileSet = *LevelTileSet;
    TileInfo.PackedTileIndex = TERRAIN::WALL;

    UPaperTileMapComponent* tile = NewObject<UPaperTileMapComponent>(this, UPaperTileMapComponent::StaticClass());

    tile->RegisterComponent();
    tile->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);




    tile->CreateNewTileMap(MAP_WIDTH, MAP_HEIGHT, TILE_WIDTH, TILE_HEIGHT);



    FVector placement(double(grid_x * MAP_HEIGHT*TILE_HEIGHT), double(grid_y * MAP_WIDTH*TILE_HEIGHT), 0.0);
    tile->SetWorldLocation(placement);

    tile->TileMap->SetCollisionThickness(10.0);
    tile->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
    tile->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Block);
    tile->SetCollisionObjectType(ECollisionChannel::ECC_WorldStatic);

    UPaperTileLayer* TileLayer = NewObject<UPaperTileLayer>(tile->TileMap, UPaperTileLayer::StaticClass());

    if (TileLayer)
    {
        TileLayer->ResizeMap(MAP_WIDTH, MAP_HEIGHT);
        tile->TileMap->TileLayers.Add(TileLayer);
    }

    for (int xxx = 0; xxx < MAP_WIDTH; xxx++) {
        for (int yyy = 0; yyy < MAP_HEIGHT; yyy++) {
            TileInfo.PackedTileIndex = TERRAIN::WALL;
            tile->TileMap->TileLayers[0]->SetCell(xxx, yyy, TileInfo);
        }
    }

    tile->TileMap->MarkPackageDirty();

    SetTileMap(grid_x, grid_y, tile);



}


void ATerrainGenerator::SetTileMap(int grid_x, int grid_y, UPaperTileMapComponent* tilemap) {
    PRINT("setting tilemap")
    int index = (grid_x * LEVEL_HEIGHT) + grid_y;
    TerrainMapData[index] = tilemap;

}



// Called every frame
void ATerrainGenerator::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

