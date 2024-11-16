// Fill out your copyright notice in the Description page of Project Settings.


#include "Encounter.h"
#include "FloorInfo.h"

// Sets default values
AEncounter::AEncounter()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEncounter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEncounter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

AEncounter* AEncounter::AddObject(int object) {

	AEncounter* new_encounter = GetWorld()->SpawnActor<AEncounter>(this->GetClass(), FVector(), FRotator());

	new_encounter->Enemies = this->Enemies;
	new_encounter->Objects = this->Objects;

	new_encounter->Objects.Add(parent->EssentialObjects[object]);

	return new_encounter;
}

