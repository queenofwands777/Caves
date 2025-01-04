// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Caves/Public/GPResearchStation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGPResearchStation() {}

// Begin Cross Module References
CAVES_API UClass* Z_Construct_UClass_UGeneratorPattern();
CAVES_API UClass* Z_Construct_UClass_UGPResearchStation();
CAVES_API UClass* Z_Construct_UClass_UGPResearchStation_NoRegister();
UPackage* Z_Construct_UPackage__Script_Caves();
// End Cross Module References

// Begin Class UGPResearchStation
void UGPResearchStation::StaticRegisterNativesUGPResearchStation()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGPResearchStation);
UClass* Z_Construct_UClass_UGPResearchStation_NoRegister()
{
	return UGPResearchStation::StaticClass();
}
struct Z_Construct_UClass_UGPResearchStation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GPResearchStation.h" },
		{ "ModuleRelativePath", "Public/GPResearchStation.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGPResearchStation>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGPResearchStation_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGeneratorPattern,
	(UObject* (*)())Z_Construct_UPackage__Script_Caves,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGPResearchStation_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGPResearchStation_Statics::ClassParams = {
	&UGPResearchStation::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGPResearchStation_Statics::Class_MetaDataParams), Z_Construct_UClass_UGPResearchStation_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGPResearchStation()
{
	if (!Z_Registration_Info_UClass_UGPResearchStation.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGPResearchStation.OuterSingleton, Z_Construct_UClass_UGPResearchStation_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGPResearchStation.OuterSingleton;
}
template<> CAVES_API UClass* StaticClass<UGPResearchStation>()
{
	return UGPResearchStation::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGPResearchStation);
UGPResearchStation::~UGPResearchStation() {}
// End Class UGPResearchStation

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPResearchStation_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGPResearchStation, UGPResearchStation::StaticClass, TEXT("UGPResearchStation"), &Z_Registration_Info_UClass_UGPResearchStation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGPResearchStation), 1271455640U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPResearchStation_h_180941675(TEXT("/Script/Caves"),
	Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPResearchStation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPResearchStation_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
