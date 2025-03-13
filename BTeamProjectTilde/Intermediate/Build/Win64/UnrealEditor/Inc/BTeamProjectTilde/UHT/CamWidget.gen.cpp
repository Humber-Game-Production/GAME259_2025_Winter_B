// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BTeamProjectTilde/Public/CamWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCamWidget() {}

// Begin Cross Module References
BTEAMPROJECTTILDE_API UClass* Z_Construct_UClass_UCamWidget();
BTEAMPROJECTTILDE_API UClass* Z_Construct_UClass_UCamWidget_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_BTeamProjectTilde();
// End Cross Module References

// Begin Class UCamWidget Function GetRenderTarget
struct Z_Construct_UFunction_UCamWidget_GetRenderTarget_Statics
{
	struct CamWidget_eventGetRenderTarget_Parms
	{
		UTextureRenderTarget2D* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CamWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCamWidget_GetRenderTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CamWidget_eventGetRenderTarget_Parms, ReturnValue), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCamWidget_GetRenderTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCamWidget_GetRenderTarget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCamWidget_GetRenderTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCamWidget_GetRenderTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCamWidget, nullptr, "GetRenderTarget", nullptr, nullptr, Z_Construct_UFunction_UCamWidget_GetRenderTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCamWidget_GetRenderTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCamWidget_GetRenderTarget_Statics::CamWidget_eventGetRenderTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCamWidget_GetRenderTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCamWidget_GetRenderTarget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCamWidget_GetRenderTarget_Statics::CamWidget_eventGetRenderTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCamWidget_GetRenderTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCamWidget_GetRenderTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCamWidget::execGetRenderTarget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTextureRenderTarget2D**)Z_Param__Result=P_THIS->GetRenderTarget();
	P_NATIVE_END;
}
// End Class UCamWidget Function GetRenderTarget

// Begin Class UCamWidget Function SetRenderTarget
struct Z_Construct_UFunction_UCamWidget_SetRenderTarget_Statics
{
	struct CamWidget_eventSetRenderTarget_Parms
	{
		UTextureRenderTarget2D* renderTarget_;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CamWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_renderTarget_;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCamWidget_SetRenderTarget_Statics::NewProp_renderTarget_ = { "renderTarget_", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CamWidget_eventSetRenderTarget_Parms, renderTarget_), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCamWidget_SetRenderTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCamWidget_SetRenderTarget_Statics::NewProp_renderTarget_,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCamWidget_SetRenderTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCamWidget_SetRenderTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCamWidget, nullptr, "SetRenderTarget", nullptr, nullptr, Z_Construct_UFunction_UCamWidget_SetRenderTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCamWidget_SetRenderTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCamWidget_SetRenderTarget_Statics::CamWidget_eventSetRenderTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCamWidget_SetRenderTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCamWidget_SetRenderTarget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCamWidget_SetRenderTarget_Statics::CamWidget_eventSetRenderTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCamWidget_SetRenderTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCamWidget_SetRenderTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCamWidget::execSetRenderTarget)
{
	P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_renderTarget_);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRenderTarget(Z_Param_renderTarget_);
	P_NATIVE_END;
}
// End Class UCamWidget Function SetRenderTarget

// Begin Class UCamWidget Function SwitchRenderTarget
struct Z_Construct_UFunction_UCamWidget_SwitchRenderTarget_Statics
{
	struct CamWidget_eventSwitchRenderTarget_Parms
	{
		UTextureRenderTarget2D* newTarget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CamWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_newTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCamWidget_SwitchRenderTarget_Statics::NewProp_newTarget = { "newTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CamWidget_eventSwitchRenderTarget_Parms, newTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCamWidget_SwitchRenderTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCamWidget_SwitchRenderTarget_Statics::NewProp_newTarget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCamWidget_SwitchRenderTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCamWidget_SwitchRenderTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCamWidget, nullptr, "SwitchRenderTarget", nullptr, nullptr, Z_Construct_UFunction_UCamWidget_SwitchRenderTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCamWidget_SwitchRenderTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCamWidget_SwitchRenderTarget_Statics::CamWidget_eventSwitchRenderTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCamWidget_SwitchRenderTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCamWidget_SwitchRenderTarget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCamWidget_SwitchRenderTarget_Statics::CamWidget_eventSwitchRenderTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCamWidget_SwitchRenderTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCamWidget_SwitchRenderTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCamWidget::execSwitchRenderTarget)
{
	P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_newTarget);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SwitchRenderTarget(Z_Param_newTarget);
	P_NATIVE_END;
}
// End Class UCamWidget Function SwitchRenderTarget

// Begin Class UCamWidget
void UCamWidget::StaticRegisterNativesUCamWidget()
{
	UClass* Class = UCamWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetRenderTarget", &UCamWidget::execGetRenderTarget },
		{ "SetRenderTarget", &UCamWidget::execSetRenderTarget },
		{ "SwitchRenderTarget", &UCamWidget::execSwitchRenderTarget },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCamWidget);
UClass* Z_Construct_UClass_UCamWidget_NoRegister()
{
	return UCamWidget::StaticClass();
}
struct Z_Construct_UClass_UCamWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "CamWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CamWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_pRenderTargetImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CamWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_pRenderTargetMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/CamWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_pRenderTarget_MetaData[] = {
		{ "ModuleRelativePath", "Public/CamWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_pRenderTargetImage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_pRenderTargetMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_pRenderTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCamWidget_GetRenderTarget, "GetRenderTarget" }, // 1356725
		{ &Z_Construct_UFunction_UCamWidget_SetRenderTarget, "SetRenderTarget" }, // 2554704078
		{ &Z_Construct_UFunction_UCamWidget_SwitchRenderTarget, "SwitchRenderTarget" }, // 3896162806
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCamWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCamWidget_Statics::NewProp_pRenderTargetImage = { "pRenderTargetImage", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCamWidget, pRenderTargetImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_pRenderTargetImage_MetaData), NewProp_pRenderTargetImage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCamWidget_Statics::NewProp_pRenderTargetMaterial = { "pRenderTargetMaterial", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCamWidget, pRenderTargetMaterial), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_pRenderTargetMaterial_MetaData), NewProp_pRenderTargetMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCamWidget_Statics::NewProp_pRenderTarget = { "pRenderTarget", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCamWidget, pRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_pRenderTarget_MetaData), NewProp_pRenderTarget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCamWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCamWidget_Statics::NewProp_pRenderTargetImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCamWidget_Statics::NewProp_pRenderTargetMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCamWidget_Statics::NewProp_pRenderTarget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCamWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCamWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_BTeamProjectTilde,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCamWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCamWidget_Statics::ClassParams = {
	&UCamWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCamWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCamWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCamWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UCamWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCamWidget()
{
	if (!Z_Registration_Info_UClass_UCamWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCamWidget.OuterSingleton, Z_Construct_UClass_UCamWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCamWidget.OuterSingleton;
}
template<> BTEAMPROJECTTILDE_API UClass* StaticClass<UCamWidget>()
{
	return UCamWidget::StaticClass();
}
UCamWidget::UCamWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCamWidget);
UCamWidget::~UCamWidget() {}
// End Class UCamWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_BTeamProjectTilde_Source_BTeamProjectTilde_Public_CamWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCamWidget, UCamWidget::StaticClass, TEXT("UCamWidget"), &Z_Registration_Info_UClass_UCamWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCamWidget), 2305955526U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BTeamProjectTilde_Source_BTeamProjectTilde_Public_CamWidget_h_2505180247(TEXT("/Script/BTeamProjectTilde"),
	Z_CompiledInDeferFile_FID_BTeamProjectTilde_Source_BTeamProjectTilde_Public_CamWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BTeamProjectTilde_Source_BTeamProjectTilde_Public_CamWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
