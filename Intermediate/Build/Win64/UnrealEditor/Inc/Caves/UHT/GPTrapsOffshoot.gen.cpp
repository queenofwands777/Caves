// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Caves/Public/GPTrapsOffshoot.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGPTrapsOffshoot() {}

// Begin Cross Module References
CAVES_API UClass* Z_Construct_UClass_UGeneratorPattern();
CAVES_API UClass* Z_Construct_UClass_UGPTrapsOffshoot();
CAVES_API UClass* Z_Construct_UClass_UGPTrapsOffshoot_NoRegister();
UPackage* Z_Construct_UPackage__Script_Caves();
// End Cross Module References

// Begin Class UGPTrapsOffshoot
void UGPTrapsOffshoot::StaticRegisterNativesUGPTrapsOffshoot()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGPTrapsOffshoot);
UClass* Z_Construct_UClass_UGPTrapsOffshoot_NoRegister()
{
	return UGPTrapsOffshoot::StaticClass();
}
struct Z_Construct_UClass_UGPTrapsOffshoot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GPTrapsOffshoot.h" },
		{ "ModuleRelativePath", "Public/GPTrapsOffshoot.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGPTrapsOffshoot>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGPTrapsOffshoot_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGeneratorPattern,
	(UObject* (*)())Z_Construct_UPackage__Script_Caves,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGPTrapsOffshoot_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGPTrapsOffshoot_Statics::ClassParams = {
	&UGPTrapsOffshoot::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGPTrapsOffshoot_Statics::Class_MetaDataParams), Z_Construct_UClass_UGPTrapsOffshoot_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGPTrapsOffshoot()
{
	if (!Z_Registration_Info_UClass_UGPTrapsOffshoot.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGPTrapsOffshoot.OuterSingleton, Z_Construct_UClass_UGPTrapsOffshoot_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGPTrapsOffshoot.OuterSingleton;
}
template<> CAVES_API UClass* StaticClass<UGPTrapsOffshoot>()
{
	return UGPTrapsOffshoot::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGPTrapsOffshoot);
UGPTrapsOffshoot::~UGPTrapsOffshoot() {}
// End Class UGPTrapsOffshoot

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPTrapsOffshoot_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGPTrapsOffshoot, UGPTrapsOffshoot::StaticClass, TEXT("UGPTrapsOffshoot"), &Z_Registration_Info_UClass_UGPTrapsOffshoot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGPTrapsOffshoot), 3289095165U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPTrapsOffshoot_h_2299703780(TEXT("/Script/Caves"),
	Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPTrapsOffshoot_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPTrapsOffshoot_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
