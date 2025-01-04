// Fill out your copyright notice in the Description page of Project Settings.


#include "GPMineshaft.h"
#include"TerrainGenerator.h"

void UGPMineshaft::GenerateLevel() {

	for (int i = 0; i < lifetime; i++) {
		heading += FMath::FRandRange(-10.0, 10.0);
		float rotation_radians = FMath::DegreesToRadians(heading);
		FVector2D new_direction = {
			(direction[0] * FMath::Cos(rotation_radians)) - (direction[1] * FMath::Sin(rotation_radians)),
			(direction[0] * FMath::Sin(rotation_radians)) + (direction[1] * FMath::Cos(rotation_radians))
		};
		FVector2D perp = { new_direction[1], new_direction[0] };
		FVector2D other_perp = -perp;

		cursor_x += new_direction[0];
		cursor_y += new_direction[1];

		parent->SetTile(cursor_x, cursor_y, parent->floor_info->floor_material, 2, true);











	}



}