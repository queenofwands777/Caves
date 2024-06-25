// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Caves/Public/BloodSplatter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloodSplatter() {}

// Begin Cross Module References
CAVES_API UClass* Z_Construct_UClass_ABloodSplatter();
CAVES_API UClass* Z_Construct_UClass_ABloodSplatter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
PAPER2D_API UClass* Z_Construct_UClass_UPaperSpriteComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Caves();
// End Cross Module References

// Begin Class ABloodSplatter
void ABloodSplatter::StaticRegisterNativesABloodSplatter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABloodSplatter);
UClass* Z_Construct_UClass_ABloodSplatter_NoRegister()
{
	return ABloodSplatter::StaticClass();
}
struct Z_Construct_UClass_ABloodSplatter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BloodSplatter.h" },
		{ "ModuleRelativePath", "Public/BloodSplatter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpriteComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Sprite" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BloodSplatter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpriteComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloodSplatter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABloodSplatter_Statics::NewProp_SpriteComponent = { "SpriteComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABloodSplatter, SpriteComponent), Z_Construct_UClass_UPaperSpriteComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpriteComponent_MetaData), NewProp_SpriteComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABloodSplatter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloodSplatter_Statics::NewProp_SpriteComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloodSplatter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABloodSplatter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Caves,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloodSplatter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABloodSplatter_Statics::ClassParams = {
	&ABloodSplatter::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABloodSplatter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABloodSplatter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABloodSplatter_Statics::Class_MetaDataParams), Z_Construct_UClass_ABloodSplatter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABloodSplatter()
{
	if (!Z_Registration_Info_UClass_ABloodSplatter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABloodSplatter.OuterSingleton, Z_Construct_UClass_ABloodSplatter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABloodSplatter.OuterSingleton;
}
template<> CAVES_API UClass* StaticClass<ABloodSplatter>()
{
	return ABloodSplatter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABloodSplatter);
ABloodSplatter::~ABloodSplatter() {}
// End Class ABloodSplatter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_becca_Documents_Unreal_Projects_Caves_Source_Caves_Public_BloodSplatter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABloodSplatter, ABloodSplatter::StaticClass, TEXT("ABloodSplatter"), &Z_Registration_Info_UClass_ABloodSplatter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABloodSplatter), 142932638U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_becca_Documents_Unreal_Projects_Caves_Source_Caves_Public_BloodSplatter_h_3765326828(TEXT("/Script/Caves"),
	Z_CompiledInDeferFile_FID_Users_becca_Documents_Unreal_Projects_Caves_Source_Caves_Public_BloodSplatter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_becca_Documents_Unreal_Projects_Caves_Source_Caves_Public_BloodSplatter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
