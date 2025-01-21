#pragma once

#include "CoreMinimal.h"
#include "GeneratorPattern.h"
#include "GPTemplate.generated.h"

/**
 *
 */
UCLASS()
class CAVES_API UGPTemplate : public UGeneratorPattern
{
	GENERATED_BODY()

	UGPTemplate() {}

	void GenerateLevel() override;

	//void PopulateLevel(int num_chests, int num_altars, int num_encounters) override;

};
