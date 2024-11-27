// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Caves/Public/BeccasBFL.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBeccasBFL() {}

// Begin Cross Module References
CAVES_API UClass* Z_Construct_UClass_UBeccasBFL();
CAVES_API UClass* Z_Construct_UClass_UBeccasBFL_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_Caves();
// End Cross Module References

// Begin Class UBeccasBFL
void UBeccasBFL::StaticRegisterNativesUBeccasBFL()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBeccasBFL);
UClass* Z_Construct_UClass_UBeccasBFL_NoRegister()
{
	return UBeccasBFL::StaticClass();
}
struct Z_Construct_UClass_UBeccasBFL_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BeccasBFL.h" },
		{ "ModuleRelativePath", "Public/BeccasBFL.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBeccasBFL>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBeccasBFL_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_Caves,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBeccasBFL_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBeccasBFL_Statics::ClassParams = {
	&UBeccasBFL::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBeccasBFL_Statics::Class_MetaDataParams), Z_Construct_UClass_UBeccasBFL_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBeccasBFL()
{
	if (!Z_Registration_Info_UClass_UBeccasBFL.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBeccasBFL.OuterSingleton, Z_Construct_UClass_UBeccasBFL_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBeccasBFL.OuterSingleton;
}
template<> CAVES_API UClass* StaticClass<UBeccasBFL>()
{
	return UBeccasBFL::StaticClass();
}
UBeccasBFL::UBeccasBFL(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBeccasBFL);
UBeccasBFL::~UBeccasBFL() {}
// End Class UBeccasBFL

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_BeccasBFL_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBeccasBFL, UBeccasBFL::StaticClass, TEXT("UBeccasBFL"), &Z_Registration_Info_UClass_UBeccasBFL, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBeccasBFL), 1351701896U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_BeccasBFL_h_2895163466(TEXT("/Script/Caves"),
	Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_BeccasBFL_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_BeccasBFL_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
