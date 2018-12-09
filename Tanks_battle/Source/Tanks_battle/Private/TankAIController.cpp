// Fill out your copyright notice in the Description page of Project Settings.

#include "TankAIController.h"

void ATankAIController::BeginPlay()
{
	Super::BeginPlay();

	auto AIControlledTank = GetAIControlledTank();

	if (!AIControlledTank)
	{
		UE_LOG(LogTemp, Warning, TEXT("No AI controlled tanks"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("AI Controller possesed by %s"), *(GetAIControlledTank()->GetName()));
	}
}

ATank* ATankAIController::GetAIControlledTank()
{
	return Cast<ATank>(GetPawn());
}