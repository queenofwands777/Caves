// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Caves/Public/GPMineshaft.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGPMineshaft() {}

// Begin Cross Module References
CAVES_API UClass* Z_Construct_UClass_UGeneratorPattern();
CAVES_API UClass* Z_Construct_UClass_UGPMineshaft();
CAVES_API UClass* Z_Construct_UClass_UGPMineshaft_NoRegister();
UPackage* Z_Construct_UPackage__Script_Caves();
// End Cross Module References

// Begin Class UGPMineshaft
void UGPMineshaft::StaticRegisterNativesUGPMineshaft()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGPMineshaft);
UClass* Z_Construct_UClass_UGPMineshaft_NoRegister()
{
	return UGPMineshaft::StaticClass();
}
struct Z_Construct_UClass_UGPMineshaft_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GPMineshaft.h" },
		{ "ModuleRelativePath", "Public/GPMineshaft.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGPMineshaft>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGPMineshaft_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGeneratorPattern,
	(UObject* (*)())Z_Construct_UPackage__Script_Caves,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGPMineshaft_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGPMineshaft_Statics::ClassParams = {
	&UGPMineshaft::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGPMineshaft_Statics::Class_MetaDataParams), Z_Construct_UClass_UGPMineshaft_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGPMineshaft()
{
	if (!Z_Registration_Info_UClass_UGPMineshaft.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGPMineshaft.OuterSingleton, Z_Construct_UClass_UGPMineshaft_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGPMineshaft.OuterSingleton;
}
template<> CAVES_API UClass* StaticClass<UGPMineshaft>()
{
	return UGPMineshaft::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGPMineshaft);
UGPMineshaft::~UGPMineshaft() {}
// End Class UGPMineshaft

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPMineshaft_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGPMineshaft, UGPMineshaft::StaticClass, TEXT("UGPMineshaft"), &Z_Registration_Info_UClass_UGPMineshaft, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGPMineshaft), 1173752439U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPMineshaft_h_2030966979(TEXT("/Script/Caves"),
	Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPMineshaft_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPMineshaft_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
