// Fill out your copyright notice in the Description page of Project Settings.


#include "GPChapel.h"
#include"TerrainGenerator.h"

void UGPChapel::GenerateLevel() {

	heading = float(90 * FMath::RandHelper(4));

	float rotation_radians = FMath::DegreesToRadians(heading);
	FVector2D new_direction = {
		(direction[0] * FMath::Cos(rotation_radians)) - (direction[1] * FMath::Sin(rotation_radians)),
		(direction[0] * FMath::Sin(rotation_radians)) + (direction[1] * FMath::Cos(rotation_radians))
	};
	direction = new_direction;

	FVector2D perp = { -direction[1], direction[0] };
	FVector2D other_perp = -perp;

	for (float i = 0; i < 20; i += 1.0) {
		parent->SetTile(cursor_x, cursor_y, parent->floor_info->floor_material, 2, true);
		cursor_x += new_direction[0];
		cursor_y += new_direction[1];

	}


	float chapel_width = 4;
	float step_width = 4;
	float segment_size = 8;
	float total_width = (segment_size/2) * step_width * chapel_width;
	float chapel_length = 12;

	for (float i = -chapel_width; i <= chapel_width; i += 1.0) {

		parent->SetTile(cursor_x + (perp[0] * i * step_width), cursor_y + (perp[1] * i * step_width), parent->floor_info->floor_material, segment_size, true);

	}


	cursor_x += new_direction[0] * 6;
	cursor_y += new_direction[1] * 6;

	parent->SetTile(cursor_x + (perp[0] * (total_width/6)), cursor_y + (perp[1] * (total_width / 6)), parent->floor_info->floor_material, 4, true);
	parent->SetTile(cursor_x + (other_perp[0] * (total_width/6)), cursor_y + (other_perp[1] * (total_width / 6)), parent->floor_info->floor_material, 4, true);

	cursor_x += new_direction[0] * 6;
	cursor_y += new_direction[1] * 6;

	for (float l = 0; l < chapel_length; l += 1.0) {

		for (float w = -chapel_width; w <= chapel_width; w += 1.0) {

			parent->SetTile(cursor_x + (perp[0] * w * step_width), cursor_y + (perp[1] * w * step_width), parent->floor_info->floor_material, segment_size, true);

		}
		cursor_x += direction[0] * step_width;
		cursor_y += direction[1] * step_width;
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

	cursor_x = pulpit_loc[0];
	cursor_y = pulpit_loc[1];

	for (float h = 0; h < 50; h += 1.0) {
		parent->SetTile(cursor_x, cursor_y, parent->floor_info->floor_material, 4, true);
		cursor_x += other_perp[0];
		cursor_y += other_perp[1];
	}

	parent->MakeRegularRoom(cursor_x, cursor_y, 18, 18, 2);

}
