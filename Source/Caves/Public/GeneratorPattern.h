// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

class ATerrainGenerator;

enum Abstract {
	type_floor = 0,
	type_wall = 1,
	type_void = 2,
};

enum Material {
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


};



#include "CoreMinimal.h"


const TMap<int, int> MaterialTypes = {
	{Material::tile,Abstract::type_floor},
	{Material::bark,Abstract::type_wall},
	{Material::blackstone,Abstract::type_void},	
	{Material::mossy_stone_brick,Abstract::type_floor},
	{Material::stone_brick,Abstract::type_wall},
	{Material::black_stone_brick,Abstract::type_void},
	{Material::carpet,Abstract::type_floor},
	{Material::sandstone_brick,Abstract::type_wall},
	{Material::dark_sandstone_brick,Abstract::type_void},
	{Material::dirt,Abstract::type_floor},
	{Material::wood_planks,Abstract::type_floor},
	{Material::grass,Abstract::type_void},

	{Material::dwarven_stone_brick,Abstract::type_floor},
	{Material::dwarven_stone_wall,Abstract::type_wall},
	{Material::rock,Abstract::type_void},
	{Material::lab_tile,Abstract::type_floor},
	{Material::lab_wall,Abstract::type_wall},
	{Material::arctic_stone,Abstract::type_void},
	{Material::catacomb_floor,Abstract::type_floor},
	{Material::catacomb_wall,Abstract::type_wall},
	{Material::skull_void,Abstract::type_void},
	{Material::pentagram_tile,Abstract::type_floor},
	{Material::hell_wall,Abstract::type_wall},
	{Material::hell_void,Abstract::type_void},

	{Material::snow,Abstract::type_floor},
	{Material::ice,Abstract::type_wall},
	{Material::deep_frost,Abstract::type_void},
	{Material::fungal_grass,Abstract::type_floor},
	{Material::bamboo,Abstract::type_wall},
	{Material::leaves,Abstract::type_void},
	{Material::computer_floor,Abstract::type_floor},
	{Material::metal_wall,Abstract::type_wall},
	{Material::gears,Abstract::type_void},
	{Material::spaceship_tile,Abstract::type_floor},
	{Material::spaceship_wall,Abstract::type_wall},
	{Material::space,Abstract::type_void},

	{Material::white_flag,Abstract::type_floor},
	{Material::red_flag,Abstract::type_wall},
	{Material::blue_flag,Abstract::type_void},
	{Material::heaven_cobble,Abstract::type_floor},
	{Material::heaven_wall,Abstract::type_wall},
	{Material::clouds,Abstract::type_void},
	{Material::dark_tile,Abstract::type_floor},
	{Material::dark_stone,Abstract::type_wall},
	{Material::eyes,Abstract::type_void},
	{Material::plasma,Abstract::type_floor},
	{Material::lattice,Abstract::type_wall},
	{Material::cosmos,Abstract::type_void},

	{Material::vegetation,Abstract::type_void},
	{Material::wood,Abstract::type_floor},
	{Material::light_dirt,Abstract::type_floor},
	{Material::stone,Abstract::type_wall },
	{Material::asphalt,Abstract::type_floor},

	{Material::dirt_cliff,Abstract::type_wall},
	{Material::cobblestone,Abstract::type_floor},
	{Material::shingles,Abstract::type_wall},
	{Material::siding,Abstract::type_wall},
	{Material::magma,Abstract::type_void},
	{Material::sewer_water,Abstract::type_floor},
	
};


#define DefaultFloorType parent->floor_info->floor_material
#define DefaultWallType parent->floor_info->wall_material
#define DefaultVoidType parent->floor_info->void_material




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

	virtual void PopulateLevel() {};

	int num_rooms;
	int lifetime;
	float cursor_x;
	float cursor_y;
	float heading;
	FVector2d direction = {0,1};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ATerrainGenerator* parent = nullptr;

	void Init(int _lifetime, int _num_rooms, float _cursor_x, float _cursor_y, float _heading, ATerrainGenerator* _parent) {
		num_rooms = _num_rooms;
		lifetime = _lifetime;
		cursor_x = _cursor_x;
		cursor_y = _cursor_y;
		heading = _heading;
		parent = _parent;

		direction = { 1, 0 };

		GenerateLevel();
	}

	FVector2D CurrentLocation() {
		return { cursor_x, cursor_y };
	}

	void MoveCursor(FVector2D input_direction, float distance) {
		cursor_x += input_direction[0] * distance;
		cursor_y += input_direction[1] * distance;
	}

	void SetCursor(FVector2D input_location) {
		cursor_x = input_location[0];
		cursor_y = input_location[1];
	}

	void DrawLineF(FVector2D input_direction, float distance, float width);
	void DrawLineA(FVector2D input_direction, float distance, float width, Material material);

};
