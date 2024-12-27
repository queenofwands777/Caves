// Fill out your copyright notice in the Description page of Project Settings.


#include "DefaultCavesGenerator.h"
#include"TerrainGenerator.h"





void UDefaultCavesGenerator::GenerateLevel() {

	int time_since_room = 0;
	int remaining_rooms = num_rooms;
	bool active = true;
	while (active) {

		time_since_room++;

		heading += FMath::RandRange(-10, 10);
		float rotation_radians = FMath::DegreesToRadians(heading);

		FVector2D new_direction = {
			(direction[0] * FMath::Cos(rotation_radians)) - (direction[1] * FMath::Sin(rotation_radians)),
			(direction[0] * FMath::Sin(rotation_radians)) + (direction[1] * FMath::Cos(rotation_radians))
		};

		//direction = new_direction;

		cursor_x += new_direction[0];
		cursor_y += new_direction[1];

		//set tile
		parent->SetTile(cursor_x, cursor_y, parent->floor_info->floor_material, 3, true);




		int offshoot = FMath::RandRange(0, 1000);
		if ((offshoot > (950 - (remaining_rooms * 10))) && (remaining_rooms >= 2)) {
			int spare_rooms = remaining_rooms - (remaining_rooms / 2);
			UDefaultCavesGenerator* new_offshoot = NewObject<UDefaultCavesGenerator>(this);
			new_offshoot->Init(lifetime / 2, spare_rooms, cursor_x, cursor_y, heading + (FMath::RandRange(45, 135) * ((FMath::RandBool() * 2) - 1)), parent);
			remaining_rooms = remaining_rooms - spare_rooms;
		}


		int room = FMath::RandRange(0, 1000);
		if (((room > 920) && (remaining_rooms > 0) && (time_since_room >= 18)) || (time_since_room >= 32)) {
			parent->MakeRoom(cursor_x, cursor_y);
			remaining_rooms--;
			time_since_room = 0;
		}

		if (remaining_rooms == 0) { active = false; }






	}
}