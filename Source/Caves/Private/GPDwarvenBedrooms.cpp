// Fill out your copyright notice in the Description page of Project Settings.


#include "GPDwarvenBedrooms.h"
#include"TerrainGenerator.h"


void UGPDwarvenBedrooms::GenerateLevel() {


	float rotation_radians = FMath::DegreesToRadians(heading);
	FVector2D new_direction = {
		(direction[0] * FMath::Cos(rotation_radians)) - (direction[1] * FMath::Sin(rotation_radians)),
		(direction[0] * FMath::Sin(rotation_radians)) + (direction[1] * FMath::Cos(rotation_radians))
	};
	direction = new_direction;

	FVector2D perp = { -direction[1], direction[0] };
	FVector2D other_perp = -perp;




	for (int b = 0; b < 3; b++) {


		for (int i = 0; i < 6; i++) {
			parent->SetTile(cursor_x, cursor_y, parent->floor_info->floor_material, 3, true);
			cursor_x += direction[0];
			cursor_y += direction[1];
		}


		FVector2D start = { cursor_x, cursor_y };

		for (int i = 0; i < 5; i++) {
			parent->SetTile(cursor_x, cursor_y, parent->floor_info->floor_material, 1, true);
			cursor_x += perp[0];
			cursor_y += perp[1];
		}

		parent->SetTile(cursor_x, cursor_y, parent->floor_info->floor_material, 5, true);

		cursor_x = start[0];
		cursor_y = start[1];

		for (int i = 0; i < 5; i++) {
			parent->SetTile(cursor_x, cursor_y, parent->floor_info->floor_material, 1, true);
			cursor_x += other_perp[0];
			cursor_y += other_perp[1];
		}

		parent->SetTile(cursor_x, cursor_y, parent->floor_info->floor_material, 5, true);

		cursor_x = start[0];
		cursor_y = start[1];




	}

	for (int i = 0; i < 2; i++) {
		parent->SetTile(cursor_x, cursor_y, parent->floor_info->floor_material, 3, true);
		cursor_x += direction[0];
		cursor_y += direction[1];
	}


	for (int i = 0; i < 5; i++) {
		parent->SetTile(cursor_x, cursor_y, parent->floor_info->floor_material, 1, true);
		cursor_x += direction[0];
		cursor_y += direction[1];
	}

	parent->SetTile(cursor_x, cursor_y, parent->floor_info->floor_material, 5, true);


}
