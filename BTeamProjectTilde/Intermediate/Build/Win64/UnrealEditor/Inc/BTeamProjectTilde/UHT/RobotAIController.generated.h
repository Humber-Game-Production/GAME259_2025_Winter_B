// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RobotAIController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BTEAMPROJECTTILDE_RobotAIController_generated_h
#error "RobotAIController.generated.h already included, missing '#pragma once' in RobotAIController.h"
#endif
#define BTEAMPROJECTTILDE_RobotAIController_generated_h

#define FID_BTeamProjectTilde_Source_BTeamProjectTilde_RobotAIController_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetMovementEnabled); \
	DECLARE_FUNCTION(execGetDesiredMovementDirection);


#define FID_BTeamProjectTilde_Source_BTeamProjectTilde_RobotAIController_h_21_CALLBACK_WRAPPERS
#define FID_BTeamProjectTilde_Source_BTeamProjectTilde_RobotAIController_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARobotAIController(); \
	friend struct Z_Construct_UClass_ARobotAIController_Statics; \
public: \
	DECLARE_CLASS(ARobotAIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BTeamProjectTilde"), NO_API) \
	DECLARE_SERIALIZER(ARobotAIController)


#define FID_BTeamProjectTilde_Source_BTeamProjectTilde_RobotAIController_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ARobotAIController(ARobotAIController&&); \
	ARobotAIController(const ARobotAIController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARobotAIController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARobotAIController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARobotAIController) \
	NO_API virtual ~ARobotAIController();


#define FID_BTeamProjectTilde_Source_BTeamProjectTilde_RobotAIController_h_18_PROLOG
#define FID_BTeamProjectTilde_Source_BTeamProjectTilde_RobotAIController_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BTeamProjectTilde_Source_BTeamProjectTilde_RobotAIController_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_BTeamProjectTilde_Source_BTeamProjectTilde_RobotAIController_h_21_CALLBACK_WRAPPERS \
	FID_BTeamProjectTilde_Source_BTeamProjectTilde_RobotAIController_h_21_INCLASS_NO_PURE_DECLS \
	FID_BTeamProjectTilde_Source_BTeamProjectTilde_RobotAIController_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BTEAMPROJECTTILDE_API UClass* StaticClass<class ARobotAIController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BTeamProjectTilde_Source_BTeamProjectTilde_RobotAIController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
