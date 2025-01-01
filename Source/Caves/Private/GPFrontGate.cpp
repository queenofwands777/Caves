// Fill out your copyright notice in the Description page of Project Settings.


#include "GPFrontGate.h"
#include"TerrainGenerator.h"



void UGPFrontGate::GenerateLevel() {


	float rotation_radians = FMath::DegreesToRadians(heading);

	FVector2D new_direction = {
		(direction[0] * FMath::Cos(rotation_radians)) - (direction[1] * FMath::Sin(rotation_radians)),
		(direction[0] * FMath::Sin(rotation_radians)) + (direction[1] * FMath::Cos(rotation_radians))
	};
	direction = new_direction;



	float wall_thickness = 2;




	//make starting gate in a line perpendicular to the direction

	//from starting point, cast two opposite probes following the vector above
	//while the probe moves, place wall material
	//when the probe hits a wall, destroy probe
	//in the very middle of the wall, create an opening


	FVector2D perp = { -direction[1], direction[0]};
	FVector2D other_perp = -perp;

	FVector2D starting_point = { cursor_x, cursor_y };

	//bool running = true;
	cursor_x += perp[0] * wall_thickness;
	cursor_y += perp[1] * wall_thickness;
	for (int i = 0; i < 20; i++) {
		

		//FHitResult HitResult;
		//FCollisionQueryParams CollisionParams;

		//bool bHit = GetWorld()->LineTraceSingleByChannel(
		//	HitResult,               // Out parameter for hit result
		//	{((cursor_x+(wall_thickness*perp[0]))) * parent->TILE_SIZE, 2, (cursor_y + (wall_thickness*perp[1])) * parent->TILE_SIZE},                   // Start of the trace
		//	{(cursor_x + (perp[0] * (10*wall_thickness))), 2, (cursor_y + (perp[1] * (10 * wall_thickness))) },                     // End of the trace
		//	ECC_GameTraceChannel1,          // Collision channel
		//	CollisionParams          // Collision parameters
		//);

		//if (HitResult.bBlockingHit) {
		//	running = false;
		//}

		parent->SetTile(cursor_x, cursor_y, parent->floor_info->wall_material, wall_thickness, false);
		cursor_x += perp[0];
		cursor_y += perp[1];
	}

	cursor_x = starting_point[0];
	cursor_y = starting_point[1];

	cursor_x += other_perp[0] * wall_thickness;
	cursor_y += other_perp[1] * wall_thickness;
	//running = true;
	for (int i = 0; i < 20; i++) {


		//FHitResult HitResult;
		//FCollisionQueryParams CollisionParams;

		//bool bHit = GetWorld()->LineTraceSingleByChannel(
		//	HitResult,               // Out parameter for hit result
		//	{ ((cursor_x + (wall_thickness * other_perp[0]))) * parent->TILE_SIZE, 2, (cursor_y + (wall_thickness * other_perp[1])) * parent->TILE_SIZE },                     // Start of the trace
		//	{ (cursor_x + (other_perp[0] * (10 * wall_thickness))), 2, (cursor_y + (other_perp[1] * (10 * wall_thickness))) },                     // End of the trace
		//	ECC_GameTraceChannel1,          // Collision channel
		//	CollisionParams          // Collision parameters
		//);

		//if (HitResult.bBlockingHit) {
		//	running = false;
		//}

		parent->SetTile(cursor_x, cursor_y, parent->floor_info->wall_material, wall_thickness, false);
		cursor_x += other_perp[0];
		cursor_y += other_perp[1];
	}


	cursor_x = starting_point[0];
	cursor_y = starting_point[1];

	//parent->SetTile(cursor_x, cursor_y, parent->floor_info->floor_material, wall_thickness * 2, false);


}