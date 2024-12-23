// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Caves/Public/LightningBolt.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLightningBolt() {}

// Begin Cross Module References
CAVES_API UClass* Z_Construct_UClass_ALightningBolt();
CAVES_API UClass* Z_Construct_UClass_ALightningBolt_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_Caves();
// End Cross Module References

// Begin Class ALightningBolt Function DrawLightning
struct Z_Construct_UFunction_ALightningBolt_DrawLightning_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/LightningBolt.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALightningBolt_DrawLightning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALightningBolt, nullptr, "DrawLightning", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALightningBolt_DrawLightning_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALightningBolt_DrawLightning_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ALightningBolt_DrawLightning()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALightningBolt_DrawLightning_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALightningBolt::execDrawLightning)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DrawLightning();
	P_NATIVE_END;
}
// End Class ALightningBolt Function DrawLightning

// Begin Class ALightningBolt
void ALightningBolt::StaticRegisterNativesALightningBolt()
{
	UClass* Class = ALightningBolt::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DrawLightning", &ALightningBolt::execDrawLightning },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALightningBolt);
UClass* Z_Construct_UClass_ALightningBolt_NoRegister()
{
	return ALightningBolt::StaticClass();
}
struct Z_Construct_UClass_ALightningBolt_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "LightningBolt.h" },
		{ "ModuleRelativePath", "Public/LightningBolt.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_start_location_MetaData[] = {
		{ "Category", "LightningBolt" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/LightningBolt.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_end_location_MetaData[] = {
		{ "Category", "LightningBolt" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/LightningBolt.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_start_location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_end_location;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ALightningBolt_DrawLightning, "DrawLightning" }, // 2215034295
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALightningBolt>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALightningBolt_Statics::NewProp_start_location = { "start_location", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALightningBolt, start_location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_start_location_MetaData), NewProp_start_location_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALightningBolt_Statics::NewProp_end_location = { "end_location", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALightningBolt, end_location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_end_location_MetaData), NewProp_end_location_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALightningBolt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALightningBolt_Statics::NewProp_start_location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALightningBolt_Statics::NewProp_end_location,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALightningBolt_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ALightningBolt_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Caves,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALightningBolt_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALightningBolt_Statics::ClassParams = {
	&ALightningBolt::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ALightningBolt_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ALightningBolt_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALightningBolt_Statics::Class_MetaDataParams), Z_Construct_UClass_ALightningBolt_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALightningBolt()
{
	if (!Z_Registration_Info_UClass_ALightningBolt.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALightningBolt.OuterSingleton, Z_Construct_UClass_ALightningBolt_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALightningBolt.OuterSingleton;
}
template<> CAVES_API UClass* StaticClass<ALightningBolt>()
{
	return ALightningBolt::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALightningBolt);
ALightningBolt::~ALightningBolt() {}
// End Class ALightningBolt

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_LightningBolt_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALightningBolt, ALightningBolt::StaticClass, TEXT("ALightningBolt"), &Z_Registration_Info_UClass_ALightningBolt, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALightningBolt), 2446854327U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_LightningBolt_h_3674262396(TEXT("/Script/Caves"),
	Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_LightningBolt_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_LightningBolt_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
