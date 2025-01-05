// Fill out your copyright notice in the Description page of Project Settings.


#include "GPLabyrinth.h"
#include"TerrainGenerator.h"


void UGPLabyrinth::GenerateLevel() {
	SetHeading(90 * FMath::RandHelper(4));



	for (int i = 0; i < lifetime; i++) {
		DrawLineF(direction, 20, 2);

		float offshoot_chance = FMath::FRandRange(0.0, 100.0);
		float offshoot_lifetime = lifetime - i;

		if ((offshoot_chance >= 80-(offshoot_lifetime*2))&&(offshoot_lifetime > 2)){

			
			float sign = ((int)FMath::RandBool() * 2) - 1;

			UGPLabyrinth* offshoot = NewObject<UGPLabyrinth>(this);
			offshoot->Init(offshoot_lifetime, num_rooms, cursor_x, cursor_y, heading + (90 * sign), parent);

			if (FMath::FRandRange(0.0,100.0) > 90) {
				parent->MakeIrregularRoom(cursor_x, cursor_y, 5, 5, 2);

			}
		}
	}

	if (FMath::FRandRange(0.0, 100.0) > 80) {
		parent->MakeIrregularRoom(cursor_x, cursor_y, 5, 5, 2);

	}





}