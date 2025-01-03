// Fill out your copyright notice in the Description page of Project Settings.


#include "GPTomb.h"
#include"TerrainGenerator.h"


void UGPTomb::GenerateLevel() {


	heading = 90 * FMath::RandHelper(3);
	float rotation_radians = FMath::DegreesToRadians(heading);
	FVector2D new_direction = {
		(direction[0] * FMath::Cos(rotation_radians)) - (direction[1] * FMath::Sin(rotation_radians)),
		(direction[0] * FMath::Sin(rotation_radians)) + (direction[1] * FMath::Cos(rotation_radians))
	};
	direction = new_direction;

	FVector2D perp = { -direction[1], direction[0] };
	FVector2D other_perp = -perp;


	for (int i = 0; i < 50; i++) {
		parent->SetTile(cursor_x, cursor_y, parent->floor_info->floor_material, 4, true);
		
		cursor_x += direction[0];
		cursor_y += direction[1];

		if ((i % 12)==9) {

			FVector2D start = { cursor_x, cursor_y };

			for (int ii = 0; ii < 20; ii++) {
				cursor_x += perp[0];
				cursor_y += perp[1];
				parent->SetTile(cursor_x, cursor_y, parent->floor_info->floor_material, 2, true);

			}

			cursor_x = start[0];
			cursor_y = start[1];

			for (int ii = 0; ii < 20; ii++) {
				cursor_x += other_perp[0];
				cursor_y += other_perp[1];
				parent->SetTile(cursor_x, cursor_y, parent->floor_info->floor_material, 2, true);

			}
			cursor_x = start[0];
			cursor_y = start[1];
		}

	}

	for (int i = 0; i < 20; i++) {
		parent->SetTile(cursor_x, cursor_y, parent->floor_info->floor_material, 4, true);

		cursor_x += direction[0];
		cursor_y += direction[1];
	}

	float area_size = 10;

	for (int i = 0; i < area_size; i++) {
		cursor_x += new_direction[0];
		cursor_y += new_direction[1];
		for (int p = -area_size; p <= area_size; p++) {
			FVector2D local_perp = perp * p;
			float rand_x = FMath::FRandRange(-area_size, area_size);
			float rand_y = FMath::FRandRange(-area_size, area_size);
			parent->SetTile(cursor_x + local_perp[0] + rand_x, cursor_y + local_perp[1] + rand_y, parent->floor_info->floor_material, 8, true);

		}
	}












}
