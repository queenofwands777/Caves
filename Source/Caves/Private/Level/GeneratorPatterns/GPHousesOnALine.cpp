// Fill out your copyright notice in the Description page of Project Settings.


#include "GPHousesOnALine.h"
#include "TerrainGenerator.h"


void UGPHousesOnALine::GenerateLevel() {

	float rotation_radians = FMath::DegreesToRadians(heading);

	FVector2D new_direction = {
		(direction[0] * FMath::Cos(rotation_radians)) - (direction[1] * FMath::Sin(rotation_radians)),
		(direction[0] * FMath::Sin(rotation_radians)) + (direction[1] * FMath::Cos(rotation_radians))
	};
	direction = new_direction;

	int spacing = 2;

	for (int h = 0; h < num_rooms; h++) {

		int house_index = FMath::Min((h * spacing) + 1, points.Num() - 1);
		FVector2D house_location = points[house_index];

		parent->MakeRegularHouse(house_location[0], house_location[1], 7,0);

	}





	//takes as an extra argument, a linked list of spatial points, representing the line which we will draw the houses along.
	//with equal spacing, place houses along the line. a house is a room with exterior walls, which can be created in an open space.










}