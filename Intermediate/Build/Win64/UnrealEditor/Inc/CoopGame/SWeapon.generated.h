// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COOPGAME_SWeapon_generated_h
#error "SWeapon.generated.h already included, missing '#pragma once' in SWeapon.h"
#endif
#define COOPGAME_SWeapon_generated_h

#define FID_CoopGame_Source_CoopGame_Public_SWeapon_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHitScanTrace_Statics; \
	COOPGAME_API static class UScriptStruct* StaticStruct();


template<> COOPGAME_API UScriptStruct* StaticStruct<struct FHitScanTrace>();

#define FID_CoopGame_Source_CoopGame_Public_SWeapon_h_32_SPARSE_DATA
#define FID_CoopGame_Source_CoopGame_Public_SWeapon_h_32_RPC_WRAPPERS \
	virtual bool ServerFire_Validate(); \
	virtual void ServerFire_Implementation(); \
 \
	DECLARE_FUNCTION(execStopFire); \
	DECLARE_FUNCTION(execStartFire); \
	DECLARE_FUNCTION(execServerFire); \
	DECLARE_FUNCTION(execFire); \
	DECLARE_FUNCTION(execOnRep_HitScanTrace);


#define FID_CoopGame_Source_CoopGame_Public_SWeapon_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ServerFire_Validate(); \
	virtual void ServerFire_Implementation(); \
 \
	DECLARE_FUNCTION(execStopFire); \
	DECLARE_FUNCTION(execStartFire); \
	DECLARE_FUNCTION(execServerFire); \
	DECLARE_FUNCTION(execFire); \
	DECLARE_FUNCTION(execOnRep_HitScanTrace);


#define FID_CoopGame_Source_CoopGame_Public_SWeapon_h_32_EVENT_PARMS
#define FID_CoopGame_Source_CoopGame_Public_SWeapon_h_32_CALLBACK_WRAPPERS
#define FID_CoopGame_Source_CoopGame_Public_SWeapon_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASWeapon(); \
	friend struct Z_Construct_UClass_ASWeapon_Statics; \
public: \
	DECLARE_CLASS(ASWeapon, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CoopGame"), NO_API) \
	DECLARE_SERIALIZER(ASWeapon) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		HitScanTrace=NETFIELD_REP_START, \
		NETFIELD_REP_END=HitScanTrace	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_CoopGame_Source_CoopGame_Public_SWeapon_h_32_INCLASS \
private: \
	static void StaticRegisterNativesASWeapon(); \
	friend struct Z_Construct_UClass_ASWeapon_Statics; \
public: \
	DECLARE_CLASS(ASWeapon, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CoopGame"), NO_API) \
	DECLARE_SERIALIZER(ASWeapon) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		HitScanTrace=NETFIELD_REP_START, \
		NETFIELD_REP_END=HitScanTrace	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_CoopGame_Source_CoopGame_Public_SWeapon_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASWeapon(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASWeapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASWeapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASWeapon(ASWeapon&&); \
	NO_API ASWeapon(const ASWeapon&); \
public:


#define FID_CoopGame_Source_CoopGame_Public_SWeapon_h_32_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASWeapon(ASWeapon&&); \
	NO_API ASWeapon(const ASWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASWeapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASWeapon)


#define FID_CoopGame_Source_CoopGame_Public_SWeapon_h_29_PROLOG \
	FID_CoopGame_Source_CoopGame_Public_SWeapon_h_32_EVENT_PARMS


#define FID_CoopGame_Source_CoopGame_Public_SWeapon_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CoopGame_Source_CoopGame_Public_SWeapon_h_32_SPARSE_DATA \
	FID_CoopGame_Source_CoopGame_Public_SWeapon_h_32_RPC_WRAPPERS \
	FID_CoopGame_Source_CoopGame_Public_SWeapon_h_32_CALLBACK_WRAPPERS \
	FID_CoopGame_Source_CoopGame_Public_SWeapon_h_32_INCLASS \
	FID_CoopGame_Source_CoopGame_Public_SWeapon_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_CoopGame_Source_CoopGame_Public_SWeapon_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CoopGame_Source_CoopGame_Public_SWeapon_h_32_SPARSE_DATA \
	FID_CoopGame_Source_CoopGame_Public_SWeapon_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CoopGame_Source_CoopGame_Public_SWeapon_h_32_CALLBACK_WRAPPERS \
	FID_CoopGame_Source_CoopGame_Public_SWeapon_h_32_INCLASS_NO_PURE_DECLS \
	FID_CoopGame_Source_CoopGame_Public_SWeapon_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COOPGAME_API UClass* StaticClass<class ASWeapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CoopGame_Source_CoopGame_Public_SWeapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
