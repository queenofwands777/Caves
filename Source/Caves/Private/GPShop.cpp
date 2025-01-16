// Fill out your copyright notice in the Description page of Project Settings.


#include "GPShop.h"
#include"TerrainGenerator.h"


void UGPShop::GenerateLevel() {

	SetHeading(90 * FMath::RandHelper(4));


	PlaceSpawn();
	DrawLineF(direction, 27, 12);

	PlaceExit();

	DrawLineF(direction, 3, 12);

	 



}

void UGPShop::PopulateLevel(int num_chests, int num_altars, int num_encounters) {

	SetCursor(start_loc);

		int num_rows = 7;
		for (int i = 0; i < num_rows; i++) {

			MoveCursor(direction, 1);
			FVector2D shelf_point = CurrentLocation();

			MoveCursor(perp, 4);
			PlaceObject(CurrentLocation(), OBJECTS::Shelf);
			SetCursor(shelf_point);

			MoveCursor(perp, -4);
			PlaceObject(CurrentLocation(), OBJECTS::Shelf);
			SetCursor(shelf_point);

			MoveCursor(direction, 2);
		}

}