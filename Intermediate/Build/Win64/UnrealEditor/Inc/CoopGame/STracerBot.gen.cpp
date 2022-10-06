// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CoopGame/Public/AI/STracerBot.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSTracerBot() {}
// Cross Module References
	COOPGAME_API UClass* Z_Construct_UClass_ASTracerBot_NoRegister();
	COOPGAME_API UClass* Z_Construct_UClass_ASTracerBot();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_CoopGame();
	COOPGAME_API UClass* Z_Construct_UClass_USHealthComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASTracerBot::execHandleTakeDamage)
	{
		P_GET_OBJECT(USHealthComponent,Z_Param_OwningHealthComp);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Health);
		P_GET_PROPERTY(FFloatProperty,Z_Param_HealthDelta);
		P_GET_OBJECT(UDamageType,Z_Param_DamageType);
		P_GET_OBJECT(AController,Z_Param_InstigatedBy);
		P_GET_OBJECT(AActor,Z_Param_DamageCauser);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleTakeDamage(Z_Param_OwningHealthComp,Z_Param_Health,Z_Param_HealthDelta,Z_Param_DamageType,Z_Param_InstigatedBy,Z_Param_DamageCauser);
		P_NATIVE_END;
	}
	void ASTracerBot::StaticRegisterNativesASTracerBot()
	{
		UClass* Class = ASTracerBot::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleTakeDamage", &ASTracerBot::execHandleTakeDamage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASTracerBot_HandleTakeDamage_Statics
	{
		struct STracerBot_eventHandleTakeDamage_Parms
		{
			USHealthComponent* OwningHealthComp;
			float Health;
			float HealthDelta;
			const UDamageType* DamageType;
			AController* InstigatedBy;
			AActor* DamageCauser;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwningHealthComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningHealthComp;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Health;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HealthDelta;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageType;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InstigatedBy;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASTracerBot_HandleTakeDamage_Statics::NewProp_OwningHealthComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASTracerBot_HandleTakeDamage_Statics::NewProp_OwningHealthComp = { "OwningHealthComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(STracerBot_eventHandleTakeDamage_Parms, OwningHealthComp), Z_Construct_UClass_USHealthComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASTracerBot_HandleTakeDamage_Statics::NewProp_OwningHealthComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASTracerBot_HandleTakeDamage_Statics::NewProp_OwningHealthComp_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASTracerBot_HandleTakeDamage_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(STracerBot_eventHandleTakeDamage_Parms, Health), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASTracerBot_HandleTakeDamage_Statics::NewProp_HealthDelta = { "HealthDelta", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(STracerBot_eventHandleTakeDamage_Parms, HealthDelta), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASTracerBot_HandleTakeDamage_Statics::NewProp_DamageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASTracerBot_HandleTakeDamage_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(STracerBot_eventHandleTakeDamage_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASTracerBot_HandleTakeDamage_Statics::NewProp_DamageType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASTracerBot_HandleTakeDamage_Statics::NewProp_DamageType_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASTracerBot_HandleTakeDamage_Statics::NewProp_InstigatedBy = { "InstigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(STracerBot_eventHandleTakeDamage_Parms, InstigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASTracerBot_HandleTakeDamage_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(STracerBot_eventHandleTakeDamage_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASTracerBot_HandleTakeDamage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASTracerBot_HandleTakeDamage_Statics::NewProp_OwningHealthComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASTracerBot_HandleTakeDamage_Statics::NewProp_Health,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASTracerBot_HandleTakeDamage_Statics::NewProp_HealthDelta,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASTracerBot_HandleTakeDamage_Statics::NewProp_DamageType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASTracerBot_HandleTakeDamage_Statics::NewProp_InstigatedBy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASTracerBot_HandleTakeDamage_Statics::NewProp_DamageCauser,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASTracerBot_HandleTakeDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AI/STracerBot.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASTracerBot_HandleTakeDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASTracerBot, nullptr, "HandleTakeDamage", nullptr, nullptr, sizeof(Z_Construct_UFunction_ASTracerBot_HandleTakeDamage_Statics::STracerBot_eventHandleTakeDamage_Parms), Z_Construct_UFunction_ASTracerBot_HandleTakeDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASTracerBot_HandleTakeDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASTracerBot_HandleTakeDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASTracerBot_HandleTakeDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASTracerBot_HandleTakeDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASTracerBot_HandleTakeDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASTracerBot);
	UClass* Z_Construct_UClass_ASTracerBot_NoRegister()
	{
		return ASTracerBot::StaticClass();
	}
	struct Z_Construct_UClass_ASTracerBot_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealthComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SphereComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SphereComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AudioComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementForce_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementForce;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseVelocityChange_MetaData[];
#endif
		static void NewProp_bUseVelocityChange_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseVelocityChange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RequiredDistanceToTarget_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RequiredDistanceToTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExplosionEffect_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ExplosionEffect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExplosionRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ExplosionRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExplosionDamage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ExplosionDamage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelfDamageInterval_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SelfDamageInterval;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelfDestructSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SelfDestructSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExplodeSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ExplodeSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RunSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RunSound;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASTracerBot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_CoopGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASTracerBot_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASTracerBot_HandleTakeDamage, "HandleTakeDamage" }, // 1821747451
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTracerBot_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AI/STracerBot.h" },
		{ "ModuleRelativePath", "Public/AI/STracerBot.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTracerBot_Statics::NewProp_MeshComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AI/STracerBot.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASTracerBot_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x00200800000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASTracerBot, MeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASTracerBot_Statics::NewProp_MeshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASTracerBot_Statics::NewProp_MeshComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTracerBot_Statics::NewProp_HealthComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AI/STracerBot.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASTracerBot_Statics::NewProp_HealthComp = { "HealthComp", nullptr, (EPropertyFlags)0x00200800000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASTracerBot, HealthComp), Z_Construct_UClass_USHealthComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASTracerBot_Statics::NewProp_HealthComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASTracerBot_Statics::NewProp_HealthComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTracerBot_Statics::NewProp_SphereComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AI/STracerBot.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASTracerBot_Statics::NewProp_SphereComp = { "SphereComp", nullptr, (EPropertyFlags)0x00200800000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASTracerBot, SphereComp), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASTracerBot_Statics::NewProp_SphereComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASTracerBot_Statics::NewProp_SphereComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTracerBot_Statics::NewProp_AudioComp_MetaData[] = {
		{ "Category", "TrackerBot" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AI/STracerBot.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASTracerBot_Statics::NewProp_AudioComp = { "AudioComp", nullptr, (EPropertyFlags)0x0020080000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASTracerBot, AudioComp), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASTracerBot_Statics::NewProp_AudioComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASTracerBot_Statics::NewProp_AudioComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTracerBot_Statics::NewProp_MovementForce_MetaData[] = {
		{ "Category", "TrackerBot" },
		{ "ModuleRelativePath", "Public/AI/STracerBot.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASTracerBot_Statics::NewProp_MovementForce = { "MovementForce", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASTracerBot, MovementForce), METADATA_PARAMS(Z_Construct_UClass_ASTracerBot_Statics::NewProp_MovementForce_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASTracerBot_Statics::NewProp_MovementForce_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTracerBot_Statics::NewProp_bUseVelocityChange_MetaData[] = {
		{ "Category", "TrackerBot" },
		{ "ModuleRelativePath", "Public/AI/STracerBot.h" },
	};
#endif
	void Z_Construct_UClass_ASTracerBot_Statics::NewProp_bUseVelocityChange_SetBit(void* Obj)
	{
		((ASTracerBot*)Obj)->bUseVelocityChange = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASTracerBot_Statics::NewProp_bUseVelocityChange = { "bUseVelocityChange", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASTracerBot), &Z_Construct_UClass_ASTracerBot_Statics::NewProp_bUseVelocityChange_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASTracerBot_Statics::NewProp_bUseVelocityChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASTracerBot_Statics::NewProp_bUseVelocityChange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTracerBot_Statics::NewProp_RequiredDistanceToTarget_MetaData[] = {
		{ "Category", "TrackerBot" },
		{ "ModuleRelativePath", "Public/AI/STracerBot.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASTracerBot_Statics::NewProp_RequiredDistanceToTarget = { "RequiredDistanceToTarget", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASTracerBot, RequiredDistanceToTarget), METADATA_PARAMS(Z_Construct_UClass_ASTracerBot_Statics::NewProp_RequiredDistanceToTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASTracerBot_Statics::NewProp_RequiredDistanceToTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTracerBot_Statics::NewProp_ExplosionEffect_MetaData[] = {
		{ "Category", "TrackerBot" },
		{ "ModuleRelativePath", "Public/AI/STracerBot.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASTracerBot_Statics::NewProp_ExplosionEffect = { "ExplosionEffect", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASTracerBot, ExplosionEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASTracerBot_Statics::NewProp_ExplosionEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASTracerBot_Statics::NewProp_ExplosionEffect_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTracerBot_Statics::NewProp_ExplosionRadius_MetaData[] = {
		{ "Category", "TrackerBot" },
		{ "ModuleRelativePath", "Public/AI/STracerBot.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASTracerBot_Statics::NewProp_ExplosionRadius = { "ExplosionRadius", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASTracerBot, ExplosionRadius), METADATA_PARAMS(Z_Construct_UClass_ASTracerBot_Statics::NewProp_ExplosionRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASTracerBot_Statics::NewProp_ExplosionRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTracerBot_Statics::NewProp_ExplosionDamage_MetaData[] = {
		{ "Category", "TrackerBot" },
		{ "ModuleRelativePath", "Public/AI/STracerBot.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASTracerBot_Statics::NewProp_ExplosionDamage = { "ExplosionDamage", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASTracerBot, ExplosionDamage), METADATA_PARAMS(Z_Construct_UClass_ASTracerBot_Statics::NewProp_ExplosionDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASTracerBot_Statics::NewProp_ExplosionDamage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTracerBot_Statics::NewProp_SelfDamageInterval_MetaData[] = {
		{ "Category", "TrackerBot" },
		{ "ModuleRelativePath", "Public/AI/STracerBot.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASTracerBot_Statics::NewProp_SelfDamageInterval = { "SelfDamageInterval", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASTracerBot, SelfDamageInterval), METADATA_PARAMS(Z_Construct_UClass_ASTracerBot_Statics::NewProp_SelfDamageInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASTracerBot_Statics::NewProp_SelfDamageInterval_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTracerBot_Statics::NewProp_SelfDestructSound_MetaData[] = {
		{ "Category", "TrackerBot" },
		{ "ModuleRelativePath", "Public/AI/STracerBot.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASTracerBot_Statics::NewProp_SelfDestructSound = { "SelfDestructSound", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASTracerBot, SelfDestructSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASTracerBot_Statics::NewProp_SelfDestructSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASTracerBot_Statics::NewProp_SelfDestructSound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTracerBot_Statics::NewProp_ExplodeSound_MetaData[] = {
		{ "Category", "TrackerBot" },
		{ "ModuleRelativePath", "Public/AI/STracerBot.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASTracerBot_Statics::NewProp_ExplodeSound = { "ExplodeSound", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASTracerBot, ExplodeSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASTracerBot_Statics::NewProp_ExplodeSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASTracerBot_Statics::NewProp_ExplodeSound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTracerBot_Statics::NewProp_RunSound_MetaData[] = {
		{ "Category", "TrackerBot" },
		{ "ModuleRelativePath", "Public/AI/STracerBot.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASTracerBot_Statics::NewProp_RunSound = { "RunSound", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASTracerBot, RunSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASTracerBot_Statics::NewProp_RunSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASTracerBot_Statics::NewProp_RunSound_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASTracerBot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTracerBot_Statics::NewProp_MeshComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTracerBot_Statics::NewProp_HealthComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTracerBot_Statics::NewProp_SphereComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTracerBot_Statics::NewProp_AudioComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTracerBot_Statics::NewProp_MovementForce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTracerBot_Statics::NewProp_bUseVelocityChange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTracerBot_Statics::NewProp_RequiredDistanceToTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTracerBot_Statics::NewProp_ExplosionEffect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTracerBot_Statics::NewProp_ExplosionRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTracerBot_Statics::NewProp_ExplosionDamage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTracerBot_Statics::NewProp_SelfDamageInterval,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTracerBot_Statics::NewProp_SelfDestructSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTracerBot_Statics::NewProp_ExplodeSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTracerBot_Statics::NewProp_RunSound,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASTracerBot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASTracerBot>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASTracerBot_Statics::ClassParams = {
		&ASTracerBot::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASTracerBot_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASTracerBot_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASTracerBot_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASTracerBot_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASTracerBot()
	{
		if (!Z_Registration_Info_UClass_ASTracerBot.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASTracerBot.OuterSingleton, Z_Construct_UClass_ASTracerBot_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASTracerBot.OuterSingleton;
	}
	template<> COOPGAME_API UClass* StaticClass<ASTracerBot>()
	{
		return ASTracerBot::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASTracerBot);
	struct Z_CompiledInDeferFile_FID_CoopGame_Source_CoopGame_Public_AI_STracerBot_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CoopGame_Source_CoopGame_Public_AI_STracerBot_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASTracerBot, ASTracerBot::StaticClass, TEXT("ASTracerBot"), &Z_Registration_Info_UClass_ASTracerBot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASTracerBot), 2197131483U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CoopGame_Source_CoopGame_Public_AI_STracerBot_h_3062000082(TEXT("/Script/CoopGame"),
		Z_CompiledInDeferFile_FID_CoopGame_Source_CoopGame_Public_AI_STracerBot_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CoopGame_Source_CoopGame_Public_AI_STracerBot_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
