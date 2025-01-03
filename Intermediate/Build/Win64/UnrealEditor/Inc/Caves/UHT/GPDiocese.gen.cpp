// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Caves/Public/GPDiocese.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGPDiocese() {}

// Begin Cross Module References
CAVES_API UClass* Z_Construct_UClass_UGeneratorPattern();
CAVES_API UClass* Z_Construct_UClass_UGPDiocese();
CAVES_API UClass* Z_Construct_UClass_UGPDiocese_NoRegister();
UPackage* Z_Construct_UPackage__Script_Caves();
// End Cross Module References

// Begin Class UGPDiocese
void UGPDiocese::StaticRegisterNativesUGPDiocese()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGPDiocese);
UClass* Z_Construct_UClass_UGPDiocese_NoRegister()
{
	return UGPDiocese::StaticClass();
}
struct Z_Construct_UClass_UGPDiocese_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GPDiocese.h" },
		{ "ModuleRelativePath", "Public/GPDiocese.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGPDiocese>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGPDiocese_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGeneratorPattern,
	(UObject* (*)())Z_Construct_UPackage__Script_Caves,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGPDiocese_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGPDiocese_Statics::ClassParams = {
	&UGPDiocese::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGPDiocese_Statics::Class_MetaDataParams), Z_Construct_UClass_UGPDiocese_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGPDiocese()
{
	if (!Z_Registration_Info_UClass_UGPDiocese.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGPDiocese.OuterSingleton, Z_Construct_UClass_UGPDiocese_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGPDiocese.OuterSingleton;
}
template<> CAVES_API UClass* StaticClass<UGPDiocese>()
{
	return UGPDiocese::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGPDiocese);
UGPDiocese::~UGPDiocese() {}
// End Class UGPDiocese

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPDiocese_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGPDiocese, UGPDiocese::StaticClass, TEXT("UGPDiocese"), &Z_Registration_Info_UClass_UGPDiocese, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGPDiocese), 1497309033U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPDiocese_h_1717301039(TEXT("/Script/Caves"),
	Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPDiocese_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPDiocese_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
