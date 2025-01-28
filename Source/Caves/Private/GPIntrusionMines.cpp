#include "GPIntrusionMines.h"
#include"TerrainGenerator.h"


void UGPIntrusionMines::GenerateLevel() {


	while (lifetime > 0) {

		float length = FMath::FRandRange(10.0, 20.0);
		DrawLine(direction, length, 5, DefaultFloorMaterial());

		float turn_chance = FMath::FRandRange(0.0, 100.0);
		float turn_likelihood = 90.0;
		
		float offshoot_chance = FMath::FRandRange(0.0, 100.0);
		float offshoot_likelihood = 70.0;

		float mineshaft_length0 = FMath::FRandRange(10.0, 30.0);
		float mineshaft_length1 = FMath::FRandRange(10.0, 30.0);


		if (turn_chance > turn_likelihood) {
			UGPIntrusionMines* offshoot = NewObject<UGPIntrusionMines>(this);
			offshoot->first = false;
			offshoot->Init(lifetime, num_rooms, cursor_x, cursor_y, heading + ((FMath::RandBool() * 180) - 90), parent);
			lifetime = 0;
		}
		else if (offshoot_chance > offshoot_likelihood) {
			UGPIntrusionMines* offshoot = NewObject<UGPIntrusionMines>(this);
			offshoot->first = false;
			offshoot->Init(lifetime/2, num_rooms, cursor_x, cursor_y, heading + ((FMath::RandBool() * 180) - 90), parent);
			lifetime -=lifetime/2;
		}
		else {
			DrawLine(perp, mineshaft_length0, 2, DefaultFloorMaterial());
			DrawLine(-perp, mineshaft_length1, 2, DefaultFloorMaterial());
		}


		lifetime--;
	}


	if (first) {
		end_loc = CurrentLocation();
	}

}


//void UGPTemplate::PopulateLevel(int num_chests, int num_altars, int num_encounters) {
//
//}