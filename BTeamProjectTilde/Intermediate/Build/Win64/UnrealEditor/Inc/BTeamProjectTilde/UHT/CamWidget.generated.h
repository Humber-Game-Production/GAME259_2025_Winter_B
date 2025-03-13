// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CamWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTextureRenderTarget2D;
#ifdef BTEAMPROJECTTILDE_CamWidget_generated_h
#error "CamWidget.generated.h already included, missing '#pragma once' in CamWidget.h"
#endif
#define BTEAMPROJECTTILDE_CamWidget_generated_h

#define FID_BTeamProjectTilde_Source_BTeamProjectTilde_Public_CamWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSwitchRenderTarget); \
	DECLARE_FUNCTION(execGetRenderTarget); \
	DECLARE_FUNCTION(execSetRenderTarget);


#define FID_BTeamProjectTilde_Source_BTeamProjectTilde_Public_CamWidget_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCamWidget(); \
	friend struct Z_Construct_UClass_UCamWidget_Statics; \
public: \
	DECLARE_CLASS(UCamWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BTeamProjectTilde"), NO_API) \
	DECLARE_SERIALIZER(UCamWidget)


#define FID_BTeamProjectTilde_Source_BTeamProjectTilde_Public_CamWidget_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCamWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCamWidget(UCamWidget&&); \
	UCamWidget(const UCamWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCamWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCamWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCamWidget) \
	NO_API virtual ~UCamWidget();


#define FID_BTeamProjectTilde_Source_BTeamProjectTilde_Public_CamWidget_h_12_PROLOG
#define FID_BTeamProjectTilde_Source_BTeamProjectTilde_Public_CamWidget_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BTeamProjectTilde_Source_BTeamProjectTilde_Public_CamWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_BTeamProjectTilde_Source_BTeamProjectTilde_Public_CamWidget_h_15_INCLASS_NO_PURE_DECLS \
	FID_BTeamProjectTilde_Source_BTeamProjectTilde_Public_CamWidget_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BTEAMPROJECTTILDE_API UClass* StaticClass<class UCamWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BTeamProjectTilde_Source_BTeamProjectTilde_Public_CamWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
