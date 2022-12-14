// Fill out your copyright notice in the Description page of Project Settings.


#include "Components/SHealthComponent.h"
#include "Net/UnrealNetwork.h"

// Sets default values for this component's properties
USHealthComponent::USHealthComponent()
{

	DefaultHealth = 100;

	bShieldActive = false;

	SetIsReplicatedByDefault(true);

}


// Called when the game starts
void USHealthComponent::BeginPlay()
{
	Super::BeginPlay();

	//Only hook if we are server	
	if (GetOwnerRole() == ROLE_Authority)
	{

		AActor* MyOwner = GetOwner();
		if (MyOwner)
		{

			MyOwner->OnTakeAnyDamage.AddDynamic(this, &USHealthComponent::HandleTakeAnyDamage);

		}

	}

	Health = DefaultHealth;

}

void USHealthComponent::OnRep_Health(float OldHealth)
{
	
	if (bShieldActive == false)
	{

		float Damage = Health - OldHealth;

		OnHealthChanged.Broadcast(this, Health, Damage, nullptr, nullptr, nullptr);

	}
	else
	{

		bShieldActive = false;

	}

}

void USHealthComponent::HandleTakeAnyDamage(AActor* DamageActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser)
{

	if (Damage <= 0.0f)
	{

		return;

	}

	if (bShieldActive == false)
	{
		
		//Update health clamped
		Health = FMath::Clamp(Health - Damage, 0.0f, DefaultHealth);

		UE_LOG(LogTemp, Log, TEXT("Health Changed: %s"), *FString::SanitizeFloat(Health));

		OnHealthChanged.Broadcast(this, Health, Damage, DamageType, InstigatedBy, DamageCauser);

	}
	else
	{

		bShieldActive = false;

	}
}

void USHealthComponent::Heal(float HealAmount)
{

	if (HealAmount <= 0.0f || Health <= 0.0f)
	{

		return;

	}

	Health = FMath::Clamp(Health + HealAmount, 0.0f, DefaultHealth);

	UE_LOG(LogTemp, Log, TEXT("Health Changed: %s (+%s)"), *FString::SanitizeFloat(Health), *FString::SanitizeFloat(HealAmount));

	OnHealthChanged.Broadcast(this, Health, -HealAmount, nullptr, nullptr, nullptr);

}

void USHealthComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{

	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(USHealthComponent, Health);

}