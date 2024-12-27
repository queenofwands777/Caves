// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include"Encounter.h"
#include "Engine/Texture2D.h"
#include "PaperSprite.h"

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PaperTileSet.h"
#include "PaperTileMap.h"
#include"PaperTileLayer.h"

#include "FloorInfo.generated.h"


UCLASS()
class CAVES_API AFloorInfo : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFloorInfo();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ExposeOnSpawn = "true"))
	TArray<TSubclassOf<AActor>> Enemies;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ExposeOnSpawn = "true"))
	TArray<TSubclassOf<AActor>> Objects;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	TArray<TSubclassOf<AActor>> EssentialObjects;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TSubclassOf<AActor>> FloorSpecificWeapons;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TSubclassOf<AActor>> FloorSpecificAttachments;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<AEncounter*> Encounters;

	AEncounter* GetEncounter();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UPaperTileSet* LevelTileSet;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int floor_material;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int wall_material;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int void_material;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite)
	//UTexture2D* wall_texture;
	//
	//UPROPERTY(EditAnywhere, BlueprintReadWrite)
	//UTexture2D* floor_texture;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite)
	//UTexture2D* void_texture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool is_store = false;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;



};
