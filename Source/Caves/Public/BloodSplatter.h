// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BloodSplatter.generated.h"

UCLASS()
class CAVES_API ABloodSplatter : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABloodSplatter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void InitSplatter();
	void GenerateSplatter();
	void PlaceSplatter();

public:
	int num_probes;
	int max_angle;
	int probe_lifetime;
	int probe_variance;
	FVector direction;
	UTexture2D* splatter;
};
