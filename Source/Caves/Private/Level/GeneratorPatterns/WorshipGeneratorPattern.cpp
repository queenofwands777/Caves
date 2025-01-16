// Fill out your copyright notice in the Description page of Project Settings.


#include "WorshipGeneratorPattern.h"
#include "TerrainGenerator.h"
#include"GPClusterWalls.h"

void UWorshipGeneratorPattern::GenerateLevel() {

	PlaceSpawn(CurrentLocation());
	DrawDot(6, DefaultFloorMaterial());

	MoveCursor(direction, 20);

	UGPClusterWalls* cluster = NewObject<UGPClusterWalls>(this);
	cluster->room_spacing = 0;
	cluster->Init(lifetime, 11, cursor_x, cursor_y, heading, parent);

	PlaceExit(cluster->center_loc);

	SetCursor(start_loc);
	DrawLineF(direction, 20, 3);



}