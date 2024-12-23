// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Caves/Public/LightningBolt.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLightningBolt() {}

// Begin Cross Module References
CAVES_API UClass* Z_Construct_UClass_ALightningBolt();
CAVES_API UClass* Z_Construct_UClass_ALightningBolt_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_Caves();
// End Cross Module References

// Begin Class ALightningBolt
void ALightningBolt::StaticRegisterNativesALightningBolt()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALightningBolt);
UClass* Z_Construct_UClass_ALightningBolt_NoRegister()
{
	return ALightningBolt::StaticClass();
}
struct Z_Construct_UClass_ALightningBolt_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "LightningBolt.h" },
		{ "ModuleRelativePath", "Public/LightningBolt.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALightningBolt>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ALightningBolt_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Caves,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALightningBolt_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALightningBolt_Statics::ClassParams = {
	&ALightningBolt::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALightningBolt_Statics::Class_MetaDataParams), Z_Construct_UClass_ALightningBolt_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALightningBolt()
{
	if (!Z_Registration_Info_UClass_ALightningBolt.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALightningBolt.OuterSingleton, Z_Construct_UClass_ALightningBolt_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALightningBolt.OuterSingleton;
}
template<> CAVES_API UClass* StaticClass<ALightningBolt>()
{
	return ALightningBolt::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALightningBolt);
ALightningBolt::~ALightningBolt() {}
// End Class ALightningBolt

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_LightningBolt_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALightningBolt, ALightningBolt::StaticClass, TEXT("ALightningBolt"), &Z_Registration_Info_UClass_ALightningBolt, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALightningBolt), 2815931024U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_LightningBolt_h_165872086(TEXT("/Script/Caves"),
	Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_LightningBolt_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_LightningBolt_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
