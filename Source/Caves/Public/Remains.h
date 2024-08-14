// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaperSpriteComponent.h"
#include "PaperSprite.h"
#include "PaperSpriteAtlas.h"
#include "GameFramework/Actor.h"
#include "Remains.generated.h"

UCLASS()
class CAVES_API ARemains : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARemains();
	void Generate();
	TSubclassOf<AActor> shard;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
