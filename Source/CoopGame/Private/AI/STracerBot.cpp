// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/STracerBot.h"
#include "Components/StaticMeshComponent.h"
#include "Kismet/GameplayStatics.h"
#include "NavigationSystem.h"
#include "GameFramework/Character.h"
#include "NavigationPath.h"
#include "DrawDebugHelpers.h"
#include "Components/SHealthComponent.h"
#include "SCharacter.h"
#include "Components/SphereComponent.h"
#include "Sound/SoundCue.h"
#include "Components/AudioComponent.h"

// Sets default values
ASTracerBot::ASTracerBot()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp"));
	MeshComp->SetCanEverAffectNavigation(false);
	MeshComp->SetSimulatePhysics(true);
	MeshComp->SetLinearDamping(1);
	MeshComp->SetAngularDamping(1);
	RootComponent = MeshComp;

	HealthComp = CreateDefaultSubobject<USHealthComponent>(TEXT("HealthComp"));
	HealthComp->OnHealthChanged.AddDynamic(this, &ASTracerBot::HandleTakeDamage);

	SphereComp = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComp"));
	SphereComp->SetSphereRadius(ExplosionRadius);
	SphereComp->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	SphereComp->SetCollisionResponseToAllChannels(ECR_Ignore);
	SphereComp->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);
	SphereComp->SetupAttachment(RootComponent);

	AudioComp = CreateDefaultSubobject<UAudioComponent>(TEXT("AudioComp"));
	AudioComp->SetupAttachment(RootComponent);

	bUseVelocityChange = true;
	MovementForce = 1000;
	RequiredDistanceToTarget = 100;
	ExplosionDamage = 100;
	ExplosionRadius = 200;

	SelfDamageInterval = 0.25f;

}

// Called when the game starts or when spawned
void ASTracerBot::BeginPlay()
{
	Super::BeginPlay();

	if (GetLocalRole() == ROLE_Authority)
	{

		NextPathPoint = GetNextPathPoint();

		FTimerHandle TimerHandle_CheckPowerLevel;
		GetWorldTimerManager().SetTimer(TimerHandle_CheckPowerLevel, this, &ASTracerBot::OnCheckNearbyBots, 1.0f, true);

	}

	//Add sound on audio component
	UGameplayStatics::SpawnSoundAttached(RunSound, AudioComp);
	
}

void ASTracerBot::HandleTakeDamage(USHealthComponent* OwningHealthComp, float Health, float HealthDelta, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser)
{

	//Pulse material
	if (MatInst == nullptr) //If MatInst is not create then create this material but if don't check if material is created then material is create every time
	{

		MatInst = MeshComp->CreateAndSetMaterialInstanceDynamicFromMaterial(0, MeshComp->GetMaterial(0));

	}

	if (MatInst)
	{

		MatInst->SetScalarParameterValue("LastTimeDamageTaken", GetWorld()->TimeSeconds);

	}

	// Explode on hitpoints == 0
	if (Health <= 0.0f)
	{

		SelfDestruct();

	}

}

FVector ASTracerBot::GetNextPathPoint()
{

	ACharacter* PlayerPawn = UGameplayStatics::GetPlayerCharacter(this, 0);

	UNavigationPath* NavPath = UNavigationSystemV1::FindPathToActorSynchronously(this, GetActorLocation(), PlayerPawn);

	if (NavPath->PathPoints.Num() > 1)
	{

		return NavPath->PathPoints[1];

	}

	return GetActorLocation();

}

void ASTracerBot::SelfDestruct()
{

	if (bExploded)
	{

		return;

	}

	bExploded = true;

	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ExplosionEffect, GetActorLocation());
	UGameplayStatics::PlaySoundAtLocation(this, ExplodeSound, GetActorLocation());

	MeshComp->SetVisibility(false, true);
	//MeshComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	if (GetLocalRole() == ROLE_Authority)
	{

		TArray<AActor*> IgnoredActors;
		IgnoredActors.Add(this);

		float ActualDamage = ExplosionDamage + (ExplosionDamage * PowerLevel);

		//Apply Damage!
		UGameplayStatics::ApplyRadialDamage(this, ActualDamage, GetActorLocation(), ExplosionRadius, nullptr, IgnoredActors, this, GetInstigatorController(), true);

		DrawDebugSphere(GetWorld(), GetActorLocation(), ExplosionRadius, 12, FColor::Red, false, 2.0f, 0, 1.0f);

		//Destroy Actor immediately
		SetLifeSpan(2.0f);

	}

}

void ASTracerBot::DamageSelf()
{

	UGameplayStatics::ApplyDamage(this, 20, GetInstigatorController(), this, nullptr);

}

// Called every frame
void ASTracerBot::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	if (GetLocalRole() == ROLE_Authority && !bExploded)
	{

		float DistanceToTarget = (GetActorLocation() - NextPathPoint).Size();

		if (DistanceToTarget <= RequiredDistanceToTarget)
		{

			NextPathPoint = GetNextPathPoint();

			DrawDebugString(GetWorld(), GetActorLocation(), "Target Reached!");

		}
		else
		{
			FVector ForceDirection = NextPathPoint - GetActorLocation();
			ForceDirection.Normalize();

			ForceDirection *= MovementForce;

			MeshComp->AddForce(ForceDirection, NAME_None, bUseVelocityChange);

			DrawDebugDirectionalArrow(GetWorld(), GetActorLocation(), GetActorLocation() + ForceDirection, 32, FColor::Yellow, false, 0.0f, 0, 1.0f);

		}

		DrawDebugSphere(GetWorld(), NextPathPoint, 20, 12, FColor::Red, false, 0.0f, 1.0f);
	
	}

	//Change volume sound to speed object
	float MovementVelocity = GetVelocity().Size(); //get speed
	float AudioVolumeMultipler = FMath::GetMappedRangeValueClamped(FVector2D(10, 1000), FVector2D(0.1, 2), MovementVelocity);

	AudioComp->SetVolumeMultiplier(AudioVolumeMultipler);

}

void ASTracerBot::NotifyActorBeginOverlap(AActor* OtherActor)
{

	Super::NotifyActorBeginOverlap(OtherActor);

	if (!bStartedSelfDestruction && !bExploded)
	{

		ASCharacter* PlayerPawn = Cast<ASCharacter>(OtherActor);
		if (PlayerPawn)
		{

			if (GetLocalRole() == ROLE_Authority)
			{

				//Start self destruction sequence
				GetWorldTimerManager().SetTimer(TimerHandle_SelfDamage, this, &ASTracerBot::DamageSelf, SelfDamageInterval, true, 0.0f);

			}

			bStartedSelfDestruction = true;

			UGameplayStatics::SpawnSoundAttached(SelfDestructSound, RootComponent);

		}

	}

}

void ASTracerBot::OnCheckNearbyBots()
{

	const float Radius = 600;

	FCollisionShape CollSharpe;
	CollSharpe.SetSphere(Radius);

	FCollisionObjectQueryParams QueryParams;

	QueryParams.AddObjectTypesToQuery(ECC_PhysicsBody);
	QueryParams.AddObjectTypesToQuery(ECC_Pawn);

	TArray<FOverlapResult> Overlaps;
	GetWorld()->OverlapMultiByObjectType(Overlaps, GetActorLocation(), FQuat::Identity, QueryParams, CollSharpe);

	DrawDebugSphere(GetWorld(), GetActorLocation(), Radius, 12, FColor::White, false, 1.0f);

	int32 NrOfBots = 0;

	for (FOverlapResult Result : Overlaps)
	{

		ASTracerBot* Bot = Cast<ASTracerBot>(Result.GetActor());

		if (Bot && Bot != this)
		{

			NrOfBots++;

		}

		const int32 MaxPowerLevel = 4;

		PowerLevel = FMath::Clamp(NrOfBots, 0, MaxPowerLevel);

		if (MatInst == nullptr)
		{

			MatInst = MeshComp->CreateAndSetMaterialInstanceDynamicFromMaterial(0, MeshComp->GetMaterial(0));

		}
		if (MatInst)
		{

			float Alpha = PowerLevel / (float)MaxPowerLevel;

			MatInst->SetScalarParameterValue("PowerLevelAlpha", Alpha);

		}

		DrawDebugString(GetWorld(), FVector(0, 0, 0), FString::FromInt(PowerLevel), this, FColor::White, 1.0f, true);

	}

}

