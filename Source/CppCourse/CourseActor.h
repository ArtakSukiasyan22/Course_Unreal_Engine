// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CourseActor.generated.h"

USTRUCT(BlueprintType)
struct FItemInfo
{
    GENERATED_BODY()

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
    FName Nmae;

    UPROPERTY(BlueprintReadOnly)
    UTexture2D* Texture;

    bool bTest;
};

UCLASS()
class CPPCOURSE_API ACourseActor : public AActor
{
    GENERATED_BODY()

public:
    // Sets default values for this actor's properties
    ACourseActor();
    virtual void OnConstruction(const FTransform& Transform) override;
    // Called every frame
    virtual void Tick(float DeltaTime) override;

protected:
    UPROPERTY(BlueprintReadWrite)
    FItemInfo ItemInfo;

    UPROPERTY()
    UStaticMeshComponent* StaticMeshComponent;

    UPROPERTY(VisibleAnywhere)
    int32 Mony = 250;

    UPROPERTY(BlueprintReadOnly)
    float MYFloat{0.2f};

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    double MyDouble{0.2};

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
    FString MyString = TEXT("Info text");

    UPROPERTY(EditDefaultsOnly)
    FName MyName = TEXT("Art");

    UPROPERTY(EditAnywhere)
    UStaticMesh* MyMesh1;

    UPROPERTY(EditInstanceOnly)
    UStaticMesh* MyMesh2;

    UFUNCTION(BlueprintCallable)
    int32 GetMony() const;

    UFUNCTION(BlueprintCallable)
    int32 GetMony_2();

    UFUNCTION(BlueprintPure)
    int32 GetMony_3();

    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    float GetMyFloat() const;

    // Called when the game starts or when spawned
    virtual void BeginPlay() override;
};
