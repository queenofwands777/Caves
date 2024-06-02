// Fill out your copyright notice in the Description page of Project Settings.


#include "TerrainGenerator.h"
#include "PaperTileSet.h"
#include "PaperTileMap.h"
#include"PaperTileLayer.h"


enum TERRAIN {
    WALL = 17,
    FLOOR = 19
};



// Sets default values
ATerrainGenerator::ATerrainGenerator()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = false;
    CreateMap();
    FillMap();
}

// Called when the game starts or when spawned
void ATerrainGenerator::BeginPlay()
{
	Super::BeginPlay();

    FillMap();
    GenerateMap();
   
}

void ATerrainGenerator::GenerateMap() {

    //figure out how to expose lifetime to unreal
    int lifetime = 10000;
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
    







}

void ATerrainGenerator::SetTile(int x, int y, int terrain, int size) {

    //probably inefficient, make tileset a member of TerrainGenerator and initialize on startup
    UPaperTileSet* TileSet = LoadObject<UPaperTileSet>(nullptr, TEXT("/Game/Assets/Terrain_TileSet"));
    
    FPaperTileInfo TileInfo;
    TileInfo.TileSet = TileSet;
    TileInfo.PackedTileIndex = terrain;

    for (int xx = 0; xx < size; xx++) {
        for (int yy = 0; yy < size; yy++) {

            int target_x = x + xx;
            int target_y = y + yy;

            TileMapComponent->TileMap->TileLayers[0]->SetCell(target_x, target_y, TileInfo);

        }
    }



    
}

void ATerrainGenerator::CreateMap() {
    TileMapComponent = CreateDefaultSubobject<UPaperTileMapComponent>(TEXT("TileMapComponent"));
    TileMapComponent->CreateNewTileMap(MAP_WIDTH, MAP_HEIGHT, 16, 16);
    RootComponent = TileMapComponent;
}

void ATerrainGenerator::FillMap() {
    UPaperTileSet* TileSet = LoadObject<UPaperTileSet>(nullptr, TEXT("/Game/Assets/Terrain_TileSet"));
    if (TileSet)
    {
        for (int32 Y = 0; Y < MAP_HEIGHT; ++Y)
        {
            for (int32 X = 0; X < MAP_WIDTH; ++X)
            {
                SetTile(X, Y, TERRAIN::WALL, 1);
            }
        }
    }
    else {

        UE_LOG(LogTemp, Warning, TEXT("Tile Set not found"));
    }
}



// Called every frame
void ATerrainGenerator::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

