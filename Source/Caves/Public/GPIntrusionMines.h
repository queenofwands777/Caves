#pragma once

#include "CoreMinimal.h"
#include "GeneratorPattern.h"
#include "GPIntrusionMines.generated.h"

/**
 *
 */
UCLASS()
class CAVES_API UGPIntrusionMines : public UGeneratorPattern
{
	GENERATED_BODY()

	UGPIntrusionMines() {}

	void GenerateLevel() override;
	bool first = true;
	//void PopulateLevel(int num_chests, int num_altars, int num_encounters) override;

};
