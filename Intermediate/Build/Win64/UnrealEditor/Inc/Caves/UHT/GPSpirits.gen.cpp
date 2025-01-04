// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Caves/Public/GPSpirits.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGPSpirits() {}

// Begin Cross Module References
CAVES_API UClass* Z_Construct_UClass_UGeneratorPattern();
CAVES_API UClass* Z_Construct_UClass_UGPSpirits();
CAVES_API UClass* Z_Construct_UClass_UGPSpirits_NoRegister();
UPackage* Z_Construct_UPackage__Script_Caves();
// End Cross Module References

// Begin Class UGPSpirits
void UGPSpirits::StaticRegisterNativesUGPSpirits()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGPSpirits);
UClass* Z_Construct_UClass_UGPSpirits_NoRegister()
{
	return UGPSpirits::StaticClass();
}
struct Z_Construct_UClass_UGPSpirits_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GPSpirits.h" },
		{ "ModuleRelativePath", "Public/GPSpirits.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGPSpirits>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGPSpirits_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGeneratorPattern,
	(UObject* (*)())Z_Construct_UPackage__Script_Caves,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGPSpirits_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGPSpirits_Statics::ClassParams = {
	&UGPSpirits::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGPSpirits_Statics::Class_MetaDataParams), Z_Construct_UClass_UGPSpirits_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGPSpirits()
{
	if (!Z_Registration_Info_UClass_UGPSpirits.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGPSpirits.OuterSingleton, Z_Construct_UClass_UGPSpirits_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGPSpirits.OuterSingleton;
}
template<> CAVES_API UClass* StaticClass<UGPSpirits>()
{
	return UGPSpirits::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGPSpirits);
UGPSpirits::~UGPSpirits() {}
// End Class UGPSpirits

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPSpirits_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGPSpirits, UGPSpirits::StaticClass, TEXT("UGPSpirits"), &Z_Registration_Info_UClass_UGPSpirits, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGPSpirits), 2927212220U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPSpirits_h_2257103764(TEXT("/Script/Caves"),
	Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPSpirits_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPSpirits_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
