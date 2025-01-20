// Fill out your copyright notice in the Description page of Project Settings.


#include "GPSite.h"
#include"TerrainGenerator.h"


void UGPSite::GenerateLevel() {



	DrawShakyLine(direction, 4, 4, 2, DefaultFloorMaterial());
	PlaceSpawn();

	DrawWindyLine(40,3,30,DefaultFloorMaterial());

	DrawShakyLine(direction, 12, 6, 4, DefaultFloorMaterial());


	DrawWindyLine(40, 3, 30, DefaultFloorMaterial());

	DrawShakyLine(direction, 12, 6, 4, DefaultFloorMaterial());


	DrawWindyLine(40, 3, 30, DefaultFloorMaterial());

	DrawShakyLine(direction, 12, 6, 4, DefaultFloorMaterial());

	PlaceExit();
















}