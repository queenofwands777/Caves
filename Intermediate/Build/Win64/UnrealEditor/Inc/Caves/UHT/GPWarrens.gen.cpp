// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Caves/Public/GPWarrens.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGPWarrens() {}

// Begin Cross Module References
CAVES_API UClass* Z_Construct_UClass_UGeneratorPattern();
CAVES_API UClass* Z_Construct_UClass_UGPWarrens();
CAVES_API UClass* Z_Construct_UClass_UGPWarrens_NoRegister();
UPackage* Z_Construct_UPackage__Script_Caves();
// End Cross Module References

// Begin Class UGPWarrens
void UGPWarrens::StaticRegisterNativesUGPWarrens()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGPWarrens);
UClass* Z_Construct_UClass_UGPWarrens_NoRegister()
{
	return UGPWarrens::StaticClass();
}
struct Z_Construct_UClass_UGPWarrens_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GPWarrens.h" },
		{ "ModuleRelativePath", "Public/GPWarrens.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGPWarrens>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGPWarrens_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGeneratorPattern,
	(UObject* (*)())Z_Construct_UPackage__Script_Caves,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGPWarrens_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGPWarrens_Statics::ClassParams = {
	&UGPWarrens::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGPWarrens_Statics::Class_MetaDataParams), Z_Construct_UClass_UGPWarrens_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGPWarrens()
{
	if (!Z_Registration_Info_UClass_UGPWarrens.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGPWarrens.OuterSingleton, Z_Construct_UClass_UGPWarrens_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGPWarrens.OuterSingleton;
}
template<> CAVES_API UClass* StaticClass<UGPWarrens>()
{
	return UGPWarrens::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGPWarrens);
UGPWarrens::~UGPWarrens() {}
// End Class UGPWarrens

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPWarrens_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGPWarrens, UGPWarrens::StaticClass, TEXT("UGPWarrens"), &Z_Registration_Info_UClass_UGPWarrens, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGPWarrens), 3340069683U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPWarrens_h_1086566185(TEXT("/Script/Caves"),
	Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPWarrens_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPWarrens_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
