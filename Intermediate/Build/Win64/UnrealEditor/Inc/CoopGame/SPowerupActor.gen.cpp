// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CoopGame/Public/SPowerupActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSPowerupActor() {}
// Cross Module References
	COOPGAME_API UClass* Z_Construct_UClass_ASPowerupActor_NoRegister();
	COOPGAME_API UClass* Z_Construct_UClass_ASPowerupActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_CoopGame();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPointLightComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_URotatingMovementComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASPowerupActor::execOnRep_PowerupActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_PowerupActive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASPowerupActor::execOnTickPowerup)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTickPowerup();
		P_NATIVE_END;
	}
	static FName NAME_ASPowerupActor_OnActivated = FName(TEXT("OnActivated"));
	void ASPowerupActor::OnActivated(AActor* ActiveFor)
	{
		SPowerupActor_eventOnActivated_Parms Parms;
		Parms.ActiveFor=ActiveFor;
		ProcessEvent(FindFunctionChecked(NAME_ASPowerupActor_OnActivated),&Parms);
	}
	static FName NAME_ASPowerupActor_OnExpired = FName(TEXT("OnExpired"));
	void ASPowerupActor::OnExpired()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASPowerupActor_OnExpired),NULL);
	}
	static FName NAME_ASPowerupActor_OnPowerupStateChanged = FName(TEXT("OnPowerupStateChanged"));
	void ASPowerupActor::OnPowerupStateChanged(bool bNewIsActive)
	{
		SPowerupActor_eventOnPowerupStateChanged_Parms Parms;
		Parms.bNewIsActive=bNewIsActive ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ASPowerupActor_OnPowerupStateChanged),&Parms);
	}
	static FName NAME_ASPowerupActor_OnPowerupTicked = FName(TEXT("OnPowerupTicked"));
	void ASPowerupActor::OnPowerupTicked()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASPowerupActor_OnPowerupTicked),NULL);
	}
	void ASPowerupActor::StaticRegisterNativesASPowerupActor()
	{
		UClass* Class = ASPowerupActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_PowerupActive", &ASPowerupActor::execOnRep_PowerupActive },
			{ "OnTickPowerup", &ASPowerupActor::execOnTickPowerup },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASPowerupActor_OnActivated_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveFor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASPowerupActor_OnActivated_Statics::NewProp_ActiveFor = { "ActiveFor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SPowerupActor_eventOnActivated_Parms, ActiveFor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASPowerupActor_OnActivated_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASPowerupActor_OnActivated_Statics::NewProp_ActiveFor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASPowerupActor_OnActivated_Statics::Function_MetaDataParams[] = {
		{ "Category", "Powerups" },
		{ "ModuleRelativePath", "Public/SPowerupActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASPowerupActor_OnActivated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPowerupActor, nullptr, "OnActivated", nullptr, nullptr, sizeof(SPowerupActor_eventOnActivated_Parms), Z_Construct_UFunction_ASPowerupActor_OnActivated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASPowerupActor_OnActivated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASPowerupActor_OnActivated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASPowerupActor_OnActivated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASPowerupActor_OnActivated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASPowerupActor_OnActivated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASPowerupActor_OnExpired_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASPowerupActor_OnExpired_Statics::Function_MetaDataParams[] = {
		{ "Category", "Powerups" },
		{ "ModuleRelativePath", "Public/SPowerupActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASPowerupActor_OnExpired_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPowerupActor, nullptr, "OnExpired", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASPowerupActor_OnExpired_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASPowerupActor_OnExpired_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASPowerupActor_OnExpired()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASPowerupActor_OnExpired_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASPowerupActor_OnPowerupStateChanged_Statics
	{
		static void NewProp_bNewIsActive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewIsActive;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASPowerupActor_OnPowerupStateChanged_Statics::NewProp_bNewIsActive_SetBit(void* Obj)
	{
		((SPowerupActor_eventOnPowerupStateChanged_Parms*)Obj)->bNewIsActive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASPowerupActor_OnPowerupStateChanged_Statics::NewProp_bNewIsActive = { "bNewIsActive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SPowerupActor_eventOnPowerupStateChanged_Parms), &Z_Construct_UFunction_ASPowerupActor_OnPowerupStateChanged_Statics::NewProp_bNewIsActive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASPowerupActor_OnPowerupStateChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASPowerupActor_OnPowerupStateChanged_Statics::NewProp_bNewIsActive,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASPowerupActor_OnPowerupStateChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Powerups" },
		{ "ModuleRelativePath", "Public/SPowerupActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASPowerupActor_OnPowerupStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPowerupActor, nullptr, "OnPowerupStateChanged", nullptr, nullptr, sizeof(SPowerupActor_eventOnPowerupStateChanged_Parms), Z_Construct_UFunction_ASPowerupActor_OnPowerupStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASPowerupActor_OnPowerupStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASPowerupActor_OnPowerupStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASPowerupActor_OnPowerupStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASPowerupActor_OnPowerupStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASPowerupActor_OnPowerupStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASPowerupActor_OnPowerupTicked_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASPowerupActor_OnPowerupTicked_Statics::Function_MetaDataParams[] = {
		{ "Category", "Powerups" },
		{ "ModuleRelativePath", "Public/SPowerupActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASPowerupActor_OnPowerupTicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPowerupActor, nullptr, "OnPowerupTicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASPowerupActor_OnPowerupTicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASPowerupActor_OnPowerupTicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASPowerupActor_OnPowerupTicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASPowerupActor_OnPowerupTicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASPowerupActor_OnRep_PowerupActive_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASPowerupActor_OnRep_PowerupActive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SPowerupActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASPowerupActor_OnRep_PowerupActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPowerupActor, nullptr, "OnRep_PowerupActive", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASPowerupActor_OnRep_PowerupActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASPowerupActor_OnRep_PowerupActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASPowerupActor_OnRep_PowerupActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASPowerupActor_OnRep_PowerupActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASPowerupActor_OnTickPowerup_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASPowerupActor_OnTickPowerup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SPowerupActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASPowerupActor_OnTickPowerup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPowerupActor, nullptr, "OnTickPowerup", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASPowerupActor_OnTickPowerup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASPowerupActor_OnTickPowerup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASPowerupActor_OnTickPowerup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASPowerupActor_OnTickPowerup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASPowerupActor);
	UClass* Z_Construct_UClass_ASPowerupActor_NoRegister()
	{
		return ASPowerupActor::StaticClass();
	}
	struct Z_Construct_UClass_ASPowerupActor_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointLightComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PointLightComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotatingMovementComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RotatingMovementComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PowerupInterval_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PowerupInterval;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TotalNrOfTicks_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TotalNrOfTicks;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsPowerupActive_MetaData[];
#endif
		static void NewProp_bIsPowerupActive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPowerupActive;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASPowerupActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CoopGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASPowerupActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASPowerupActor_OnActivated, "OnActivated" }, // 3305786939
		{ &Z_Construct_UFunction_ASPowerupActor_OnExpired, "OnExpired" }, // 746402934
		{ &Z_Construct_UFunction_ASPowerupActor_OnPowerupStateChanged, "OnPowerupStateChanged" }, // 2594065414
		{ &Z_Construct_UFunction_ASPowerupActor_OnPowerupTicked, "OnPowerupTicked" }, // 739949963
		{ &Z_Construct_UFunction_ASPowerupActor_OnRep_PowerupActive, "OnRep_PowerupActive" }, // 792201145
		{ &Z_Construct_UFunction_ASPowerupActor_OnTickPowerup, "OnTickPowerup" }, // 2336556358
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPowerupActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SPowerupActor.h" },
		{ "ModuleRelativePath", "Public/SPowerupActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPowerupActor_Statics::NewProp_MeshComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SPowerupActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASPowerupActor_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x002008000009000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASPowerupActor, MeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASPowerupActor_Statics::NewProp_MeshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASPowerupActor_Statics::NewProp_MeshComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPowerupActor_Statics::NewProp_PointLightComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SPowerupActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASPowerupActor_Statics::NewProp_PointLightComp = { "PointLightComp", nullptr, (EPropertyFlags)0x002008000009000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASPowerupActor, PointLightComp), Z_Construct_UClass_UPointLightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASPowerupActor_Statics::NewProp_PointLightComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASPowerupActor_Statics::NewProp_PointLightComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPowerupActor_Statics::NewProp_RotatingMovementComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SPowerupActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASPowerupActor_Statics::NewProp_RotatingMovementComp = { "RotatingMovementComp", nullptr, (EPropertyFlags)0x002008000009000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASPowerupActor, RotatingMovementComp), Z_Construct_UClass_URotatingMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASPowerupActor_Statics::NewProp_RotatingMovementComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASPowerupActor_Statics::NewProp_RotatingMovementComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPowerupActor_Statics::NewProp_PowerupInterval_MetaData[] = {
		{ "Category", "Powerups" },
		{ "Comment", "/* Time between powerups ticks */" },
		{ "ModuleRelativePath", "Public/SPowerupActor.h" },
		{ "ToolTip", "Time between powerups ticks" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASPowerupActor_Statics::NewProp_PowerupInterval = { "PowerupInterval", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASPowerupActor, PowerupInterval), METADATA_PARAMS(Z_Construct_UClass_ASPowerupActor_Statics::NewProp_PowerupInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASPowerupActor_Statics::NewProp_PowerupInterval_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPowerupActor_Statics::NewProp_TotalNrOfTicks_MetaData[] = {
		{ "Category", "Powerups" },
		{ "Comment", "/* Total times we apply the powerup effect */" },
		{ "ModuleRelativePath", "Public/SPowerupActor.h" },
		{ "ToolTip", "Total times we apply the powerup effect" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASPowerupActor_Statics::NewProp_TotalNrOfTicks = { "TotalNrOfTicks", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASPowerupActor, TotalNrOfTicks), METADATA_PARAMS(Z_Construct_UClass_ASPowerupActor_Statics::NewProp_TotalNrOfTicks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASPowerupActor_Statics::NewProp_TotalNrOfTicks_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPowerupActor_Statics::NewProp_bIsPowerupActive_MetaData[] = {
		{ "ModuleRelativePath", "Public/SPowerupActor.h" },
	};
#endif
	void Z_Construct_UClass_ASPowerupActor_Statics::NewProp_bIsPowerupActive_SetBit(void* Obj)
	{
		((ASPowerupActor*)Obj)->bIsPowerupActive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASPowerupActor_Statics::NewProp_bIsPowerupActive = { "bIsPowerupActive", "OnRep_PowerupActive", (EPropertyFlags)0x0020080100000020, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASPowerupActor), &Z_Construct_UClass_ASPowerupActor_Statics::NewProp_bIsPowerupActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASPowerupActor_Statics::NewProp_bIsPowerupActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASPowerupActor_Statics::NewProp_bIsPowerupActive_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASPowerupActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPowerupActor_Statics::NewProp_MeshComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPowerupActor_Statics::NewProp_PointLightComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPowerupActor_Statics::NewProp_RotatingMovementComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPowerupActor_Statics::NewProp_PowerupInterval,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPowerupActor_Statics::NewProp_TotalNrOfTicks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPowerupActor_Statics::NewProp_bIsPowerupActive,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASPowerupActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASPowerupActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASPowerupActor_Statics::ClassParams = {
		&ASPowerupActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASPowerupActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASPowerupActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASPowerupActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASPowerupActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASPowerupActor()
	{
		if (!Z_Registration_Info_UClass_ASPowerupActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASPowerupActor.OuterSingleton, Z_Construct_UClass_ASPowerupActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASPowerupActor.OuterSingleton;
	}
	template<> COOPGAME_API UClass* StaticClass<ASPowerupActor>()
	{
		return ASPowerupActor::StaticClass();
	}

	void ASPowerupActor::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_bIsPowerupActive(TEXT("bIsPowerupActive"));

		const bool bIsValid = true
			&& Name_bIsPowerupActive == ClassReps[(int32)ENetFields_Private::bIsPowerupActive].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASPowerupActor"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASPowerupActor);
	struct Z_CompiledInDeferFile_FID_CoopGame_Source_CoopGame_Public_SPowerupActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CoopGame_Source_CoopGame_Public_SPowerupActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASPowerupActor, ASPowerupActor::StaticClass, TEXT("ASPowerupActor"), &Z_Registration_Info_UClass_ASPowerupActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASPowerupActor), 1671347888U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CoopGame_Source_CoopGame_Public_SPowerupActor_h_2593965345(TEXT("/Script/CoopGame"),
		Z_CompiledInDeferFile_FID_CoopGame_Source_CoopGame_Public_SPowerupActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CoopGame_Source_CoopGame_Public_SPowerupActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
