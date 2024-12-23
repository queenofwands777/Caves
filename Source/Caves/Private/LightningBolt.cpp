// Fill out your copyright notice in the Description page of Project Settings.


#include "LightningBolt.h"

// Sets default values
ALightningBolt::ALightningBolt()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ALightningBolt::BeginPlay()
{
	Super::BeginPlay();
	DrawLightning();
	
	
}

// Called every frame
void ALightningBolt::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ALightningBolt::DrawLightning() {

	TArray<FVector> points;

	FVector displacement = end_location - start_location;
	FVector direction = displacement;
	direction.Normalize();

	float distance = FVector::Distance(start_location, end_location);
	float num_breaks = 10;
	float segment_length = distance / num_breaks;


	for (int i = 0; i < num_breaks + 1; i++) {
		points.Add(start_location + (direction * i * segment_length));
	}

	FVector perpendicular = { -direction[2], direction[1], direction[0] };
	for (int i = 1; i < points.Num()-1; i++) {
		float point_displacement = FMath::FRandRange(-10.0, 10.0);
		points[i] += perpendicular * point_displacement;
	}

	for (int i = 0; i < points.Num() - 1; i++) {
		DrawDebugLine(GetWorld(), points[i], points[i+1], FColor::Cyan, false, 0.1, 255, 1);

	}


}