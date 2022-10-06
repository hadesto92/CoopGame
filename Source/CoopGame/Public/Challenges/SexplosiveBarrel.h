// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SexplosiveBarrel.generated.h"

class USHealthComponent;
class UStaticMeshComponent;
class URadialForceComponent;
class UParticleSystem;

UCLASS()
class COOPGAME_API ASexplosiveBarrel : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASexplosiveBarrel();

protected:
	
	UPROPERTY(VisibleAnywhere, Category = "Components")
		USHealthComponent* HealthComp;

	UPROPERTY(VisibleAnywhere, Category = "Components")
		UStaticMeshComponent* MeshComp;

	UPROPERTY(VisibleAnywhere, Category = "Components")
		URadialForceComponent* RadialForceComp;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
		TSubclassOf<UDamageType> DmgType;

	UFUNCTION()
		void OnHealthChanged(USHealthComponent* OwningHealthComp, float Health, float HealthDelta, const class UDamageType* DamageType, class AController* InstigatedBy, AActor* DamageCauser);

	UPROPERTY(ReplicatedUsing=OnRep_Exploded)
		bool bExploded;

	UFUNCTION()
		void OnRep_Exploded();

	UPROPERTY(EditDefaultsOnly, Category = "FX")
		float ExplosionImpulse;

	UPROPERTY(EditDefaultsOnly, Category = "FX")
		float ExplosionDamage;

	UPROPERTY(EditDefaultsOnly, Category = "FX")
		UParticleSystem* ExplosionEffect;

	UPROPERTY(EditDefaultsOnly, Category = "FX")
		UMaterialInterface* ExplodedMaterial;
	

};
