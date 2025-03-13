// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BTeamProjectTilde/Public/ScreenManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScreenManager() {}

// Begin Cross Module References
BTEAMPROJECTTILDE_API UClass* Z_Construct_UClass_UCamWidget_NoRegister();
BTEAMPROJECTTILDE_API UClass* Z_Construct_UClass_UContainerWidget_NoRegister();
BTEAMPROJECTTILDE_API UClass* Z_Construct_UClass_UScreenManager();
BTEAMPROJECTTILDE_API UClass* Z_Construct_UClass_UScreenManager_NoRegister();
BTEAMPROJECTTILDE_API UEnum* Z_Construct_UEnum_BTeamProjectTilde_ECMode();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_BTeamProjectTilde();
// End Cross Module References

// Begin Class UScreenManager Function AddUIWidgetToScreen
struct Z_Construct_UFunction_UScreenManager_AddUIWidgetToScreen_Statics
{
	struct ScreenManager_eventAddUIWidgetToScreen_Parms
	{
		UWidget* widget_;
		int32 Zorder;
		int32 viewPort;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Spilt Screen" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Adds widget to screen given a zorder and viewport \n" },
#endif
		{ "ModuleRelativePath", "Public/ScreenManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds widget to screen given a zorder and viewport" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_widget__MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_widget_;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Zorder;
	static const UECodeGen_Private::FIntPropertyParams NewProp_viewPort;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UScreenManager_AddUIWidgetToScreen_Statics::NewProp_widget_ = { "widget_", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ScreenManager_eventAddUIWidgetToScreen_Parms, widget_), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_widget__MetaData), NewProp_widget__MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UScreenManager_AddUIWidgetToScreen_Statics::NewProp_Zorder = { "Zorder", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ScreenManager_eventAddUIWidgetToScreen_Parms, Zorder), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UScreenManager_AddUIWidgetToScreen_Statics::NewProp_viewPort = { "viewPort", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ScreenManager_eventAddUIWidgetToScreen_Parms, viewPort), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScreenManager_AddUIWidgetToScreen_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenManager_AddUIWidgetToScreen_Statics::NewProp_widget_,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenManager_AddUIWidgetToScreen_Statics::NewProp_Zorder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenManager_AddUIWidgetToScreen_Statics::NewProp_viewPort,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UScreenManager_AddUIWidgetToScreen_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScreenManager_AddUIWidgetToScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScreenManager, nullptr, "AddUIWidgetToScreen", nullptr, nullptr, Z_Construct_UFunction_UScreenManager_AddUIWidgetToScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScreenManager_AddUIWidgetToScreen_Statics::PropPointers), sizeof(Z_Construct_UFunction_UScreenManager_AddUIWidgetToScreen_Statics::ScreenManager_eventAddUIWidgetToScreen_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UScreenManager_AddUIWidgetToScreen_Statics::Function_MetaDataParams), Z_Construct_UFunction_UScreenManager_AddUIWidgetToScreen_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UScreenManager_AddUIWidgetToScreen_Statics::ScreenManager_eventAddUIWidgetToScreen_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UScreenManager_AddUIWidgetToScreen()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScreenManager_AddUIWidgetToScreen_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UScreenManager::execAddUIWidgetToScreen)
{
	P_GET_OBJECT(UWidget,Z_Param_widget_);
	P_GET_PROPERTY(FIntProperty,Z_Param_Zorder);
	P_GET_PROPERTY(FIntProperty,Z_Param_viewPort);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddUIWidgetToScreen(Z_Param_widget_,Z_Param_Zorder,Z_Param_viewPort);
	P_NATIVE_END;
}
// End Class UScreenManager Function AddUIWidgetToScreen

// Begin Class UScreenManager Function CleanUp
struct Z_Construct_UFunction_UScreenManager_CleanUp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Memory clean Up in case it is needed\n" },
#endif
		{ "ModuleRelativePath", "Public/ScreenManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Memory clean Up in case it is needed" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScreenManager_CleanUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScreenManager, nullptr, "CleanUp", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UScreenManager_CleanUp_Statics::Function_MetaDataParams), Z_Construct_UFunction_UScreenManager_CleanUp_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UScreenManager_CleanUp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScreenManager_CleanUp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UScreenManager::execCleanUp)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CleanUp();
	P_NATIVE_END;
}
// End Class UScreenManager Function CleanUp

// Begin Class UScreenManager Function IniScreenManager
struct Z_Construct_UFunction_UScreenManager_IniScreenManager_Statics
{
	struct ScreenManager_eventIniScreenManager_Parms
	{
		TSubclassOf<UUserWidget> InWidgetBP;
		TSubclassOf<UContainerWidget> InWidgetBP2;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gameplay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Initilizer Function\n" },
#endif
		{ "ModuleRelativePath", "Public/ScreenManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Initilizer Function" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_InWidgetBP;
	static const UECodeGen_Private::FClassPropertyParams NewProp_InWidgetBP2;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UScreenManager_IniScreenManager_Statics::NewProp_InWidgetBP = { "InWidgetBP", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ScreenManager_eventIniScreenManager_Parms, InWidgetBP), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UScreenManager_IniScreenManager_Statics::NewProp_InWidgetBP2 = { "InWidgetBP2", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ScreenManager_eventIniScreenManager_Parms, InWidgetBP2), Z_Construct_UClass_UClass, Z_Construct_UClass_UContainerWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScreenManager_IniScreenManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenManager_IniScreenManager_Statics::NewProp_InWidgetBP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenManager_IniScreenManager_Statics::NewProp_InWidgetBP2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UScreenManager_IniScreenManager_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScreenManager_IniScreenManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScreenManager, nullptr, "IniScreenManager", nullptr, nullptr, Z_Construct_UFunction_UScreenManager_IniScreenManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScreenManager_IniScreenManager_Statics::PropPointers), sizeof(Z_Construct_UFunction_UScreenManager_IniScreenManager_Statics::ScreenManager_eventIniScreenManager_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UScreenManager_IniScreenManager_Statics::Function_MetaDataParams), Z_Construct_UFunction_UScreenManager_IniScreenManager_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UScreenManager_IniScreenManager_Statics::ScreenManager_eventIniScreenManager_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UScreenManager_IniScreenManager()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScreenManager_IniScreenManager_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UScreenManager::execIniScreenManager)
{
	P_GET_OBJECT(UClass,Z_Param_InWidgetBP);
	P_GET_OBJECT(UClass,Z_Param_InWidgetBP2);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->IniScreenManager(Z_Param_InWidgetBP,Z_Param_InWidgetBP2);
	P_NATIVE_END;
}
// End Class UScreenManager Function IniScreenManager

// Begin Class UScreenManager Function SetMode
struct Z_Construct_UFunction_UScreenManager_SetMode_Statics
{
	struct ScreenManager_eventSetMode_Parms
	{
		ECMode mode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Spilt Screen" },
		{ "ModuleRelativePath", "Public/ScreenManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_mode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_mode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UScreenManager_SetMode_Statics::NewProp_mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UScreenManager_SetMode_Statics::NewProp_mode = { "mode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ScreenManager_eventSetMode_Parms, mode), Z_Construct_UEnum_BTeamProjectTilde_ECMode, METADATA_PARAMS(0, nullptr) }; // 3806085766
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScreenManager_SetMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenManager_SetMode_Statics::NewProp_mode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenManager_SetMode_Statics::NewProp_mode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UScreenManager_SetMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScreenManager_SetMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScreenManager, nullptr, "SetMode", nullptr, nullptr, Z_Construct_UFunction_UScreenManager_SetMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScreenManager_SetMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UScreenManager_SetMode_Statics::ScreenManager_eventSetMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UScreenManager_SetMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UScreenManager_SetMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UScreenManager_SetMode_Statics::ScreenManager_eventSetMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UScreenManager_SetMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScreenManager_SetMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UScreenManager::execSetMode)
{
	P_GET_ENUM(ECMode,Z_Param_mode);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMode(ECMode(Z_Param_mode));
	P_NATIVE_END;
}
// End Class UScreenManager Function SetMode

// Begin Class UScreenManager Function SwitchBackCamera
struct Z_Construct_UFunction_UScreenManager_SwitchBackCamera_Statics
{
	struct ScreenManager_eventSwitchBackCamera_Parms
	{
		int32 playerId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Spilt Screen" },
		{ "ModuleRelativePath", "Public/ScreenManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_playerId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UScreenManager_SwitchBackCamera_Statics::NewProp_playerId = { "playerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ScreenManager_eventSwitchBackCamera_Parms, playerId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScreenManager_SwitchBackCamera_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenManager_SwitchBackCamera_Statics::NewProp_playerId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UScreenManager_SwitchBackCamera_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScreenManager_SwitchBackCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScreenManager, nullptr, "SwitchBackCamera", nullptr, nullptr, Z_Construct_UFunction_UScreenManager_SwitchBackCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScreenManager_SwitchBackCamera_Statics::PropPointers), sizeof(Z_Construct_UFunction_UScreenManager_SwitchBackCamera_Statics::ScreenManager_eventSwitchBackCamera_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UScreenManager_SwitchBackCamera_Statics::Function_MetaDataParams), Z_Construct_UFunction_UScreenManager_SwitchBackCamera_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UScreenManager_SwitchBackCamera_Statics::ScreenManager_eventSwitchBackCamera_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UScreenManager_SwitchBackCamera()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScreenManager_SwitchBackCamera_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UScreenManager::execSwitchBackCamera)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_playerId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SwitchBackCamera(Z_Param_playerId);
	P_NATIVE_END;
}
// End Class UScreenManager Function SwitchBackCamera

// Begin Class UScreenManager Function SwitchInCamera
struct Z_Construct_UFunction_UScreenManager_SwitchInCamera_Statics
{
	struct ScreenManager_eventSwitchInCamera_Parms
	{
		AActor* Camera;
		int32 playerId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Spilt Screen" },
		{ "ModuleRelativePath", "Public/ScreenManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
	static const UECodeGen_Private::FIntPropertyParams NewProp_playerId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UScreenManager_SwitchInCamera_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ScreenManager_eventSwitchInCamera_Parms, Camera), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UScreenManager_SwitchInCamera_Statics::NewProp_playerId = { "playerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ScreenManager_eventSwitchInCamera_Parms, playerId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScreenManager_SwitchInCamera_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenManager_SwitchInCamera_Statics::NewProp_Camera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenManager_SwitchInCamera_Statics::NewProp_playerId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UScreenManager_SwitchInCamera_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScreenManager_SwitchInCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScreenManager, nullptr, "SwitchInCamera", nullptr, nullptr, Z_Construct_UFunction_UScreenManager_SwitchInCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScreenManager_SwitchInCamera_Statics::PropPointers), sizeof(Z_Construct_UFunction_UScreenManager_SwitchInCamera_Statics::ScreenManager_eventSwitchInCamera_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UScreenManager_SwitchInCamera_Statics::Function_MetaDataParams), Z_Construct_UFunction_UScreenManager_SwitchInCamera_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UScreenManager_SwitchInCamera_Statics::ScreenManager_eventSwitchInCamera_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UScreenManager_SwitchInCamera()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScreenManager_SwitchInCamera_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UScreenManager::execSwitchInCamera)
{
	P_GET_OBJECT(AActor,Z_Param_Camera);
	P_GET_PROPERTY(FIntProperty,Z_Param_playerId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SwitchInCamera(Z_Param_Camera,Z_Param_playerId);
	P_NATIVE_END;
}
// End Class UScreenManager Function SwitchInCamera

// Begin Class UScreenManager Function UpdateLayout
struct Z_Construct_UFunction_UScreenManager_UpdateLayout_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gameplay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Function to Update the Player ViewPorts\n" },
#endif
		{ "ModuleRelativePath", "Public/ScreenManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function to Update the Player ViewPorts" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScreenManager_UpdateLayout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScreenManager, nullptr, "UpdateLayout", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UScreenManager_UpdateLayout_Statics::Function_MetaDataParams), Z_Construct_UFunction_UScreenManager_UpdateLayout_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UScreenManager_UpdateLayout()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScreenManager_UpdateLayout_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UScreenManager::execUpdateLayout)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateLayout();
	P_NATIVE_END;
}
// End Class UScreenManager Function UpdateLayout

// Begin Class UScreenManager
void UScreenManager::StaticRegisterNativesUScreenManager()
{
	UClass* Class = UScreenManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddUIWidgetToScreen", &UScreenManager::execAddUIWidgetToScreen },
		{ "CleanUp", &UScreenManager::execCleanUp },
		{ "IniScreenManager", &UScreenManager::execIniScreenManager },
		{ "SetMode", &UScreenManager::execSetMode },
		{ "SwitchBackCamera", &UScreenManager::execSwitchBackCamera },
		{ "SwitchInCamera", &UScreenManager::execSwitchInCamera },
		{ "UpdateLayout", &UScreenManager::execUpdateLayout },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UScreenManager);
UClass* Z_Construct_UClass_UScreenManager_NoRegister()
{
	return UScreenManager::StaticClass();
}
struct Z_Construct_UClass_UScreenManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "ScreenManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ScreenManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArrRenderTargets_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//ScreenManger keeps refernce to all the objects it creats.\n" },
#endif
		{ "ModuleRelativePath", "Public/ScreenManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ScreenManger keeps refernce to all the objects it creats." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArrCamerasArray_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ScreenManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_pContainer_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ScreenManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraTargetMap_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Map to keep Track and look up cameras to their render targets\n" },
#endif
		{ "ModuleRelativePath", "Public/ScreenManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Map to keep Track and look up cameras to their render targets" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerToWidgetMap_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Map to keep Track and look up Camera Widegts to player Ids\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ScreenManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Map to keep Track and look up Camera Widegts to player Ids" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviousTargets_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Map to keep track of multiple camera switches.\n" },
#endif
		{ "ModuleRelativePath", "Public/ScreenManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Map to keep track of multiple camera switches." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Currentmode_MetaData[] = {
		{ "ModuleRelativePath", "Public/ScreenManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_cCameraTemplate_MetaData[] = {
		{ "ModuleRelativePath", "Public/ScreenManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_cContainterTemplate_MetaData[] = {
		{ "ModuleRelativePath", "Public/ScreenManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ArrRenderTargets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ArrRenderTargets;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ArrCamerasArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ArrCamerasArray;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_pContainer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraTargetMap_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraTargetMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_CameraTargetMap;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerToWidgetMap_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerToWidgetMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_PlayerToWidgetMap;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviousTargets_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PreviousTargets_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_PreviousTargets;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Currentmode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Currentmode;
	static const UECodeGen_Private::FClassPropertyParams NewProp_cCameraTemplate;
	static const UECodeGen_Private::FClassPropertyParams NewProp_cContainterTemplate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UScreenManager_AddUIWidgetToScreen, "AddUIWidgetToScreen" }, // 3813551302
		{ &Z_Construct_UFunction_UScreenManager_CleanUp, "CleanUp" }, // 1783872852
		{ &Z_Construct_UFunction_UScreenManager_IniScreenManager, "IniScreenManager" }, // 3093355073
		{ &Z_Construct_UFunction_UScreenManager_SetMode, "SetMode" }, // 583250536
		{ &Z_Construct_UFunction_UScreenManager_SwitchBackCamera, "SwitchBackCamera" }, // 3879196352
		{ &Z_Construct_UFunction_UScreenManager_SwitchInCamera, "SwitchInCamera" }, // 2845832925
		{ &Z_Construct_UFunction_UScreenManager_UpdateLayout, "UpdateLayout" }, // 1935935026
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UScreenManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UScreenManager_Statics::NewProp_ArrRenderTargets_Inner = { "ArrRenderTargets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UScreenManager_Statics::NewProp_ArrRenderTargets = { "ArrRenderTargets", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UScreenManager, ArrRenderTargets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArrRenderTargets_MetaData), NewProp_ArrRenderTargets_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UScreenManager_Statics::NewProp_ArrCamerasArray_Inner = { "ArrCamerasArray", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UCamWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UScreenManager_Statics::NewProp_ArrCamerasArray = { "ArrCamerasArray", nullptr, (EPropertyFlags)0x0040008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UScreenManager, ArrCamerasArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArrCamerasArray_MetaData), NewProp_ArrCamerasArray_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UScreenManager_Statics::NewProp_pContainer = { "pContainer", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UScreenManager, pContainer), Z_Construct_UClass_UContainerWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_pContainer_MetaData), NewProp_pContainer_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UScreenManager_Statics::NewProp_CameraTargetMap_ValueProp = { "CameraTargetMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UScreenManager_Statics::NewProp_CameraTargetMap_Key_KeyProp = { "CameraTargetMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UScreenManager_Statics::NewProp_CameraTargetMap = { "CameraTargetMap", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UScreenManager, CameraTargetMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraTargetMap_MetaData), NewProp_CameraTargetMap_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UScreenManager_Statics::NewProp_PlayerToWidgetMap_ValueProp = { "PlayerToWidgetMap", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UCamWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UScreenManager_Statics::NewProp_PlayerToWidgetMap_Key_KeyProp = { "PlayerToWidgetMap_Key", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UScreenManager_Statics::NewProp_PlayerToWidgetMap = { "PlayerToWidgetMap", nullptr, (EPropertyFlags)0x0040008000000008, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UScreenManager, PlayerToWidgetMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerToWidgetMap_MetaData), NewProp_PlayerToWidgetMap_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UScreenManager_Statics::NewProp_PreviousTargets_ValueProp = { "PreviousTargets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UScreenManager_Statics::NewProp_PreviousTargets_Key_KeyProp = { "PreviousTargets_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UScreenManager_Statics::NewProp_PreviousTargets = { "PreviousTargets", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UScreenManager, PreviousTargets), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviousTargets_MetaData), NewProp_PreviousTargets_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UScreenManager_Statics::NewProp_Currentmode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UScreenManager_Statics::NewProp_Currentmode = { "Currentmode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UScreenManager, Currentmode), Z_Construct_UEnum_BTeamProjectTilde_ECMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Currentmode_MetaData), NewProp_Currentmode_MetaData) }; // 3806085766
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UScreenManager_Statics::NewProp_cCameraTemplate = { "cCameraTemplate", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UScreenManager, cCameraTemplate), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_cCameraTemplate_MetaData), NewProp_cCameraTemplate_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UScreenManager_Statics::NewProp_cContainterTemplate = { "cContainterTemplate", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UScreenManager, cContainterTemplate), Z_Construct_UClass_UClass, Z_Construct_UClass_UContainerWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_cContainterTemplate_MetaData), NewProp_cContainterTemplate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UScreenManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScreenManager_Statics::NewProp_ArrRenderTargets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScreenManager_Statics::NewProp_ArrRenderTargets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScreenManager_Statics::NewProp_ArrCamerasArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScreenManager_Statics::NewProp_ArrCamerasArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScreenManager_Statics::NewProp_pContainer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScreenManager_Statics::NewProp_CameraTargetMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScreenManager_Statics::NewProp_CameraTargetMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScreenManager_Statics::NewProp_CameraTargetMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScreenManager_Statics::NewProp_PlayerToWidgetMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScreenManager_Statics::NewProp_PlayerToWidgetMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScreenManager_Statics::NewProp_PlayerToWidgetMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScreenManager_Statics::NewProp_PreviousTargets_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScreenManager_Statics::NewProp_PreviousTargets_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScreenManager_Statics::NewProp_PreviousTargets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScreenManager_Statics::NewProp_Currentmode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScreenManager_Statics::NewProp_Currentmode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScreenManager_Statics::NewProp_cCameraTemplate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScreenManager_Statics::NewProp_cContainterTemplate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UScreenManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UScreenManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_BTeamProjectTilde,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UScreenManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UScreenManager_Statics::ClassParams = {
	&UScreenManager::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UScreenManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UScreenManager_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UScreenManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UScreenManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UScreenManager()
{
	if (!Z_Registration_Info_UClass_UScreenManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UScreenManager.OuterSingleton, Z_Construct_UClass_UScreenManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UScreenManager.OuterSingleton;
}
template<> BTEAMPROJECTTILDE_API UClass* StaticClass<UScreenManager>()
{
	return UScreenManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UScreenManager);
UScreenManager::~UScreenManager() {}
// End Class UScreenManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_BTeamProjectTilde_Source_BTeamProjectTilde_Public_ScreenManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UScreenManager, UScreenManager::StaticClass, TEXT("UScreenManager"), &Z_Registration_Info_UClass_UScreenManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UScreenManager), 2593520121U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BTeamProjectTilde_Source_BTeamProjectTilde_Public_ScreenManager_h_2280627044(TEXT("/Script/BTeamProjectTilde"),
	Z_CompiledInDeferFile_FID_BTeamProjectTilde_Source_BTeamProjectTilde_Public_ScreenManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BTeamProjectTilde_Source_BTeamProjectTilde_Public_ScreenManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
