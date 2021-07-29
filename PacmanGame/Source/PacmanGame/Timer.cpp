// Fill out your copyright notice in the Description page of Project Settings.


#include "Timer.h"

void UTimer::setScoreNumber(FString* Text) {
	ScoreNumber->(FText::AsCultureInvariant(*Text));
}