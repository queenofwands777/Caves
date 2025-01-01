// Fill out your copyright notice in the Description page of Project Settings.


#include "CompoundGeneratorPattern.h"
#include"TerrainGenerator.h"
#include"GPFrontGate.h"


void UCompoundGeneratorPattern::GenerateLevel() {

	float rotation_radians = FMath::DegreesToRadians(heading);

	FVector2D new_direction = {
		(direction[0] * FMath::Cos(rotation_radians)) - (direction[1] * FMath::Sin(rotation_radians)),
		(direction[0] * FMath::Sin(rotation_radians)) + (direction[1] * FMath::Cos(rotation_radians))
	};
	direction = new_direction;



	for (int i = 0; i < 5; i++) {
		cursor_x += new_direction[0];
		cursor_y += new_direction[1];
		for (int p = -5; p <= 5; p++) {
			FVector2D perp = { -new_direction[1], new_direction[0] };
			perp *= p;
			float rand_x = FMath::FRandRange(-5.0, 5.0);
			float rand_y = FMath::FRandRange(-5.0, 5.0);
			parent->SetTile(cursor_x + perp[0] + rand_x, cursor_y + perp[1] + rand_y, parent->floor_info->floor_material, 8, true);

		}
	}

	FVector2D wall_position = { cursor_x, cursor_y };

	parent->SetTile(cursor_x, cursor_y, parent->floor_info->floor_material, 10, true);

	cursor_x += new_direction[0]*5;
	cursor_y += new_direction[1]*5;


	for (int i = 0; i < 20; i++) {
		cursor_x += new_direction[0];
		cursor_y += new_direction[1];
		for (int p = -2; p <= 2; p++) {
			FVector2D perp = { -new_direction[1], new_direction[0] };
			perp *= p;
			float rand_x = FMath::FRandRange(-5.0, 5.0);
			float rand_y = FMath::FRandRange(-5.0, 5.0);
			parent->SetTile(cursor_x + perp[0] + rand_x, cursor_y + perp[1] + rand_y, parent->floor_info->floor_material, 10, true);

		}
	}

	cursor_x = wall_position[0];
	cursor_y = wall_position[1];

	UGPFrontGate* front_gate = NewObject<UGPFrontGate>(this);
	front_gate->Init(lifetime, num_rooms, cursor_x, cursor_y,heading, parent);









}