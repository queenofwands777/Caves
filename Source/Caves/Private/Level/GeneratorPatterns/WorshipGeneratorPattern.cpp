// Fill out your copyright notice in the Description page of Project Settings.


#include "WorshipGeneratorPattern.h"
#include "TerrainGenerator.h"
#include"GPClusterWalls.h"

void UWorshipGeneratorPattern::GenerateLevel() {


	float rotation_radians = FMath::DegreesToRadians(heading);
	FVector2D new_direction = {
		(direction[0] * FMath::Cos(rotation_radians)) - (direction[1] * FMath::Sin(rotation_radians)),
		(direction[0] * FMath::Sin(rotation_radians)) + (direction[1] * FMath::Cos(rotation_radians))
	};
	direction = new_direction;

	int rooms_remaining = num_rooms;
	//parent->SetTile(cursor_x, cursor_y, parent->floor_info->floor_material, 3, true);


	FVector2D hallway_start = { cursor_x, cursor_y };

	for (int i = 0; i < 10; i++) {


		cursor_x += direction[0] * 1;
		cursor_y += direction[1] * 1;
		parent->SetTile(cursor_x, cursor_y, parent->floor_info->floor_material, 3, true);
	}



	//spawn GPCluster
	UGPClusterWalls* cluster = NewObject<UGPClusterWalls>(this);
	cluster->Init(lifetime, num_rooms + 8, cursor_x, cursor_y, heading, parent);


	cursor_x = hallway_start[0];
	cursor_y = hallway_start[1];

	for (int i = 0; i < 10; i++) {


		cursor_x += direction[0] * 1;
		cursor_y += direction[1] * 1;
		parent->SetTile(cursor_x, cursor_y, parent->floor_info->floor_material, 3, true);
	}

}