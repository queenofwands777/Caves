// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Pathfinding.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CAVES_Pathfinding_generated_h
#error "Pathfinding.generated.h already included, missing '#pragma once' in Pathfinding.h"
#endif
#define CAVES_Pathfinding_generated_h

#define FID_Users_becca_source_repos_Caves_Source_Caves_Public_Pathfinding_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetPath);


#define FID_Users_becca_source_repos_Caves_Source_Caves_Public_Pathfinding_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPathfinding(); \
	friend struct Z_Construct_UClass_APathfinding_Statics; \
public: \
	DECLARE_CLASS(APathfinding, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Caves"), NO_API) \
	DECLARE_SERIALIZER(APathfinding)


#define FID_Users_becca_source_repos_Caves_Source_Caves_Public_Pathfinding_h_41_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APathfinding(APathfinding&&); \
	APathfinding(const APathfinding&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APathfinding); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APathfinding); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APathfinding) \
	NO_API virtual ~APathfinding();


#define FID_Users_becca_source_repos_Caves_Source_Caves_Public_Pathfinding_h_38_PROLOG
#define FID_Users_becca_source_repos_Caves_Source_Caves_Public_Pathfinding_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_becca_source_repos_Caves_Source_Caves_Public_Pathfinding_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_becca_source_repos_Caves_Source_Caves_Public_Pathfinding_h_41_INCLASS_NO_PURE_DECLS \
	FID_Users_becca_source_repos_Caves_Source_Caves_Public_Pathfinding_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CAVES_API UClass* StaticClass<class APathfinding>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_becca_source_repos_Caves_Source_Caves_Public_Pathfinding_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
