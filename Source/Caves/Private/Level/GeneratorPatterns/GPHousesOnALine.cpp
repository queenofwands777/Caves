// Fill out your copyright notice in the Description page of Project Settings.


#include "GPHousesOnALine.h"
#include "TerrainGenerator.h"


void UGPHousesOnALine::GenerateLevel() {



	int spacing = 2;

	for (int h = 0; h < num_rooms; h++) {

		int house_index = FMath::Min((h * spacing) + 1, points.Num() - 1);
		FVector2D house_location = points[house_index];

		parent->MakeRegularHouse(house_location[0], house_location[1], 7,0);

	}





	//takes as an extra argument, a linked list of spatial points, representing the line which we will draw the houses along.
	//with equal spacing, place houses along the line. a house is a room with exterior walls, which can be created in an open space.










}