// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Caves/Public/GPSewerMain.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGPSewerMain() {}

// Begin Cross Module References
CAVES_API UClass* Z_Construct_UClass_UGeneratorPattern();
CAVES_API UClass* Z_Construct_UClass_UGPSewerMain();
CAVES_API UClass* Z_Construct_UClass_UGPSewerMain_NoRegister();
UPackage* Z_Construct_UPackage__Script_Caves();
// End Cross Module References

// Begin Class UGPSewerMain
void UGPSewerMain::StaticRegisterNativesUGPSewerMain()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGPSewerMain);
UClass* Z_Construct_UClass_UGPSewerMain_NoRegister()
{
	return UGPSewerMain::StaticClass();
}
struct Z_Construct_UClass_UGPSewerMain_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GPSewerMain.h" },
		{ "ModuleRelativePath", "Public/GPSewerMain.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGPSewerMain>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGPSewerMain_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGeneratorPattern,
	(UObject* (*)())Z_Construct_UPackage__Script_Caves,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGPSewerMain_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGPSewerMain_Statics::ClassParams = {
	&UGPSewerMain::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGPSewerMain_Statics::Class_MetaDataParams), Z_Construct_UClass_UGPSewerMain_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGPSewerMain()
{
	if (!Z_Registration_Info_UClass_UGPSewerMain.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGPSewerMain.OuterSingleton, Z_Construct_UClass_UGPSewerMain_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGPSewerMain.OuterSingleton;
}
template<> CAVES_API UClass* StaticClass<UGPSewerMain>()
{
	return UGPSewerMain::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGPSewerMain);
UGPSewerMain::~UGPSewerMain() {}
// End Class UGPSewerMain

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPSewerMain_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGPSewerMain, UGPSewerMain::StaticClass, TEXT("UGPSewerMain"), &Z_Registration_Info_UClass_UGPSewerMain, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGPSewerMain), 2682509064U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPSewerMain_h_3070302136(TEXT("/Script/Caves"),
	Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPSewerMain_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPSewerMain_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
