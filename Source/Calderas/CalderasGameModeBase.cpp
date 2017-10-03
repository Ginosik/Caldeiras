// Fill out your copyright notice in the Description page of Project Settings.

#include "CalderasGameModeBase.h"
#include "MyPlayerController.h"

ACalderasGameModeBase::ACalderasGameModeBase() {
	PlayerControllerClass = AMyPlayerController::StaticClass();
}

