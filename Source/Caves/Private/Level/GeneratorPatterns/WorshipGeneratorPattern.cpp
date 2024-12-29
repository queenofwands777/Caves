// Fill out your copyright notice in the Description page of Project Settings.


#include "WorshipGeneratorPattern.h"
#include "TerrainGenerator.h"
#include"GPCluster.h"

void UWorshipGeneratorPattern::GenerateLevel() {


	float rotation_radians = FMath::DegreesToRadians(heading);
	FVector2D new_direction = {
		(direction[0] * FMath::Cos(rotation_radians)) - (direction[1] * FMath::Sin(rotation_radians)),
		(direction[0] * FMath::Sin(rotation_radians)) + (direction[1] * FMath::Cos(rotation_radians))
	};
	direction = new_direction;

	int rooms_remaining = num_rooms;


	for (int i = 0; i < 20; i++) {
		parent->SetTile(cursor_x, cursor_y, parent->floor_info->floor_material, 2, true);

		cursor_x += direction[0] * 1;
		cursor_y += direction[1] * 1;
	}



	//spawn GPCluster
	UGPCluster* cluster = NewObject<UGPCluster>(this);
	cluster->Init(lifetime, num_rooms, cursor_x, cursor_y, heading, parent);

}