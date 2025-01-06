// Fill out your copyright notice in the Description page of Project Settings.


#include "Pathfinding.h"
#include"TerrainGenerator.h"


void APathfinding::InitializeTerrainNodes() {
	//look through all initialized tiles, make a terrain node for each floor tile. 
	int cols_created = 0;
	for (int tilemap_x = 0; tilemap_x < parent->LEVEL_SIZE; tilemap_x++) {
		for (int tilemap_y = 0; tilemap_y < parent->LEVEL_SIZE; tilemap_y++) {

			//check that tilemap is valid
			if (parent->GetTileMap(tilemap_x, tilemap_y) != nullptr) {

				//get each individual tile
				for (int x_within_tilemap = 0; x_within_tilemap < parent->MAP_SIZE; x_within_tilemap++) {
					for (int y_within_tilemap = 0; y_within_tilemap < parent->MAP_SIZE; y_within_tilemap++) {



						//check if that tile is a certain kind
						FPaperTileInfo target_tile = parent->GetTileMap(tilemap_x, tilemap_y)->GetTile(x_within_tilemap, y_within_tilemap, 0);
						if (MaterialTypes[target_tile.PackedTileIndex] == Abstract::type_floor) {

							int world_x = ((tilemap_x * parent->MAP_SIZE) + (x_within_tilemap));
							//int world_y = ((tilemap_y * MAP_SIZE) + (y_within_tilemap));
							int world_y = ((((tilemap_y - 1) * parent->MAP_SIZE)) + ((parent->MAP_SIZE - y_within_tilemap)));


							TerrainNode* new_node = new TerrainNode(world_x, world_y);

							TMap<int, TerrainNode*>* column = TerrainNodeMap.Find(world_x);

							if (column == nullptr) {
								TMap<int, TerrainNode*>* new_col = new TMap<int, TerrainNode*>();
								TerrainNodeMap.Add(world_x, *new_col);
								column = &TerrainNodeMap[world_x];
							}

							column->Add(world_y, new_node);










						}
					}
				}
			}
		}
	}






	for (int target_x = 0; target_x < parent->LEVEL_SIZE * parent->MAP_SIZE; target_x++) {
		for (int target_y = 0; target_y < parent->LEVEL_SIZE * parent->MAP_SIZE; target_y++) {

			if (TerrainNodeMap.Contains(target_x)) {
				if (TerrainNodeMap[target_x].Contains(target_y)) {
					TerrainNode* target = TerrainNodeMap[target_x][target_y];
					FVector target_location = { float(target->X * parent->TILE_SIZE), 10, float(target->Y * parent->TILE_SIZE) };





					for (int x_offset = -1; x_offset <= 1; x_offset++) {
						for (int y_offset = -1; y_offset <= 1; y_offset++) {

							if ((x_offset == 0) && (y_offset == 0)) {
								continue;
							}

							if (abs(x_offset) == abs(y_offset)) {
								continue;
							}

							int neighbor_x = target_x + x_offset;
							int neighbor_y = target_y + y_offset;

							if (TerrainNodeMap.Contains(neighbor_x)) {
								if (TerrainNodeMap[neighbor_x].Contains(neighbor_y)) {
									TerrainNode* neighbor = TerrainNodeMap[neighbor_x][neighbor_y];
									FVector neighbor_location = { float(neighbor->X * parent->TILE_SIZE), 10, float(neighbor->Y * parent->TILE_SIZE) };
									target->neighbors.Add(neighbor);

								}
							}








						}
					}







				}
			}




		}
	}


	//for (int target_x = 0; target_x < LEVEL_SIZE * MAP_SIZE; target_x++) {
	//	for (int target_y = 0; target_y < LEVEL_SIZE * MAP_SIZE; target_y++) {
	//		if (TerrainNodeMap.Contains(target_x)) {
	//			if (TerrainNodeMap[target_x].Contains(target_y)) {
	//				TerrainNode* target = TerrainNodeMap[target_x][target_y];
	//				FVector target_location = { float(target->X * TILE_SIZE), 10, float(target->Y * TILE_SIZE) };
	//				DrawDebugLine(GetWorld(), target_location, target_location + 1, FColor::Red, true, 500, 255, 4);
	//				for (int n = 0; n < target->neighbors.Num(); n++) {
	//					TerrainNode* neighbor = target->neighbors[n];
	//					FVector neighbor_location = { float(neighbor->X * TILE_SIZE), 10, float(neighbor->Y * TILE_SIZE) };
	//					DrawDebugLine(GetWorld(), target_location, neighbor_location, FColor::Green, true, 500, 255, 0.5);
	//				}
	//			}
	//		}
	//	}
	//}
}





TArray<FVector> APathfinding::GetPath(FVector from, FVector to) {
	TArray<FVector> result;


	int start_x = round(from.X);
	int start_y = round(from.Z);
	int start_tile_x = (start_x - (start_x % parent->TILE_SIZE)) / parent->TILE_SIZE;
	int start_tile_y = (start_y - (start_y % parent->TILE_SIZE)) / parent->TILE_SIZE;

	int end_x = round(to.X);
	int end_y = round(to.Z);
	int end_tile_x = (end_x - (end_x % parent->TILE_SIZE)) / parent->TILE_SIZE;
	int end_tile_y = (end_y - (end_y % parent->TILE_SIZE)) / parent->TILE_SIZE;


	TQueue<TerrainNode*> queue;


	if (TerrainNodeMap.Contains(start_tile_x)) {
		if (TerrainNodeMap[start_tile_x].Contains(start_tile_y)) {

			TerrainNodeMap[start_tile_x][start_tile_y]->visited = true;
			queue.Enqueue(TerrainNodeMap[start_tile_x][start_tile_y]);



		}
	}



	TerrainNode* destination_node = nullptr;

	if (TerrainNodeMap.Contains(end_tile_x)) {
		if (TerrainNodeMap[end_tile_x].Contains(end_tile_y)) {
			TerrainNode* destination = TerrainNodeMap[end_tile_x][end_tile_y];
			destination_node = destination;
		}
	}


	while (!queue.IsEmpty()) {
		TerrainNode* selected_node;

		queue.Dequeue(selected_node);

		selected_node->neighbors.Sort([](const TerrainNode& A, const TerrainNode& B) {
			return A.neighbors.Num() > B.neighbors.Num(); // Prefer nodes farther from walls
			});


		for (int i = 0; i < selected_node->neighbors.Num(); i++) {
			TerrainNode* target_neighbor = selected_node->neighbors[i];
			if (!target_neighbor->visited) {
				target_neighbor->parent = selected_node;
				target_neighbor->visited = true;
				queue.Enqueue(target_neighbor);
				if (target_neighbor == destination_node) {
					queue.Empty();
				}
			}
		}

	}








	while ((destination_node != nullptr)) {
		FVector target_location = { float(destination_node->X * parent->TILE_SIZE), 2, float(destination_node->Y * parent->TILE_SIZE) };
		//DrawDebugLine(GetWorld(), target_location, target_location + 1, FColor::Red, false, 0.1, 255, 4);
		result.Add(target_location);
		destination_node = destination_node->parent;
	}

	for (int i = 0; i < TerrainNodeMap.Array().Num(); i++) {
		for (int j = 0; j < TerrainNodeMap.Array()[i].Value.Array().Num(); j++) {
			TerrainNodeMap.Array()[i].Value.Array()[j].Value->Reset();
		}
	}



	Algo::Reverse(result);
	return result;
}


























// Sets default values
APathfinding::APathfinding()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APathfinding::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APathfinding::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

