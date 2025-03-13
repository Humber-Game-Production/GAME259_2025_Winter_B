// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ScreenManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UContainerWidget;
class UUserWidget;
class UWidget;
enum class ECMode : uint8;
#ifdef BTEAMPROJECTTILDE_ScreenManager_generated_h
#error "ScreenManager.generated.h already included, missing '#pragma once' in ScreenManager.h"
#endif
#define BTEAMPROJECTTILDE_ScreenManager_generated_h

#define FID_BTeamProjectTilde_Source_BTeamProjectTilde_Public_ScreenManager_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSwitchBackCamera); \
	DECLARE_FUNCTION(execSwitchInCamera); \
	DECLARE_FUNCTION(execCleanUp); \
	DECLARE_FUNCTION(execAddUIWidgetToScreen); \
	DECLARE_FUNCTION(execUpdateLayout); \
	DECLARE_FUNCTION(execIniScreenManager); \
	DECLARE_FUNCTION(execSetMode);


#define FID_BTeamProjectTilde_Source_BTeamProjectTilde_Public_ScreenManager_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUScreenManager(); \
	friend struct Z_Construct_UClass_UScreenManager_Statics; \
public: \
	DECLARE_CLASS(UScreenManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BTeamProjectTilde"), NO_API) \
	DECLARE_SERIALIZER(UScreenManager)


#define FID_BTeamProjectTilde_Source_BTeamProjectTilde_Public_ScreenManager_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UScreenManager(UScreenManager&&); \
	UScreenManager(const UScreenManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UScreenManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScreenManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UScreenManager) \
	NO_API virtual ~UScreenManager();


#define FID_BTeamProjectTilde_Source_BTeamProjectTilde_Public_ScreenManager_h_16_PROLOG
#define FID_BTeamProjectTilde_Source_BTeamProjectTilde_Public_ScreenManager_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BTeamProjectTilde_Source_BTeamProjectTilde_Public_ScreenManager_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_BTeamProjectTilde_Source_BTeamProjectTilde_Public_ScreenManager_h_19_INCLASS_NO_PURE_DECLS \
	FID_BTeamProjectTilde_Source_BTeamProjectTilde_Public_ScreenManager_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BTEAMPROJECTTILDE_API UClass* StaticClass<class UScreenManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BTeamProjectTilde_Source_BTeamProjectTilde_Public_ScreenManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
