// Fill out your copyright notice in the Description page of Project Settings.


#include "GPHouse.h"
#include"TerrainGenerator.h"

void UGPHouse::GenerateLevel() {



	float radius = FMath::Sqrt((((float)num_rooms) * ((room_size/2) + FMath::Square(room_spacing))));


	center_loc = { cursor_x + (direction[0] * radius) ,cursor_y + (direction[1] * radius) };
	end_loc = { cursor_x + (direction[0] * radius * 2) ,cursor_y + (direction[1] * radius * 2) };

	TArray<FVector2D>points;
	float rand_offset = radius;
	for (int r = 0; r < num_rooms; r++) {
		float rand_x = FMath::FRandRange(-rand_offset, rand_offset);
		float rand_y = FMath::FRandRange(-rand_offset, rand_offset);
		FVector2D room_location = { center_loc.X + rand_x, center_loc.Y + rand_y };
		points.Add(room_location);
	}

	TArray<FVector2D>displacement;
	displacement.Init({ 0,0 }, points.Num());












	float distance_between_rooms = (room_size)+room_spacing;
	float center_attraction = (1 / distance_between_rooms);
	int number_of_cycles = 200;

	for (int i = 0; i < number_of_cycles; i++) {
		for (int this_room = 0; this_room < points.Num(); this_room++) {

			FVector2D this_location = points[this_room];
			displacement[this_room] += (center_attraction * (center_loc - this_location)); //attract rooms to center
			int num_times_moved = 1;


			for (int other_room = 0; other_room < points.Num(); other_room++) { //compare to each other room
				if (this_room == other_room) { continue; } //don't compare to self

				FVector2D other_location = points[other_room];

				float distance = FVector2D::Distance(this_location, other_location);

				if (distance < distance_between_rooms) {

					displacement[this_room] += ((this_location - other_location) / distance); //if strange behavior exhibited where rooms spawn on top of each other, swap this
					num_times_moved++;
				}
			}

			displacement[this_room] /= num_times_moved;



			points[this_room] += displacement[this_room];

		}
	}











	for (int p = 0; p < points.Num(); p++) {

		parent->SetTile(points[p][0], points[p][1], DefaultWallMaterial(), room_size + 2, false);
		parent->SetTile(points[p][0], points[p][1], DefaultFloorMaterial(), room_size, false);
		parent->MakeOpenRoom(points[p][0], points[p][1]);
	}








	TArray<FVector2D> building_array;
	building_array.Add(start_loc);
	building_array.Append(points);
	building_array.Add(end_loc);
	points = building_array;






	TArray<FVector2D>closest_points;
	closest_points.Init(center_loc, points.Num());

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
			parent->SetTile(cursor_x, cursor_y, DefaultFloorMaterial(), 3, true);
		}
	}

	//make hallways
	//SetCursor(start_loc);
	//DrawDot(10);

	//UGPEnsureConnections* hallways = NewObject<UGPEnsureConnections>(this);
	//hallways->Init(radius,num_rooms, center_loc.X, center_loc.Y, heading, parent);

	SetCursor(end_loc);
	//DrawDot(10);










}