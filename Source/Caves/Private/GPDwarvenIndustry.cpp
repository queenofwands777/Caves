// Fill out your copyright notice in the Description page of Project Settings.


#include "GPDwarvenIndustry.h"
#include"TerrainGenerator.h"



void UGPDwarvenIndustry::GenerateLevel() {
	






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