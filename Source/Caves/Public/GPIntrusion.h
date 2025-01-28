#pragma once

#include "CoreMinimal.h"
#include "GeneratorPattern.h"
#include "GPIntrusion.generated.h"

/**
 *
 */
UCLASS()
class CAVES_API UGPIntrusion : public UGeneratorPattern
{
	GENERATED_BODY()

	UGPIntrusion() {}

	void GenerateLevel() override;

	//void PopulateLevel(int num_chests, int num_altars, int num_encounters) override;
	bool first = true;

};
