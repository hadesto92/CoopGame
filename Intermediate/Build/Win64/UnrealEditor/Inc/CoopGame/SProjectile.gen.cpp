// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CoopGame/Public/SProjectile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSProjectile() {}
// Cross Module References
	COOPGAME_API UClass* Z_Construct_UClass_ASProjectile_NoRegister();
	COOPGAME_API UClass* Z_Construct_UClass_ASProjectile();
	COOPGAME_API UClass* Z_Construct_UClass_ASWeapon();
	UPackage* Z_Construct_UPackage__Script_CoopGame();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void ASProjectile::StaticRegisterNativesASProjectile()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASProjectile);
	UClass* Z_Construct_UClass_ASProjectile_NoRegister()
	{
		return ASProjectile::StaticClass();
	}
	struct Z_Construct_UClass_ASProjectile_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASProjectile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASWeapon,
		(UObject* (*)())Z_Construct_UPackage__Script_CoopGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASProjectile_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SProjectile.h" },
		{ "ModuleRelativePath", "Public/SProjectile.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASProjectile_Statics::NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "ProjectileWeapon" },
		{ "ModuleRelativePath", "Public/SProjectile.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASProjectile_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASProjectile, ProjectileClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASProjectile_Statics::NewProp_ProjectileClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASProjectile_Statics::NewProp_ProjectileClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASProjectile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASProjectile_Statics::NewProp_ProjectileClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASProjectile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASProjectile>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASProjectile_Statics::ClassParams = {
		&ASProjectile::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASProjectile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASProjectile_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASProjectile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASProjectile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASProjectile()
	{
		if (!Z_Registration_Info_UClass_ASProjectile.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASProjectile.OuterSingleton, Z_Construct_UClass_ASProjectile_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASProjectile.OuterSingleton;
	}
	template<> COOPGAME_API UClass* StaticClass<ASProjectile>()
	{
		return ASProjectile::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASProjectile);
	struct Z_CompiledInDeferFile_FID_CoopGame_Source_CoopGame_Public_SProjectile_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CoopGame_Source_CoopGame_Public_SProjectile_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASProjectile, ASProjectile::StaticClass, TEXT("ASProjectile"), &Z_Registration_Info_UClass_ASProjectile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASProjectile), 885363594U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CoopGame_Source_CoopGame_Public_SProjectile_h_2883824730(TEXT("/Script/CoopGame"),
		Z_CompiledInDeferFile_FID_CoopGame_Source_CoopGame_Public_SProjectile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CoopGame_Source_CoopGame_Public_SProjectile_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
