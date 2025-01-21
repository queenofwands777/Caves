// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Caves/Public/GPTemplate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGPTemplate() {}

// Begin Cross Module References
CAVES_API UClass* Z_Construct_UClass_UGeneratorPattern();
CAVES_API UClass* Z_Construct_UClass_UGPTemplate();
CAVES_API UClass* Z_Construct_UClass_UGPTemplate_NoRegister();
UPackage* Z_Construct_UPackage__Script_Caves();
// End Cross Module References

// Begin Class UGPTemplate
void UGPTemplate::StaticRegisterNativesUGPTemplate()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGPTemplate);
UClass* Z_Construct_UClass_UGPTemplate_NoRegister()
{
	return UGPTemplate::StaticClass();
}
struct Z_Construct_UClass_UGPTemplate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "GPTemplate.h" },
		{ "ModuleRelativePath", "Public/GPTemplate.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGPTemplate>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGPTemplate_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGeneratorPattern,
	(UObject* (*)())Z_Construct_UPackage__Script_Caves,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGPTemplate_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGPTemplate_Statics::ClassParams = {
	&UGPTemplate::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGPTemplate_Statics::Class_MetaDataParams), Z_Construct_UClass_UGPTemplate_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGPTemplate()
{
	if (!Z_Registration_Info_UClass_UGPTemplate.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGPTemplate.OuterSingleton, Z_Construct_UClass_UGPTemplate_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGPTemplate.OuterSingleton;
}
template<> CAVES_API UClass* StaticClass<UGPTemplate>()
{
	return UGPTemplate::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGPTemplate);
UGPTemplate::~UGPTemplate() {}
// End Class UGPTemplate

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPTemplate_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGPTemplate, UGPTemplate::StaticClass, TEXT("UGPTemplate"), &Z_Registration_Info_UClass_UGPTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGPTemplate), 865500767U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPTemplate_h_322694304(TEXT("/Script/Caves"),
	Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPTemplate_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPTemplate_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
