#include "GPIntrusionCaves.h"
#include"TerrainGenerator.h"


void UGPIntrusionCaves::GenerateLevel() {


	while (lifetime > 0) {
		float width = FMath::FRandRange(3.0, 6.0);
		float length = FMath::FRandRange(10.0, 20.0);
		DrawWindyLine(length, width, 30, DefaultFloorMaterial());

		float turn_chance = FMath::FRandRange(0.0, 100.0);
		float turn_likelihood = 90.0;

		float offshoot_chance = FMath::FRandRange(0.0, 100.0);
		float offshoot_likelihood = 50.0;

		float mineshaft_length0 = FMath::FRandRange(10.0, 30.0);
		float mineshaft_length1 = FMath::FRandRange(10.0, 30.0);


		if (turn_chance > turn_likelihood) {
			UGPIntrusionCaves* offshoot = NewObject<UGPIntrusionCaves>(this);
			offshoot->first = false;
			offshoot->Init(lifetime, num_rooms, cursor_x, cursor_y, heading + ((FMath::RandBool() * 180) - 90) + FMath::FRandRange(-5.0, 5.0), parent);
			lifetime = 0;
		}
		else if (offshoot_chance > offshoot_likelihood) {
			UGPIntrusionCaves* offshoot = NewObject<UGPIntrusionCaves>(this);
			offshoot->first = false;
			offshoot->Init(lifetime / 2, num_rooms, cursor_x, cursor_y, heading + ((FMath::RandBool() * 180) - 90) + FMath::FRandRange(-5.0, 5.0), parent);
			lifetime -= lifetime / 2;
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