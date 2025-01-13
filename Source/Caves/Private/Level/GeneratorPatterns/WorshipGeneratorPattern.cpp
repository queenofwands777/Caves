// Fill out your copyright notice in the Description page of Project Settings.


#include "WorshipGeneratorPattern.h"
#include "TerrainGenerator.h"
#include"GPClusterWalls.h"

void UWorshipGeneratorPattern::GenerateLevel() {





	for (int i = 0; i < 20; i++) {
		parent->SetTile(cursor_x, cursor_y, parent->floor_info->floor_material, 3, true);

		cursor_x += direction[0] * 1;
		cursor_y += direction[1] * 1;
	}

	UGPClusterWalls* new_offshoot = NewObject<UGPClusterWalls>(this);
	new_offshoot->room_spacing = 0;
	new_offshoot->Init(lifetime, 11, cursor_x, cursor_y, heading, parent);


	cursor_x = new_offshoot->cursor_x;
	cursor_y = new_offshoot->cursor_y;
	//spawn GPCluster

	for (int i = 0; i < 20; i++) {
		parent->SetTile(cursor_x, cursor_y, parent->floor_info->floor_material, 3, true);

		cursor_x += direction[0] * 1;
		cursor_y += direction[1] * 1;
	}


}