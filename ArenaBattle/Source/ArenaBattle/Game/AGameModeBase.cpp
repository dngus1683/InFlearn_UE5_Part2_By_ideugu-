// Fill out your copyright notice in the Description page of Project Settings.

#include "Game/AGameModeBase.h"


AAGameModeBase::AAGameModeBase()
{
	// ������ -> Content Browser -> ThirdPerson Ŭ������ �������Ʈ�� ���۵Ǿ��� ������, �ش� �������Ʈ ��Ŭ�� -> copy Reference�� ���� �ش� �ּ��� ��θ� ������ �� ����. 
	// �̶� Ŭ���� ������ �������� ����, ��� �ڿ� "_C"�� �߰�.
	/*static ConstructorHelpers::FClassFinder<APawn> ThirdPersonClassRef(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter.BP_ThirdPersonCharacter_C"));
	if (ThirdPersonClassRef.Class)
	{
		DefaultPawnClass = ThirdPersonClassRef.Class;
	}*/

	static ConstructorHelpers::FClassFinder<APawn> DefaultPawnClassRef(TEXT("/Script/Engine.Blueprint'/Game/ArenaBattle/Blueprint/BP_AB_Character.BP_AB_Character_C'"));
	if (DefaultPawnClassRef.Class)
	{
		DefaultPawnClass = DefaultPawnClassRef.Class;
	}

	// ABPlayerController ����� ��Ŭ����Ͽ� ���������� PlayerControllerClass = AABPlayerController::StaticClass();�� ���� ������ �� ������, 
	// �� ThirdPerson Ŭ������ ������ �� ó��, ���۷����� ���� Ŭ���� ������ �� �� �ִ�.
	// �� ���, ����� �ҷ����� �ʱ� ������ �浹 ������ �߻����� �ʴ´�.
	static ConstructorHelpers::FClassFinder<APlayerController> PlayerControllerClassRef(TEXT("/Script/ArenaBattle.ABPlayerController"));
	if (PlayerControllerClassRef.Class)
	{
		PlayerControllerClass = PlayerControllerClassRef.Class;
	}
}
