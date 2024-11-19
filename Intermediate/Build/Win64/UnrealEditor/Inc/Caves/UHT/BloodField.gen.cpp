// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Caves/Public/BloodField.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloodField() {}

// Begin Cross Module References
CAVES_API UClass* Z_Construct_UClass_ABloodField();
CAVES_API UClass* Z_Construct_UClass_ABloodField_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_Caves();
// End Cross Module References

// Begin Class ABloodField Function Splatter
struct Z_Construct_UFunction_ABloodField_Splatter_Statics
{
	struct BloodField_eventSplatter_Parms
	{
		FVector location;
		FVector direction;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Splatter" },
		{ "ModuleRelativePath", "Public/BloodField.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_direction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABloodField_Splatter_Statics::NewProp_location = { "location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BloodField_eventSplatter_Parms, location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABloodField_Splatter_Statics::NewProp_direction = { "direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BloodField_eventSplatter_Parms, direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABloodField_Splatter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABloodField_Splatter_Statics::NewProp_location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABloodField_Splatter_Statics::NewProp_direction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABloodField_Splatter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABloodField_Splatter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABloodField, nullptr, "Splatter", nullptr, nullptr, Z_Construct_UFunction_ABloodField_Splatter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABloodField_Splatter_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABloodField_Splatter_Statics::BloodField_eventSplatter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABloodField_Splatter_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABloodField_Splatter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABloodField_Splatter_Statics::BloodField_eventSplatter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABloodField_Splatter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABloodField_Splatter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABloodField::execSplatter)
{
	P_GET_STRUCT(FVector,Z_Param_location);
	P_GET_STRUCT(FVector,Z_Param_direction);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Splatter(Z_Param_location,Z_Param_direction);
	P_NATIVE_END;
}
// End Class ABloodField Function Splatter

// Begin Class ABloodField
void ABloodField::StaticRegisterNativesABloodField()
{
	UClass* Class = ABloodField::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Splatter", &ABloodField::execSplatter },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABloodField);
UClass* Z_Construct_UClass_ABloodField_NoRegister()
{
	return ABloodField::StaticClass();
}
struct Z_Construct_UClass_ABloodField_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BloodField.h" },
		{ "ModuleRelativePath", "Public/BloodField.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABloodField_Splatter, "Splatter" }, // 2194918444
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloodField>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABloodField_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Caves,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloodField_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABloodField_Statics::ClassParams = {
	&ABloodField::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABloodField_Statics::Class_MetaDataParams), Z_Construct_UClass_ABloodField_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABloodField()
{
	if (!Z_Registration_Info_UClass_ABloodField.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABloodField.OuterSingleton, Z_Construct_UClass_ABloodField_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABloodField.OuterSingleton;
}
template<> CAVES_API UClass* StaticClass<ABloodField>()
{
	return ABloodField::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABloodField);
ABloodField::~ABloodField() {}
// End Class ABloodField

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_BloodField_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABloodField, ABloodField::StaticClass, TEXT("ABloodField"), &Z_Registration_Info_UClass_ABloodField, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABloodField), 167080334U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_BloodField_h_1517224469(TEXT("/Script/Caves"),
	Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_BloodField_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_becca_source_repos_Caves_Source_Caves_Public_BloodField_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
