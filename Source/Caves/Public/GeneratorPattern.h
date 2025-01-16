// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

class ATerrainGenerator;

enum OBJECTS {
	Exit = 0,
	Chest = 1,
	Altar = 2,
	Elevator = 3,
	ElevatorDoor = 4,
	Shelf = 5,
	PlayerSpawn = 6
};

enum Abstract {
	type_floor = 0,
	type_wall = 1,
	type_void = 2,
};


enum MaterialType {
	tile = 0,
	bark = 1,
	blackstone = 2,
	mossy_stone_brick = 3,
	stone_brick = 4,
	black_stone_brick = 5,
	carpet = 6,
	sandstone_brick = 7,
	dark_sandstone_brick = 8,
	dirt = 9,
	wood_planks = 10,
	grass = 11,

	dwarven_stone_brick = 12,
	dwarven_stone_wall = 13,
	rock = 14,
	lab_tile = 15,
	lab_wall = 16, 
	arctic_stone = 17,
	catacomb_floor = 18,
	catacomb_wall = 19,
	skull_void = 20,
	pentagram_tile = 21,
	hell_wall = 22,
	hell_void = 23,

	snow = 24,
	ice = 25,
	deep_frost = 26,
	fungal_grass = 27,
	bamboo = 28, 
	leaves = 29,
	computer_floor = 30,
	metal_wall = 31,
	gears = 32,
	spaceship_tile = 33,
	spaceship_wall = 34,
	space = 35,

	white_flag = 36,
	red_flag = 37,
	blue_flag = 38,
	heaven_cobble = 39,
	heaven_wall = 40,
	clouds = 41,
	dark_tile = 42,
	dark_stone = 43,
	eyes = 44,
	plasma= 45,
	lattice = 46,
	cosmos = 47,

	vegetation = 48,
	wood = 49,
	light_dirt = 50,
	stone = 51,
	asphalt = 52,
	dirt_cliff = 53,
	cobblestone = 54,
	shingles = 55,
	siding = 56,
	magma = 57,
	sewer_water = 58,
	rusty_metal = 59,
	stone_bricks = 60,
};



#include "CoreMinimal.h"


const TMap<int, int> MaterialTypes = {
	{MaterialType::tile,Abstract::type_floor},
	{MaterialType::bark,Abstract::type_wall},
	{MaterialType::blackstone,Abstract::type_void},	
	{MaterialType::mossy_stone_brick,Abstract::type_floor},
	{MaterialType::stone_brick,Abstract::type_wall},
	{MaterialType::black_stone_brick,Abstract::type_void},
	{MaterialType::carpet,Abstract::type_floor},
	{MaterialType::sandstone_brick,Abstract::type_wall},
	{MaterialType::dark_sandstone_brick,Abstract::type_void},
	{MaterialType::dirt,Abstract::type_floor},
	{MaterialType::wood_planks,Abstract::type_floor},
	{MaterialType::grass,Abstract::type_void},

	{MaterialType::dwarven_stone_brick,Abstract::type_floor},
	{MaterialType::dwarven_stone_wall,Abstract::type_wall},
	{MaterialType::rock,Abstract::type_void},
	{MaterialType::lab_tile,Abstract::type_floor},
	{MaterialType::lab_wall,Abstract::type_wall},
	{MaterialType::arctic_stone,Abstract::type_void},
	{MaterialType::catacomb_floor,Abstract::type_floor},
	{MaterialType::catacomb_wall,Abstract::type_wall},
	{MaterialType::skull_void,Abstract::type_void},
	{MaterialType::pentagram_tile,Abstract::type_floor},
	{MaterialType::hell_wall,Abstract::type_wall},
	{MaterialType::hell_void,Abstract::type_void},

	{MaterialType::snow,Abstract::type_floor},
	{MaterialType::ice,Abstract::type_wall},
	{MaterialType::deep_frost,Abstract::type_void},
	{MaterialType::fungal_grass,Abstract::type_floor},
	{MaterialType::bamboo,Abstract::type_wall},
	{MaterialType::leaves,Abstract::type_void},
	{MaterialType::computer_floor,Abstract::type_floor},
	{MaterialType::metal_wall,Abstract::type_wall},
	{MaterialType::gears,Abstract::type_void},
	{MaterialType::spaceship_tile,Abstract::type_floor},
	{MaterialType::spaceship_wall,Abstract::type_wall},
	{MaterialType::space,Abstract::type_void},

	{MaterialType::white_flag,Abstract::type_floor},
	{MaterialType::red_flag,Abstract::type_wall},
	{MaterialType::blue_flag,Abstract::type_void},
	{MaterialType::heaven_cobble,Abstract::type_floor},
	{MaterialType::heaven_wall,Abstract::type_wall},
	{MaterialType::clouds,Abstract::type_void},
	{MaterialType::dark_tile,Abstract::type_floor},
	{MaterialType::dark_stone,Abstract::type_wall},
	{MaterialType::eyes,Abstract::type_void},
	{MaterialType::plasma,Abstract::type_floor},
	{MaterialType::lattice,Abstract::type_wall},
	{MaterialType::cosmos,Abstract::type_void},

	{MaterialType::vegetation,Abstract::type_void},
	{MaterialType::wood,Abstract::type_floor},
	{MaterialType::light_dirt,Abstract::type_floor},
	{MaterialType::stone,Abstract::type_wall },
	{MaterialType::asphalt,Abstract::type_floor},

	{MaterialType::dirt_cliff,Abstract::type_wall},
	{MaterialType::cobblestone,Abstract::type_floor},
	{MaterialType::shingles,Abstract::type_wall},
	{MaterialType::siding,Abstract::type_wall},
	{MaterialType::magma,Abstract::type_void},
	{MaterialType::sewer_water,Abstract::type_floor},
	{MaterialType::rusty_metal, Abstract::type_wall},
	{MaterialType::stone_bricks, Abstract::type_floor},
	
};






#include "GameFramework/Actor.h"
#include "GeneratorPattern.generated.h"

UCLASS(Blueprintable, Abstract)
class CAVES_API UGeneratorPattern : public UObject
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	UGeneratorPattern();


	virtual void GenerateLevel(){};

	virtual void PopulateLevel(int num_chests, int num_altars, int num_encounters);

	int num_rooms;
	int lifetime;
	float cursor_x;
	float cursor_y;
	float heading;
	bool has_exit = false;
	FVector2D direction = {0,1};
	FVector2D perp;
	FVector2D start_loc;
	FVector2D end_loc;
	FVector2D center_loc;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ATerrainGenerator* parent = nullptr;

	void Init(int _lifetime, int _num_rooms, float _cursor_x, float _cursor_y, float _heading, ATerrainGenerator* _parent) {
		num_rooms = _num_rooms;
		lifetime = _lifetime;
		cursor_x = _cursor_x;
		cursor_y = _cursor_y;
		heading = _heading;
		parent = _parent;
		start_loc = { cursor_x, cursor_y };

		SetHeading(heading);

		GenerateLevel();
	}

	FVector2D CurrentLocation() {
		return { cursor_x, cursor_y };
	}
	MaterialType DefaultFloorMaterial();
	MaterialType DefaultWallMaterial();

	MaterialType DefaultVoidMaterial();

	void PlaceObject(FVector2D location, OBJECTS object, FRotator rotation);
	void PlaceObject(FVector2D location, OBJECTS object) {
		PlaceObject(location, object, { 0,0,0 });
	}

	void MoveCursor(FVector2D input_direction, float distance) {
		cursor_x += input_direction[0] * distance;
		cursor_y += input_direction[1] * distance;
	}

	void MoveCursor(float distance) {
		MoveCursor(direction, distance);
	}

	void SetCursor(FVector2D input_location) {
		cursor_x = input_location[0];
		cursor_y = input_location[1];
	}

	void DrawLineF(FVector2D input_direction, float distance, float width);
	void DrawLine(FVector2D input_direction, float distance, float width, MaterialType material);

	void DrawDot(int size, MaterialType material, FVector2D input_location);
	void DrawDot(int size, MaterialType material);
	void DrawDot(int size) { DrawDot(size, DefaultFloorMaterial()); }

	void SetHeading(float new_heading);
	void ChangeHeading(float delta_degrees);

	void PlaceSpawn(FVector2D location);
	void PlaceSpawn() { PlaceSpawn(CurrentLocation()); }
	void PlaceExit(FVector2D location);
	void PlaceExit() { PlaceExit(CurrentLocation()); }
};
