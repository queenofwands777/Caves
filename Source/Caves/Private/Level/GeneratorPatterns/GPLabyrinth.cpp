// Fill out your copyright notice in the Description page of Project Settings.


#include "GPLabyrinth.h"
#include"TerrainGenerator.h"


void UGPLabyrinth::GenerateLevel() {
	SetHeading(90 * FMath::RandHelper(4));

	if (first) {
		PlaceExit();
		DrawDot(7);
		MoveCursor(direction, 3);
		PlaceSpawn();
	}


	while (lifetime > 0) {
		lifetime -= 1;

		DrawLineF(direction, 16, 2);
		float offshoot_chance = FMath::FRandRange(0.0, 100.0);
		float sign = ((int)FMath::RandBool() * 2) - 1;

		if ((offshoot_chance >= 20)&&offshoot_chance < 40) {
			float offshoot_lifetime = lifetime / 2;
			lifetime -= offshoot_lifetime;

			UGPLabyrinth* offshoot = NewObject<UGPLabyrinth>(this);
			offshoot->first = false;
			offshoot->Init(offshoot_lifetime, num_rooms, cursor_x, cursor_y, heading + (90 * sign), parent);


		}

		else if (offshoot_chance >= 40) {
			UGPLabyrinth* offshoot = NewObject<UGPLabyrinth>(this);
			offshoot->first = false;
			offshoot->Init(lifetime, num_rooms, cursor_x, cursor_y, heading + (90 * sign), parent);


			lifetime = 0;
		}




	}


	if (FMath::FRandRange(0.0, 100.0) > 90) {
		parent->MakeIrregularRoom(cursor_x, cursor_y, 5, 5, 2);

	}








}