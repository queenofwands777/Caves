// Fill out your copyright notice in the Description page of Project Settings.


#include "GPCompound.h"
#include"TerrainGenerator.h"
#include"GPFrontGate.h"
#include"GPHousesOnALine.h"


void UGPCompound::GenerateLevel() {

	//place player
	MoveCursor(perp, 5);
	PlaceSpawn(CurrentLocation());
	SetCursor(start_loc);

	//make area before gate
	DrawShakyLine(direction, 5, 8, 5, DefaultFloorMaterial());
	
	//record gate position for later
	FVector2D gate_position = { cursor_x, cursor_y };

	//make area after gate
	DrawShakyLine(direction, 20, 8, 5, DefaultFloorMaterial());

	//place exit door
	PlaceExit(CurrentLocation());

	//record end location, for use drawing the houses
	end_loc = { cursor_x + (direction[0] * 10), cursor_y + (direction[1] * 10) };

	//create gate
	SetCursor(gate_position);
	UGPFrontGate* front_gate = NewObject<UGPFrontGate>(this);
	front_gate->Init(lifetime, num_rooms, cursor_x, cursor_y, heading, parent);

	//create one line of houses
	UGPHousesOnALine* string_0 = NewObject<UGPHousesOnALine>(this);
	string_0->points = GetPointsAlongWall(front_gate->end_0, end_loc);
	string_0->Init(lifetime, 3, cursor_x, cursor_y, heading, parent);
	
	//create the other line of houses
	UGPHousesOnALine* string_1 = NewObject<UGPHousesOnALine>(this);
	string_1->points = GetPointsAlongWall(front_gate->end_1, end_loc);;
	string_1->Init(lifetime, 3, cursor_x, cursor_y, heading, parent);

}