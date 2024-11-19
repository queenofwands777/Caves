// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BloodField.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CAVES_BloodField_generated_h
#error "BloodField.generated.h already included, missing '#pragma once' in BloodField.h"
#endif
#define CAVES_BloodField_generated_h

#define FID_Users_becca_source_repos_Caves_Source_Caves_Public_BloodField_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSplatter);


#define FID_Users_becca_source_repos_Caves_Source_Caves_Public_BloodField_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABloodField(); \
	friend struct Z_Construct_UClass_ABloodField_Statics; \
public: \
	DECLARE_CLASS(ABloodField, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Caves"), NO_API) \
	DECLARE_SERIALIZER(ABloodField)


#define FID_Users_becca_source_repos_Caves_Source_Caves_Public_BloodField_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABloodField(ABloodField&&); \
	ABloodField(const ABloodField&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABloodField); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABloodField); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABloodField) \
	NO_API virtual ~ABloodField();


#define FID_Users_becca_source_repos_Caves_Source_Caves_Public_BloodField_h_19_PROLOG
#define FID_Users_becca_source_repos_Caves_Source_Caves_Public_BloodField_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_becca_source_repos_Caves_Source_Caves_Public_BloodField_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_becca_source_repos_Caves_Source_Caves_Public_BloodField_h_22_INCLASS_NO_PURE_DECLS \
	FID_Users_becca_source_repos_Caves_Source_Caves_Public_BloodField_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CAVES_API UClass* StaticClass<class ABloodField>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_becca_source_repos_Caves_Source_Caves_Public_BloodField_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
