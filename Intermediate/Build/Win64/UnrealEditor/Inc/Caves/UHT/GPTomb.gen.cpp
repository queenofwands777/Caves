// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Caves/Public/GPTomb.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGPTomb() {}

// Begin Cross Module References
CAVES_API UClass* Z_Construct_UClass_UGeneratorPattern();
CAVES_API UClass* Z_Construct_UClass_UGPTomb();
CAVES_API UClass* Z_Construct_UClass_UGPTomb_NoRegister();
UPackage* Z_Construct_UPackage__Script_Caves();
// End Cross Module References

// Begin Class UGPTomb
void UGPTomb::StaticRegisterNativesUGPTomb()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGPTomb);
UClass* Z_Construct_UClass_UGPTomb_NoRegister()
{
	return UGPTomb::StaticClass();
}
struct Z_Construct_UClass_UGPTomb_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GPTomb.h" },
		{ "ModuleRelativePath", "Public/GPTomb.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGPTomb>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGPTomb_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGeneratorPattern,
	(UObject* (*)())Z_Construct_UPackage__Script_Caves,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGPTomb_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGPTomb_Statics::ClassParams = {
	&UGPTomb::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGPTomb_Statics::Class_MetaDataParams), Z_Construct_UClass_UGPTomb_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGPTomb()
{
	if (!Z_Registration_Info_UClass_UGPTomb.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGPTomb.OuterSingleton, Z_Construct_UClass_UGPTomb_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGPTomb.OuterSingleton;
}
template<> CAVES_API UClass* StaticClass<UGPTomb>()
{
	return UGPTomb::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGPTomb);
UGPTomb::~UGPTomb() {}
// End Class UGPTomb

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPTomb_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGPTomb, UGPTomb::StaticClass, TEXT("UGPTomb"), &Z_Registration_Info_UClass_UGPTomb, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGPTomb), 678073173U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPTomb_h_3869867603(TEXT("/Script/Caves"),
	Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPTomb_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPTomb_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
