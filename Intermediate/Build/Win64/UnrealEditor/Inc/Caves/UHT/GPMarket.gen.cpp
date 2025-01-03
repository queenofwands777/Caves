// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Caves/Public/GPMarket.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGPMarket() {}

// Begin Cross Module References
CAVES_API UClass* Z_Construct_UClass_UGeneratorPattern();
CAVES_API UClass* Z_Construct_UClass_UGPMarket();
CAVES_API UClass* Z_Construct_UClass_UGPMarket_NoRegister();
UPackage* Z_Construct_UPackage__Script_Caves();
// End Cross Module References

// Begin Class UGPMarket
void UGPMarket::StaticRegisterNativesUGPMarket()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGPMarket);
UClass* Z_Construct_UClass_UGPMarket_NoRegister()
{
	return UGPMarket::StaticClass();
}
struct Z_Construct_UClass_UGPMarket_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GPMarket.h" },
		{ "ModuleRelativePath", "Public/GPMarket.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGPMarket>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGPMarket_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGeneratorPattern,
	(UObject* (*)())Z_Construct_UPackage__Script_Caves,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGPMarket_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGPMarket_Statics::ClassParams = {
	&UGPMarket::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGPMarket_Statics::Class_MetaDataParams), Z_Construct_UClass_UGPMarket_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGPMarket()
{
	if (!Z_Registration_Info_UClass_UGPMarket.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGPMarket.OuterSingleton, Z_Construct_UClass_UGPMarket_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGPMarket.OuterSingleton;
}
template<> CAVES_API UClass* StaticClass<UGPMarket>()
{
	return UGPMarket::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGPMarket);
UGPMarket::~UGPMarket() {}
// End Class UGPMarket

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPMarket_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGPMarket, UGPMarket::StaticClass, TEXT("UGPMarket"), &Z_Registration_Info_UClass_UGPMarket, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGPMarket), 1801288374U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPMarket_h_1322795319(TEXT("/Script/Caves"),
	Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPMarket_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPMarket_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
