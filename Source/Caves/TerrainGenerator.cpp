// Fill out your copyright notice in the Description page of Project Settings.


#include "TerrainGenerator.h"
#include "PaperTileSet.h"
#include "PaperTileMap.h"
#include"PaperTileLayer.h"
#include "PaperCharacter.h"
#include "Engine/World.h"
#include "GameFramework/PlayerStart.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/Actor.h"
#include "string"
#include "Kismet/GameplayStatics.h"


#define ENGINEPRINT(message) GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT(message));
#define PRINT(message) UE_LOG(LogTemp, Warning, TEXT(message));



UPaperTileMapComponent* ATerrainGenerator::GetTileMap(int grid_x, int grid_y) {
	int index = (grid_x * LEVEL_HEIGHT) + grid_y;
	return TerrainMapData[index];
}

UPaperTileMapComponent* ATerrainGenerator::GetOverlayTileMap(int grid_x, int grid_y) {
	return TerrainOverlayMapData[(grid_x * LEVEL_HEIGHT) + grid_y];
}

void ATerrainGenerator::SetTileMap(int grid_x, int grid_y, UPaperTileMapComponent* tilemap) {
	PRINT("setting tilemap")
		int index = (grid_x * LEVEL_HEIGHT) + grid_y;
	TerrainMapData[index] = tilemap;

}

void ATerrainGenerator::SetTile(int input_x, int input_y, int terrain, int size, bool generating_floor = true) {

	//input_x and input_y are in terms of the world coordinates on a tile level

	//probably inefficient, make tileset a member of TerrainGenerator and initialize on startup
	FPaperTileInfo TileInfo;
	TileInfo.TileSet = floor_info->LevelTileSet;

	//set tiles according to brush size
	for (int xx = -size / 2; xx < (size / 2) + (size % 2); xx++) {
		for (int yy = -size / 2; yy < (size / 2) + (size % 2); yy++) {


			TileInfo.PackedTileIndex = terrain;

			//input coords plus brush placement
			int world_x = input_x + xx;
			int world_y = input_y + yy;

			//how far into the target tilemap are we placing the tile
			int target_x = world_x % MAP_WIDTH;
			int target_y = world_y % MAP_HEIGHT;

			int tilemap_x = (world_x - target_x) / MAP_WIDTH;
			int tilemap_y = (world_y - target_y) / MAP_HEIGHT;

			//check if the target tilemap is initialized. if not, initialize a new tilemap.
			if (GetTileMap(tilemap_x, tilemap_y) == nullptr) {
				InitializeTileMap(tilemap_x, tilemap_y);
			}

			//check if we are on the edges of this tilemap. if so, initialize surrounding tilemaps.
			if ((target_x == 0) || (target_x == MAP_WIDTH - 1) || (target_y == 0) || (target_y == MAP_HEIGHT - 1)) {

				for (int i = -1; i <= 1; i++) {
					for (int ii = -1; ii <= 1; ii++) {
						if (GetTileMap(tilemap_x + i, tilemap_y + ii) == nullptr) {
							InitializeTileMap(tilemap_x + i, tilemap_y + ii);
						}
					}
				}
			}

			//set the tile
			UPaperTileMapComponent* host_tile = GetTileMap(tilemap_x, tilemap_y);
			host_tile->TileMap->TileLayers[0]->SetCell(target_x, MAP_WIDTH - (target_y)-1, TileInfo);

			if (generating_floor) {
				TileInfo.PackedTileIndex = floor_info->wall_material;
				//set surrounding tiles to wall, if they are void
				for (int mod_x = -1; mod_x <= 1; mod_x++) {
					for (int mod_y = -1; mod_y <= 1; mod_y++) {

						int neighbor_x = target_x + mod_x;
						int neighbor_y = MAP_WIDTH - (target_y)-1 - mod_y;





						if ((neighbor_x < MAP_WIDTH) && (neighbor_y < MAP_HEIGHT) && (neighbor_x >= 0) && (neighbor_y >= 0)) {
							FPaperTileInfo neighbor_cell = host_tile->TileMap->TileLayers[0]->GetCell(neighbor_x, neighbor_y);
							if (neighbor_cell.PackedTileIndex == floor_info->void_material) {
								host_tile->TileMap->TileLayers[0]->SetCell(neighbor_x, neighbor_y, TileInfo);
							}
						}



						else {
							int x_over_violation = neighbor_x >= MAP_WIDTH;
							int x_under_violation = neighbor_x < 0;
							int y_over_violation = neighbor_y >= MAP_HEIGHT;
							int y_under_violation = neighbor_y < 0;

							int nudge_x = 0 - x_under_violation + x_over_violation;
							int nudge_y = 0 + y_under_violation - y_over_violation;







							int relative_x = ((MAP_WIDTH)*x_under_violation) + neighbor_x + (-MAP_WIDTH * x_over_violation);
							int relative_y = ((MAP_HEIGHT)*y_under_violation) + neighbor_y + (-MAP_HEIGHT * y_over_violation);

							UPaperTileMapComponent* target_tile = GetTileMap(tilemap_x + nudge_x, tilemap_y + nudge_y);
							FPaperTileInfo neighbor_cell = target_tile->TileMap->TileLayers[0]->GetCell(relative_x, relative_y);

							if (neighbor_cell.PackedTileIndex == floor_info->void_material) {
								target_tile->TileMap->TileLayers[0]->SetCell(relative_x, relative_y, TileInfo);
							}








						}

					}
				}
			}

		}
	}

}

void ATerrainGenerator::SetOverlayTile(int world_x, int world_y, int terrain, int rotation) {

	//input_x and input_y are in terms of the world coordinates on a tile level

	//probably inefficient, make tileset a member of TerrainGenerator and initialize on startup
	FPaperTileInfo TileInfo;
	TileInfo.TileSet = *LevelOverlayTileSet;
	TileInfo.PackedTileIndex = terrain;
	
	//how far into the target tilemap are we placing the tile
	int target_x = world_x % MAP_WIDTH;
	int target_y = world_y % MAP_HEIGHT;

	int tilemap_x = (world_x - target_x) / MAP_WIDTH;
	int tilemap_y = (world_y - target_y) / MAP_HEIGHT;

	FRotator rotator(0.0f, rotation, 0.0f);  // RotationAngle is in degrees
	FTransform TileTransform(rotator);





	switch (rotation) {
	
	case 0: break;
	case 90: TileInfo.ToggleFlag(EPaperTileFlags::FlipDiagonal); TileInfo.ToggleFlag(EPaperTileFlags::FlipHorizontal); break;
	case 180:TileInfo.ToggleFlag(EPaperTileFlags::FlipHorizontal); TileInfo.ToggleFlag(EPaperTileFlags::FlipVertical); break;
	case 270:TileInfo.ToggleFlag(EPaperTileFlags::FlipDiagonal); TileInfo.ToggleFlag(EPaperTileFlags::FlipVertical); break;
	default: ENGINEPRINT("rotation not recognized"); break;
	}

	TileInfo.ToggleFlag(EPaperTileFlags::FlipHorizontal);
	TileInfo.ToggleFlag(EPaperTileFlags::FlipVertical);
	
	//set the tile
	UPaperTileMapComponent* host_tile = GetOverlayTileMap(tilemap_x, tilemap_y);
	host_tile->TileMap->TileLayers[0]->SetCell(target_x, MAP_WIDTH - (target_y)-1, TileInfo);
	
}

FPaperTileInfo* ATerrainGenerator::GetTile(int input_x, int input_y) {

	FPaperTileInfo* result;
	UPaperTileMapComponent* tilemap;

	int x_within_tilemap = input_x % MAP_WIDTH;
	int y_within_tilemap = input_y % MAP_HEIGHT;
	int tilemap_x = (input_x - x_within_tilemap) / MAP_WIDTH;
	int tilemap_y = (input_y - y_within_tilemap) / MAP_HEIGHT;

	tilemap = GetTileMap(tilemap_x, tilemap_y);
	if (tilemap == nullptr) {
		result = nullptr;
	}
	else {
		FPaperTileInfo buffer = tilemap->GetTile(x_within_tilemap, MAP_WIDTH - y_within_tilemap - 1, 0);
		result = &buffer;
	}

	return result;

}







// Sets default values
ATerrainGenerator::ATerrainGenerator()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;



	//load overlay tileset
	LevelOverlayTileSet = LoadObject<UPaperTileSet>(nullptr, TEXT("/Game/Assets/Level/TerrainOverlay1_TileSet"));

	TerrainMapData.Init(nullptr, LEVEL_HEIGHT * LEVEL_WIDTH);
	TerrainOverlayMapData.Init(nullptr, LEVEL_HEIGHT * LEVEL_WIDTH);




	


}



// Called when the game starts or when spawned
void ATerrainGenerator::BeginPlay()
{
	Super::BeginPlay();

	int floors_per_shop = 1;

	int floor_or_shop = (floor_num % (floors_per_shop + 1));
	true_floor = (floor_num - floor_or_shop) / (floors_per_shop + 1);

	if (floor_or_shop == floors_per_shop) {

		floor_info = GetWorld()->SpawnActor<AFloorInfo>(SpecialFloors[0]);

	}
	else {
		floor_info = GetWorld()->SpawnActor<AFloorInfo>(Floors[true_floor]);
	}

	//dont forget to delete!!
	

	

	GenerateMap();

}

void ATerrainGenerator::MakeRoom(int x, int y) {
	for (int i = 0; i < 5; i++) {
		x += FMath::RandRange(-1, 1);
		y += FMath::RandRange(-1, 1);
		SetTile(x, y, floor_info->floor_material, 8);

	}

	//spawn marker
	FVector marker_location;
	marker_location = { (float)x * 16, 2.0, (float)((y * 16) - (16 * 15)) };
	RoomMarker marker = RoomMarker(marker_location[0], marker_location[2]);
	rooms.push_back(marker);

}

struct GeneratorProbe {
public:
	GeneratorProbe(int _lifetime, int _num_rooms, float _cursor_x, float _cursor_y, float _heading, ATerrainGenerator* _parent) {
		num_rooms = _num_rooms;
		lifetime = _lifetime;
		cursor_x = _cursor_x;
		cursor_y = _cursor_y;
		heading = _heading;
		parent = _parent;

		direction = { 1, 0 };

		Generate();
	}

public:
	int num_rooms;
	int lifetime;
	float cursor_x;
	float cursor_y;
	float heading;
	FVector2d direction;
	ATerrainGenerator* parent;

public:

	void Generate() {

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
			parent->SetTile(cursor_x, cursor_y, parent->floor_info->floor_material, 3);




			int offshoot = FMath::RandRange(0, 1000);
			if ((offshoot > (950 - (remaining_rooms*10)))&&(remaining_rooms >= 2)) {
				int spare_rooms = remaining_rooms - (remaining_rooms / 2);
				GeneratorProbe new_offshoot = GeneratorProbe(lifetime / 2, spare_rooms, cursor_x, cursor_y, heading + (FMath::RandRange(45, 135) * ((FMath::RandBool() * 2) - 1)), parent);
				remaining_rooms = remaining_rooms - spare_rooms;
			}


			int room = FMath::RandRange(0, 1000);
			if (((room > 920) && (remaining_rooms > 0) && (time_since_room >= 18))||(time_since_room >= 32)) {
				parent->MakeRoom(cursor_x, cursor_y);
				remaining_rooms--;
				time_since_room = 0;
			}

			if (remaining_rooms == 0) { active = false; }






		}





	}



};



void ATerrainGenerator::PlaceEncounter(AEncounter* encounter,int x, int y) {




	for (int enemy = 0; enemy < encounter->Enemies.Num(); enemy++) {
		float distance = 20.0;
		float offset_x = FMath::FRandRange(-distance, distance);
		float offset_y = FMath::FRandRange(-distance, distance);
		float spawn_x = x + offset_x;
		float spawn_y = y + offset_y;
		FVector spawn_location;
		spawn_location = { spawn_x, 4.0, spawn_y };
		FRotator rotation = { 0,0,0 };


		GetWorld()->SpawnActor<AActor>(encounter->Enemies[enemy], spawn_location, rotation);

	}

	for (int object = 0; object < encounter->Objects.Num(); object++) {
		float distance = 20.0;
		float offset_x = FMath::FRandRange(-distance, distance);
		float offset_y = FMath::FRandRange(-distance, distance);
		float spawn_x = x + offset_x;
		float spawn_y = y + offset_y;
		FVector spawn_location;
		spawn_location = { spawn_x, 3.0, spawn_y };
		FRotator rotation = { 0,0,0 };


		GetWorld()->SpawnActor<AActor>(encounter->Objects[object], spawn_location, rotation);
	}
}







void ATerrainGenerator::GenerateMap() {

#pragma region init
	PRINT("Generating Map");

	//set start location
	float cursor_x = (LEVEL_WIDTH * MAP_WIDTH) / 2;
	float cursor_y = (LEVEL_HEIGHT * MAP_HEIGHT) / 2;

	SetTile(cursor_x, cursor_y, floor_info->floor_material, 4);
	FVector elevator_location = { float((cursor_x - 2) * TILE_WIDTH) + (1.5 * TILE_WIDTH), 0.1, float((cursor_y) * TILE_HEIGHT) - (15.5 * TILE_HEIGHT) };
	FVector spawn_location = { float((cursor_x - 2) * TILE_WIDTH) + (1.5 * TILE_WIDTH), 4, float((cursor_y)*TILE_HEIGHT) - (15.5 * TILE_HEIGHT) };

	GetWorld()->SpawnActor<AActor>(floor_info->EssentialObjects[OBJECTS::Elevator], elevator_location, { 0,0,0 });
	GetWorld()->SpawnActor<AActor>(Player, spawn_location, { 0,0,0 });

	float heading = FMath::RandRange(0, 360);
	float heading_radians = FMath::DegreesToRadians(heading);

	FVector direction = { 1,0,0 };


	FVector new_direction = {
		(direction[0] * FMath::Cos(heading_radians)) - (direction[2] * FMath::Sin(heading_radians)),
		0,
		(direction[0] * FMath::Sin(heading_radians)) + (direction[2] * FMath::Cos(heading_radians))
	};














	int x_mod = (FMath::Cos(new_direction[0]) > FMath::Sin(new_direction[2]));
	int y_mod = (FMath::Sin(new_direction[0]) >= FMath::Cos(new_direction[2]));





	FVector new_direction_trunc = {
		x_mod * FMath::Sign(new_direction[0]),
		0,
		y_mod * FMath::Sign(new_direction[2])
	};

	cursor_x += (new_direction_trunc[0] * 3);
	cursor_y += ( new_direction_trunc[2] * 3 );

	SetTile(cursor_x, cursor_y, floor_info->floor_material, 2);

	cursor_x += (new_direction_trunc[0] * 4);
	cursor_y += (new_direction_trunc[2] * 4);
	

	FRotator spawn_rotation = { 0,0,0 };

	if (floor_info->is_store) {

		cursor_x += (new_direction_trunc[0] * 1);
		cursor_y += (new_direction_trunc[2] * 1);

		SetTile(cursor_x, cursor_y, floor_info->floor_material, 10);
		FVector portal_location = { float(cursor_x * TILE_WIDTH) - (2 * TILE_WIDTH), 1.9, float(cursor_y * TILE_HEIGHT) - (16 * TILE_HEIGHT) + 32 };
		GetWorld()->SpawnActor<AActor>(floor_info->EssentialObjects[OBJECTS::Portal], portal_location, spawn_rotation);

		
	}
	else {


		//create spawn area
		SetTile(cursor_x, cursor_y, floor_info->floor_material, 8);
		FVector portal_location = { float(cursor_x * TILE_WIDTH) - (2 * TILE_WIDTH), 1.9, float(cursor_y * TILE_HEIGHT) - (16 * TILE_HEIGHT) };
		GetWorld()->SpawnActor<AActor>(floor_info->EssentialObjects[OBJECTS::Portal], portal_location, spawn_rotation);


		int num_chests = 2 + ((true_floor - (true_floor % 3)) / 3);
		int num_altars = 1;
		int num_encounters = 1 + ((true_floor - (true_floor % 2)) / 2);

		int num_rooms = num_chests + num_altars + num_encounters;


		
		GeneratorProbe new_offshoot = GeneratorProbe(CURSOR_LIFETIME, num_rooms, cursor_x, cursor_y, heading, this);
#pragma endregion	

#pragma region populate


		for (int i = 0; i < num_encounters; i++) {
			int max_rooms = rooms.size();
			if (max_rooms > 0) {
				int rand_room = FMath::RandRange(0, max_rooms - 1);
				float room_x = rooms[rand_room].x;
				float room_y = rooms[rand_room].y;


				AEncounter* encounter = floor_info->GetEncounter();
				PlaceEncounter(encounter, room_x, room_y);

				rooms.erase(rooms.begin() + rand_room);
			}
		}

		for (int i = 0; i < num_altars; i++) {
			int max_rooms = rooms.size();
			if (max_rooms > 0) {
				int rand_room = FMath::RandRange(0, max_rooms - 1);
				float room_x = rooms[rand_room].x;
				float room_y = rooms[rand_room].y;


				//place altar here
				AEncounter* encounter = floor_info->GetEncounter();
				PlaceEncounter(encounter->AddObject(OBJECTS::Altar), room_x, room_y);

				rooms.erase(rooms.begin() + rand_room);
			}

		}

		for (int i = 0; i < num_chests; i++) {
			int max_rooms = rooms.size();
			if (max_rooms > 0) {
				int rand_room = FMath::RandRange(0, max_rooms - 1);
				float room_x = rooms[rand_room].x;
				float room_y = rooms[rand_room].y;

				//place chest here
				AEncounter* encounter = floor_info->GetEncounter();
				PlaceEncounter(encounter->AddObject(OBJECTS::Chest), room_x, room_y);

				rooms.erase(rooms.begin() + rand_room);
			}
		}
#pragma endregion



	}





	//rebuild elevator shaft

	cursor_x = (LEVEL_WIDTH * MAP_WIDTH) / 2;
	cursor_y = (LEVEL_HEIGHT * MAP_HEIGHT) / 2;


	SetTile(cursor_x, cursor_y, floor_info->wall_material, 6);
	SetTile(cursor_x, cursor_y, floor_info->floor_material, 4);


	cursor_x += (new_direction_trunc[0] * 3);
	cursor_y += (new_direction_trunc[2] * 3);

	SetTile(cursor_x, cursor_y, floor_info->floor_material, 2);
	


	//give border to floor tiles

	//loop through every individual tile
		//check if that tile is a floor tile
			//if it is, count how many neighbors it has
			//depending on how may neighbors are wall, switch the texture



	

	//loop through every individual tile






	//get tilemap
	for (int tilemap_x = 0; tilemap_x < LEVEL_WIDTH; tilemap_x++) {
		for (int tilemap_y = 0; tilemap_y < LEVEL_HEIGHT; tilemap_y++) {

			//check that tilemap is valid
			if (GetTileMap(tilemap_x, tilemap_y) != nullptr) {

				//get each individual tile
				for (int x_within_tilemap = 0; x_within_tilemap < MAP_WIDTH; x_within_tilemap++) {
					for (int y_within_tilemap = 0; y_within_tilemap < MAP_HEIGHT; y_within_tilemap++) {



						//check if that tile is a certain kind
						FPaperTileInfo target_tile = GetTileMap(tilemap_x, tilemap_y)->GetTile(x_within_tilemap, y_within_tilemap, 0);
						if (target_tile.PackedTileIndex == floor_info->wall_material) {










							//sides
							int num_sides = 0;
							{
								//if it is, count how many relevant neighbors it has
								int num_neighboring_floors = 0;
								std::vector<bool> neighbor_flags = { false,false,false,false };

								//get global coordinates of tile
								int world_x = (tilemap_x * MAP_WIDTH) + x_within_tilemap;
								int world_y = (tilemap_y * MAP_HEIGHT) + (MAP_HEIGHT - y_within_tilemap - 1);

								//check if neighbor is relevant material
								//might want to swap world_y order if we get flipped 
								
									if (GetTile(world_x, world_y + 1)->PackedTileIndex == floor_info->floor_material) {
										num_neighboring_floors++;
										neighbor_flags[0] = true;
									}
								

									if (GetTile(world_x + 1, world_y)->PackedTileIndex == floor_info->floor_material) {
										num_neighboring_floors++;
										neighbor_flags[1] = true;
									}
								

									if (GetTile(world_x, world_y - 1)->PackedTileIndex == floor_info->floor_material) {
										num_neighboring_floors++;
										neighbor_flags[2] = true;
									}
								

									if (GetTile(world_x - 1, world_y)->PackedTileIndex == floor_info->floor_material) {
										num_neighboring_floors++;
										neighbor_flags[3] = true;
									}
								

								//set overlay tile
								switch (num_neighboring_floors) {
								case 0: break;
								case 1:
									if (neighbor_flags[0]) { SetOverlayTile(world_x, world_y, OVERLAY::side_1_0, 180); }
									else if (neighbor_flags[1]) { SetOverlayTile(world_x, world_y, OVERLAY::side_1_0, 270); }
									else if (neighbor_flags[2]) { SetOverlayTile(world_x, world_y, OVERLAY::side_1_0, 0); }
									else if (neighbor_flags[3]) { SetOverlayTile(world_x, world_y, OVERLAY::side_1_0, 90); }
									break;
								case 2:

									if (neighbor_flags[0]) {
										if (neighbor_flags[1]) {
											SetOverlayTile(world_x, world_y, OVERLAY::side_2_1, 0);
										}
										else if (neighbor_flags[2]) {
											SetOverlayTile(world_x, world_y, OVERLAY::side_2_0, 270);
										}
										else if (neighbor_flags[3]) {
											SetOverlayTile(world_x, world_y, OVERLAY::side_2_1, 270);
										}
									}

									else if (neighbor_flags[1]) {
										if (neighbor_flags[2]) {
											SetOverlayTile(world_x, world_y, OVERLAY::side_2_1, 90);
										}
										else if (neighbor_flags[3]) {
											SetOverlayTile(world_x, world_y, OVERLAY::side_2_0, 0);
										}
									}

									else {
										SetOverlayTile(world_x, world_y, OVERLAY::side_2_1, 180);
									}
									break;
								case 3:

									if (!neighbor_flags[0]) { SetOverlayTile(world_x, world_y, OVERLAY::side_3_0, 0); }
									else if (!neighbor_flags[1]) { SetOverlayTile(world_x, world_y, OVERLAY::side_3_0, 90); }
									else if (!neighbor_flags[2]) { SetOverlayTile(world_x, world_y, OVERLAY::side_3_0, 180); }
									else if (!neighbor_flags[3]) { SetOverlayTile(world_x, world_y, OVERLAY::side_3_0, 270); }
									break;
								case 4:
									SetOverlayTile(world_x, world_y, OVERLAY::side_4_0, 0);
									break;
								default: ENGINEPRINT("too many floors detected in wall edging algorithm"); break;
								}


								num_sides = num_neighboring_floors;

							}








							////corners
							if (num_sides == 0)
							{
								//if it is, count how many relevant neighbors it has
								int num_neighboring_floors = 0;
								std::vector<bool> neighbor_flags = { false,false,false,false };

								//get global coordinates of tile
								int world_x = (tilemap_x * MAP_WIDTH) + x_within_tilemap;
								int world_y = (tilemap_y * MAP_HEIGHT) + (MAP_HEIGHT - y_within_tilemap - 1);

								//check if neighbor is relevant material
								//might want to swap world_y order if we get flipped 

								if (GetTile(world_x - 1, world_y + 1)->PackedTileIndex == floor_info->floor_material) {
									num_neighboring_floors++;
									neighbor_flags[0] = true;
								}


								if (GetTile(world_x + 1, world_y + 1)->PackedTileIndex == floor_info->floor_material) {
									num_neighboring_floors++;
									neighbor_flags[1] = true;
								}


								if (GetTile(world_x + 1, world_y - 1)->PackedTileIndex == floor_info->floor_material) {
									num_neighboring_floors++;
									neighbor_flags[2] = true;
								}


								if (GetTile(world_x - 1, world_y - 1)->PackedTileIndex == floor_info->floor_material) {
									num_neighboring_floors++;
									neighbor_flags[3] = true;
								}


								//set overlay tile
								switch (num_neighboring_floors) {
								case 0: break;
								case 1:
									if (neighbor_flags[0]) { SetOverlayTile(world_x, world_y, OVERLAY::corner_1_0, 180); }
									else if (neighbor_flags[1]) { SetOverlayTile(world_x, world_y, OVERLAY::corner_1_0, 270); }
									else if (neighbor_flags[2]) { SetOverlayTile(world_x, world_y, OVERLAY::corner_1_0, 0); }
									else if (neighbor_flags[3]) { SetOverlayTile(world_x, world_y, OVERLAY::corner_1_0, 90); }
									break;
								case 2:

									if (neighbor_flags[0]) {
										if (neighbor_flags[1]) {
											SetOverlayTile(world_x, world_y, OVERLAY::corner_2_1, 0);
										}
										else if (neighbor_flags[2]) {
											SetOverlayTile(world_x, world_y, OVERLAY::corner_2_0, 270);
										}
										else if (neighbor_flags[3]) {
											SetOverlayTile(world_x, world_y, OVERLAY::corner_2_1, 270);
										}
									}

									else if (neighbor_flags[1]) {
										if (neighbor_flags[2]) {
											SetOverlayTile(world_x, world_y, OVERLAY::corner_2_1, 90);
										}
										else if (neighbor_flags[3]) {
											SetOverlayTile(world_x, world_y, OVERLAY::corner_2_0, 0);
										}
									}

									else {
										SetOverlayTile(world_x, world_y, OVERLAY::corner_2_1, 180);
									}
									break;
								case 3:

									if (!neighbor_flags[0]) { SetOverlayTile(world_x, world_y, OVERLAY::corner_3_0, 0); }
									else if (!neighbor_flags[1]) { SetOverlayTile(world_x, world_y, OVERLAY::corner_3_0, 90); }
									else if (!neighbor_flags[2]) { SetOverlayTile(world_x, world_y, OVERLAY::corner_3_0, 180); }
									else if (!neighbor_flags[3]) { SetOverlayTile(world_x, world_y, OVERLAY::corner_3_0, 270); }
									break;
								case 4:
									SetOverlayTile(world_x, world_y, OVERLAY::corner_4_0, 0);
									break;
								default: ENGINEPRINT("too many floors detected in wall cornering algorithm"); break;
								}
							}

















						}
					}
				}
			}
		}
	}
	








	//rebuild terrain map
	for (int i = 0; i < TerrainMapData.Num(); i++) {
		UPaperTileMapComponent* target = TerrainMapData[i];
		if (target != nullptr) {
			target->RebuildCollision();
			target->TileMap->RebuildCollision();
		}
	}
}


void ATerrainGenerator::InitializeTileMap(int grid_x, int grid_y) {

	PRINT("Initializing tilemap")

	FPaperTileInfo TileInfo;
	TileInfo.TileSet = floor_info->LevelTileSet;
	TileInfo.PackedTileIndex = floor_info->wall_material;
	////////////////////////////////////////////////
	FPaperTileInfo OverlayTileInfo;
	OverlayTileInfo.TileSet = *LevelOverlayTileSet;
	OverlayTileInfo.PackedTileIndex = 69;


	UPaperTileMapComponent* tile = NewObject<UPaperTileMapComponent>(this, UPaperTileMapComponent::StaticClass());
	tile->RegisterComponent();
	tile->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	UPaperTileMapComponent* overlaytile = NewObject<UPaperTileMapComponent>(this, UPaperTileMapComponent::StaticClass());
	overlaytile->RegisterComponent();
	overlaytile->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);


	tile->CreateNewTileMap(MAP_WIDTH, MAP_HEIGHT, TILE_WIDTH, TILE_HEIGHT);
	//////////////////////////////////////////////////////////////////////////
	overlaytile->CreateNewTileMap(MAP_WIDTH, MAP_HEIGHT, TILE_WIDTH, TILE_HEIGHT);


	FVector placement(double(grid_x * MAP_WIDTH * TILE_WIDTH), 0.0, double(grid_y * MAP_HEIGHT * TILE_HEIGHT));
	tile->SetWorldLocation(placement);
	/////////////////////////////////////////////////////////////////////////////////////////////
	FVector overlayplacement(double(grid_x * MAP_WIDTH * TILE_WIDTH), 6.0, double(grid_y * MAP_HEIGHT * TILE_HEIGHT));

	overlaytile->SetWorldLocation(overlayplacement);


	tile->TileMap->SetCollisionThickness(10.0);
	tile->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	tile->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Block);


	UPaperTileLayer* TileLayer = NewObject<UPaperTileLayer>(tile->TileMap, UPaperTileLayer::StaticClass());
	///////////////////////////////////////////////////////////////////////////////////////////////////////
	UPaperTileLayer* TileOverlayLayer = NewObject<UPaperTileLayer>(overlaytile->TileMap, UPaperTileLayer::StaticClass());


	if (TileLayer)
	{
		TileLayer->ResizeMap(MAP_WIDTH, MAP_HEIGHT);
		tile->TileMap->TileLayers.Add(TileLayer);
	}
	/////////////////////////////////////////////////
	if (TileOverlayLayer) {
		TileOverlayLayer->ResizeMap(MAP_WIDTH, MAP_HEIGHT);
		overlaytile->TileMap->TileLayers.Add(TileOverlayLayer);
	}



	for (int xxx = 0; xxx < MAP_WIDTH; xxx++) {
		for (int yyy = 0; yyy < MAP_HEIGHT; yyy++) {
			TileInfo.PackedTileIndex = floor_info->void_material;
			tile->TileMap->TileLayers[0]->SetCell(xxx, yyy, TileInfo);
		}
	}
	///////////////////////////////////////
	for (int xxx = 0; xxx < MAP_WIDTH; xxx++) {
		for (int yyy = 0; yyy < MAP_HEIGHT; yyy++) {
			overlaytile->TileMap->TileLayers[0]->SetCell(xxx, yyy, OverlayTileInfo);
		}
	}



	tile->TileMap->MarkPackageDirty();
	tile->MarkPackageDirty();
	//
	overlaytile->TileMap->MarkPackageDirty();
	overlaytile->MarkPackageDirty();



	SetTileMap(grid_x, grid_y, tile);

	int index = (grid_x * LEVEL_HEIGHT) + grid_y;
	TerrainOverlayMapData[index] = overlaytile;


}

// Called every frame
void ATerrainGenerator::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

