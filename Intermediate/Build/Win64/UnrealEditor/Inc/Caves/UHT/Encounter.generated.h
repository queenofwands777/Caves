// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Encounter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CAVES_Encounter_generated_h
#error "Encounter.generated.h already included, missing '#pragma once' in Encounter.h"
#endif
#define CAVES_Encounter_generated_h

#define FID_Users_becca_Documents_Unreal_Projects_Caves_Source_Caves_Public_Encounter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEncounter(); \
	friend struct Z_Construct_UClass_AEncounter_Statics; \
public: \
	DECLARE_CLASS(AEncounter, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Caves"), NO_API) \
	DECLARE_SERIALIZER(AEncounter)


#define FID_Users_becca_Documents_Unreal_Projects_Caves_Source_Caves_Public_Encounter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AEncounter(AEncounter&&); \
	AEncounter(const AEncounter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEncounter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEncounter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEncounter) \
	NO_API virtual ~AEncounter();


#define FID_Users_becca_Documents_Unreal_Projects_Caves_Source_Caves_Public_Encounter_h_11_PROLOG
#define FID_Users_becca_Documents_Unreal_Projects_Caves_Source_Caves_Public_Encounter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_becca_Documents_Unreal_Projects_Caves_Source_Caves_Public_Encounter_h_14_INCLASS_NO_PURE_DECLS \
	FID_Users_becca_Documents_Unreal_Projects_Caves_Source_Caves_Public_Encounter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CAVES_API UClass* StaticClass<class AEncounter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_becca_Documents_Unreal_Projects_Caves_Source_Caves_Public_Encounter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
