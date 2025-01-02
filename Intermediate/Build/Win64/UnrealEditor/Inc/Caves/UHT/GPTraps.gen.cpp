// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Caves/Public/GPTraps.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGPTraps() {}

// Begin Cross Module References
CAVES_API UClass* Z_Construct_UClass_UGeneratorPattern();
CAVES_API UClass* Z_Construct_UClass_UGPTraps();
CAVES_API UClass* Z_Construct_UClass_UGPTraps_NoRegister();
UPackage* Z_Construct_UPackage__Script_Caves();
// End Cross Module References

// Begin Class UGPTraps
void UGPTraps::StaticRegisterNativesUGPTraps()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGPTraps);
UClass* Z_Construct_UClass_UGPTraps_NoRegister()
{
	return UGPTraps::StaticClass();
}
struct Z_Construct_UClass_UGPTraps_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GPTraps.h" },
		{ "ModuleRelativePath", "Public/GPTraps.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGPTraps>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGPTraps_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGeneratorPattern,
	(UObject* (*)())Z_Construct_UPackage__Script_Caves,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGPTraps_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGPTraps_Statics::ClassParams = {
	&UGPTraps::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGPTraps_Statics::Class_MetaDataParams), Z_Construct_UClass_UGPTraps_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGPTraps()
{
	if (!Z_Registration_Info_UClass_UGPTraps.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGPTraps.OuterSingleton, Z_Construct_UClass_UGPTraps_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGPTraps.OuterSingleton;
}
template<> CAVES_API UClass* StaticClass<UGPTraps>()
{
	return UGPTraps::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGPTraps);
UGPTraps::~UGPTraps() {}
// End Class UGPTraps

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPTraps_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGPTraps, UGPTraps::StaticClass, TEXT("UGPTraps"), &Z_Registration_Info_UClass_UGPTraps, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGPTraps), 793543397U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPTraps_h_3203865698(TEXT("/Script/Caves"),
	Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPTraps_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPTraps_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
