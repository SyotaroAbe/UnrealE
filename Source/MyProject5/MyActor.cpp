// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor.h"

// Sets default values
AMyActor::AMyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();

	// �f�o�b�O�\��
	GEngine->AddOnScreenDebugMessage(
		(uint64)-1,								// Key
		2.0f,									// TimeToDisplay
		FLinearColor::Red.ToFColor(true),		// DisplayColor
		TEXT("HELLO WORLD"));					// DebugString
}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// �������ɃR�[�������
void AMyActor::OnConstruction(const FTransform& transform)
{
	// �f�o�b�O�\��
	GEngine->AddOnScreenDebugMessage(
		(uint64)-1,								// Key
		2.0f,									// TimeToDisplay
		FLinearColor::Blue.ToFColor(true),		// DisplayColor
		TEXT("HELLO WORLD"));					// DebugString
}
