#include "GPIntrusion.h"
#include"TerrainGenerator.h"
#include"GPIntrusionCaves.h"
#include"GPIntrusionMines.h"

void UGPIntrusion::GenerateLevel() {

	DrawDot(7);
	PlaceSpawn();

	UGPIntrusionMines* mines = NewObject<UGPIntrusionMines>(this);
	mines->Init(8, 5, cursor_x, cursor_y, 90 * FMath::RandHelper(4), parent);
	SetCursor(mines->end_loc);


	UGPIntrusionCaves* caves = NewObject<UGPIntrusionCaves>(this);
	caves->Init(12, 5, cursor_x, cursor_y, heading, parent);
	SetCursor(caves->end_loc);

	DrawDot(7);
	PlaceExit();

}


//void UGPTemplate::PopulateLevel(int num_chests, int num_altars, int num_encounters) {
//
//}