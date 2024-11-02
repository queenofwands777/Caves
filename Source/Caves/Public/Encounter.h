// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

class AFloorInfo;

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Encounter.generated.h"

UCLASS()
class CAVES_API AEncounter : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEncounter();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ExposeOnSpawn = "true"))
	TArray<TSubclassOf<AActor>> Enemies;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ExposeOnSpawn = "true"))
	TArray<TSubclassOf<AActor>> Objects;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ExposeOnSpawn = "true"))
	AFloorInfo* parent;

	AEncounter* AddObject(int object);



protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
