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
#ifdef COOPGAME_SexplosiveBarrel_generated_h
#error "SexplosiveBarrel.generated.h already included, missing '#pragma once' in SexplosiveBarrel.h"
#endif
#define COOPGAME_SexplosiveBarrel_generated_h

#define FID_CoopGame_Source_CoopGame_Public_Challenges_SexplosiveBarrel_h_17_SPARSE_DATA
#define FID_CoopGame_Source_CoopGame_Public_Challenges_SexplosiveBarrel_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_Exploded); \
	DECLARE_FUNCTION(execOnHealthChanged);


#define FID_CoopGame_Source_CoopGame_Public_Challenges_SexplosiveBarrel_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_Exploded); \
	DECLARE_FUNCTION(execOnHealthChanged);


#define FID_CoopGame_Source_CoopGame_Public_Challenges_SexplosiveBarrel_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASexplosiveBarrel(); \
	friend struct Z_Construct_UClass_ASexplosiveBarrel_Statics; \
public: \
	DECLARE_CLASS(ASexplosiveBarrel, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CoopGame"), NO_API) \
	DECLARE_SERIALIZER(ASexplosiveBarrel) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bExploded=NETFIELD_REP_START, \
		NETFIELD_REP_END=bExploded	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_CoopGame_Source_CoopGame_Public_Challenges_SexplosiveBarrel_h_17_INCLASS \
private: \
	static void StaticRegisterNativesASexplosiveBarrel(); \
	friend struct Z_Construct_UClass_ASexplosiveBarrel_Statics; \
public: \
	DECLARE_CLASS(ASexplosiveBarrel, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CoopGame"), NO_API) \
	DECLARE_SERIALIZER(ASexplosiveBarrel) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bExploded=NETFIELD_REP_START, \
		NETFIELD_REP_END=bExploded	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_CoopGame_Source_CoopGame_Public_Challenges_SexplosiveBarrel_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASexplosiveBarrel(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASexplosiveBarrel) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASexplosiveBarrel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASexplosiveBarrel); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASexplosiveBarrel(ASexplosiveBarrel&&); \
	NO_API ASexplosiveBarrel(const ASexplosiveBarrel&); \
public:


#define FID_CoopGame_Source_CoopGame_Public_Challenges_SexplosiveBarrel_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASexplosiveBarrel(ASexplosiveBarrel&&); \
	NO_API ASexplosiveBarrel(const ASexplosiveBarrel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASexplosiveBarrel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASexplosiveBarrel); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASexplosiveBarrel)


#define FID_CoopGame_Source_CoopGame_Public_Challenges_SexplosiveBarrel_h_14_PROLOG
#define FID_CoopGame_Source_CoopGame_Public_Challenges_SexplosiveBarrel_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CoopGame_Source_CoopGame_Public_Challenges_SexplosiveBarrel_h_17_SPARSE_DATA \
	FID_CoopGame_Source_CoopGame_Public_Challenges_SexplosiveBarrel_h_17_RPC_WRAPPERS \
	FID_CoopGame_Source_CoopGame_Public_Challenges_SexplosiveBarrel_h_17_INCLASS \
	FID_CoopGame_Source_CoopGame_Public_Challenges_SexplosiveBarrel_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_CoopGame_Source_CoopGame_Public_Challenges_SexplosiveBarrel_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CoopGame_Source_CoopGame_Public_Challenges_SexplosiveBarrel_h_17_SPARSE_DATA \
	FID_CoopGame_Source_CoopGame_Public_Challenges_SexplosiveBarrel_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CoopGame_Source_CoopGame_Public_Challenges_SexplosiveBarrel_h_17_INCLASS_NO_PURE_DECLS \
	FID_CoopGame_Source_CoopGame_Public_Challenges_SexplosiveBarrel_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COOPGAME_API UClass* StaticClass<class ASexplosiveBarrel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CoopGame_Source_CoopGame_Public_Challenges_SexplosiveBarrel_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
