// Fill out your copyright notice in the Description page of Project Settings.


#include "GPTrapsOffshoot.h"
#include"TerrainGenerator.h"



void UGPTrapsOffshoot::GenerateLevel() {

	int rooms_remaining = num_rooms;
	
		float rotation_radians = FMath::DegreesToRadians(heading);
		FVector2D new_direction = {
			(direction[0] * FMath::Cos(rotation_radians)) - (direction[1] * FMath::Sin(rotation_radians)),
			(direction[0] * FMath::Sin(rotation_radians)) + (direction[1] * FMath::Cos(rotation_radians))
		};





	int time_since_offshoot = 0;
	int offshoot_limit = 20 + FMath::FRandRange(-10.0, 20.0);
	for (int s = 0; s < 30; s++) {
		parent->SetTile(cursor_x, cursor_y, parent->floor_info->floor_material, 2, true);


		cursor_x += new_direction[0];
		cursor_y += new_direction[1];
		if (time_since_offshoot >= offshoot_limit) {


			if (rooms_remaining > 1) {
				int spare_rooms = 1;
				rooms_remaining = rooms_remaining - spare_rooms;
			
				UGPTrapsOffshoot* offshoot = NewObject<UGPTrapsOffshoot>(this);
				offshoot->Init(lifetime, spare_rooms, cursor_x, cursor_y, int(heading + ((FMath::RandBool() * 180) - 90)) % 360, parent);
			}




		}
		time_since_offshoot++;
	}

	parent->MakeRegularRoom(cursor_x, cursor_y, 10, 10, 0);
}