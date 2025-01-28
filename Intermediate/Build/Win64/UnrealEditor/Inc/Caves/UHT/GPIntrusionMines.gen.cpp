// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Caves/Public/GPIntrusionMines.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGPIntrusionMines() {}

// Begin Cross Module References
CAVES_API UClass* Z_Construct_UClass_UGeneratorPattern();
CAVES_API UClass* Z_Construct_UClass_UGPIntrusionMines();
CAVES_API UClass* Z_Construct_UClass_UGPIntrusionMines_NoRegister();
UPackage* Z_Construct_UPackage__Script_Caves();
// End Cross Module References

// Begin Class UGPIntrusionMines
void UGPIntrusionMines::StaticRegisterNativesUGPIntrusionMines()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGPIntrusionMines);
UClass* Z_Construct_UClass_UGPIntrusionMines_NoRegister()
{
	return UGPIntrusionMines::StaticClass();
}
struct Z_Construct_UClass_UGPIntrusionMines_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "GPIntrusionMines.h" },
		{ "ModuleRelativePath", "Public/GPIntrusionMines.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGPIntrusionMines>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGPIntrusionMines_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGeneratorPattern,
	(UObject* (*)())Z_Construct_UPackage__Script_Caves,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGPIntrusionMines_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGPIntrusionMines_Statics::ClassParams = {
	&UGPIntrusionMines::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGPIntrusionMines_Statics::Class_MetaDataParams), Z_Construct_UClass_UGPIntrusionMines_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGPIntrusionMines()
{
	if (!Z_Registration_Info_UClass_UGPIntrusionMines.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGPIntrusionMines.OuterSingleton, Z_Construct_UClass_UGPIntrusionMines_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGPIntrusionMines.OuterSingleton;
}
template<> CAVES_API UClass* StaticClass<UGPIntrusionMines>()
{
	return UGPIntrusionMines::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGPIntrusionMines);
UGPIntrusionMines::~UGPIntrusionMines() {}
// End Class UGPIntrusionMines

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPIntrusionMines_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGPIntrusionMines, UGPIntrusionMines::StaticClass, TEXT("UGPIntrusionMines"), &Z_Registration_Info_UClass_UGPIntrusionMines, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGPIntrusionMines), 2648332948U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPIntrusionMines_h_2702081217(TEXT("/Script/Caves"),
	Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPIntrusionMines_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPIntrusionMines_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
