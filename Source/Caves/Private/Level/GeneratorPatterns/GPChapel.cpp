// Fill out your copyright notice in the Description page of Project Settings.


#include "GPChapel.h"
#include"TerrainGenerator.h"

void UGPChapel::GenerateLevel() {

	SetHeading(90 * FMath::RandHelper(4));

	DrawLineF(direction, 20, 2);

	float chapel_width = 4;
	float step_width = 4;
	float segment_size = 8;
	float total_width = (segment_size/2) * step_width * chapel_width;
	float chapel_length = 12;

	for (float i = -chapel_width; i <= chapel_width; i += 1.0) {

		parent->SetTile(cursor_x + (perp[0] * i * step_width), cursor_y + (perp[1] * i * step_width), parent->floor_info->floor_material, segment_size, true);

	}


	MoveCursor(direction, 6);

	parent->SetTile(cursor_x + (perp[0] * (total_width/6)), cursor_y + (perp[1] * (total_width / 6)), parent->floor_info->floor_material, 4, true);
	parent->SetTile(cursor_x + (-perp[0] * (total_width/6)), cursor_y + (-perp[1] * (total_width / 6)), parent->floor_info->floor_material, 4, true);

	MoveCursor(direction, 6);


	for (float l = 0; l < chapel_length; l += 1.0) {

		for (float w = -chapel_width; w <= chapel_width; w += 1.0) {

			parent->SetTile(cursor_x + (perp[0] * w * step_width), cursor_y + (perp[1] * w * step_width), parent->floor_info->floor_material, segment_size, true);

		}
		MoveCursor(direction, 4);

	}


	for (float w = -(chapel_width/2); w <= (chapel_width/2); w += 1.0) {

		parent->SetTile(cursor_x + (perp[0] * w * step_width) + (direction[0] * 6), cursor_y + (perp[1] * w * step_width) + (direction[1] * 6), parent->floor_info->floor_material, 10, true);

	}

	FVector2D pulpit_loc = { cursor_x, cursor_y };

	for (float h = 0; h < 50; h += 1.0) {
		parent->SetTile(cursor_x, cursor_y, parent->floor_info->floor_material, 4, true);
		cursor_x += perp[0];
		cursor_y += perp[1];
	}

	parent->MakeRegularRoom(cursor_x, cursor_y, 18, 18, 2);

	SetCursor(pulpit_loc);


	DrawLineF(-perp, 50, 4);

	parent->MakeRegularRoom(cursor_x, cursor_y, 18, 18, 2);

}
