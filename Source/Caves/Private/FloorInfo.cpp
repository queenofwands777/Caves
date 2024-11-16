// Fill out your copyright notice in the Description page of Project Settings.


#include "FloorInfo.h"
#include "Math/UnrealMathUtility.h"
#include "Engine/World.h"


// Sets default values
AFloorInfo::AFloorInfo()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFloorInfo::BeginPlay()
{
	Super::BeginPlay();

	
}

// Called every frame
void AFloorInfo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

AEncounter* AFloorInfo::GetEncounter(){


	return Encounters[FMath::RandRange(0,Encounters.Num()-1)];
}

