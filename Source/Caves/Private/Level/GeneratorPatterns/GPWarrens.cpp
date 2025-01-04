// Fill out your copyright notice in the Description page of Project Settings.


#include "GPWarrens.h"
#include "TerrainGenerator.h"


void UGPWarrens::GenerateLevel() {
	heading = 90 * FMath::RandHelper(4);
	float rotation_radians = FMath::DegreesToRadians(heading);
	FVector2D new_direction = {
		(direction[0] * FMath::Cos(rotation_radians)) - (direction[1] * FMath::Sin(rotation_radians)),
		(direction[0] * FMath::Sin(rotation_radians)) + (direction[1] * FMath::Cos(rotation_radians))
	};
	direction = new_direction;

	FVector2D perp = { -direction[1], direction[0] };
	FVector2D other_perp = -perp;

	FVector2D start_loc = { cursor_x, cursor_y };
	FVector2D start_dir = direction;


	float radius = 20;

	for (int i = 0; i < radius + 20; i++) {
		parent->SetTile(cursor_x, cursor_y, parent->floor_info->floor_material, 2, true);
		cursor_x += direction[0];
		cursor_y += direction[1];
	}





	FVector2D magma_loc = { cursor_x, cursor_y };


	for (int x = -radius; x <= radius; x++) {
		for (int y = -radius; y <= radius; y++) {

			if (FVector2D::Distance({ cursor_x, cursor_y }, { cursor_x + x, cursor_y + y }) < radius) {
				parent->SetTile(cursor_x + x, cursor_y + y, parent->floor_info->floor_material, 1, true);
			}





		}
	}

	float magma_radius = 10;
	float tube_radius = magma_radius + 2;
	for (int x = -(tube_radius); x <= tube_radius; x++) {
		for (int y = -tube_radius; y <= tube_radius; y++) {

			if (FVector2D::Distance({ cursor_x, cursor_y }, { cursor_x + x, cursor_y + y }) < tube_radius) {
				parent->SetTile(cursor_x + x, cursor_y + y, parent->floor_info->wall_material, 1, false);
			}





		}
	}


	for (int x = -magma_radius; x <= magma_radius; x++) {
		for (int y = -magma_radius; y <= magma_radius; y++) {

			if (FVector2D::Distance({ cursor_x, cursor_y }, { cursor_x + x, cursor_y + y }) < magma_radius) {
				parent->SetTile(cursor_x + x, cursor_y + y, Material::magma, 1, false);
			}





		}
	}


}
