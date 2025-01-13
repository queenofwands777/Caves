// Fill out your copyright notice in the Description page of Project Settings.


#include "GPEnsureConnections.h"
#include "TerrainGenerator.h"

void UGPEnsureConnections::GenerateLevel() {

	float radius = lifetime;

	float diameter = radius * 2;
	float search_factor = 2;
	float search_area = diameter * search_factor;

	TArray<TArray<int>> field;
	for (int x = 0; x < search_area; x++) {
		for (int y = 0; y < search_area; y++) {
			TArray<int> col;
			col.Init((x * search_area) + y, search_area);
			field.Push(col);
		}
	}



	
	float total_changes = 0;
	bool running = true;
	while (running) {
		total_changes = 0;

		for (int tilemap_x = 0; tilemap_x < search_area; tilemap_x++) {
			for (int tilemap_y = 0; tilemap_y < search_area; tilemap_y++) {

				float offset_x = ( - search_area / 2) ; //CHANGE ME
				float offset_y = ( - search_area / 2); //CHANGE ME

				//check that tilemap is valid
				if (parent->GetTileMap(cursor_x + tilemap_x + offset_x, cursor_y + tilemap_y + offset_y) != nullptr) {

					//get each individual tile
					for (int x_within_tilemap = 0; x_within_tilemap < parent->MAP_SIZE; x_within_tilemap++) {
						for (int y_within_tilemap = 0; y_within_tilemap < parent->MAP_SIZE; y_within_tilemap++) {



							//check if that tile is a certain kind
							FPaperTileInfo target_tile = parent->GetTileMap(cursor_x + tilemap_x + offset_x, cursor_y + tilemap_y + offset_y)->GetTile(x_within_tilemap, y_within_tilemap, 0);
							if (MaterialTypes[target_tile.PackedTileIndex] == Abstract::type_floor) {

								//look at all neighbors, take the highest value we see, add one to total_changes
								float greatest_neighbor = 0;

								//int world_x = ((tilemap_x * parent->MAP_SIZE) + (x_within_tilemap));
								//int world_y = ((((tilemap_y - 1) * parent->MAP_SIZE)) + ((parent->MAP_SIZE - y_within_tilemap)));


								for (int neighbor_x = -1; neighbor_x <= 1; neighbor_x++) {
									for (int neighbor_y = -1; neighbor_y <= 1; neighbor_y++) {
										float neighbor_value = field[tilemap_x + neighbor_x][tilemap_y + neighbor_y];
										if (neighbor_value > greatest_neighbor) {
											greatest_neighbor = neighbor_value;
											total_changes++;
										}
									}
								}


								field[tilemap_x][tilemap_y] = greatest_neighbor;

							}
							else {
								//set tile we are looking at (wall) to zero. probably want to do this when initializing the field too.

								field[tilemap_x][tilemap_y] = 0;




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


	TArray<int> areas;
	
	for (int x = 0; x < search_area; x++) {
		for (int y = 0; y < search_area; y++) {
			int tile_value = field[x][y];
			if (tile_value != 0) {
				if (!areas.Contains(tile_value)) {
					areas.Add(tile_value);
				}
			}
		}
	}




	FString message = "";


	for (int i = 0; i < areas.Num(); i++) {
		message.Append(FString::FromInt(areas[i]));
		message.Append(", ");
	}





	GEngine->AddOnScreenDebugMessage(-1, 500.f, FColor::Red, message );





}