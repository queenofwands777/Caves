// Fill out your copyright notice in the Description page of Project Settings.


#include "GPDwarvenIndustry.h"
#include"TerrainGenerator.h"



void UGPDwarvenIndustry::GenerateLevel() {
	float rotation_radians = FMath::DegreesToRadians(heading);
	FVector2D new_direction = {
		(direction[0] * FMath::Cos(rotation_radians)) - (direction[1] * FMath::Sin(rotation_radians)),
		(direction[0] * FMath::Sin(rotation_radians)) + (direction[1] * FMath::Cos(rotation_radians))
	};
	direction = new_direction;

	FVector2D perp = { -direction[1], direction[0] };
	FVector2D other_perp = -perp;






	for (int i = 0; i < 20; i++) {
		parent->SetTile(cursor_x, cursor_y, parent->floor_info->floor_material, 4, true);
		cursor_x += direction[0];
		cursor_y += direction[1];
	}

	float radius = 10;
	cursor_x += direction[0] * radius;
	cursor_y += direction[1] * radius;


	for (int x = -radius; x <= radius; x++ ) {
		for (int y = -radius; y <= radius; y++) {

			if (FVector2D::Distance({cursor_x, cursor_y},{cursor_x + x, cursor_y + y}) < radius) {
				parent->SetTile(cursor_x + x, cursor_y + y, parent->floor_info->floor_material, 1, true);
			}





		}
	}

}