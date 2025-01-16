// Fill out your copyright notice in the Description page of Project Settings.


#include "GPDrugLab.h"
#include"TerrainGenerator.h"
#include"GPCluster.h"

void UGPDrugLab::GenerateLevel() {

	DrawDot(10, DefaultFloorMaterial());
	PlaceSpawn(CurrentLocation());

	MoveCursor(direction, 20);


	UGPCluster* new_offshoot = NewObject<UGPCluster>(this);
	new_offshoot->room_spacing = 8;
	new_offshoot->Init(lifetime, num_rooms, cursor_x, cursor_y, heading, parent);

	SetCursor(new_offshoot->end_loc);
	DrawLineF(direction, 20, 3);

	parent->MakeRegularRoom(cursor_x, cursor_y, 10, 10, 0);
	PlaceExit(CurrentLocation());

	SetCursor(start_loc);
	DrawLineF(direction, 20, 3);

}