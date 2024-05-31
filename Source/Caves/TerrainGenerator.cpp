// Fill out your copyright notice in the Description page of Project Settings.


#include "TerrainGenerator.h"
#include "PaperTileSet.h"
#include "PaperTileMap.h"
#include"PaperTileLayer.h"


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

    //GenerateMap();
   
}

void ATerrainGenerator::GenerateMap() {



    for (int x = 0; x < MAP_WIDTH; x++) {
        for (int y = 0; y < MAP_HEIGHT; y++) {

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

        FPaperTileInfo TileInfo;
        TileInfo.TileSet = TileSet;
        TileInfo.PackedTileIndex = 17;

        // Loop through each tile position and set the tile
        for (int32 Y = 0; Y < MAP_HEIGHT; ++Y)
        {
            for (int32 X = 0; X < MAP_WIDTH; ++X)
            {

                TileMapComponent->TileMap->TileLayers[0]->SetCell(X, Y, TileInfo);




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

