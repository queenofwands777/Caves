// Fill out your copyright notice in the Description page of Project Settings.


#include "GPResearchStation.h"
#include"TerrainGenerator.h"
#include"GPClusterWalls.h"

void UGPResearchStation::GenerateLevel() {

	PlaceSpawn();
	DrawShakyLine(direction, 5, 8, 3, DefaultFloorMaterial());
	DrawWindyLine(40, 3, 30, DefaultFloorMaterial());

	UGPClusterWalls* cluster = NewObject<UGPClusterWalls>(this);
	cluster->Init(lifetime, FMath::RandRange(5, 7), cursor_x, cursor_y, heading, parent);

	DrawWindyLine(40, 3, 30, DefaultFloorMaterial());
	DrawShakyLine(direction, 5, 8, 3, DefaultFloorMaterial());
	PlaceExit();



}
