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

	virtual void PopulateLevel() {};

	int num_rooms;
	int lifetime;
	float cursor_x;
	float cursor_y;
	float heading;
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
