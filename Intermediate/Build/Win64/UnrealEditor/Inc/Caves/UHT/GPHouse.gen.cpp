// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Caves/Public/GPHouse.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGPHouse() {}

// Begin Cross Module References
CAVES_API UClass* Z_Construct_UClass_UGeneratorPattern();
CAVES_API UClass* Z_Construct_UClass_UGPHouse();
CAVES_API UClass* Z_Construct_UClass_UGPHouse_NoRegister();
UPackage* Z_Construct_UPackage__Script_Caves();
// End Cross Module References

// Begin Class UGPHouse
void UGPHouse::StaticRegisterNativesUGPHouse()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGPHouse);
UClass* Z_Construct_UClass_UGPHouse_NoRegister()
{
	return UGPHouse::StaticClass();
}
struct Z_Construct_UClass_UGPHouse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GPHouse.h" },
		{ "ModuleRelativePath", "Public/GPHouse.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGPHouse>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGPHouse_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGeneratorPattern,
	(UObject* (*)())Z_Construct_UPackage__Script_Caves,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGPHouse_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGPHouse_Statics::ClassParams = {
	&UGPHouse::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGPHouse_Statics::Class_MetaDataParams), Z_Construct_UClass_UGPHouse_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGPHouse()
{
	if (!Z_Registration_Info_UClass_UGPHouse.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGPHouse.OuterSingleton, Z_Construct_UClass_UGPHouse_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGPHouse.OuterSingleton;
}
template<> CAVES_API UClass* StaticClass<UGPHouse>()
{
	return UGPHouse::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGPHouse);
UGPHouse::~UGPHouse() {}
// End Class UGPHouse

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPHouse_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGPHouse, UGPHouse::StaticClass, TEXT("UGPHouse"), &Z_Registration_Info_UClass_UGPHouse, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGPHouse), 2660273078U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPHouse_h_3531155054(TEXT("/Script/Caves"),
	Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPHouse_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPHouse_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
