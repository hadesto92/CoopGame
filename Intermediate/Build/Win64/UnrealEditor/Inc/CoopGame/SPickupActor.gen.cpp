// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CoopGame/Public/SPickupActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSPickupActor() {}
// Cross Module References
	COOPGAME_API UClass* Z_Construct_UClass_ASPickupActor_NoRegister();
	COOPGAME_API UClass* Z_Construct_UClass_ASPickupActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_CoopGame();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDecalComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COOPGAME_API UClass* Z_Construct_UClass_ASPowerupActor_NoRegister();
// End Cross Module References
	void ASPickupActor::StaticRegisterNativesASPickupActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASPickupActor);
	UClass* Z_Construct_UClass_ASPickupActor_NoRegister()
	{
		return ASPickupActor::StaticClass();
	}
	struct Z_Construct_UClass_ASPickupActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SphereComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SphereComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DecalComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DecalComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PowerUpClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_PowerUpClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CooldownDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CooldownDuration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASPickupActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CoopGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPickupActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SPickupActor.h" },
		{ "ModuleRelativePath", "Public/SPickupActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPickupActor_Statics::NewProp_SphereComp_MetaData[] = {
		{ "Category", "Componenet" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SPickupActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASPickupActor_Statics::NewProp_SphereComp = { "SphereComp", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASPickupActor, SphereComp), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASPickupActor_Statics::NewProp_SphereComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASPickupActor_Statics::NewProp_SphereComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPickupActor_Statics::NewProp_DecalComp_MetaData[] = {
		{ "Category", "Componenet" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SPickupActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASPickupActor_Statics::NewProp_DecalComp = { "DecalComp", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASPickupActor, DecalComp), Z_Construct_UClass_UDecalComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASPickupActor_Statics::NewProp_DecalComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASPickupActor_Statics::NewProp_DecalComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPickupActor_Statics::NewProp_PowerUpClass_MetaData[] = {
		{ "Category", "PickupActor" },
		{ "ModuleRelativePath", "Public/SPickupActor.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASPickupActor_Statics::NewProp_PowerUpClass = { "PowerUpClass", nullptr, (EPropertyFlags)0x0024080000000801, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASPickupActor, PowerUpClass), Z_Construct_UClass_ASPowerupActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASPickupActor_Statics::NewProp_PowerUpClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASPickupActor_Statics::NewProp_PowerUpClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPickupActor_Statics::NewProp_CooldownDuration_MetaData[] = {
		{ "Category", "PickupActor" },
		{ "ModuleRelativePath", "Public/SPickupActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASPickupActor_Statics::NewProp_CooldownDuration = { "CooldownDuration", nullptr, (EPropertyFlags)0x0020080000000801, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASPickupActor, CooldownDuration), METADATA_PARAMS(Z_Construct_UClass_ASPickupActor_Statics::NewProp_CooldownDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASPickupActor_Statics::NewProp_CooldownDuration_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASPickupActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPickupActor_Statics::NewProp_SphereComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPickupActor_Statics::NewProp_DecalComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPickupActor_Statics::NewProp_PowerUpClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPickupActor_Statics::NewProp_CooldownDuration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASPickupActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASPickupActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASPickupActor_Statics::ClassParams = {
		&ASPickupActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASPickupActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASPickupActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASPickupActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASPickupActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASPickupActor()
	{
		if (!Z_Registration_Info_UClass_ASPickupActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASPickupActor.OuterSingleton, Z_Construct_UClass_ASPickupActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASPickupActor.OuterSingleton;
	}
	template<> COOPGAME_API UClass* StaticClass<ASPickupActor>()
	{
		return ASPickupActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASPickupActor);
	struct Z_CompiledInDeferFile_FID_CoopGame_Source_CoopGame_Public_SPickupActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CoopGame_Source_CoopGame_Public_SPickupActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASPickupActor, ASPickupActor::StaticClass, TEXT("ASPickupActor"), &Z_Registration_Info_UClass_ASPickupActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASPickupActor), 2024614616U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CoopGame_Source_CoopGame_Public_SPickupActor_h_3489275098(TEXT("/Script/CoopGame"),
		Z_CompiledInDeferFile_FID_CoopGame_Source_CoopGame_Public_SPickupActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CoopGame_Source_CoopGame_Public_SPickupActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
