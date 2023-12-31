// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FloatingActor.generated.h"

UCLASS()
class MYPROJECT5_API AFloatingActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFloatingActor();

	// StaticMeshコンポーネントを宣言
	UPROPERTY(VisibleAnywhere)
		UStaticMeshComponent* VisualMesh;

	// 移動量
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="FloatingProperty")
	float ScaleHeight = 20.0f;

	// 移動フラグ
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FloatingProperty")
		bool IsFloating;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
