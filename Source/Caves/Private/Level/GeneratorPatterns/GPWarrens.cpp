// Fill out your copyright notice in the Description page of Project Settings.


#include "GPWarrens.h"
#include "TerrainGenerator.h"


void UGPWarrens::GenerateLevel() {
	SetHeading(90 * FMath::RandHelper(4));
	

	start_loc = { cursor_x, cursor_y };
	FVector2D start_dir = direction;


	float radius = 20;

	for (int i = 0; i < radius + 20; i++) {
		parent->SetTile(cursor_x, cursor_y, DefaultFloorMaterial(), 2, true);
		cursor_x += direction[0];
		cursor_y += direction[1];
	}





	FVector2D magma_loc = { cursor_x, cursor_y };


	for (int x = -radius; x <= radius; x++) {
		for (int y = -radius; y <= radius; y++) {

			if (FVector2D::Distance({ cursor_x, cursor_y }, { cursor_x + x, cursor_y + y }) < radius) {
				parent->SetTile(cursor_x + x, cursor_y + y, DefaultFloorMaterial(), 1, true);
			}





		}
	}

	float magma_radius = 10;
	float tube_radius = magma_radius + 2;
	for (int x = -(tube_radius); x <= tube_radius; x++) {
		for (int y = -tube_radius; y <= tube_radius; y++) {

			if (FVector2D::Distance({ cursor_x, cursor_y }, { cursor_x + x, cursor_y + y }) < tube_radius) {
				parent->SetTile(cursor_x + x, cursor_y + y, DefaultWallMaterial(), 1, false);
			}





		}
	}


	for (int x = -magma_radius; x <= magma_radius; x++) {
		for (int y = -magma_radius; y <= magma_radius; y++) {

			if (FVector2D::Distance({ cursor_x, cursor_y }, { cursor_x + x, cursor_y + y }) < magma_radius) {
				parent->SetTile(cursor_x + x, cursor_y + y, MaterialType::magma, 1, false);
			}





		}
	}


}
