// Fill out your copyright notice in the Description page of Project Settings.


#include "WorshipGeneratorPattern.h"
#include "TerrainGenerator.h"
#include"GPClusterWalls.h"

void UWorshipGeneratorPattern::GenerateLevel() {




	FVector2D level_start = CurrentLocation();
	MoveCursor(direction, 20);

	UGPClusterWalls* cluster = NewObject<UGPClusterWalls>(this);
	cluster->room_spacing = 0;
	cluster->Init(lifetime, 11, cursor_x, cursor_y, heading, parent);

	SetCursor(level_start);
	DrawLineF(direction, 20, 3);

	//SetCursor(cluster->CurrentLocation());
	//DrawLineF(direction, 20, 3);

	





}