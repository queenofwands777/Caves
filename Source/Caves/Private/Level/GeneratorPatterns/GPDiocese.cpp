// Fill out your copyright notice in the Description page of Project Settings.


#include "GPDiocese.h"
#include"TerrainGenerator.h"
#include"GPCluster.h"



void UGPDiocese::GenerateLevel() {
	float rotation_radians = FMath::DegreesToRadians(heading);
	FVector2D new_direction = {
		(direction[0] * FMath::Cos(rotation_radians)) - (direction[1] * FMath::Sin(rotation_radians)),
		(direction[0] * FMath::Sin(rotation_radians)) + (direction[1] * FMath::Cos(rotation_radians))
	};
	direction = new_direction;

	FVector2D perp = { -direction[1], direction[0] };
	FVector2D other_perp = -perp;


	for (float i = 0; i < 20; i += 1.0) {
		parent->SetTile(cursor_x, cursor_y, parent->floor_info->floor_material, 2, true);
		cursor_x += new_direction[0];
		cursor_y += new_direction[1];

	}

	UGPCluster* cluster = NewObject<UGPCluster>(this);
	cluster->Init(lifetime, 8, cursor_x, cursor_y, heading, parent);


	cursor_x = cluster->cursor_x;
	cursor_y = cluster->cursor_y;

	for (float i = 0; i < 30; i += 1.0) {
		parent->SetTile(cursor_x, cursor_y, parent->floor_info->floor_material, 2, true);
		cursor_x += new_direction[0];
		cursor_y += new_direction[1];

	}

	parent->MakeIrregularRoom(cursor_x, cursor_y, 20, 20, 10);

}
