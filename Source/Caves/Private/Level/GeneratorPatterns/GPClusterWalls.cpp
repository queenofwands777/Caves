// Fill out your copyright notice in the Description page of Project Settings.


#include "GPClusterWalls.h"
#include "TerrainGenerator.h"

void UGPClusterWalls::GenerateLevel() {



	float rotation_radians = FMath::DegreesToRadians(heading);
	FVector2D new_direction = {
		(direction[0] * FMath::Cos(rotation_radians)) - (direction[1] * FMath::Sin(rotation_radians)),
		(direction[0] * FMath::Sin(rotation_radians)) + (direction[1] * FMath::Cos(rotation_radians))
	};
	direction = new_direction;

	int rooms_remaining = num_rooms;

	float room_size = 10;
	float room_spacing = 4;

	float radius = (num_rooms * (room_size)) / 8.0;


	float start_x = cursor_x;
	float start_y = cursor_y;

	float center_x = cursor_x + (direction[0] * radius);
	float center_y = cursor_y + (direction[1] * radius);

	float end_x = cursor_x + (direction[0] * radius * 2);
	float end_y = cursor_y + (direction[1] * radius * 2);


	TArray<FVector2D>points;
	//points.Add({ start_x, start_y });


	for (int r = 0; r < num_rooms; r++) {

		float rand_x = FMath::FRandRange(-radius, radius);
		float rand_y = FMath::FRandRange(-radius, radius);

		FVector2D room_location = { center_x + rand_x, center_y + rand_y };

		points.Add(room_location);

	}

	//points.Add({ end_x, end_y });

#define DISPLACEMENT
#ifdef DISPLACEMENT
	TArray<FVector2D>displacement;
	displacement.Init({ 0,0 }, points.Num());

	float distance_between_rooms = (room_size / 2) + room_spacing;



	for (int i = 0; i < 3; i++) {
		for (int this_room = 0; this_room < points.Num(); this_room++) {

			FVector2D this_location = points[this_room];
			FVector2D center_location = { center_x, center_y };
			displacement[this_room] += center_location - this_location;


			for (int other_room = 0; other_room < points.Num(); other_room++) {
				if (this_room == other_room) { continue; }

				FVector2D other_location = points[other_room];

				float distance = FVector2D::Distance(this_location, other_location);

				if (distance < distance_between_rooms) {

					displacement[this_room] += (this_location - other_location); //if strange behavior exhibited where rooms spawn on top of each other, swap this

				}
			}
			
			points[this_room] += displacement[this_room];

		}
	}


#endif













	for (int p = 0; p < points.Num(); p++) {
		parent->MakeRegularRoom(points[p][0], points[p][1], room_size, room_size, 0);

	}

	for (int p = 0; p < points.Num(); p++) {
		parent->SetTile(points[p][0], points[p][1], parent->floor_info->wall_material, room_size + 2, false);
		parent->SetTile(points[p][0], points[p][1], parent->floor_info->floor_material, room_size, false);
	}


	TArray<FVector2D> building_array;
	building_array.Add({ start_x, start_y });
	building_array.Append(points);
	building_array.Add({ end_x, end_y });
	points = building_array;

	TArray<FVector2D>closest_points;
	closest_points.Init({ end_x, end_y }, points.Num());

	for (int p = 0; p < points.Num(); p++) {

		float smallest_distance = FVector2D::Distance(points[p], closest_points[p]);

		for (int pp = 0; pp < points.Num(); pp++) {
			if (p == pp) { continue; } if (pp == 0) { continue; } if (pp == points.Num() - 1) { continue; }

			float compare_distance = FVector2D::Distance(points[p], points[pp]);

			if (compare_distance < smallest_distance) {

				if (closest_points[pp] == points[p] && (p != points.Num() - 1)) { continue; }


				smallest_distance = compare_distance;
				closest_points[p] = points[pp];
			}



		}
	}

	for (int p = 0; p < points.Num(); p++) {
		FVector2d start = points[p];
		FVector2d end = closest_points[p];
		float distance = FVector2D::Distance(start, end);
		FVector2d path_direction = end - start;
		path_direction.Normalize();

		cursor_x = start[0];
		cursor_y = start[1];



		for (int s = 0; s < distance; s++) {
			cursor_x += path_direction[0];
			cursor_y += path_direction[1];
			parent->SetTile(cursor_x, cursor_y, parent->floor_info->floor_material, 3, true);
		}
	}
	



	//make more hallways

	float diameter = radius * 2;
	float search_factor = 4;
	float search_area = diameter * search_factor;

	TArray<TArray<int>> field;
	for (int x = 0; x < search_area; x++) {
		for (int y = 0; y < search_area; y++) {
			TArray<int> col;
			col.Init((x* search_area) + y, search_area);
			field.Push(col);
		}
	}



	float total_changes = 0;
	bool running = false;
	while (running) {
		total_changes = 0;

		for (int tilemap_x = 0; tilemap_x < search_area; tilemap_x++) {
			for (int tilemap_y = 0; tilemap_y < search_area; tilemap_y++) {

				float offset_x;
				float offset_y;

				//check that tilemap is valid
				if (parent->GetTileMap(tilemap_x + offset_x, tilemap_y + offset_y) != nullptr) {

					//get each individual tile
					for (int x_within_tilemap = 0; x_within_tilemap < parent->MAP_SIZE; x_within_tilemap++) {
						for (int y_within_tilemap = 0; y_within_tilemap < parent->MAP_SIZE; y_within_tilemap++) {



							//check if that tile is a certain kind
							FPaperTileInfo target_tile = parent->GetTileMap(tilemap_x, tilemap_y)->GetTile(x_within_tilemap, y_within_tilemap, 0);
							if (target_tile.PackedTileIndex == parent->floor_info->floor_material) {

								//look at all neighbors, take the highest value we see, add one to total_changes

								int world_x = ((tilemap_x * parent->MAP_SIZE) + (x_within_tilemap));
								int world_y = ((((tilemap_y - 1) * parent->MAP_SIZE)) + ((parent->MAP_SIZE - y_within_tilemap)));
							}
							else {
								//set tile we are looking at (wall) to zero. probably want to do this when initializing the field too.
							}
						}
					}
				}
			}
		}











		if (total_changes <= 0) {
			running = false;
		}
	}
















	








	cursor_x = end_x;
	cursor_y = end_y;
}