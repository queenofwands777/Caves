// Fill out your copyright notice in the Description page of Project Settings.


#include "GPMarket.h"
#include "TerrainGenerator.h"
#include"GPHousesOnAStreet.h"

void UGPMarket::GenerateLevel() {

	SetHeading(90 * FMath::RandHelper(4));


	UGPHousesOnAStreet* street = NewObject<UGPHousesOnAStreet>(this);
	street->Init(7, 0, cursor_x, cursor_y, heading, parent);

	cursor_x = street->cursor_x;
	cursor_y = street->cursor_y;

	cursor_x += 16 * direction[0];
	cursor_y += 16 * direction[1];
	parent->SetTile(cursor_x, cursor_y, parent->floor_info->floor_material, 36, true);

	UGPHousesOnAStreet* street_0 = NewObject<UGPHousesOnAStreet>(this);
	street_0->Init(4, 0, cursor_x, cursor_y, int(heading + 90)%360, parent);

	UGPHousesOnAStreet* street_1 = NewObject<UGPHousesOnAStreet>(this);
	street_1->Init(4, 0, cursor_x, cursor_y, heading, parent);

	UGPHousesOnAStreet* street_2 = NewObject<UGPHousesOnAStreet>(this);
	street_2->Init(4, 0, cursor_x, cursor_y, int(heading - 90) % 360, parent);

	cursor_x = street_0->cursor_x;
	cursor_y = street_0->cursor_y;
	cursor_x += 20 * street_0->direction[0];
	cursor_y += 20 * street_0->direction[1];
	parent->MakeIrregularRoom(cursor_x, cursor_y, 32, 32, 4);

	cursor_x = street_2->cursor_x;
	cursor_y = street_2->cursor_y;
	cursor_x += 20 * street_2->direction[0];
	cursor_y += 20 * street_2->direction[1];
	parent->MakeIrregularRoom(cursor_x, cursor_y, 32, 32, 4);

	cursor_x = street_1->cursor_x;
	cursor_y = street_1->cursor_y;


}
