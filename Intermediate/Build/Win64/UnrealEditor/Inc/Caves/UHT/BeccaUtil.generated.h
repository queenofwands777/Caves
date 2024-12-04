// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BeccaUtil.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CAVES_BeccaUtil_generated_h
#error "BeccaUtil.generated.h already included, missing '#pragma once' in BeccaUtil.h"
#endif
#define CAVES_BeccaUtil_generated_h

#define FID_Users_becca_source_repos_Caves_Source_Caves_Public_BeccaUtil_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHelloBlueprint);


#define FID_Users_becca_source_repos_Caves_Source_Caves_Public_BeccaUtil_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBeccaUtil(); \
	friend struct Z_Construct_UClass_UBeccaUtil_Statics; \
public: \
	DECLARE_CLASS(UBeccaUtil, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Caves"), NO_API) \
	DECLARE_SERIALIZER(UBeccaUtil)


#define FID_Users_becca_source_repos_Caves_Source_Caves_Public_BeccaUtil_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBeccaUtil(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBeccaUtil(UBeccaUtil&&); \
	UBeccaUtil(const UBeccaUtil&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBeccaUtil); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBeccaUtil); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBeccaUtil) \
	NO_API virtual ~UBeccaUtil();


#define FID_Users_becca_source_repos_Caves_Source_Caves_Public_BeccaUtil_h_14_PROLOG
#define FID_Users_becca_source_repos_Caves_Source_Caves_Public_BeccaUtil_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_becca_source_repos_Caves_Source_Caves_Public_BeccaUtil_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_becca_source_repos_Caves_Source_Caves_Public_BeccaUtil_h_17_INCLASS_NO_PURE_DECLS \
	FID_Users_becca_source_repos_Caves_Source_Caves_Public_BeccaUtil_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CAVES_API UClass* StaticClass<class UBeccaUtil>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_becca_source_repos_Caves_Source_Caves_Public_BeccaUtil_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
