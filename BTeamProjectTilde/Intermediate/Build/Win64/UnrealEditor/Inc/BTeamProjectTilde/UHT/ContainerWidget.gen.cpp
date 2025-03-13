// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BTeamProjectTilde/Public/ContainerWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeContainerWidget() {}

// Begin Cross Module References
BTEAMPROJECTTILDE_API UClass* Z_Construct_UClass_UCamWidget_NoRegister();
BTEAMPROJECTTILDE_API UClass* Z_Construct_UClass_UContainerWidget();
BTEAMPROJECTTILDE_API UClass* Z_Construct_UClass_UContainerWidget_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_BTeamProjectTilde();
// End Cross Module References

// Begin Class UContainerWidget Function AddCameraWidget
struct Z_Construct_UFunction_UContainerWidget_AddCameraWidget_Statics
{
	struct ContainerWidget_eventAddCameraWidget_Parms
	{
		UCamWidget* camWidget_;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ContainerWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_camWidget__MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_camWidget_;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UContainerWidget_AddCameraWidget_Statics::NewProp_camWidget_ = { "camWidget_", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ContainerWidget_eventAddCameraWidget_Parms, camWidget_), Z_Construct_UClass_UCamWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_camWidget__MetaData), NewProp_camWidget__MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContainerWidget_AddCameraWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContainerWidget_AddCameraWidget_Statics::NewProp_camWidget_,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UContainerWidget_AddCameraWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContainerWidget_AddCameraWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContainerWidget, nullptr, "AddCameraWidget", nullptr, nullptr, Z_Construct_UFunction_UContainerWidget_AddCameraWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContainerWidget_AddCameraWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UContainerWidget_AddCameraWidget_Statics::ContainerWidget_eventAddCameraWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UContainerWidget_AddCameraWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UContainerWidget_AddCameraWidget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UContainerWidget_AddCameraWidget_Statics::ContainerWidget_eventAddCameraWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UContainerWidget_AddCameraWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContainerWidget_AddCameraWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UContainerWidget::execAddCameraWidget)
{
	P_GET_OBJECT(UCamWidget,Z_Param_camWidget_);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddCameraWidget(Z_Param_camWidget_);
	P_NATIVE_END;
}
// End Class UContainerWidget Function AddCameraWidget

// Begin Class UContainerWidget Function AddCameraWidgetToLayout
struct Z_Construct_UFunction_UContainerWidget_AddCameraWidgetToLayout_Statics
{
	struct ContainerWidget_eventAddCameraWidgetToLayout_Parms
	{
		UCamWidget* CameraWidget;
		FVector2D Position;
		FVector2D Size;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ContainerWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraWidget;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Size;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UContainerWidget_AddCameraWidgetToLayout_Statics::NewProp_CameraWidget = { "CameraWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ContainerWidget_eventAddCameraWidgetToLayout_Parms, CameraWidget), Z_Construct_UClass_UCamWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraWidget_MetaData), NewProp_CameraWidget_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UContainerWidget_AddCameraWidgetToLayout_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ContainerWidget_eventAddCameraWidgetToLayout_Parms, Position), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UContainerWidget_AddCameraWidgetToLayout_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ContainerWidget_eventAddCameraWidgetToLayout_Parms, Size), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContainerWidget_AddCameraWidgetToLayout_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContainerWidget_AddCameraWidgetToLayout_Statics::NewProp_CameraWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContainerWidget_AddCameraWidgetToLayout_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContainerWidget_AddCameraWidgetToLayout_Statics::NewProp_Size,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UContainerWidget_AddCameraWidgetToLayout_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContainerWidget_AddCameraWidgetToLayout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContainerWidget, nullptr, "AddCameraWidgetToLayout", nullptr, nullptr, Z_Construct_UFunction_UContainerWidget_AddCameraWidgetToLayout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContainerWidget_AddCameraWidgetToLayout_Statics::PropPointers), sizeof(Z_Construct_UFunction_UContainerWidget_AddCameraWidgetToLayout_Statics::ContainerWidget_eventAddCameraWidgetToLayout_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00840401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UContainerWidget_AddCameraWidgetToLayout_Statics::Function_MetaDataParams), Z_Construct_UFunction_UContainerWidget_AddCameraWidgetToLayout_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UContainerWidget_AddCameraWidgetToLayout_Statics::ContainerWidget_eventAddCameraWidgetToLayout_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UContainerWidget_AddCameraWidgetToLayout()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContainerWidget_AddCameraWidgetToLayout_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UContainerWidget::execAddCameraWidgetToLayout)
{
	P_GET_OBJECT(UCamWidget,Z_Param_CameraWidget);
	P_GET_STRUCT(FVector2D,Z_Param_Position);
	P_GET_STRUCT(FVector2D,Z_Param_Size);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddCameraWidgetToLayout(Z_Param_CameraWidget,Z_Param_Position,Z_Param_Size);
	P_NATIVE_END;
}
// End Class UContainerWidget Function AddCameraWidgetToLayout

// Begin Class UContainerWidget Function AddUIWidgetToContainer
struct Z_Construct_UFunction_UContainerWidget_AddUIWidgetToContainer_Statics
{
	struct ContainerWidget_eventAddUIWidgetToContainer_Parms
	{
		UWidget* widget_;
		int32 Zorder_;
		int32 viewPort;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ContainerWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_widget__MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_widget_;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Zorder_;
	static const UECodeGen_Private::FIntPropertyParams NewProp_viewPort;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UContainerWidget_AddUIWidgetToContainer_Statics::NewProp_widget_ = { "widget_", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ContainerWidget_eventAddUIWidgetToContainer_Parms, widget_), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_widget__MetaData), NewProp_widget__MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UContainerWidget_AddUIWidgetToContainer_Statics::NewProp_Zorder_ = { "Zorder_", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ContainerWidget_eventAddUIWidgetToContainer_Parms, Zorder_), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UContainerWidget_AddUIWidgetToContainer_Statics::NewProp_viewPort = { "viewPort", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ContainerWidget_eventAddUIWidgetToContainer_Parms, viewPort), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContainerWidget_AddUIWidgetToContainer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContainerWidget_AddUIWidgetToContainer_Statics::NewProp_widget_,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContainerWidget_AddUIWidgetToContainer_Statics::NewProp_Zorder_,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContainerWidget_AddUIWidgetToContainer_Statics::NewProp_viewPort,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UContainerWidget_AddUIWidgetToContainer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContainerWidget_AddUIWidgetToContainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContainerWidget, nullptr, "AddUIWidgetToContainer", nullptr, nullptr, Z_Construct_UFunction_UContainerWidget_AddUIWidgetToContainer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContainerWidget_AddUIWidgetToContainer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UContainerWidget_AddUIWidgetToContainer_Statics::ContainerWidget_eventAddUIWidgetToContainer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UContainerWidget_AddUIWidgetToContainer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UContainerWidget_AddUIWidgetToContainer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UContainerWidget_AddUIWidgetToContainer_Statics::ContainerWidget_eventAddUIWidgetToContainer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UContainerWidget_AddUIWidgetToContainer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContainerWidget_AddUIWidgetToContainer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UContainerWidget::execAddUIWidgetToContainer)
{
	P_GET_OBJECT(UWidget,Z_Param_widget_);
	P_GET_PROPERTY(FIntProperty,Z_Param_Zorder_);
	P_GET_PROPERTY(FIntProperty,Z_Param_viewPort);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddUIWidgetToContainer(Z_Param_widget_,Z_Param_Zorder_,Z_Param_viewPort);
	P_NATIVE_END;
}
// End Class UContainerWidget Function AddUIWidgetToContainer

// Begin Class UContainerWidget Function ClearCameraWidgets
struct Z_Construct_UFunction_UContainerWidget_ClearCameraWidgets_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ContainerWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContainerWidget_ClearCameraWidgets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContainerWidget, nullptr, "ClearCameraWidgets", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UContainerWidget_ClearCameraWidgets_Statics::Function_MetaDataParams), Z_Construct_UFunction_UContainerWidget_ClearCameraWidgets_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UContainerWidget_ClearCameraWidgets()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContainerWidget_ClearCameraWidgets_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UContainerWidget::execClearCameraWidgets)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearCameraWidgets();
	P_NATIVE_END;
}
// End Class UContainerWidget Function ClearCameraWidgets

// Begin Class UContainerWidget Function UpdateLayout
struct Z_Construct_UFunction_UContainerWidget_UpdateLayout_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ContainerWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContainerWidget_UpdateLayout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContainerWidget, nullptr, "UpdateLayout", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UContainerWidget_UpdateLayout_Statics::Function_MetaDataParams), Z_Construct_UFunction_UContainerWidget_UpdateLayout_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UContainerWidget_UpdateLayout()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContainerWidget_UpdateLayout_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UContainerWidget::execUpdateLayout)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateLayout();
	P_NATIVE_END;
}
// End Class UContainerWidget Function UpdateLayout

// Begin Class UContainerWidget
void UContainerWidget::StaticRegisterNativesUContainerWidget()
{
	UClass* Class = UContainerWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddCameraWidget", &UContainerWidget::execAddCameraWidget },
		{ "AddCameraWidgetToLayout", &UContainerWidget::execAddCameraWidgetToLayout },
		{ "AddUIWidgetToContainer", &UContainerWidget::execAddUIWidgetToContainer },
		{ "ClearCameraWidgets", &UContainerWidget::execClearCameraWidgets },
		{ "UpdateLayout", &UContainerWidget::execUpdateLayout },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UContainerWidget);
UClass* Z_Construct_UClass_UContainerWidget_NoRegister()
{
	return UContainerWidget::StaticClass();
}
struct Z_Construct_UClass_UContainerWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "ContainerWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ContainerWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_pCameraContainer_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ContainerWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArrCameraWidgets_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ContainerWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_pCameraContainer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ArrCameraWidgets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ArrCameraWidgets;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UContainerWidget_AddCameraWidget, "AddCameraWidget" }, // 2584382406
		{ &Z_Construct_UFunction_UContainerWidget_AddCameraWidgetToLayout, "AddCameraWidgetToLayout" }, // 485139364
		{ &Z_Construct_UFunction_UContainerWidget_AddUIWidgetToContainer, "AddUIWidgetToContainer" }, // 870954079
		{ &Z_Construct_UFunction_UContainerWidget_ClearCameraWidgets, "ClearCameraWidgets" }, // 2435422235
		{ &Z_Construct_UFunction_UContainerWidget_UpdateLayout, "UpdateLayout" }, // 3787292942
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UContainerWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UContainerWidget_Statics::NewProp_pCameraContainer = { "pCameraContainer", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UContainerWidget, pCameraContainer), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_pCameraContainer_MetaData), NewProp_pCameraContainer_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UContainerWidget_Statics::NewProp_ArrCameraWidgets_Inner = { "ArrCameraWidgets", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UCamWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UContainerWidget_Statics::NewProp_ArrCameraWidgets = { "ArrCameraWidgets", nullptr, (EPropertyFlags)0x0040008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UContainerWidget, ArrCameraWidgets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArrCameraWidgets_MetaData), NewProp_ArrCameraWidgets_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UContainerWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContainerWidget_Statics::NewProp_pCameraContainer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContainerWidget_Statics::NewProp_ArrCameraWidgets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContainerWidget_Statics::NewProp_ArrCameraWidgets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UContainerWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UContainerWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_BTeamProjectTilde,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UContainerWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UContainerWidget_Statics::ClassParams = {
	&UContainerWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UContainerWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UContainerWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UContainerWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UContainerWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UContainerWidget()
{
	if (!Z_Registration_Info_UClass_UContainerWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UContainerWidget.OuterSingleton, Z_Construct_UClass_UContainerWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UContainerWidget.OuterSingleton;
}
template<> BTEAMPROJECTTILDE_API UClass* StaticClass<UContainerWidget>()
{
	return UContainerWidget::StaticClass();
}
UContainerWidget::UContainerWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UContainerWidget);
UContainerWidget::~UContainerWidget() {}
// End Class UContainerWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_BTeamProjectTilde_Source_BTeamProjectTilde_Public_ContainerWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UContainerWidget, UContainerWidget::StaticClass, TEXT("UContainerWidget"), &Z_Registration_Info_UClass_UContainerWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UContainerWidget), 399857852U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BTeamProjectTilde_Source_BTeamProjectTilde_Public_ContainerWidget_h_599321143(TEXT("/Script/BTeamProjectTilde"),
	Z_CompiledInDeferFile_FID_BTeamProjectTilde_Source_BTeamProjectTilde_Public_ContainerWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BTeamProjectTilde_Source_BTeamProjectTilde_Public_ContainerWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
