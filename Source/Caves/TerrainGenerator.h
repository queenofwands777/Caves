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
	FVector location;
	TArray<TerrainNode*> neighbors;
	TerrainNode* parent = nullptr;
	bool visited = false;

	TerrainNode(FVector _location) {
		location = _location;
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

#define ENGINEPRINT(message) GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT(message));
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
								int world_y = ((((tilemap_y-1) * MAP_SIZE)) + ((MAP_SIZE - y_within_tilemap)));

								TerrainNode* new_node = new TerrainNode({(float)world_x, 0.0, (float)world_y});

								if (!TerrainNodeMap.Contains(world_x)) {
									TMap<int, TerrainNode*> new_col;
									TerrainNodeMap.Add(world_x, new_col);
								}

								TerrainNodeMap[world_x].Add(world_y, new_node);


							}
						}
					}
				}
			}
		}



		//look through list of terrain nodes. add neighbors to each one.

		for (int i = 0; i < TerrainNodeMap.Array().Num(); i++) {
			for (int j = 0; j < TerrainNodeMap.Array()[i].Value.Array().Num(); j++) {
				TerrainNode* target_node;
				target_node = TerrainNodeMap.Array()[i].Value.Array()[j].Value;

				int target_world_x = target_node->location.X;
				int target_world_y = target_node->location.Y;

				int target_tile_x = target_world_x % MAP_SIZE;
				int target_tile_y = target_world_y % MAP_SIZE;

				int target_grid_x = (target_world_x - target_tile_x) / MAP_SIZE;
				int target_grid_y = (target_world_y - target_tile_y) / MAP_SIZE;

				//FVector location = { target_node->location.X * TILE_SIZE, 10, target_node->location.Z * TILE_SIZE };
				//DrawDebugPoint(GetWorld(), location, 10.f, FColor::Red, true, 600, 255);
				//DrawDebugLine(GetWorld(), location, location +1, FColor::Red, true, 600, 255, 4);
				//FString message = location.ToText().ToString();
				//GEngine->AddOnScreenDebugMessage(-1, 500.f, FColor::Red,message);

				for (int x = -1; x <= 1; x++) {
					for (int y = -1; y <= 1; y++) {

						if (!((x==0)&&(y==0))) {

							

							int x_offset = x;
							int y_offset = y;
							int target_x = target_world_x + x_offset;
							int target_y = target_world_y + y_offset;


							FPaperTileInfo* target_tile = GetTile(target_x, target_y);
							if (target_tile != nullptr) {
								if (target_tile->PackedTileIndex == floor_info->floor_material) {
									target_node->neighbors.Add(TerrainNodeMap[target_x][target_y]);
									FVector neighbor_location = { TerrainNodeMap[target_x][target_y]->location.X * TILE_SIZE, 10, TerrainNodeMap[target_x][target_y]->location.Z * TILE_SIZE };

									/*DrawDebugLine(GetWorld(), location, neighbor_location, FColor::Green, true, 600, 255, 2);*/
								}
							}


						}




					}
				}


			}
		}





	}

	UFUNCTION(BlueprintCallable, Category = "Pathfinding")
	TArray<FVector> GetPath(FVector from, FVector to) {
		TArray<FVector> result;

		TQueue<TerrainNode*> queue;
		queue.Enqueue(TerrainNodeMap[from.X][from.Z]);

		

		while (!queue.IsEmpty()) {
			TerrainNode* target_node;
			queue.Dequeue(target_node);
			
			if (!target_node->visited) {
				
				target_node->visited = true;

				for (int i = 0; i < target_node->neighbors.Num(); i++) {
					TerrainNode* target_neighbor = target_node->neighbors[i];
					if (!target_neighbor->visited) {
						target_neighbor->parent = target_node;
						queue.Enqueue(target_neighbor);
					}
				}
			}
		}

		TerrainNode* destination = TerrainNodeMap[to.X][to.Z];

		TerrainNode* target_node = destination;

		while (target_node->parent != nullptr) {
			result.Add(target_node->location*TILE_SIZE);
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


