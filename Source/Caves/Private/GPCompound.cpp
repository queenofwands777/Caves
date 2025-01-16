// Fill out your copyright notice in the Description page of Project Settings.


#include "GPCompound.h"
#include"TerrainGenerator.h"
#include"GPFrontGate.h"
#include"GPHousesOnALine.h"


void UGPCompound::GenerateLevel() {


	DrawWindyLine(20, 3, 12, DefaultFloorMaterial());
	start_loc = CurrentLocation();

	//place player
	MoveCursor(perp, 5);
	PlaceSpawn(CurrentLocation());
	SetCursor(start_loc);

	//make area before gate
	DrawShakyLine(direction, 5, 8, 5, DefaultFloorMaterial());
	
	//record gate position for later
	FVector2D gate_position = { cursor_x, cursor_y };

	//make area after gate
	DrawShakyLine(direction, 24, 12, 5, DefaultFloorMaterial());

	MoveCursor(direction, 5);
	PlaceExit(CurrentLocation());
	MoveCursor(direction, 5);
	end_loc = CurrentLocation();
	//place exit door



	//create gate
	SetCursor(gate_position);
	UGPFrontGate* front_gate = NewObject<UGPFrontGate>(this);
	front_gate->Init(lifetime, num_rooms, cursor_x, cursor_y, heading, parent);

	//create one line of houses
	UGPHousesOnALine* string_0 = NewObject<UGPHousesOnALine>(this);
	string_0->points = GetPointsAlongWall(front_gate->end_0, end_loc);
	string_0->Init(lifetime, 2, cursor_x, cursor_y, heading - 90, parent);
	
	//create the other line of houses
	UGPHousesOnALine* string_1 = NewObject<UGPHousesOnALine>(this);
	string_1->points = GetPointsAlongWall(front_gate->end_1, end_loc);;
	string_1->Init(lifetime, 2, cursor_x, cursor_y, heading + 90, parent);

}