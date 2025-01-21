#pragma once

#include "CoreMinimal.h"
#include "GeneratorPattern.h"
#include "GPColony.generated.h"

/**
 *
 */
UCLASS()
class CAVES_API UGPColony : public UGeneratorPattern
{
	GENERATED_BODY()

	UGPColony() {}

	void GenerateLevel() override;

	//void PopulateLevel(int num_chests, int num_altars, int num_encounters) override;

};
