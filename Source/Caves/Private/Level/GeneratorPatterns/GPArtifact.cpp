// Fill out your copyright notice in the Description page of Project Settings.


#include "GPArtifact.h"
#include"TerrainGenerator.h"
#include"GPCluster.h"


void UGPArtifact::GenerateLevel() {



	PlaceSpawn();

	DrawWindyLine(20, 3, 30, DefaultFloorMaterial());

	UGPCluster* cluster = NewObject<UGPCluster>(this);
	cluster->Init(lifetime, FMath::RandRange(4, 7), cursor_x, cursor_y, heading, parent);
	DrawWindyLine(100, 3, 30, DefaultFloorMaterial());


	PlaceExit();
	DrawShakyLine(direction, 50, 10, 5, DefaultFloorMaterial());
	DrawCircle(40, MaterialType::spaceship_wall, CurrentLocation());






}
