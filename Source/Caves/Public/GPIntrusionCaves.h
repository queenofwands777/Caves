#pragma once

#include "CoreMinimal.h"
#include "GeneratorPattern.h"
#include "GPIntrusionCaves.generated.h"

/**
 *
 */
UCLASS()
class CAVES_API UGPIntrusionCaves : public UGeneratorPattern
{
	GENERATED_BODY()

	UGPIntrusionCaves() {}

	void GenerateLevel() override;
	bool first = true;
	//void PopulateLevel(int num_chests, int num_altars, int num_encounters) override;

};
