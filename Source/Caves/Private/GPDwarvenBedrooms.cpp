// Fill out your copyright notice in the Description page of Project Settings.


#include "GPDwarvenBedrooms.h"
#include"TerrainGenerator.h"


void UGPDwarvenBedrooms::GenerateLevel() {







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
			cursor_x += -perp[0];
			cursor_y += -perp[1];
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
