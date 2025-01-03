// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Caves/Public/GPHousesOnAStreet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGPHousesOnAStreet() {}

// Begin Cross Module References
CAVES_API UClass* Z_Construct_UClass_UGeneratorPattern();
CAVES_API UClass* Z_Construct_UClass_UGPHousesOnAStreet();
CAVES_API UClass* Z_Construct_UClass_UGPHousesOnAStreet_NoRegister();
UPackage* Z_Construct_UPackage__Script_Caves();
// End Cross Module References

// Begin Class UGPHousesOnAStreet
void UGPHousesOnAStreet::StaticRegisterNativesUGPHousesOnAStreet()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGPHousesOnAStreet);
UClass* Z_Construct_UClass_UGPHousesOnAStreet_NoRegister()
{
	return UGPHousesOnAStreet::StaticClass();
}
struct Z_Construct_UClass_UGPHousesOnAStreet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GPHousesOnAStreet.h" },
		{ "ModuleRelativePath", "Public/GPHousesOnAStreet.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGPHousesOnAStreet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGPHousesOnAStreet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGeneratorPattern,
	(UObject* (*)())Z_Construct_UPackage__Script_Caves,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGPHousesOnAStreet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGPHousesOnAStreet_Statics::ClassParams = {
	&UGPHousesOnAStreet::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGPHousesOnAStreet_Statics::Class_MetaDataParams), Z_Construct_UClass_UGPHousesOnAStreet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGPHousesOnAStreet()
{
	if (!Z_Registration_Info_UClass_UGPHousesOnAStreet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGPHousesOnAStreet.OuterSingleton, Z_Construct_UClass_UGPHousesOnAStreet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGPHousesOnAStreet.OuterSingleton;
}
template<> CAVES_API UClass* StaticClass<UGPHousesOnAStreet>()
{
	return UGPHousesOnAStreet::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGPHousesOnAStreet);
UGPHousesOnAStreet::~UGPHousesOnAStreet() {}
// End Class UGPHousesOnAStreet

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPHousesOnAStreet_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGPHousesOnAStreet, UGPHousesOnAStreet::StaticClass, TEXT("UGPHousesOnAStreet"), &Z_Registration_Info_UClass_UGPHousesOnAStreet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGPHousesOnAStreet), 2185265548U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPHousesOnAStreet_h_3289305740(TEXT("/Script/Caves"),
	Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPHousesOnAStreet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPHousesOnAStreet_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
