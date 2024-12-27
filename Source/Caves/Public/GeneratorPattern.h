// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

class ATerrainGenerator;
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GeneratorPattern.generated.h"

UCLASS(Blueprintable, Abstract)
class CAVES_API UGeneratorPattern : public UObject
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	UGeneratorPattern();


	virtual void GenerateLevel(){};

	int num_rooms = 1;

	int lifetime = 10;

	float cursor_x = 0;

	float cursor_y = 0;

	float heading= 0.0;

	FVector2d direction = {0,1};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ATerrainGenerator* parent = nullptr;

	void Init(int _lifetime, int _num_rooms, float _cursor_x, float _cursor_y, float _heading, ATerrainGenerator* _parent) {
		num_rooms = _num_rooms;
		lifetime = _lifetime;
		cursor_x = _cursor_x;
		cursor_y = _cursor_y;
		heading = _heading;
		parent = _parent;

		direction = { 1, 0 };

		GenerateLevel();
	}


};
