// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Game/AGameModeBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARENABATTLE_AGameModeBase_generated_h
#error "AGameModeBase.generated.h already included, missing '#pragma once' in AGameModeBase.h"
#endif
#define ARENABATTLE_AGameModeBase_generated_h

#define FID_ArenaBattle_Source_ArenaBattle_Game_AGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAGameModeBase(); \
	friend struct Z_Construct_UClass_AAGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AAGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArenaBattle"), NO_API) \
	DECLARE_SERIALIZER(AAGameModeBase)


#define FID_ArenaBattle_Source_ArenaBattle_Game_AGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AAGameModeBase(AAGameModeBase&&); \
	AAGameModeBase(const AAGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAGameModeBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAGameModeBase) \
	NO_API virtual ~AAGameModeBase();


#define FID_ArenaBattle_Source_ArenaBattle_Game_AGameModeBase_h_12_PROLOG
#define FID_ArenaBattle_Source_ArenaBattle_Game_AGameModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ArenaBattle_Source_ArenaBattle_Game_AGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
	FID_ArenaBattle_Source_ArenaBattle_Game_AGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARENABATTLE_API UClass* StaticClass<class AAGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ArenaBattle_Source_ArenaBattle_Game_AGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
