// Fill out your copyright notice in the Description page of Project Settings.


#include "GPHousesOnAStreet.h"
#include"TerrainGenerator.h"

void UGPHousesOnAStreet::GenerateLevel() {


	float rotation_radians = FMath::DegreesToRadians(heading);
	FVector2D new_direction = {
		(direction[0] * FMath::Cos(rotation_radians)) - (direction[1] * FMath::Sin(rotation_radians)),
		(direction[0] * FMath::Sin(rotation_radians)) + (direction[1] * FMath::Cos(rotation_radians))
	};
	direction = new_direction;

	FVector2D perp = { -direction[1], direction[0] };
	FVector2D other_perp = -perp;

	TArray<FVector2D> house_locations;

	for(int i = 0; i < 2; i++){
		cursor_x += new_direction[0] * 8;
		cursor_y += new_direction[1] * 8;

		parent->SetTile(cursor_x, cursor_y, Material::cobblestone, 32, true);
	}

	for (int i = 0; i < lifetime; i++) {

		cursor_x += new_direction[0] * 8;
		cursor_y += new_direction[1] * 8;

		parent->SetTile(cursor_x, cursor_y, Material::cobblestone, 32, true);

		if (i % 2) {
			FVector2D startloc = { cursor_x, cursor_y };
			house_locations.Add(startloc);

		}

	}

	for (int i = 0; i < house_locations.Num(); i++) {
		
		FVector2D house_location =		 { house_locations[i][0] + (perp      [0] * 10) + FMath::FRandRange(-1.0,1.0), house_locations[i][1] + (perp[1] * 10) + FMath::FRandRange(-1.0,1.0) };
		FVector2D other_house_location = { house_locations[i][0] + (other_perp[0] * 10) + FMath::FRandRange(-1.0,1.0), house_locations[i][1] + (other_perp[1] * 10) + FMath::FRandRange(-1.0,1.0) };

		parent->SetTile(house_location[0], house_location[1], Material::shingles, 8, false);
		parent->SetTile(other_house_location[0], other_house_location[1], Material::shingles, 8, false);

	}



}