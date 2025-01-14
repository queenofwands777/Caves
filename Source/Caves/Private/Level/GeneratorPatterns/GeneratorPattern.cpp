// Fill out your copyright notice in the Description page of Project Settings.


#include "GeneratorPattern.h"
#include"TerrainGenerator.h"

// Sets default values
UGeneratorPattern::UGeneratorPattern()
{


}


void UGeneratorPattern::DrawLineF(FVector2D input_direction, float distance, float width) {
	for (float i = 0; i < distance; i += 1) {
		parent->SetTile(cursor_x, cursor_y, DefaultFloorMaterial(), width, true);
		MoveCursor(input_direction, 1);
	}
}



void UGeneratorPattern::DrawLine(FVector2D input_direction, float distance, float width, MaterialType material) {
	for (float i = 0; i < distance; i += 1) {
		parent->SetTile(cursor_x, cursor_y, material, width, true);
		MoveCursor(input_direction, 1);
	}
}

void UGeneratorPattern::DrawDot(int size, MaterialType material, FVector2D input_location) {
	int is_odd = size % 2;
	int is_even = 1 - is_odd;
	float offset_x = ((size - is_odd)/2) - is_even;
	float offset_y = ((size - is_odd) / 2) - is_even;
	
	for (int x = 0; x < size; x++) {
		for (int y = 0; y < size; y++) {
			parent->SetTile(input_location[0] + offset_x + x, input_location[1] + offset_y + y, material, 1, MaterialTypes[material] == Abstract::type_floor);
		}
	}
}


void UGeneratorPattern::DrawDot(int size, MaterialType material) {
	int is_odd = size % 2;
	int is_even = 1 - is_odd;
	float offset_x = -(((size - is_odd) / 2) - is_even);
	float offset_y = -(((size - is_odd) / 2) - is_even);

	for (int x = 0; x < size; x++) {
		for (int y = 0; y < size; y++) {
			parent->SetTile(cursor_x + offset_x + x, cursor_y + offset_y + y, material, 1, MaterialTypes[material] == Abstract::type_floor);
		}
	}
}

void UGeneratorPattern::SetHeading(float new_heading) {
	heading = new_heading;
	float rotation_radians = FMath::DegreesToRadians(heading);

	FVector2D unit_vec = {1,0};

	FVector2D new_direction = {
		(unit_vec[0] * FMath::Cos(rotation_radians)) - (unit_vec[1] * FMath::Sin(rotation_radians)),
		(unit_vec[0] * FMath::Sin(rotation_radians)) + (unit_vec[1] * FMath::Cos(rotation_radians))
	};
	direction = new_direction;
	perp = { -direction[1], direction[0] };

}

void UGeneratorPattern::ChangeHeading(float delta_heading) {
	heading += delta_heading;
	SetHeading(heading);
}

void UGeneratorPattern::PlaceSpawn(FVector2D location) {
	FVector spawn_location = { float((location[0] - 2) * parent->TILE_SIZE) + (1.5 * parent->TILE_SIZE), 4, float((location[1]) * parent->TILE_SIZE) - (15.5 * parent->TILE_SIZE)};
	GetWorld()->SpawnActor<AActor>(parent->floor_info->EssentialObjects[OBJECTS::PlayerSpawn], spawn_location, { 0,0,0 });

}void UGeneratorPattern::PlaceExit(FVector2D location) {
	FVector exit_location = { float((location[0] - 2) * parent->TILE_SIZE) + (1.5 * parent->TILE_SIZE), 0.1, float((location[1]) * parent->TILE_SIZE) - (15.5 * parent->TILE_SIZE)};
	GetWorld()->SpawnActor<AActor>(parent->floor_info->EssentialObjects[OBJECTS::Exit], exit_location, { 0,0,0 });

	has_exit = true;

}

MaterialType UGeneratorPattern::DefaultFloorMaterial() {
	return (MaterialType)parent->floor_info->floor_material;
}

MaterialType UGeneratorPattern::DefaultWallMaterial() {
	return (MaterialType)parent->floor_info->wall_material;
}

MaterialType UGeneratorPattern::DefaultVoidMaterial() {
	return (MaterialType)parent->floor_info->void_material;
}