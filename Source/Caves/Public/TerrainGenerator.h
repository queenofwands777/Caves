// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include<vector>



enum OVERLAY {
	side_1_0 = 0,
	side_2_0 = 1,
	side_2_1 = 2,
	side_3_0 = 3,
	side_4_0 = 4,
	corner_1_0 = 16,
	corner_2_0 = 17,
	corner_2_1 = 18,
	corner_3_0 = 19,
	corner_4_0 = 20,

};


enum OBJECTS {
	Portal = 0,
	Chest = 1,
	Altar = 2,
	Elevator = 3,
	ElevatorDoor = 4,
	Shelf = 5,
};



struct TerrainNode {
public:
	int X;
	int Y;
	TArray<TerrainNode*> neighbors;
	TerrainNode* parent = nullptr;
	bool visited = false;

	TerrainNode(int x, int y) {
		X = x;
		Y = y;
	}

	void Reset() {
		parent = nullptr;
		visited = false;
	}
};

struct RoomMarker {
	float x;
	float y;

	RoomMarker(float _x, float _y) {
		x = _x;
		y = _y;
	}
};


#include"FloorInfo.h"

#include "DrawDebugHelpers.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PaperTileMapComponent.h"

#define ENGINEPRINT(message) GEngine->AddOnScreenDebugMessage(-1, 500.f, FColor::Red, TEXT(message));
#define PRINT(message) UE_LOG(LogTemp, Warning, TEXT(message));

#include "TerrainGenerator.generated.h"

UCLASS()
class CAVES_API ATerrainGenerator : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATerrainGenerator();

protected:

	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;
	void GenerateMap();
	void MakeRoom(int x, int y);
	void PlaceEncounter(AEncounter* encounter,int x, int y);
	void SetTile(int x, int y, int terrain, int size, bool generating_floor);
	void SetOverlayTile(int x, int y, int terrain, int rotation);
	FPaperTileInfo* GetTile(int x, int y);


	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ExposeOnSpawn = "true"))
	int LEVEL_SIZE;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ExposeOnSpawn = "true"))
	int MAP_SIZE;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ExposeOnSpawn = "true"))
	int TILE_SIZE;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ExposeOnSpawn = "true"))
	int CURSOR_LIFETIME;






	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ExposeOnSpawn = "true"))
	int floor_num = 0;
	int true_floor;

	UPaperTileSet* LevelOverlayTileSet;
	std::vector<RoomMarker> rooms;

	AFloorInfo* floor_info;

public:
	//std::vector<std::vector<UPaperTileMapComponent*>> TerrainMap;
	void InitializeTileMap(int grid_x, int grid_y);

	UPaperTileMapComponent* GetTileMap(int grid_x, int grid_y);

	UPaperTileMapComponent* GetOverlayTileMap(int grid_x, int grid_y);

	void SetTileMap(int grid_x, int grid_y, UPaperTileMapComponent* tilemap);

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "TileMap", meta = (AllowPrivateAccess = "true"))
	TArray<UPaperTileMapComponent*> TerrainMapData;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "TileMap", meta = (AllowPrivateAccess = "true"))
	TArray<UPaperTileMapComponent*> TerrainOverlayMapData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ExposeOnSpawn = "true"))
	TArray<TSubclassOf<AFloorInfo>> Floors;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ExposeOnSpawn = "true"))
	TArray<TSubclassOf<AFloorInfo>> SpecialFloors;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ExposeOnSpawn = "true"))
	TSubclassOf<AActor> Player ;


//pathfinding stuff
public:

	TMap<int, TMap<int, TerrainNode*>> TerrainNodeMap;


	void InitializeTerrainNodes() {

		//look through all initialized tiles, make a terrain node for each floor tile. 
		int cols_created = 0;
		for (int tilemap_x = 0; tilemap_x < LEVEL_SIZE; tilemap_x++) {
			for (int tilemap_y = 0; tilemap_y < LEVEL_SIZE; tilemap_y++) {

				//check that tilemap is valid
				if (GetTileMap(tilemap_x, tilemap_y) != nullptr) {

					//get each individual tile
					for (int x_within_tilemap = 0; x_within_tilemap < MAP_SIZE; x_within_tilemap++) {
						for (int y_within_tilemap = 0; y_within_tilemap < MAP_SIZE; y_within_tilemap++) {



							//check if that tile is a certain kind
							FPaperTileInfo target_tile = GetTileMap(tilemap_x, tilemap_y)->GetTile(x_within_tilemap, y_within_tilemap, 0);
							if (target_tile.PackedTileIndex == floor_info->floor_material) {

								int world_x = ((tilemap_x * MAP_SIZE) + (x_within_tilemap));
								//int world_y = ((tilemap_y * MAP_SIZE) + (y_within_tilemap));
								int world_y = ((((tilemap_y-1) * MAP_SIZE)) + ((MAP_SIZE - y_within_tilemap)));


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






		for (int target_x = 0; target_x < LEVEL_SIZE * MAP_SIZE; target_x++) {
			for (int target_y = 0; target_y < LEVEL_SIZE * MAP_SIZE; target_y++) {

				if (TerrainNodeMap.Contains(target_x)) {
					if (TerrainNodeMap[target_x].Contains(target_y)) {
						TerrainNode* target = TerrainNodeMap[target_x][target_y];
						FVector target_location = { float(target->X * TILE_SIZE), 10, float(target->Y * TILE_SIZE) };





						for (int x_offset = -1; x_offset <= 1; x_offset++) {
							for (int y_offset = -1; y_offset <= 1; y_offset++) {

								if ((x_offset == 0)&&(y_offset == 0)) {
									continue;
								}

								if (abs(x_offset)==abs(y_offset)) {
									continue;
								}

								int neighbor_x = target_x + x_offset;
								int neighbor_y = target_y + y_offset;

								if (TerrainNodeMap.Contains(neighbor_x)) {
									if (TerrainNodeMap[neighbor_x].Contains(neighbor_y)) {
										TerrainNode* neighbor = TerrainNodeMap[neighbor_x][neighbor_y];
										FVector neighbor_location = { float(neighbor->X * TILE_SIZE), 10, float(neighbor->Y * TILE_SIZE) };
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

	UFUNCTION(BlueprintCallable, Category = "Pathfinding")
	TArray<FVector> GetPath(FVector from, FVector to) {
		TArray<FVector> result;

		int start_x = round(from.X);
		int start_y = round(from.Z);
		int start_tile_x = (start_x - (start_x % TILE_SIZE)) / TILE_SIZE;
		int start_tile_y = (start_y - (start_y % TILE_SIZE)) / TILE_SIZE;

		int end_x = round(to.X);
		int end_y = round(to.Z);
		int end_tile_x = (end_x - (end_x % TILE_SIZE)) / TILE_SIZE;
		int end_tile_y = (end_y- (end_y % TILE_SIZE)) / TILE_SIZE;


		TQueue<TerrainNode*> queue;


		if (TerrainNodeMap.Contains(start_tile_x)) {
			if (TerrainNodeMap[start_tile_x].Contains(start_tile_y)) {

				TerrainNodeMap[start_tile_x][start_tile_y]->visited = true;
				queue.Enqueue(TerrainNodeMap[start_tile_x][start_tile_y]);



			}
		}




		

		while (!queue.IsEmpty()) {
			TerrainNode* target_node;
			
			queue.Dequeue(target_node);
			
			target_node->neighbors.Sort([](const TerrainNode& A, const TerrainNode& B) {
				return A.neighbors.Num() > B.neighbors.Num(); // Prefer nodes farther from walls
				});


				for (int i = 0; i < target_node->neighbors.Num(); i++) {
					TerrainNode* target_neighbor = target_node->neighbors[i];
					if (!target_neighbor->visited) {
						target_neighbor->parent = target_node;
						target_neighbor->visited = true;
						queue.Enqueue(target_neighbor);
					}
				}
			
		}
		
		
		TerrainNode* target_node = nullptr;

		if (TerrainNodeMap.Contains(end_tile_x)) {
			if (TerrainNodeMap[end_tile_x].Contains(end_tile_y)) {
				TerrainNode* destination = TerrainNodeMap[end_tile_x][end_tile_y];
				target_node = destination;
			}
		}



		

		while ((target_node != nullptr ) && (target_node->parent != nullptr)) {
			//FVector target_location = { float(target_node->X * TILE_SIZE), 10, float(target_node->Y * TILE_SIZE) };
			/*DrawDebugLine(GetWorld(), target_location, target_location + 1, FColor::Red, false, 0.1, 255, 4);*/
			result.Add({ float(target_node->X * TILE_SIZE) , 0, float(target_node->Y * TILE_SIZE) });
			target_node = target_node->parent;
		}

		for (int i = 0; i < TerrainNodeMap.Array().Num(); i++) {
			for (int j = 0; j < TerrainNodeMap.Array()[i].Value.Array().Num(); j++) {
				TerrainNodeMap.Array()[i].Value.Array()[j].Value->Reset();
			}
		}

		Algo::Reverse(result);
		return result;
	}


};

