// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Caves/Public/GPGreedyDeep.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGPGreedyDeep() {}

// Begin Cross Module References
CAVES_API UClass* Z_Construct_UClass_UGeneratorPattern();
CAVES_API UClass* Z_Construct_UClass_UGPGreedyDeep();
CAVES_API UClass* Z_Construct_UClass_UGPGreedyDeep_NoRegister();
UPackage* Z_Construct_UPackage__Script_Caves();
// End Cross Module References

// Begin Class UGPGreedyDeep
void UGPGreedyDeep::StaticRegisterNativesUGPGreedyDeep()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGPGreedyDeep);
UClass* Z_Construct_UClass_UGPGreedyDeep_NoRegister()
{
	return UGPGreedyDeep::StaticClass();
}
struct Z_Construct_UClass_UGPGreedyDeep_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GPGreedyDeep.h" },
		{ "ModuleRelativePath", "Public/GPGreedyDeep.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGPGreedyDeep>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGPGreedyDeep_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGeneratorPattern,
	(UObject* (*)())Z_Construct_UPackage__Script_Caves,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGPGreedyDeep_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGPGreedyDeep_Statics::ClassParams = {
	&UGPGreedyDeep::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGPGreedyDeep_Statics::Class_MetaDataParams), Z_Construct_UClass_UGPGreedyDeep_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGPGreedyDeep()
{
	if (!Z_Registration_Info_UClass_UGPGreedyDeep.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGPGreedyDeep.OuterSingleton, Z_Construct_UClass_UGPGreedyDeep_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGPGreedyDeep.OuterSingleton;
}
template<> CAVES_API UClass* StaticClass<UGPGreedyDeep>()
{
	return UGPGreedyDeep::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGPGreedyDeep);
UGPGreedyDeep::~UGPGreedyDeep() {}
// End Class UGPGreedyDeep

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPGreedyDeep_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGPGreedyDeep, UGPGreedyDeep::StaticClass, TEXT("UGPGreedyDeep"), &Z_Registration_Info_UClass_UGPGreedyDeep, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGPGreedyDeep), 2870487694U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPGreedyDeep_h_2111210561(TEXT("/Script/Caves"),
	Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPGreedyDeep_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPGreedyDeep_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
