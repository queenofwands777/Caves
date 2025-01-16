// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Caves/Public/GPRevelry.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGPRevelry() {}

// Begin Cross Module References
CAVES_API UClass* Z_Construct_UClass_UGeneratorPattern();
CAVES_API UClass* Z_Construct_UClass_UGPRevelry();
CAVES_API UClass* Z_Construct_UClass_UGPRevelry_NoRegister();
UPackage* Z_Construct_UPackage__Script_Caves();
// End Cross Module References

// Begin Class UGPRevelry
void UGPRevelry::StaticRegisterNativesUGPRevelry()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGPRevelry);
UClass* Z_Construct_UClass_UGPRevelry_NoRegister()
{
	return UGPRevelry::StaticClass();
}
struct Z_Construct_UClass_UGPRevelry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GPRevelry.h" },
		{ "ModuleRelativePath", "Public/GPRevelry.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGPRevelry>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGPRevelry_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGeneratorPattern,
	(UObject* (*)())Z_Construct_UPackage__Script_Caves,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGPRevelry_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGPRevelry_Statics::ClassParams = {
	&UGPRevelry::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGPRevelry_Statics::Class_MetaDataParams), Z_Construct_UClass_UGPRevelry_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGPRevelry()
{
	if (!Z_Registration_Info_UClass_UGPRevelry.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGPRevelry.OuterSingleton, Z_Construct_UClass_UGPRevelry_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGPRevelry.OuterSingleton;
}
template<> CAVES_API UClass* StaticClass<UGPRevelry>()
{
	return UGPRevelry::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGPRevelry);
UGPRevelry::~UGPRevelry() {}
// End Class UGPRevelry

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPRevelry_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGPRevelry, UGPRevelry::StaticClass, TEXT("UGPRevelry"), &Z_Registration_Info_UClass_UGPRevelry, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGPRevelry), 2774094558U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPRevelry_h_3255468326(TEXT("/Script/Caves"),
	Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPRevelry_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPRevelry_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
