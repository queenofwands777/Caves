// Fill out your copyright notice in the Description page of Project Settings.


#include "GPGreedyDeep.h"
#include"TerrainGenerator.h"
#include"GPMineshaft.h"



void UGPGreedyDeep::GenerateLevel() {

	heading = 90 * FMath::RandHelper(4);

	float rotation_radians = FMath::DegreesToRadians(heading);
	FVector2D new_direction = {
		(direction[0] * FMath::Cos(rotation_radians)) - (direction[1] * FMath::Sin(rotation_radians)),
		(direction[0] * FMath::Sin(rotation_radians)) + (direction[1] * FMath::Cos(rotation_radians))
	};
	direction = new_direction;

	FVector2D perp = { -direction[1], direction[0] };
	FVector2D other_perp = -perp;

	for (int i = 0; i < 30; i++) {
		parent->SetTile(cursor_x, cursor_y, parent->floor_info->floor_material, 2, true);
		cursor_x += direction[0];
		cursor_y += direction[1];
	}



	for (int i = 0; i < 5; i++) {
		parent->SetTile(cursor_x, cursor_y, parent->floor_info->floor_material, 8, true);
		cursor_x += direction[0] * 5;
		cursor_y += direction[1] * 5;
	}

	cursor_x -= direction[0] * 10;
	cursor_y -= direction[1] * 10;

	cursor_x += perp[0] * 5;
	cursor_y += perp[1] * 5;
	for (int i = 0; i < 30; i++) {
		parent->SetTile(cursor_x, cursor_y, parent->floor_info->floor_material, 2, true);
		cursor_x += direction[0];
		cursor_y += direction[1];
	}

	TArray<FVector2D> mineshaft_ends;

	float spread = 45;
	for (int i = -1; i <= 1; i++) {
		UGPMineshaft* mineshaft = NewObject<UGPMineshaft>(this);
		mineshaft->Init(100, num_rooms, cursor_x, cursor_y, heading + (spread * i), parent);
		mineshaft_ends.Add({ mineshaft->cursor_x, mineshaft->cursor_y });
	}

	for (int i = 0; i < mineshaft_ends.Num(); i++) {
		parent->MakeIrregularRoom(mineshaft_ends[i][0], mineshaft_ends[i][1], 10, 10, 5);
	}





}