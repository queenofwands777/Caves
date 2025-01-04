// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Caves/Public/GPLabyrinth.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGPLabyrinth() {}

// Begin Cross Module References
CAVES_API UClass* Z_Construct_UClass_UGeneratorPattern();
CAVES_API UClass* Z_Construct_UClass_UGPLabyrinth();
CAVES_API UClass* Z_Construct_UClass_UGPLabyrinth_NoRegister();
UPackage* Z_Construct_UPackage__Script_Caves();
// End Cross Module References

// Begin Class UGPLabyrinth
void UGPLabyrinth::StaticRegisterNativesUGPLabyrinth()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGPLabyrinth);
UClass* Z_Construct_UClass_UGPLabyrinth_NoRegister()
{
	return UGPLabyrinth::StaticClass();
}
struct Z_Construct_UClass_UGPLabyrinth_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GPLabyrinth.h" },
		{ "ModuleRelativePath", "Public/GPLabyrinth.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGPLabyrinth>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGPLabyrinth_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGeneratorPattern,
	(UObject* (*)())Z_Construct_UPackage__Script_Caves,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGPLabyrinth_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGPLabyrinth_Statics::ClassParams = {
	&UGPLabyrinth::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGPLabyrinth_Statics::Class_MetaDataParams), Z_Construct_UClass_UGPLabyrinth_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGPLabyrinth()
{
	if (!Z_Registration_Info_UClass_UGPLabyrinth.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGPLabyrinth.OuterSingleton, Z_Construct_UClass_UGPLabyrinth_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGPLabyrinth.OuterSingleton;
}
template<> CAVES_API UClass* StaticClass<UGPLabyrinth>()
{
	return UGPLabyrinth::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGPLabyrinth);
UGPLabyrinth::~UGPLabyrinth() {}
// End Class UGPLabyrinth

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPLabyrinth_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGPLabyrinth, UGPLabyrinth::StaticClass, TEXT("UGPLabyrinth"), &Z_Registration_Info_UClass_UGPLabyrinth, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGPLabyrinth), 2577904733U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPLabyrinth_h_3233347599(TEXT("/Script/Caves"),
	Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPLabyrinth_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPLabyrinth_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
