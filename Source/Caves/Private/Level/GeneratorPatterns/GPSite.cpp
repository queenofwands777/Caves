// Fill out your copyright notice in the Description page of Project Settings.


#include "GPSite.h"
#include"TerrainGenerator.h"


void UGPSite::GenerateLevel() {









	for (int i = 0; i < 10; i++) {
		ChangeHeading(FMath::RandRange(-5, 5));


		MoveCursor(direction, 1);

		parent->SetTile(cursor_x, cursor_y, parent->floor_info->floor_material, 2, true);
	}

	





















}