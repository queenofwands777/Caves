// Fill out your copyright notice in the Description page of Project Settings.


#include "GPDiocese.h"
#include"TerrainGenerator.h"
#include"GPCluster.h"



void UGPDiocese::GenerateLevel() {



	for (float i = 0; i < 20; i += 1.0) {
		parent->SetTile(cursor_x, cursor_y, parent->floor_info->floor_material, 2, true);
		MoveCursor(direction, 1);

	}

	UGPCluster* cluster = NewObject<UGPCluster>(this);
	cluster->Init(lifetime, 8, cursor_x, cursor_y, heading, parent);


	cursor_x = cluster->cursor_x;
	cursor_y = cluster->cursor_y;



	DrawLineF(direction, 30, 2);

	parent->MakeIrregularRoom(cursor_x, cursor_y, 20, 20, 10);

}
