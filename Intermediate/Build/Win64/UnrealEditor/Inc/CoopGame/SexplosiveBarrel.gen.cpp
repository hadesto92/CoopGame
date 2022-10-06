// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CoopGame/Public/Challenges/SexplosiveBarrel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSexplosiveBarrel() {}
// Cross Module References
	COOPGAME_API UClass* Z_Construct_UClass_ASexplosiveBarrel_NoRegister();
	COOPGAME_API UClass* Z_Construct_UClass_ASexplosiveBarrel();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_CoopGame();
	COOPGAME_API UClass* Z_Construct_UClass_USHealthComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_URadialForceComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASexplosiveBarrel::execOnRep_Exploded)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Exploded();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASexplosiveBarrel::execOnHealthChanged)
	{
		P_GET_OBJECT(USHealthComponent,Z_Param_OwningHealthComp);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Health);
		P_GET_PROPERTY(FFloatProperty,Z_Param_HealthDelta);
		P_GET_OBJECT(UDamageType,Z_Param_DamageType);
		P_GET_OBJECT(AController,Z_Param_InstigatedBy);
		P_GET_OBJECT(AActor,Z_Param_DamageCauser);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHealthChanged(Z_Param_OwningHealthComp,Z_Param_Health,Z_Param_HealthDelta,Z_Param_DamageType,Z_Param_InstigatedBy,Z_Param_DamageCauser);
		P_NATIVE_END;
	}
	void ASexplosiveBarrel::StaticRegisterNativesASexplosiveBarrel()
	{
		UClass* Class = ASexplosiveBarrel::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnHealthChanged", &ASexplosiveBarrel::execOnHealthChanged },
			{ "OnRep_Exploded", &ASexplosiveBarrel::execOnRep_Exploded },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASexplosiveBarrel_OnHealthChanged_Statics
	{
		struct SexplosiveBarrel_eventOnHealthChanged_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASexplosiveBarrel_OnHealthChanged_Statics::NewProp_OwningHealthComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASexplosiveBarrel_OnHealthChanged_Statics::NewProp_OwningHealthComp = { "OwningHealthComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SexplosiveBarrel_eventOnHealthChanged_Parms, OwningHealthComp), Z_Construct_UClass_USHealthComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASexplosiveBarrel_OnHealthChanged_Statics::NewProp_OwningHealthComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASexplosiveBarrel_OnHealthChanged_Statics::NewProp_OwningHealthComp_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASexplosiveBarrel_OnHealthChanged_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SexplosiveBarrel_eventOnHealthChanged_Parms, Health), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASexplosiveBarrel_OnHealthChanged_Statics::NewProp_HealthDelta = { "HealthDelta", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SexplosiveBarrel_eventOnHealthChanged_Parms, HealthDelta), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASexplosiveBarrel_OnHealthChanged_Statics::NewProp_DamageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASexplosiveBarrel_OnHealthChanged_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SexplosiveBarrel_eventOnHealthChanged_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASexplosiveBarrel_OnHealthChanged_Statics::NewProp_DamageType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASexplosiveBarrel_OnHealthChanged_Statics::NewProp_DamageType_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASexplosiveBarrel_OnHealthChanged_Statics::NewProp_InstigatedBy = { "InstigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SexplosiveBarrel_eventOnHealthChanged_Parms, InstigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASexplosiveBarrel_OnHealthChanged_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SexplosiveBarrel_eventOnHealthChanged_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASexplosiveBarrel_OnHealthChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASexplosiveBarrel_OnHealthChanged_Statics::NewProp_OwningHealthComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASexplosiveBarrel_OnHealthChanged_Statics::NewProp_Health,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASexplosiveBarrel_OnHealthChanged_Statics::NewProp_HealthDelta,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASexplosiveBarrel_OnHealthChanged_Statics::NewProp_DamageType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASexplosiveBarrel_OnHealthChanged_Statics::NewProp_InstigatedBy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASexplosiveBarrel_OnHealthChanged_Statics::NewProp_DamageCauser,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASexplosiveBarrel_OnHealthChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Challenges/SexplosiveBarrel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASexplosiveBarrel_OnHealthChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASexplosiveBarrel, nullptr, "OnHealthChanged", nullptr, nullptr, sizeof(Z_Construct_UFunction_ASexplosiveBarrel_OnHealthChanged_Statics::SexplosiveBarrel_eventOnHealthChanged_Parms), Z_Construct_UFunction_ASexplosiveBarrel_OnHealthChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASexplosiveBarrel_OnHealthChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASexplosiveBarrel_OnHealthChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASexplosiveBarrel_OnHealthChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASexplosiveBarrel_OnHealthChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASexplosiveBarrel_OnHealthChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASexplosiveBarrel_OnRep_Exploded_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASexplosiveBarrel_OnRep_Exploded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Challenges/SexplosiveBarrel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASexplosiveBarrel_OnRep_Exploded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASexplosiveBarrel, nullptr, "OnRep_Exploded", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASexplosiveBarrel_OnRep_Exploded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASexplosiveBarrel_OnRep_Exploded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASexplosiveBarrel_OnRep_Exploded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASexplosiveBarrel_OnRep_Exploded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASexplosiveBarrel);
	UClass* Z_Construct_UClass_ASexplosiveBarrel_NoRegister()
	{
		return ASexplosiveBarrel::StaticClass();
	}
	struct Z_Construct_UClass_ASexplosiveBarrel_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealthComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RadialForceComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RadialForceComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DmgType_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DmgType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExploded_MetaData[];
#endif
		static void NewProp_bExploded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExploded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExplosionImpulse_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ExplosionImpulse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExplosionDamage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ExplosionDamage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExplosionEffect_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ExplosionEffect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExplodedMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ExplodedMaterial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASexplosiveBarrel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CoopGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASexplosiveBarrel_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASexplosiveBarrel_OnHealthChanged, "OnHealthChanged" }, // 4040151493
		{ &Z_Construct_UFunction_ASexplosiveBarrel_OnRep_Exploded, "OnRep_Exploded" }, // 3133640468
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASexplosiveBarrel_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Challenges/SexplosiveBarrel.h" },
		{ "ModuleRelativePath", "Public/Challenges/SexplosiveBarrel.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASexplosiveBarrel_Statics::NewProp_HealthComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Challenges/SexplosiveBarrel.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASexplosiveBarrel_Statics::NewProp_HealthComp = { "HealthComp", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASexplosiveBarrel, HealthComp), Z_Construct_UClass_USHealthComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASexplosiveBarrel_Statics::NewProp_HealthComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASexplosiveBarrel_Statics::NewProp_HealthComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASexplosiveBarrel_Statics::NewProp_MeshComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Challenges/SexplosiveBarrel.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASexplosiveBarrel_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASexplosiveBarrel, MeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASexplosiveBarrel_Statics::NewProp_MeshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASexplosiveBarrel_Statics::NewProp_MeshComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASexplosiveBarrel_Statics::NewProp_RadialForceComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Challenges/SexplosiveBarrel.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASexplosiveBarrel_Statics::NewProp_RadialForceComp = { "RadialForceComp", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASexplosiveBarrel, RadialForceComp), Z_Construct_UClass_URadialForceComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASexplosiveBarrel_Statics::NewProp_RadialForceComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASexplosiveBarrel_Statics::NewProp_RadialForceComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASexplosiveBarrel_Statics::NewProp_DmgType_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Challenges/SexplosiveBarrel.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASexplosiveBarrel_Statics::NewProp_DmgType = { "DmgType", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASexplosiveBarrel, DmgType), Z_Construct_UClass_UDamageType_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASexplosiveBarrel_Statics::NewProp_DmgType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASexplosiveBarrel_Statics::NewProp_DmgType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASexplosiveBarrel_Statics::NewProp_bExploded_MetaData[] = {
		{ "ModuleRelativePath", "Public/Challenges/SexplosiveBarrel.h" },
	};
#endif
	void Z_Construct_UClass_ASexplosiveBarrel_Statics::NewProp_bExploded_SetBit(void* Obj)
	{
		((ASexplosiveBarrel*)Obj)->bExploded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASexplosiveBarrel_Statics::NewProp_bExploded = { "bExploded", "OnRep_Exploded", (EPropertyFlags)0x0020080100000020, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASexplosiveBarrel), &Z_Construct_UClass_ASexplosiveBarrel_Statics::NewProp_bExploded_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASexplosiveBarrel_Statics::NewProp_bExploded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASexplosiveBarrel_Statics::NewProp_bExploded_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASexplosiveBarrel_Statics::NewProp_ExplosionImpulse_MetaData[] = {
		{ "Category", "FX" },
		{ "ModuleRelativePath", "Public/Challenges/SexplosiveBarrel.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASexplosiveBarrel_Statics::NewProp_ExplosionImpulse = { "ExplosionImpulse", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASexplosiveBarrel, ExplosionImpulse), METADATA_PARAMS(Z_Construct_UClass_ASexplosiveBarrel_Statics::NewProp_ExplosionImpulse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASexplosiveBarrel_Statics::NewProp_ExplosionImpulse_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASexplosiveBarrel_Statics::NewProp_ExplosionDamage_MetaData[] = {
		{ "Category", "FX" },
		{ "ModuleRelativePath", "Public/Challenges/SexplosiveBarrel.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASexplosiveBarrel_Statics::NewProp_ExplosionDamage = { "ExplosionDamage", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASexplosiveBarrel, ExplosionDamage), METADATA_PARAMS(Z_Construct_UClass_ASexplosiveBarrel_Statics::NewProp_ExplosionDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASexplosiveBarrel_Statics::NewProp_ExplosionDamage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASexplosiveBarrel_Statics::NewProp_ExplosionEffect_MetaData[] = {
		{ "Category", "FX" },
		{ "ModuleRelativePath", "Public/Challenges/SexplosiveBarrel.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASexplosiveBarrel_Statics::NewProp_ExplosionEffect = { "ExplosionEffect", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASexplosiveBarrel, ExplosionEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASexplosiveBarrel_Statics::NewProp_ExplosionEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASexplosiveBarrel_Statics::NewProp_ExplosionEffect_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASexplosiveBarrel_Statics::NewProp_ExplodedMaterial_MetaData[] = {
		{ "Category", "FX" },
		{ "ModuleRelativePath", "Public/Challenges/SexplosiveBarrel.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASexplosiveBarrel_Statics::NewProp_ExplodedMaterial = { "ExplodedMaterial", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASexplosiveBarrel, ExplodedMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASexplosiveBarrel_Statics::NewProp_ExplodedMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASexplosiveBarrel_Statics::NewProp_ExplodedMaterial_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASexplosiveBarrel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASexplosiveBarrel_Statics::NewProp_HealthComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASexplosiveBarrel_Statics::NewProp_MeshComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASexplosiveBarrel_Statics::NewProp_RadialForceComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASexplosiveBarrel_Statics::NewProp_DmgType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASexplosiveBarrel_Statics::NewProp_bExploded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASexplosiveBarrel_Statics::NewProp_ExplosionImpulse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASexplosiveBarrel_Statics::NewProp_ExplosionDamage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASexplosiveBarrel_Statics::NewProp_ExplosionEffect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASexplosiveBarrel_Statics::NewProp_ExplodedMaterial,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASexplosiveBarrel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASexplosiveBarrel>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASexplosiveBarrel_Statics::ClassParams = {
		&ASexplosiveBarrel::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASexplosiveBarrel_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASexplosiveBarrel_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASexplosiveBarrel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASexplosiveBarrel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASexplosiveBarrel()
	{
		if (!Z_Registration_Info_UClass_ASexplosiveBarrel.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASexplosiveBarrel.OuterSingleton, Z_Construct_UClass_ASexplosiveBarrel_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASexplosiveBarrel.OuterSingleton;
	}
	template<> COOPGAME_API UClass* StaticClass<ASexplosiveBarrel>()
	{
		return ASexplosiveBarrel::StaticClass();
	}

	void ASexplosiveBarrel::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_bExploded(TEXT("bExploded"));

		const bool bIsValid = true
			&& Name_bExploded == ClassReps[(int32)ENetFields_Private::bExploded].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASexplosiveBarrel"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASexplosiveBarrel);
	struct Z_CompiledInDeferFile_FID_CoopGame_Source_CoopGame_Public_Challenges_SexplosiveBarrel_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CoopGame_Source_CoopGame_Public_Challenges_SexplosiveBarrel_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASexplosiveBarrel, ASexplosiveBarrel::StaticClass, TEXT("ASexplosiveBarrel"), &Z_Registration_Info_UClass_ASexplosiveBarrel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASexplosiveBarrel), 4135103386U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CoopGame_Source_CoopGame_Public_Challenges_SexplosiveBarrel_h_374610628(TEXT("/Script/CoopGame"),
		Z_CompiledInDeferFile_FID_CoopGame_Source_CoopGame_Public_Challenges_SexplosiveBarrel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CoopGame_Source_CoopGame_Public_Challenges_SexplosiveBarrel_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
