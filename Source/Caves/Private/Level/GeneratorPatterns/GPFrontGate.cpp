// Fill out your copyright notice in the Description page of Project Settings.


#include "GPFrontGate.h"
#include"TerrainGenerator.h"



void UGPFrontGate::GenerateLevel() {


	float wall_thickness = 2;

	FVector2D starting_point = { cursor_x, cursor_y };

	//bool running = true;
	cursor_x += perp[0] * wall_thickness * 1.5;
	cursor_y += perp[1] * wall_thickness * 1.5;
	for (int i = 0; i < 20; i++) {
		
		//if (parent->GetTile(cursor_x + (perp[0]), cursor_y + (perp[1] * wall_thickness))->GetTileIndex() == parent->floor_info->wall_material) { parent->SetTile(cursor_x, cursor_y, parent->floor_info->wall_material, wall_thickness, false); break; }
		if (parent->GetTile(cursor_x + (perp[0] * wall_thickness), cursor_y + (perp[1] * wall_thickness))->GetTileIndex() == parent->floor_info->void_material) { parent->SetTile(cursor_x, cursor_y, parent->floor_info->wall_material, wall_thickness, false); end_0 = { cursor_x + (perp[0]) , cursor_y + (perp[1]) }; break; }


		parent->SetTile(cursor_x, cursor_y, Material::rusty_metal, wall_thickness, false);
		cursor_x += perp[0];
		cursor_y += perp[1];
	}

	cursor_x = starting_point[0];
	cursor_y = starting_point[1];


	MoveCursor(-perp, wall_thickness * 1.5);

	//running = true;
	for (int i = 0; i < 20; i++) {

		//if (parent->GetTile(cursor_x + (other_perp[0]), cursor_y + (other_perp[1] * wall_thickness))->GetTileIndex() == parent->floor_info->wall_material) { parent->SetTile(cursor_x, cursor_y, parent->floor_info->wall_material, wall_thickness, false); break; }
		if (parent->GetTile(cursor_x + (-perp[0] * wall_thickness), cursor_y + (-perp[1] * wall_thickness))->GetTileIndex() == parent->floor_info->void_material) { parent->SetTile(cursor_x, cursor_y, parent->floor_info->wall_material, wall_thickness, false); end_1 = { cursor_x + (-perp[0]) , cursor_y + (-perp[1]) }; break; }


		parent->SetTile(cursor_x, cursor_y, Material::rusty_metal, wall_thickness, false);
		MoveCursor(-perp, 1);
	}


	cursor_x = starting_point[0];
	cursor_y = starting_point[1];

	//parent->SetTile(cursor_x, cursor_y, parent->floor_info->floor_material, wall_thickness * 2, false);


}