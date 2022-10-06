// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USHealthComponent;
class UDamageType;
class AController;
class AActor;
#ifdef COOPGAME_STracerBot_generated_h
#error "STracerBot.generated.h already included, missing '#pragma once' in STracerBot.h"
#endif
#define COOPGAME_STracerBot_generated_h

#define FID_CoopGame_Source_CoopGame_Public_AI_STracerBot_h_17_SPARSE_DATA
#define FID_CoopGame_Source_CoopGame_Public_AI_STracerBot_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleTakeDamage);


#define FID_CoopGame_Source_CoopGame_Public_AI_STracerBot_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleTakeDamage);


#define FID_CoopGame_Source_CoopGame_Public_AI_STracerBot_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASTracerBot(); \
	friend struct Z_Construct_UClass_ASTracerBot_Statics; \
public: \
	DECLARE_CLASS(ASTracerBot, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CoopGame"), NO_API) \
	DECLARE_SERIALIZER(ASTracerBot)


#define FID_CoopGame_Source_CoopGame_Public_AI_STracerBot_h_17_INCLASS \
private: \
	static void StaticRegisterNativesASTracerBot(); \
	friend struct Z_Construct_UClass_ASTracerBot_Statics; \
public: \
	DECLARE_CLASS(ASTracerBot, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CoopGame"), NO_API) \
	DECLARE_SERIALIZER(ASTracerBot)


#define FID_CoopGame_Source_CoopGame_Public_AI_STracerBot_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASTracerBot(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASTracerBot) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASTracerBot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASTracerBot); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASTracerBot(ASTracerBot&&); \
	NO_API ASTracerBot(const ASTracerBot&); \
public:


#define FID_CoopGame_Source_CoopGame_Public_AI_STracerBot_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASTracerBot(ASTracerBot&&); \
	NO_API ASTracerBot(const ASTracerBot&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASTracerBot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASTracerBot); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASTracerBot)


#define FID_CoopGame_Source_CoopGame_Public_AI_STracerBot_h_14_PROLOG
#define FID_CoopGame_Source_CoopGame_Public_AI_STracerBot_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CoopGame_Source_CoopGame_Public_AI_STracerBot_h_17_SPARSE_DATA \
	FID_CoopGame_Source_CoopGame_Public_AI_STracerBot_h_17_RPC_WRAPPERS \
	FID_CoopGame_Source_CoopGame_Public_AI_STracerBot_h_17_INCLASS \
	FID_CoopGame_Source_CoopGame_Public_AI_STracerBot_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_CoopGame_Source_CoopGame_Public_AI_STracerBot_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CoopGame_Source_CoopGame_Public_AI_STracerBot_h_17_SPARSE_DATA \
	FID_CoopGame_Source_CoopGame_Public_AI_STracerBot_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CoopGame_Source_CoopGame_Public_AI_STracerBot_h_17_INCLASS_NO_PURE_DECLS \
	FID_CoopGame_Source_CoopGame_Public_AI_STracerBot_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COOPGAME_API UClass* StaticClass<class ASTracerBot>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CoopGame_Source_CoopGame_Public_AI_STracerBot_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
