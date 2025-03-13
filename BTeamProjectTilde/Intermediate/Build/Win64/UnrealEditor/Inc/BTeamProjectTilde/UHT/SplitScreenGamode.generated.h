// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SplitScreenGamode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UWidget;
enum class ECMode : uint8;
#ifdef BTEAMPROJECTTILDE_SplitScreenGamode_generated_h
#error "SplitScreenGamode.generated.h already included, missing '#pragma once' in SplitScreenGamode.h"
#endif
#define BTEAMPROJECTTILDE_SplitScreenGamode_generated_h

#define FID_BTeamProjectTilde_Source_BTeamProjectTilde_Public_SplitScreenGamode_h_15_DELEGATE \
BTEAMPROJECTTILDE_API void FLastPuzzleIsDone_DelegateWrapper(const FMulticastScriptDelegate& LastPuzzleIsDone);


#define FID_BTeamProjectTilde_Source_BTeamProjectTilde_Public_SplitScreenGamode_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUpdatePuzzlesAchieved); \
	DECLARE_FUNCTION(execGetCameraViewport); \
	DECLARE_FUNCTION(execGetAssignedViewport); \
	DECLARE_FUNCTION(execSwitchBackCamera); \
	DECLARE_FUNCTION(execSwitchInCamera); \
	DECLARE_FUNCTION(execAddUIWidgetToScreen); \
	DECLARE_FUNCTION(execIniScreen); \
	DECLARE_FUNCTION(execSetMode);


#define FID_BTeamProjectTilde_Source_BTeamProjectTilde_Public_SplitScreenGamode_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASplitScreenGamode(); \
	friend struct Z_Construct_UClass_ASplitScreenGamode_Statics; \
public: \
	DECLARE_CLASS(ASplitScreenGamode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/BTeamProjectTilde"), NO_API) \
	DECLARE_SERIALIZER(ASplitScreenGamode)


#define FID_BTeamProjectTilde_Source_BTeamProjectTilde_Public_SplitScreenGamode_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASplitScreenGamode(ASplitScreenGamode&&); \
	ASplitScreenGamode(const ASplitScreenGamode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASplitScreenGamode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASplitScreenGamode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASplitScreenGamode) \
	NO_API virtual ~ASplitScreenGamode();


#define FID_BTeamProjectTilde_Source_BTeamProjectTilde_Public_SplitScreenGamode_h_19_PROLOG
#define FID_BTeamProjectTilde_Source_BTeamProjectTilde_Public_SplitScreenGamode_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BTeamProjectTilde_Source_BTeamProjectTilde_Public_SplitScreenGamode_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_BTeamProjectTilde_Source_BTeamProjectTilde_Public_SplitScreenGamode_h_22_INCLASS_NO_PURE_DECLS \
	FID_BTeamProjectTilde_Source_BTeamProjectTilde_Public_SplitScreenGamode_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BTEAMPROJECTTILDE_API UClass* StaticClass<class ASplitScreenGamode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BTeamProjectTilde_Source_BTeamProjectTilde_Public_SplitScreenGamode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
