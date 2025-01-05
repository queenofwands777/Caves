// Fill out your copyright notice in the Description page of Project Settings.


#include "GPSite.h"
#include"TerrainGenerator.h"


void UGPSite::GenerateLevel() {



	{
		float rotation_radians = FMath::DegreesToRadians(heading);
		FVector2D new_direction = {
			(direction[0] * FMath::Cos(rotation_radians)) - (direction[1] * FMath::Sin(rotation_radians)),
			(direction[0] * FMath::Sin(rotation_radians)) + (direction[1] * FMath::Cos(rotation_radians))
		};
	}





	for (int i = 0; i < 10; i++) {
		ChangeHeading(FMath::RandRange(-5, 5));


		MoveCursor(direction, 1);

		parent->SetTile(cursor_x, cursor_y, parent->floor_info->floor_material, 2, true);
	}

	
	int time_since_room = 0;
	int hallway_length = 40;
	float variance = 2;
	int area_size = 4;
	int remaining_rooms = num_rooms;
	bool active = true;
	while (active) {

		time_since_room++;
		ChangeHeading(FMath::RandRange(-10, 10));
		

		MoveCursor(direction, 1);


		parent->SetTile(cursor_x, cursor_y, parent->floor_info->floor_material, 2, true);

		if (time_since_room > hallway_length) {
			time_since_room = 0;
			remaining_rooms--;
			for (int i = 0; i < area_size; i++) {
				cursor_x += direction[0];
				cursor_y += direction[1];
				if (i == area_size / 2) { parent->MakeRoom(cursor_x, cursor_y);  }
				for (int p = -5; p <= 5; p++) {
					perp *= p;
					float rand_x = FMath::FRandRange(-5.0, 5.0);
					float rand_y = FMath::FRandRange(-5.0, 5.0);
					parent->SetTile(cursor_x + perp[0] + rand_x, cursor_y + perp[1] + rand_y, parent->floor_info->floor_material, 8, true);

				}
			}
		}




		if (remaining_rooms <= 0) {
			active = false;
		}



	}





















}