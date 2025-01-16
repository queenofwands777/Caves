// Fill out your copyright notice in the Description page of Project Settings.


#include "GPTraps.h"
#include"TerrainGenerator.h"
#include"GPTrapsOffshoot.h"


void UGPTraps::GenerateLevel() {
	{
		heading = 90 * FMath::RandHelper(3);
		float rotation_radians = FMath::DegreesToRadians(heading);
		FVector2D new_direction = {
			(direction[0] * FMath::Cos(rotation_radians)) - (direction[1] * FMath::Sin(rotation_radians)),
			(direction[0] * FMath::Sin(rotation_radians)) + (direction[1] * FMath::Cos(rotation_radians))
		};
		direction = new_direction;
	}

	int rooms_remaining = 6;

	for (int i = 0; i < 30; i++) {
		parent->SetTile(cursor_x, cursor_y, parent->floor_info->floor_material, 2, true);
		cursor_x += direction[0];
		cursor_y += direction[1];
	}

	parent->MakeRegularRoom(cursor_x, cursor_y, 12, 12, 0);

	start_loc = { cursor_x, cursor_y };

	for (int i = 0; i < 3; i++) {

		cursor_x = start_loc[0];
		cursor_y = start_loc[1];

		heading += 90;
		heading = ((int)heading % 360);

		if (rooms_remaining > 0) {
			int spare_rooms = 2;
			int room_remainder = rooms_remaining - spare_rooms;

			UGPTrapsOffshoot* offshoot = NewObject<UGPTrapsOffshoot>(this);
			offshoot->Init(lifetime, spare_rooms, cursor_x, cursor_y, int(heading + ((FMath::RandBool()*180)-90))%360, parent);

		}







	}




}
