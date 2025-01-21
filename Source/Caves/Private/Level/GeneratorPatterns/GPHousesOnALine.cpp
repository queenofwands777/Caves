// Fill out your copyright notice in the Description page of Project Settings.


#include "GPHousesOnALine.h"
#include "TerrainGenerator.h"
#include "GPClusterWalls.h"
#include"GPHouse.h"


void UGPHousesOnALine::GenerateLevel() {






	int spacing = points.Num() / num_rooms;

	for (int h = 0; h < num_rooms; h++) {

		int house_index = FMath::Min((h * spacing) + 1, points.Num() - 1);
		FVector2D house_location = points[house_index];
		SetCursor(house_location);

		//parent->MakeRegularHouse(house_location[0], house_location[1], 7,0);

		//UGPClusterWalls* cluster = NewObject<UGPClusterWalls>(this);
		//cluster->room_size = 6;
		//cluster->Init(lifetime, 3, house_location[0], house_location[1], heading, parent, MaterialType::wood_planks, MaterialType::siding);
		//SetCursor(cluster->end_loc);

		UGPHouse* house = NewObject<UGPHouse>(this);
		house->Init(lifetime, 3, house_location[0], house_location[1], heading, parent, MaterialType::wood_planks, MaterialType::siding);
		SetCursor(house->end_loc);





		TArray<FVector2D> directions = {
			{1,0},
			{0,1},
			{-1,0},
			{0,-1}
		};

		for (int i = 0; i < directions.Num(); i++) {
			FVector2D active_direction = directions[i];
			FVector2D original_direction = active_direction;
			FVector2D probe_loc = house->end_loc;
			FVector2D secondary_direction = directions[(i + 1) % 4];
			FVector2D tertiary_direction = directions[(i + 3) % 4];

			bool found_door = false;
			bool searching = true;
			while (searching) {
				int tile_index;
				if (active_direction == secondary_direction) {
					tile_index = parent->GetTile(probe_loc[0] + active_direction[0], probe_loc[1] + active_direction[1])->GetTileIndex();
					if (MaterialTypes[tile_index] == Abstract::type_wall) {
						active_direction = tertiary_direction;
					}

				}
				else if (active_direction == tertiary_direction) {
					tile_index = parent->GetTile(probe_loc[0] + active_direction[0], probe_loc[1] + active_direction[1])->GetTileIndex();

					if (MaterialTypes[tile_index] == Abstract::type_wall) {
						searching = false;
					}

				}


				probe_loc += active_direction;





				int tile_type = parent->GetTile(probe_loc[0] + original_direction[0], probe_loc[1] + original_direction[1])->GetTileIndex();
				//check if door can be placed, if so, place door
				if (MaterialTypes[tile_type] == Abstract::type_wall) {
					int beyond_wall_type = parent->GetTile(probe_loc[0] + (original_direction[0] * 2), probe_loc[1] + (original_direction[1] * 2))->GetTileIndex();
					if ((MaterialTypes[beyond_wall_type] == Abstract::type_floor) && (beyond_wall_type != MaterialType::wood_planks)) {

						




						int beyond_wall_neighbor_type = parent->GetTile(probe_loc[0] + (original_direction[0] * 2) + secondary_direction[0], probe_loc[1] + (original_direction[1] * 2) + secondary_direction[1])->GetTileIndex();
						int other_beyond_wall_neighbor_type = parent->GetTile(probe_loc[0] + (original_direction[0] * 2) + tertiary_direction[0], probe_loc[1] + (original_direction[1] * 2) + tertiary_direction[1])->GetTileIndex();

						if (MaterialTypes[beyond_wall_neighbor_type] == Abstract::type_floor) {
							SetCursor(probe_loc + (original_direction));
							DrawLine(original_direction, 1, 2, MaterialType::wood_planks);
							found_door = true;
							searching = false;
						}
						else if (MaterialTypes[other_beyond_wall_neighbor_type] == Abstract::type_floor) {
							SetCursor(probe_loc + (original_direction));
							DrawLine(original_direction, 1, 2, MaterialType::wood_planks);
							found_door = true;
							searching = false;
						}
						else {
							if (active_direction == original_direction) {
								active_direction = secondary_direction;
							}
						}
					}
					else {
						if (active_direction == original_direction) {
							active_direction = secondary_direction;
						}
					}
				}




			}

			if (found_door) {
				break;
			}
		}

	}





	//takes as an extra argument, a linked list of spatial points, representing the line which we will draw the houses along.
	//with equal spacing, place houses along the line. a house is a room with exterior walls, which can be created in an open space.










}