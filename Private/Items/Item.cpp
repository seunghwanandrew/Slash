// Fill out your copyright notice in the Description page of Project Settings.

#include "Slash/DebugMacros.h"
#include "Items/Item.h"

AItem::AItem()
{
	PrimaryActorTick.bCanEverTick = true;

	Root = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	RootComponent = Root;

	ItemMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ItemMeshComponent"));
	ItemMesh->AttachToComponent(Root, FAttachmentTransformRules::KeepRelativeTransform);
}

void AItem::BeginPlay()
{
	Super::BeginPlay();
}

float AItem::TransformedSin()
{
	return Amplitude * FMath::Sin(RunningTime * TimeConstant);
}

void AItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	RunningTime += DeltaTime;

	float MovementRate = 50.f;
	float DeltaZ = TransformedSin();
	float RotationRate = 25.f;
	FRotator NewRotation = FRotator(0.f, RotationRate * DeltaTime, 0.f);
	AddActorLocalRotation(NewRotation);

	//AddActorWorldOffset(FVector(0.f, 0.f, DeltaZ));
	//AddActorWorldRotation(FRotator(0.f, RotationRate * DeltaTime, DeltaZ));

	//DRAW_SPHERE_SINGLEFRAME(GetActorLocation());
	//DRAW_ACTOR_VECTOR_SINGLEFRAME(GetActorLocation(), GetActorLocation() + GetActorForwardVector() * 100.0F);

	//FVector AvgVector = Avg<FVector>(GetActorLocation(), FVector::ZeroVector);
	//DRAW_POINT_SINGLEFRAME(AvgVector);

}

