// Fill out your copyright notice in the Description page of Project Settings.


#include "BunkerGeneratorPattern.h"


#include"TerrainGenerator.h"

void UBunkerGeneratorPattern::GenerateLevel() {


	int rooms_remaining = num_rooms;

	float rotation_radians = FMath::DegreesToRadians(heading);

	FVector2D new_direction = {
		(direction[0] * FMath::Cos(rotation_radians)) - (direction[1] * FMath::Sin(rotation_radians)),
		(direction[0] * FMath::Sin(rotation_radians)) + (direction[1] * FMath::Cos(rotation_radians))
	};

	FVector2D new_direction_locked = { roundf(new_direction[0]), roundf(new_direction[1]) };
	if((new_direction_locked[0] == 0) && (new_direction_locked[1] == 0)) { new_direction_locked[0] = 1; }
	new_direction_locked.Normalize();

	for (int i = 0; i < 10; i++) {
		parent->SetTile(cursor_x, cursor_y, parent->floor_info->floor_material, 2, true);

		cursor_x += new_direction_locked[0] * 1;
		cursor_y += new_direction_locked[1] * 1;
	}

	parent->MakeRoom(cursor_x, cursor_y);
	rooms_remaining--;

	float average_room_size = 10;
	float radius = (rooms_remaining / 3.14) * average_room_size;


	cursor_x += new_direction_locked[0] * radius;
	cursor_y += new_direction_locked[1] * radius;

	int center_x = cursor_x;
	int center_y = cursor_y;

	cursor_x += new_direction_locked[0] * radius;
	cursor_y += new_direction_locked[1] * radius;

	parent->MakeRoom(cursor_x, cursor_y);
	rooms_remaining--;






}