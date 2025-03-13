// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ContainerWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCamWidget;
class UWidget;
#ifdef BTEAMPROJECTTILDE_ContainerWidget_generated_h
#error "ContainerWidget.generated.h already included, missing '#pragma once' in ContainerWidget.h"
#endif
#define BTEAMPROJECTTILDE_ContainerWidget_generated_h

#define FID_BTeamProjectTilde_Source_BTeamProjectTilde_Public_ContainerWidget_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAddCameraWidgetToLayout); \
	DECLARE_FUNCTION(execAddUIWidgetToContainer); \
	DECLARE_FUNCTION(execUpdateLayout); \
	DECLARE_FUNCTION(execClearCameraWidgets); \
	DECLARE_FUNCTION(execAddCameraWidget);


#define FID_BTeamProjectTilde_Source_BTeamProjectTilde_Public_ContainerWidget_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUContainerWidget(); \
	friend struct Z_Construct_UClass_UContainerWidget_Statics; \
public: \
	DECLARE_CLASS(UContainerWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BTeamProjectTilde"), NO_API) \
	DECLARE_SERIALIZER(UContainerWidget)


#define FID_BTeamProjectTilde_Source_BTeamProjectTilde_Public_ContainerWidget_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UContainerWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UContainerWidget(UContainerWidget&&); \
	UContainerWidget(const UContainerWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UContainerWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UContainerWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UContainerWidget) \
	NO_API virtual ~UContainerWidget();


#define FID_BTeamProjectTilde_Source_BTeamProjectTilde_Public_ContainerWidget_h_15_PROLOG
#define FID_BTeamProjectTilde_Source_BTeamProjectTilde_Public_ContainerWidget_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BTeamProjectTilde_Source_BTeamProjectTilde_Public_ContainerWidget_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_BTeamProjectTilde_Source_BTeamProjectTilde_Public_ContainerWidget_h_18_INCLASS_NO_PURE_DECLS \
	FID_BTeamProjectTilde_Source_BTeamProjectTilde_Public_ContainerWidget_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BTEAMPROJECTTILDE_API UClass* StaticClass<class UContainerWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BTeamProjectTilde_Source_BTeamProjectTilde_Public_ContainerWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
