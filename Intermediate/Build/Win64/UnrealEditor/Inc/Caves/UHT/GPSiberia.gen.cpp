// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Caves/Public/GPSiberia.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGPSiberia() {}

// Begin Cross Module References
CAVES_API UClass* Z_Construct_UClass_UGeneratorPattern();
CAVES_API UClass* Z_Construct_UClass_UGPSiberia();
CAVES_API UClass* Z_Construct_UClass_UGPSiberia_NoRegister();
UPackage* Z_Construct_UPackage__Script_Caves();
// End Cross Module References

// Begin Class UGPSiberia
void UGPSiberia::StaticRegisterNativesUGPSiberia()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGPSiberia);
UClass* Z_Construct_UClass_UGPSiberia_NoRegister()
{
	return UGPSiberia::StaticClass();
}
struct Z_Construct_UClass_UGPSiberia_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GPSiberia.h" },
		{ "ModuleRelativePath", "Public/GPSiberia.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGPSiberia>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGPSiberia_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGeneratorPattern,
	(UObject* (*)())Z_Construct_UPackage__Script_Caves,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGPSiberia_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGPSiberia_Statics::ClassParams = {
	&UGPSiberia::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGPSiberia_Statics::Class_MetaDataParams), Z_Construct_UClass_UGPSiberia_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGPSiberia()
{
	if (!Z_Registration_Info_UClass_UGPSiberia.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGPSiberia.OuterSingleton, Z_Construct_UClass_UGPSiberia_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGPSiberia.OuterSingleton;
}
template<> CAVES_API UClass* StaticClass<UGPSiberia>()
{
	return UGPSiberia::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGPSiberia);
UGPSiberia::~UGPSiberia() {}
// End Class UGPSiberia

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPSiberia_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGPSiberia, UGPSiberia::StaticClass, TEXT("UGPSiberia"), &Z_Registration_Info_UClass_UGPSiberia, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGPSiberia), 1577768106U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPSiberia_h_186755702(TEXT("/Script/Caves"),
	Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPSiberia_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPSiberia_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
