// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

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
	void CreateMap();
	void FillMap();
	void GenerateMap();
	void SetTile(int x, int y, int terrain, int size);

	const int MAP_WIDTH = 16;
	const int MAP_HEIGHT = 16;
	const int CURSOR_LIFETIME = 20;

private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "TileMap", meta = (AllowPrivateAccess = "true"))
	UPaperTileMapComponent* TileMapComponent;
};
