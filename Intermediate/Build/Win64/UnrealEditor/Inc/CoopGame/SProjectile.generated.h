// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COOPGAME_SProjectile_generated_h
#error "SProjectile.generated.h already included, missing '#pragma once' in SProjectile.h"
#endif
#define COOPGAME_SProjectile_generated_h

#define FID_CoopGame_Source_CoopGame_Public_SProjectile_h_15_SPARSE_DATA
#define FID_CoopGame_Source_CoopGame_Public_SProjectile_h_15_RPC_WRAPPERS
#define FID_CoopGame_Source_CoopGame_Public_SProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_CoopGame_Source_CoopGame_Public_SProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASProjectile(); \
	friend struct Z_Construct_UClass_ASProjectile_Statics; \
public: \
	DECLARE_CLASS(ASProjectile, ASWeapon, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CoopGame"), NO_API) \
	DECLARE_SERIALIZER(ASProjectile)


#define FID_CoopGame_Source_CoopGame_Public_SProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesASProjectile(); \
	friend struct Z_Construct_UClass_ASProjectile_Statics; \
public: \
	DECLARE_CLASS(ASProjectile, ASWeapon, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CoopGame"), NO_API) \
	DECLARE_SERIALIZER(ASProjectile)


#define FID_CoopGame_Source_CoopGame_Public_SProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASProjectile(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASProjectile(ASProjectile&&); \
	NO_API ASProjectile(const ASProjectile&); \
public:


#define FID_CoopGame_Source_CoopGame_Public_SProjectile_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASProjectile() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASProjectile(ASProjectile&&); \
	NO_API ASProjectile(const ASProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASProjectile)


#define FID_CoopGame_Source_CoopGame_Public_SProjectile_h_12_PROLOG
#define FID_CoopGame_Source_CoopGame_Public_SProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CoopGame_Source_CoopGame_Public_SProjectile_h_15_SPARSE_DATA \
	FID_CoopGame_Source_CoopGame_Public_SProjectile_h_15_RPC_WRAPPERS \
	FID_CoopGame_Source_CoopGame_Public_SProjectile_h_15_INCLASS \
	FID_CoopGame_Source_CoopGame_Public_SProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_CoopGame_Source_CoopGame_Public_SProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CoopGame_Source_CoopGame_Public_SProjectile_h_15_SPARSE_DATA \
	FID_CoopGame_Source_CoopGame_Public_SProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CoopGame_Source_CoopGame_Public_SProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_CoopGame_Source_CoopGame_Public_SProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COOPGAME_API UClass* StaticClass<class ASProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CoopGame_Source_CoopGame_Public_SProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
