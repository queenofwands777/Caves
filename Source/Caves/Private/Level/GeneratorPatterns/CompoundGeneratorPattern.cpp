// Fill out your copyright notice in the Description page of Project Settings.


#include "CompoundGeneratorPattern.h"
#include"TerrainGenerator.h"
#include"GPFrontGate.h"
#include"GPHousesOnALine.h"



void UCompoundGeneratorPattern::GenerateLevel() {


	MoveCursor(perp, 5);
	PlaceSpawn(CurrentLocation());
	SetCursor(start_loc);

	DrawShakyLine(direction, 5, 8, 5, DefaultFloorMaterial());



	


	



	//record gate position for later
	FVector2D wall_position = { cursor_x, cursor_y };

	MoveCursor(direction, 5);


	DrawShakyLine(direction, 20, 8, 5, DefaultFloorMaterial());



	PlaceExit(CurrentLocation());


	




	
	end_loc = { cursor_x + (direction[0] * 10), cursor_y + (direction[1] * 10)};

	SetCursor(wall_position);

	UGPFrontGate* front_gate = NewObject<UGPFrontGate>(this);
	front_gate->Init(lifetime, num_rooms, cursor_x, cursor_y,heading, parent);

	TArray<FVector2D> points_0 = GetPointsAlongWall(front_gate->end_0, end_loc);;
	UGPHousesOnALine* string_0 = NewObject<UGPHousesOnALine>(this);
	string_0->points = points_0;
	string_0->Init(lifetime, 3, cursor_x, cursor_y, heading, parent);

	TArray<FVector2D> points_1 = GetPointsAlongWall(front_gate->end_1, end_loc);;
	UGPHousesOnALine* string_1 = NewObject<UGPHousesOnALine>(this);
	string_1->points = points_1;
	string_1->Init(lifetime, 3, cursor_x, cursor_y, heading, parent);



	


	




}