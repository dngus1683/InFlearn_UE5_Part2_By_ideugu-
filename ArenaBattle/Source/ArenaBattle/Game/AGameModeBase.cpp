// Fill out your copyright notice in the Description page of Project Settings.

#include "Game/AGameModeBase.h"


AAGameModeBase::AAGameModeBase()
{
	// 에디터 -> Content Browser -> ThirdPerson 클래스는 블루프린트로 제작되었기 때문에, 해당 블루프린트 우클릭 -> copy Reference를 통해 해당 애셋의 경로를 가져울 수 있음. 
	// 이때 클래스 정보만 가져오기 위해, 경로 뒤에 "_C"를 추가.
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

	// ABPlayerController 헤더를 인클루드하여 직접적으로 PlayerControllerClass = AABPlayerController::StaticClass();를 통해 지정할 수 있지만, 
	// 위 ThirdPerson 클래스를 가져온 것 처럼, 레퍼런스를 통해 클래스 정보를 알 수 있다.
	// 이 경우, 헤더를 불러오지 않기 때문에 충돌 문제가 발생하지 않는다.
	static ConstructorHelpers::FClassFinder<APlayerController> PlayerControllerClassRef(TEXT("/Script/ArenaBattle.ABPlayerController"));
	if (PlayerControllerClassRef.Class)
	{
		PlayerControllerClass = PlayerControllerClassRef.Class;
	}
}
