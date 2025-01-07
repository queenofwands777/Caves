// Fill out your copyright notice in the Description page of Project Settings.


#include "GPElevator.h"
#include "TerrainGenerator.h"

void UGPElevator::GenerateLevel() {

	FVector elevator_location = { float((cursor_x - 2) * parent->TILE_SIZE) + (1.5 * parent->TILE_SIZE), 0.1, float((cursor_y)*parent->TILE_SIZE) - (15.5 * parent->TILE_SIZE) };
	FVector spawn_location = { float((cursor_x - 2) * parent->TILE_SIZE) + (1.5 * parent->TILE_SIZE), 4, float((cursor_y)*parent->TILE_SIZE) - (15.5 * parent->TILE_SIZE) };

	GetWorld()->SpawnActor<AActor>(parent->floor_info->EssentialObjects[OBJECTS::Elevator], elevator_location, { 0,0,0 });
	GetWorld()->SpawnActor<AActor>(parent->floor_info->EssentialObjects[OBJECTS::PlayerSpawn], spawn_location, { 0,0,0 });

	MoveCursor(direction, 3);

	FVector elevator_door_location = { float(cursor_x * parent->TILE_SIZE) - (FMath::Sign(direction[0]) * parent->TILE_SIZE / 2) - 8, 1, float(cursor_y * parent->TILE_SIZE) - (16 * parent->TILE_SIZE) + 8 };
	FRotator elevator_door_rotation = { FMath::Sign(direction[0]) * 90,0,0 };
	GetWorld()->SpawnActor<AActor>(parent->floor_info->EssentialObjects[OBJECTS::ElevatorDoor], elevator_door_location, elevator_door_rotation);


	MoveCursor(direction, 5);

	FVector2D center_of_map = { float((parent->LEVEL_SIZE * parent->MAP_SIZE) / 2 ),float ((parent->LEVEL_SIZE * parent->MAP_SIZE) / 2 )};
	SetCursor(center_of_map);


	parent->SetTile(cursor_x, cursor_y, parent->floor_info->floor_material, 12, true);
	parent->SetTile(cursor_x, cursor_y, parent->floor_info->wall_material, 6, false);
	parent->SetTile(cursor_x, cursor_y, parent->floor_info->floor_material, 4, true);


	MoveCursor(direction, 3);

	DrawDot(2, DefaultFloorMaterial());








}