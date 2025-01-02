// Fill out your copyright notice in the Description page of Project Settings.


#include "CompoundGeneratorPattern.h"
#include"TerrainGenerator.h"
#include"GPFrontGate.h"
#include"GPHousesOnALine.h"


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

	FVector2D inside_middle;

	for (int i = 0; i < 20; i++) {
		cursor_x += new_direction[0];
		cursor_y += new_direction[1];
		if (i == 10) { inside_middle = { cursor_x, cursor_y }; }


		for (int p = -2; p <= 2; p++) {
			FVector2D perp = { -new_direction[1], new_direction[0] };
			perp *= p;
			float rand_x = FMath::FRandRange(-5.0, 5.0);
			float rand_y = FMath::FRandRange(-5.0, 5.0);
			parent->SetTile(cursor_x + perp[0] + rand_x, cursor_y + perp[1] + rand_y, parent->floor_info->floor_material, 10, true);

		}
	}

	FVector2D end_point = { cursor_x + (new_direction[0] * 10), cursor_y + (new_direction[1] * 10)};

	cursor_x = wall_position[0];
	cursor_y = wall_position[1];

	UGPFrontGate* front_gate = NewObject<UGPFrontGate>(this);
	front_gate->Init(lifetime, num_rooms, cursor_x, cursor_y,heading, parent);

	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, front_gate->end_0.ToString());
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, front_gate->end_1.ToString());

	//parent->SetTile(front_gate->end_0[0], front_gate->end_0[1], 6, 1, false);
	//parent->SetTile(front_gate->end_1[0], front_gate->end_1[1], 6, 1, false);
	//parent->SetTile(end_point[0], end_point[1], 11, 1, false);


	TArray<FVector2D> points_0;
	TArray<FVector2D> points_1;

	int step_size = 10;

	{
		bool searching = true;
		int limit = 100;
		cursor_x = front_gate->end_0[0];
		cursor_y = front_gate->end_0[1];
		FVector2D probe_location = {cursor_x, cursor_y};
		FVector2D next_location = {cursor_x, cursor_y};
		while (searching) {
			limit--;
			points_0.Add({ cursor_x, cursor_y });

			FVector2D direction_to_end = { end_point[0] - cursor_x, end_point[1] - cursor_y };
			direction_to_end.Normalize();
			




			FVector2D delta_location = probe_location - next_location;
			delta_location.Normalize();

			float distance_to_end = 1;
			float attenuation = 3;
			probe_location = {
							(cursor_x)+
							(direction[0] * ((step_size * distance_to_end) / (attenuation))) +
							(direction_to_end[0] * ((step_size) / (attenuation * distance_to_end))) +
							(delta_location[0] * ((step_size)/(attenuation))),

							(cursor_y)+
							(direction[1] * ((step_size * distance_to_end) / (attenuation))) +
							(direction_to_end[1] * ((step_size) / (attenuation * distance_to_end))) +
							(delta_location[1] * ((step_size) / (attenuation))), };
			bool target_found = false;
			int i = 1;
			while (!target_found) {
				i++;
				for (int x = -i; x <= i; x++) {
					for (int y = -i; y <= i; y++) {

						FVector2D check_tile = { probe_location[0] + x,probe_location[1] + y };
						if (parent->GetTile(check_tile[0], check_tile[1])->GetTileIndex() == parent->floor_info->void_material) {
							
							for (int xx = -1; xx <= 1; xx++) {
								for (int yy = -1; yy <= 1; yy++) {

									if (parent->GetTile(check_tile[0] + xx, check_tile[1] + yy)->GetTileIndex() == parent->floor_info->wall_material) {
										target_found = true;
										next_location = check_tile;
									}




								}
							}




							
						}


					}
				}

				if (i >= 5) {
					target_found = true;
				}

			}


			cursor_x = next_location[0];
			cursor_y = next_location[1];




			distance_to_end = FVector2D::Distance({cursor_x, cursor_y}, end_point);

			if (distance_to_end < (step_size)) {
				points_0.Add({ cursor_x, cursor_y });
				searching = false;
			} if (limit <= 0) {
				searching = false;
			}
		}
		//for (int i = 0; i < points_0.Num(); i++) {
		//	parent->SetTile(points_0[i][0], points_0[i][1], 6, 1, false);
		//}





		UGPHousesOnALine* string_0 = NewObject<UGPHousesOnALine>(this);
		string_0->points = points_0;
		string_0->Init(lifetime, 3, cursor_x, cursor_y, heading, parent);
	}











	{
		bool searching = true;
		int limit = 100;
		cursor_x = front_gate->end_1[0];
		cursor_y = front_gate->end_1[1];
		FVector2D probe_location = { cursor_x, cursor_y };
		FVector2D next_location = { cursor_x, cursor_y };
		while (searching) {
			limit--;
			points_1.Add({ cursor_x, cursor_y });

			FVector2D direction_to_end = { end_point[0] - cursor_x, end_point[1] - cursor_y };
			direction_to_end.Normalize();





			FVector2D delta_location = probe_location - next_location;
			delta_location.Normalize();

			float distance_to_end = 1;
			float attenuation = 3;
			probe_location = {
							(cursor_x)+
							(direction[0] * ((step_size * distance_to_end) / (attenuation))) +
							(direction_to_end[0] * ((step_size) / (attenuation * distance_to_end))) +
							(delta_location[0] * ((step_size) / (attenuation))),

							(cursor_y)+
							(direction[1] * ((step_size * distance_to_end) / (attenuation))) +
							(direction_to_end[1] * ((step_size) / (attenuation * distance_to_end))) +
							(delta_location[1] * ((step_size) / (attenuation))), };
			bool target_found = false;
			int i = 1;
			while (!target_found) {
				i++;
				for (int x = -i; x <= i; x++) {
					for (int y = -i; y <= i; y++) {

						FVector2D check_tile = { probe_location[0] + x,probe_location[1] + y };
						if (parent->GetTile(check_tile[0], check_tile[1])->GetTileIndex() == parent->floor_info->void_material) {

							for (int xx = -1; xx <= 1; xx++) {
								for (int yy = -1; yy <= 1; yy++) {

									if (parent->GetTile(check_tile[0] + xx, check_tile[1] + yy)->GetTileIndex() == parent->floor_info->wall_material) {
										target_found = true;
										next_location = check_tile;
									}




								}
							}





						}


					}
				}

				if (i >= 5) {
					target_found = true;
				}

			}


			cursor_x = next_location[0];
			cursor_y = next_location[1];




			distance_to_end = FVector2D::Distance({ cursor_x, cursor_y }, end_point);

			if (distance_to_end < (step_size)) {
				points_1.Add({ cursor_x, cursor_y });
				searching = false;
			} if (limit <= 0) {
				searching = false;
			}
		}
		//for (int i = 0; i < points_1.Num(); i++) {
		//	parent->SetTile(points_1[i][0], points_1[i][1], 38, 1, false);
		//}






		UGPHousesOnALine* string_1 = NewObject<UGPHousesOnALine>(this);
		string_1->points = points_1;
		string_1->Init(lifetime, 3, cursor_x, cursor_y, heading, parent);

	}





}