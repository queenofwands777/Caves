// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
class ATerrainGenerator;

struct TerrainNode {
public:
	int X;
	int Y;
	TArray<TerrainNode*> neighbors;
	TerrainNode* parent = nullptr;
	bool visited = false;
	float cost = 0;

	TerrainNode(int x, int y) {
		X = x;
		Y = y;
	}

	void Reset() {
		parent = nullptr;
		visited = false;
		cost = 0;
	}

	FVector Location() {
		return { (float)X,2.0,(float)Y };
	}
};



#include "GameFramework/Actor.h"
#include "Pathfinding.generated.h"

UCLASS()
class CAVES_API APathfinding : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APathfinding();


	ATerrainGenerator* parent = nullptr;


	TMap<int, TMap<int, TerrainNode*>> TerrainNodeMap;

	void InitializeTerrainNodes();

	UFUNCTION(BlueprintCallable, Category = "Pathfinding")
	TArray<FVector> GetPath(FVector from, FVector to);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
