// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CoopGame/Public/Components/SHealthComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSHealthComponent() {}
// Cross Module References
	COOPGAME_API UFunction* Z_Construct_UDelegateFunction_CoopGame_OnHealthChangedSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_CoopGame();
	COOPGAME_API UClass* Z_Construct_UClass_USHealthComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COOPGAME_API UClass* Z_Construct_UClass_USHealthComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_CoopGame_OnHealthChangedSignature__DelegateSignature_Statics
	{
		struct _Script_CoopGame_eventOnHealthChangedSignature_Parms
		{
			USHealthComponent* HealthComp;
			float Health;
			float HealthDelta;
			const UDamageType* DamageType;
			AController* InstigatedBy;
			AActor* DamageCauser;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealthComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthComp;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CoopGame_OnHealthChangedSignature__DelegateSignature_Statics::NewProp_HealthComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_CoopGame_OnHealthChangedSignature__DelegateSignature_Statics::NewProp_HealthComp = { "HealthComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_CoopGame_eventOnHealthChangedSignature_Parms, HealthComp), Z_Construct_UClass_USHealthComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_CoopGame_OnHealthChangedSignature__DelegateSignature_Statics::NewProp_HealthComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CoopGame_OnHealthChangedSignature__DelegateSignature_Statics::NewProp_HealthComp_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_CoopGame_OnHealthChangedSignature__DelegateSignature_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_CoopGame_eventOnHealthChangedSignature_Parms, Health), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_CoopGame_OnHealthChangedSignature__DelegateSignature_Statics::NewProp_HealthDelta = { "HealthDelta", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_CoopGame_eventOnHealthChangedSignature_Parms, HealthDelta), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CoopGame_OnHealthChangedSignature__DelegateSignature_Statics::NewProp_DamageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_CoopGame_OnHealthChangedSignature__DelegateSignature_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_CoopGame_eventOnHealthChangedSignature_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_CoopGame_OnHealthChangedSignature__DelegateSignature_Statics::NewProp_DamageType_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CoopGame_OnHealthChangedSignature__DelegateSignature_Statics::NewProp_DamageType_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_CoopGame_OnHealthChangedSignature__DelegateSignature_Statics::NewProp_InstigatedBy = { "InstigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_CoopGame_eventOnHealthChangedSignature_Parms, InstigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_CoopGame_OnHealthChangedSignature__DelegateSignature_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_CoopGame_eventOnHealthChangedSignature_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CoopGame_OnHealthChangedSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CoopGame_OnHealthChangedSignature__DelegateSignature_Statics::NewProp_HealthComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CoopGame_OnHealthChangedSignature__DelegateSignature_Statics::NewProp_Health,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CoopGame_OnHealthChangedSignature__DelegateSignature_Statics::NewProp_HealthDelta,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CoopGame_OnHealthChangedSignature__DelegateSignature_Statics::NewProp_DamageType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CoopGame_OnHealthChangedSignature__DelegateSignature_Statics::NewProp_InstigatedBy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CoopGame_OnHealthChangedSignature__DelegateSignature_Statics::NewProp_DamageCauser,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CoopGame_OnHealthChangedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/SHealthComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CoopGame_OnHealthChangedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CoopGame, nullptr, "OnHealthChangedSignature__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_CoopGame_OnHealthChangedSignature__DelegateSignature_Statics::_Script_CoopGame_eventOnHealthChangedSignature_Parms), Z_Construct_UDelegateFunction_CoopGame_OnHealthChangedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CoopGame_OnHealthChangedSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_CoopGame_OnHealthChangedSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CoopGame_OnHealthChangedSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_CoopGame_OnHealthChangedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CoopGame_OnHealthChangedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(USHealthComponent::execHeal)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_HealAmount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Heal(Z_Param_HealAmount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USHealthComponent::execHandleTakeAnyDamage)
	{
		P_GET_OBJECT(AActor,Z_Param_DamageActor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Damage);
		P_GET_OBJECT(UDamageType,Z_Param_DamageType);
		P_GET_OBJECT(AController,Z_Param_InstigatedBy);
		P_GET_OBJECT(AActor,Z_Param_DamageCauser);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleTakeAnyDamage(Z_Param_DamageActor,Z_Param_Damage,Z_Param_DamageType,Z_Param_InstigatedBy,Z_Param_DamageCauser);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USHealthComponent::execOnRep_Health)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_OldHealth);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Health(Z_Param_OldHealth);
		P_NATIVE_END;
	}
	void USHealthComponent::StaticRegisterNativesUSHealthComponent()
	{
		UClass* Class = USHealthComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleTakeAnyDamage", &USHealthComponent::execHandleTakeAnyDamage },
			{ "Heal", &USHealthComponent::execHeal },
			{ "OnRep_Health", &USHealthComponent::execOnRep_Health },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USHealthComponent_HandleTakeAnyDamage_Statics
	{
		struct SHealthComponent_eventHandleTakeAnyDamage_Parms
		{
			AActor* DamageActor;
			float Damage;
			const UDamageType* DamageType;
			AController* InstigatedBy;
			AActor* DamageCauser;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageActor;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USHealthComponent_HandleTakeAnyDamage_Statics::NewProp_DamageActor = { "DamageActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SHealthComponent_eventHandleTakeAnyDamage_Parms, DamageActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USHealthComponent_HandleTakeAnyDamage_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SHealthComponent_eventHandleTakeAnyDamage_Parms, Damage), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USHealthComponent_HandleTakeAnyDamage_Statics::NewProp_DamageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USHealthComponent_HandleTakeAnyDamage_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SHealthComponent_eventHandleTakeAnyDamage_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USHealthComponent_HandleTakeAnyDamage_Statics::NewProp_DamageType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USHealthComponent_HandleTakeAnyDamage_Statics::NewProp_DamageType_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USHealthComponent_HandleTakeAnyDamage_Statics::NewProp_InstigatedBy = { "InstigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SHealthComponent_eventHandleTakeAnyDamage_Parms, InstigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USHealthComponent_HandleTakeAnyDamage_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SHealthComponent_eventHandleTakeAnyDamage_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USHealthComponent_HandleTakeAnyDamage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USHealthComponent_HandleTakeAnyDamage_Statics::NewProp_DamageActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USHealthComponent_HandleTakeAnyDamage_Statics::NewProp_Damage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USHealthComponent_HandleTakeAnyDamage_Statics::NewProp_DamageType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USHealthComponent_HandleTakeAnyDamage_Statics::NewProp_InstigatedBy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USHealthComponent_HandleTakeAnyDamage_Statics::NewProp_DamageCauser,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USHealthComponent_HandleTakeAnyDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/SHealthComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USHealthComponent_HandleTakeAnyDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USHealthComponent, nullptr, "HandleTakeAnyDamage", nullptr, nullptr, sizeof(Z_Construct_UFunction_USHealthComponent_HandleTakeAnyDamage_Statics::SHealthComponent_eventHandleTakeAnyDamage_Parms), Z_Construct_UFunction_USHealthComponent_HandleTakeAnyDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USHealthComponent_HandleTakeAnyDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USHealthComponent_HandleTakeAnyDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USHealthComponent_HandleTakeAnyDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USHealthComponent_HandleTakeAnyDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USHealthComponent_HandleTakeAnyDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USHealthComponent_Heal_Statics
	{
		struct SHealthComponent_eventHeal_Parms
		{
			float HealAmount;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HealAmount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USHealthComponent_Heal_Statics::NewProp_HealAmount = { "HealAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SHealthComponent_eventHeal_Parms, HealAmount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USHealthComponent_Heal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USHealthComponent_Heal_Statics::NewProp_HealAmount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USHealthComponent_Heal_Statics::Function_MetaDataParams[] = {
		{ "Category", "HealthComponent" },
		{ "ModuleRelativePath", "Public/Components/SHealthComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USHealthComponent_Heal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USHealthComponent, nullptr, "Heal", nullptr, nullptr, sizeof(Z_Construct_UFunction_USHealthComponent_Heal_Statics::SHealthComponent_eventHeal_Parms), Z_Construct_UFunction_USHealthComponent_Heal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USHealthComponent_Heal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USHealthComponent_Heal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USHealthComponent_Heal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USHealthComponent_Heal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USHealthComponent_Heal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USHealthComponent_OnRep_Health_Statics
	{
		struct SHealthComponent_eventOnRep_Health_Parms
		{
			float OldHealth;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OldHealth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USHealthComponent_OnRep_Health_Statics::NewProp_OldHealth = { "OldHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SHealthComponent_eventOnRep_Health_Parms, OldHealth), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USHealthComponent_OnRep_Health_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USHealthComponent_OnRep_Health_Statics::NewProp_OldHealth,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USHealthComponent_OnRep_Health_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/SHealthComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USHealthComponent_OnRep_Health_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USHealthComponent, nullptr, "OnRep_Health", nullptr, nullptr, sizeof(Z_Construct_UFunction_USHealthComponent_OnRep_Health_Statics::SHealthComponent_eventOnRep_Health_Parms), Z_Construct_UFunction_USHealthComponent_OnRep_Health_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USHealthComponent_OnRep_Health_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USHealthComponent_OnRep_Health_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USHealthComponent_OnRep_Health_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USHealthComponent_OnRep_Health()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USHealthComponent_OnRep_Health_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USHealthComponent);
	UClass* Z_Construct_UClass_USHealthComponent_NoRegister()
	{
		return USHealthComponent::StaticClass();
	}
	struct Z_Construct_UClass_USHealthComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShieldActive_MetaData[];
#endif
		static void NewProp_bShieldActive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShieldActive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultHealth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnHealthChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHealthChanged;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USHealthComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CoopGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USHealthComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USHealthComponent_HandleTakeAnyDamage, "HandleTakeAnyDamage" }, // 2825942018
		{ &Z_Construct_UFunction_USHealthComponent_Heal, "Heal" }, // 624184907
		{ &Z_Construct_UFunction_USHealthComponent_OnRep_Health, "OnRep_Health" }, // 4279343782
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USHealthComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "COOP" },
		{ "IncludePath", "Components/SHealthComponent.h" },
		{ "ModuleRelativePath", "Public/Components/SHealthComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USHealthComponent_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "HealthComponent" },
		{ "ModuleRelativePath", "Public/Components/SHealthComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USHealthComponent_Statics::NewProp_Health = { "Health", "OnRep_Health", (EPropertyFlags)0x0020080100000034, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USHealthComponent, Health), METADATA_PARAMS(Z_Construct_UClass_USHealthComponent_Statics::NewProp_Health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USHealthComponent_Statics::NewProp_Health_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USHealthComponent_Statics::NewProp_bShieldActive_MetaData[] = {
		{ "Category", "HealthComponent" },
		{ "ModuleRelativePath", "Public/Components/SHealthComponent.h" },
	};
#endif
	void Z_Construct_UClass_USHealthComponent_Statics::NewProp_bShieldActive_SetBit(void* Obj)
	{
		((USHealthComponent*)Obj)->bShieldActive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USHealthComponent_Statics::NewProp_bShieldActive = { "bShieldActive", nullptr, (EPropertyFlags)0x0020080000000024, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USHealthComponent), &Z_Construct_UClass_USHealthComponent_Statics::NewProp_bShieldActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_USHealthComponent_Statics::NewProp_bShieldActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USHealthComponent_Statics::NewProp_bShieldActive_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USHealthComponent_Statics::NewProp_DefaultHealth_MetaData[] = {
		{ "Category", "HealthComponent" },
		{ "ModuleRelativePath", "Public/Components/SHealthComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USHealthComponent_Statics::NewProp_DefaultHealth = { "DefaultHealth", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USHealthComponent, DefaultHealth), METADATA_PARAMS(Z_Construct_UClass_USHealthComponent_Statics::NewProp_DefaultHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USHealthComponent_Statics::NewProp_DefaultHealth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USHealthComponent_Statics::NewProp_OnHealthChanged_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/Components/SHealthComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USHealthComponent_Statics::NewProp_OnHealthChanged = { "OnHealthChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USHealthComponent, OnHealthChanged), Z_Construct_UDelegateFunction_CoopGame_OnHealthChangedSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USHealthComponent_Statics::NewProp_OnHealthChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USHealthComponent_Statics::NewProp_OnHealthChanged_MetaData)) }; // 991822309
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USHealthComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USHealthComponent_Statics::NewProp_Health,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USHealthComponent_Statics::NewProp_bShieldActive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USHealthComponent_Statics::NewProp_DefaultHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USHealthComponent_Statics::NewProp_OnHealthChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USHealthComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USHealthComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USHealthComponent_Statics::ClassParams = {
		&USHealthComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USHealthComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USHealthComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USHealthComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USHealthComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USHealthComponent()
	{
		if (!Z_Registration_Info_UClass_USHealthComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USHealthComponent.OuterSingleton, Z_Construct_UClass_USHealthComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USHealthComponent.OuterSingleton;
	}
	template<> COOPGAME_API UClass* StaticClass<USHealthComponent>()
	{
		return USHealthComponent::StaticClass();
	}

	void USHealthComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_Health(TEXT("Health"));
		static const FName Name_bShieldActive(TEXT("bShieldActive"));

		const bool bIsValid = true
			&& Name_Health == ClassReps[(int32)ENetFields_Private::Health].Property->GetFName()
			&& Name_bShieldActive == ClassReps[(int32)ENetFields_Private::bShieldActive].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in USHealthComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USHealthComponent);
	struct Z_CompiledInDeferFile_FID_CoopGame_Source_CoopGame_Public_Components_SHealthComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CoopGame_Source_CoopGame_Public_Components_SHealthComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USHealthComponent, USHealthComponent::StaticClass, TEXT("USHealthComponent"), &Z_Registration_Info_UClass_USHealthComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USHealthComponent), 3141735126U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CoopGame_Source_CoopGame_Public_Components_SHealthComponent_h_2875669457(TEXT("/Script/CoopGame"),
		Z_CompiledInDeferFile_FID_CoopGame_Source_CoopGame_Public_Components_SHealthComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CoopGame_Source_CoopGame_Public_Components_SHealthComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
