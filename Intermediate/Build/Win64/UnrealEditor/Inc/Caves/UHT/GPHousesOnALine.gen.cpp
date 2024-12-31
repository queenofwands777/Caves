// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Caves/Public/GPHousesOnALine.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGPHousesOnALine() {}

// Begin Cross Module References
CAVES_API UClass* Z_Construct_UClass_UGeneratorPattern();
CAVES_API UClass* Z_Construct_UClass_UGPHousesOnALine();
CAVES_API UClass* Z_Construct_UClass_UGPHousesOnALine_NoRegister();
UPackage* Z_Construct_UPackage__Script_Caves();
// End Cross Module References

// Begin Class UGPHousesOnALine
void UGPHousesOnALine::StaticRegisterNativesUGPHousesOnALine()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGPHousesOnALine);
UClass* Z_Construct_UClass_UGPHousesOnALine_NoRegister()
{
	return UGPHousesOnALine::StaticClass();
}
struct Z_Construct_UClass_UGPHousesOnALine_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GPHousesOnALine.h" },
		{ "ModuleRelativePath", "Public/GPHousesOnALine.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGPHousesOnALine>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGPHousesOnALine_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGeneratorPattern,
	(UObject* (*)())Z_Construct_UPackage__Script_Caves,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGPHousesOnALine_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGPHousesOnALine_Statics::ClassParams = {
	&UGPHousesOnALine::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGPHousesOnALine_Statics::Class_MetaDataParams), Z_Construct_UClass_UGPHousesOnALine_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGPHousesOnALine()
{
	if (!Z_Registration_Info_UClass_UGPHousesOnALine.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGPHousesOnALine.OuterSingleton, Z_Construct_UClass_UGPHousesOnALine_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGPHousesOnALine.OuterSingleton;
}
template<> CAVES_API UClass* StaticClass<UGPHousesOnALine>()
{
	return UGPHousesOnALine::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGPHousesOnALine);
UGPHousesOnALine::~UGPHousesOnALine() {}
// End Class UGPHousesOnALine

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPHousesOnALine_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGPHousesOnALine, UGPHousesOnALine::StaticClass, TEXT("UGPHousesOnALine"), &Z_Registration_Info_UClass_UGPHousesOnALine, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGPHousesOnALine), 1795271627U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPHousesOnALine_h_502243033(TEXT("/Script/Caves"),
	Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPHousesOnALine_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_GPHousesOnALine_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
