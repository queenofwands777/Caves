// Fill out your copyright notice in the Description page of Project Settings.


#include "GPSiberia.h"
#include"TerrainGenerator.h"
#include"GPFrontGate.h"



void UGPSiberia::GenerateLevel() {

	PlaceSpawn();

	DrawShakyLine(direction, 40,8,4,MaterialType::fresh_snow);
	ChangeHeading(FMath::FRandRange(-10.0, 10.0));
	FVector2D point_0 = CurrentLocation();

	DrawShakyLine(direction, 40, 8, 4, MaterialType::fresh_snow);
	ChangeHeading(FMath::FRandRange(-10.0, 10.0));
	FVector2D point_1 = CurrentLocation();

	DrawShakyLine(direction, 40, 8, 4, MaterialType::fresh_snow);
	ChangeHeading(FMath::FRandRange(-10.0, 10.0));

	FVector2D wall_location = CurrentLocation();
	float wall_heading = heading;

	DrawShakyLine(direction, 20, 8, 4, MaterialType::gravel);
	PlaceExit();
	DrawShakyLine(direction, 20, 8, 4, MaterialType::gravel);
	ChangeHeading(FMath::FRandRange(-10.0, 10.0));
	FVector2D point_2 = CurrentLocation();



	DrawShakyLine(direction, 20, 10, 4, MaterialType::lab_wall);

	//-------

	UGPFrontGate* gate = NewObject<UGPFrontGate>(this);
	gate->Init(lifetime, num_rooms, wall_location.X, wall_location.Y, wall_heading, parent);


}
