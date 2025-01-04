// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Caves/Public/GPAntarctica.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGPAntarctica() {}

// Begin Cross Module References
CAVES_API UClass* Z_Construct_UClass_UGeneratorPattern();
CAVES_API UClass* Z_Construct_UClass_UGPAntarctica();
CAVES_API UClass* Z_Construct_UClass_UGPAntarctica_NoRegister();
UPackage* Z_Construct_UPackage__Script_Caves();
// End Cross Module References

// Begin Class UGPAntarctica
void UGPAntarctica::StaticRegisterNativesUGPAntarctica()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGPAntarctica);
UClass* Z_Construct_UClass_UGPAntarctica_NoRegister()
{
	return UGPAntarctica::StaticClass();
}
struct Z_Construct_UClass_UGPAntarctica_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GPAntarctica.h" },
		{ "ModuleRelativePath", "Public/GPAntarctica.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGPAntarctica>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGPAntarctica_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGeneratorPattern,
	(UObject* (*)())Z_Construct_UPackage__Script_Caves,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGPAntarctica_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGPAntarctica_Statics::ClassParams = {
	&UGPAntarctica::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGPAntarctica_Statics::Class_MetaDataParams), Z_Construct_UClass_UGPAntarctica_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGPAntarctica()
{
	if (!Z_Registration_Info_UClass_UGPAntarctica.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGPAntarctica.OuterSingleton, Z_Construct_UClass_UGPAntarctica_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGPAntarctica.OuterSingleton;
}
template<> CAVES_API UClass* StaticClass<UGPAntarctica>()
{
	return UGPAntarctica::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGPAntarctica);
UGPAntarctica::~UGPAntarctica() {}
// End Class UGPAntarctica

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPAntarctica_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGPAntarctica, UGPAntarctica::StaticClass, TEXT("UGPAntarctica"), &Z_Registration_Info_UClass_UGPAntarctica, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGPAntarctica), 3211431494U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPAntarctica_h_1547477106(TEXT("/Script/Caves"),
	Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPAntarctica_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPAntarctica_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
