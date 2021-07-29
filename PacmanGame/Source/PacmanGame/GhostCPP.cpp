// Fill out your copyright notice in the Description page of Project Settings.


#include "GhostCPP.h"

// Sets default values
AGhostCPP::AGhostCPP()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGhostCPP::BeginPlay()
{
	Super::BeginPlay();
	
	
}

// Called every frame
void AGhostCPP::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AGhostCPP::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

