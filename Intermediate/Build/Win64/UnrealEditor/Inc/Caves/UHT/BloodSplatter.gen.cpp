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
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
PAPER2D_API UClass* Z_Construct_UClass_UPaperSpriteComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Caves();
// End Cross Module References

// Begin Class ABloodSplatter Function InitParams
struct Z_Construct_UFunction_ABloodSplatter_InitParams_Statics
{
	struct BloodSplatter_eventInitParams_Parms
	{
		int32 _num_probes;
		int32 _blood_quantity;
		float _max_angle;
		int32 _probe_lifetime;
		int32 _probe_variance;
		int32 _probe_speed;
		FVector _direction;
		FVector _location;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Initialization" },
		{ "ModuleRelativePath", "Public/BloodSplatter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp__num_probes;
	static const UECodeGen_Private::FIntPropertyParams NewProp__blood_quantity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp__max_angle;
	static const UECodeGen_Private::FIntPropertyParams NewProp__probe_lifetime;
	static const UECodeGen_Private::FIntPropertyParams NewProp__probe_variance;
	static const UECodeGen_Private::FIntPropertyParams NewProp__probe_speed;
	static const UECodeGen_Private::FStructPropertyParams NewProp__direction;
	static const UECodeGen_Private::FStructPropertyParams NewProp__location;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABloodSplatter_InitParams_Statics::NewProp__num_probes = { "_num_probes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BloodSplatter_eventInitParams_Parms, _num_probes), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABloodSplatter_InitParams_Statics::NewProp__blood_quantity = { "_blood_quantity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BloodSplatter_eventInitParams_Parms, _blood_quantity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABloodSplatter_InitParams_Statics::NewProp__max_angle = { "_max_angle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BloodSplatter_eventInitParams_Parms, _max_angle), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABloodSplatter_InitParams_Statics::NewProp__probe_lifetime = { "_probe_lifetime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BloodSplatter_eventInitParams_Parms, _probe_lifetime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABloodSplatter_InitParams_Statics::NewProp__probe_variance = { "_probe_variance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BloodSplatter_eventInitParams_Parms, _probe_variance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABloodSplatter_InitParams_Statics::NewProp__probe_speed = { "_probe_speed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BloodSplatter_eventInitParams_Parms, _probe_speed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABloodSplatter_InitParams_Statics::NewProp__direction = { "_direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BloodSplatter_eventInitParams_Parms, _direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABloodSplatter_InitParams_Statics::NewProp__location = { "_location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BloodSplatter_eventInitParams_Parms, _location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABloodSplatter_InitParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABloodSplatter_InitParams_Statics::NewProp__num_probes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABloodSplatter_InitParams_Statics::NewProp__blood_quantity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABloodSplatter_InitParams_Statics::NewProp__max_angle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABloodSplatter_InitParams_Statics::NewProp__probe_lifetime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABloodSplatter_InitParams_Statics::NewProp__probe_variance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABloodSplatter_InitParams_Statics::NewProp__probe_speed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABloodSplatter_InitParams_Statics::NewProp__direction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABloodSplatter_InitParams_Statics::NewProp__location,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABloodSplatter_InitParams_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABloodSplatter_InitParams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABloodSplatter, nullptr, "InitParams", nullptr, nullptr, Z_Construct_UFunction_ABloodSplatter_InitParams_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABloodSplatter_InitParams_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABloodSplatter_InitParams_Statics::BloodSplatter_eventInitParams_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABloodSplatter_InitParams_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABloodSplatter_InitParams_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABloodSplatter_InitParams_Statics::BloodSplatter_eventInitParams_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABloodSplatter_InitParams()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABloodSplatter_InitParams_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABloodSplatter::execInitParams)
{
	P_GET_PROPERTY(FIntProperty,Z_Param__num_probes);
	P_GET_PROPERTY(FIntProperty,Z_Param__blood_quantity);
	P_GET_PROPERTY(FFloatProperty,Z_Param__max_angle);
	P_GET_PROPERTY(FIntProperty,Z_Param__probe_lifetime);
	P_GET_PROPERTY(FIntProperty,Z_Param__probe_variance);
	P_GET_PROPERTY(FIntProperty,Z_Param__probe_speed);
	P_GET_STRUCT(FVector,Z_Param__direction);
	P_GET_STRUCT(FVector,Z_Param__location);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitParams(Z_Param__num_probes,Z_Param__blood_quantity,Z_Param__max_angle,Z_Param__probe_lifetime,Z_Param__probe_variance,Z_Param__probe_speed,Z_Param__direction,Z_Param__location);
	P_NATIVE_END;
}
// End Class ABloodSplatter Function InitParams

// Begin Class ABloodSplatter Function Splatter
struct Z_Construct_UFunction_ABloodSplatter_Splatter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Splatter" },
		{ "ModuleRelativePath", "Public/BloodSplatter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABloodSplatter_Splatter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABloodSplatter, nullptr, "Splatter", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABloodSplatter_Splatter_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABloodSplatter_Splatter_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ABloodSplatter_Splatter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABloodSplatter_Splatter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABloodSplatter::execSplatter)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Splatter();
	P_NATIVE_END;
}
// End Class ABloodSplatter Function Splatter

// Begin Class ABloodSplatter
void ABloodSplatter::StaticRegisterNativesABloodSplatter()
{
	UClass* Class = ABloodSplatter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "InitParams", &ABloodSplatter::execInitParams },
		{ "Splatter", &ABloodSplatter::execSplatter },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_num_probes_MetaData[] = {
		{ "Category", "Initialization" },
		{ "ModuleRelativePath", "Public/BloodSplatter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_blood_quantity_MetaData[] = {
		{ "Category", "Initialization" },
		{ "ModuleRelativePath", "Public/BloodSplatter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_max_angle_MetaData[] = {
		{ "Category", "Initialization" },
		{ "ModuleRelativePath", "Public/BloodSplatter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_probe_lifetime_MetaData[] = {
		{ "Category", "Initialization" },
		{ "ModuleRelativePath", "Public/BloodSplatter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_probe_variance_MetaData[] = {
		{ "Category", "Initialization" },
		{ "ModuleRelativePath", "Public/BloodSplatter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_probe_speed_MetaData[] = {
		{ "Category", "Initialization" },
		{ "ModuleRelativePath", "Public/BloodSplatter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_direction_MetaData[] = {
		{ "Category", "Initialization" },
		{ "ModuleRelativePath", "Public/BloodSplatter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_location_MetaData[] = {
		{ "Category", "Initialization" },
		{ "ModuleRelativePath", "Public/BloodSplatter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_splatter_texture_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Texture" },
		{ "ModuleRelativePath", "Public/BloodSplatter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpriteComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Sprite" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BloodSplatter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_num_probes;
	static const UECodeGen_Private::FIntPropertyParams NewProp_blood_quantity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_max_angle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_probe_lifetime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_probe_variance;
	static const UECodeGen_Private::FIntPropertyParams NewProp_probe_speed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_direction;
	static const UECodeGen_Private::FStructPropertyParams NewProp_location;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_splatter_texture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpriteComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABloodSplatter_InitParams, "InitParams" }, // 3087062601
		{ &Z_Construct_UFunction_ABloodSplatter_Splatter, "Splatter" }, // 3270687124
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloodSplatter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABloodSplatter_Statics::NewProp_num_probes = { "num_probes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABloodSplatter, num_probes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_num_probes_MetaData), NewProp_num_probes_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABloodSplatter_Statics::NewProp_blood_quantity = { "blood_quantity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABloodSplatter, blood_quantity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_blood_quantity_MetaData), NewProp_blood_quantity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABloodSplatter_Statics::NewProp_max_angle = { "max_angle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABloodSplatter, max_angle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_max_angle_MetaData), NewProp_max_angle_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABloodSplatter_Statics::NewProp_probe_lifetime = { "probe_lifetime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABloodSplatter, probe_lifetime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_probe_lifetime_MetaData), NewProp_probe_lifetime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABloodSplatter_Statics::NewProp_probe_variance = { "probe_variance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABloodSplatter, probe_variance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_probe_variance_MetaData), NewProp_probe_variance_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABloodSplatter_Statics::NewProp_probe_speed = { "probe_speed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABloodSplatter, probe_speed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_probe_speed_MetaData), NewProp_probe_speed_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABloodSplatter_Statics::NewProp_direction = { "direction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABloodSplatter, direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_direction_MetaData), NewProp_direction_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABloodSplatter_Statics::NewProp_location = { "location", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABloodSplatter, location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_location_MetaData), NewProp_location_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABloodSplatter_Statics::NewProp_splatter_texture = { "splatter_texture", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABloodSplatter, splatter_texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_splatter_texture_MetaData), NewProp_splatter_texture_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABloodSplatter_Statics::NewProp_SpriteComponent = { "SpriteComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABloodSplatter, SpriteComponent), Z_Construct_UClass_UPaperSpriteComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpriteComponent_MetaData), NewProp_SpriteComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABloodSplatter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloodSplatter_Statics::NewProp_num_probes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloodSplatter_Statics::NewProp_blood_quantity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloodSplatter_Statics::NewProp_max_angle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloodSplatter_Statics::NewProp_probe_lifetime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloodSplatter_Statics::NewProp_probe_variance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloodSplatter_Statics::NewProp_probe_speed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloodSplatter_Statics::NewProp_direction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloodSplatter_Statics::NewProp_location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloodSplatter_Statics::NewProp_splatter_texture,
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
	FuncInfo,
	Z_Construct_UClass_ABloodSplatter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
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
		{ Z_Construct_UClass_ABloodSplatter, ABloodSplatter::StaticClass, TEXT("ABloodSplatter"), &Z_Registration_Info_UClass_ABloodSplatter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABloodSplatter), 10397951U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_becca_Documents_Unreal_Projects_Caves_Source_Caves_Public_BloodSplatter_h_3373313009(TEXT("/Script/Caves"),
	Z_CompiledInDeferFile_FID_Users_becca_Documents_Unreal_Projects_Caves_Source_Caves_Public_BloodSplatter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_becca_Documents_Unreal_Projects_Caves_Source_Caves_Public_BloodSplatter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
