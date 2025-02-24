// Fill out your copyright notice in the Description page of Project Settings.

#include "CourseActor.h"

DEFINE_LOG_CATEGORY_STATIC(LogMyActor, All, All);

// Sets default values
ACourseActor::ACourseActor()
{
    // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = false;

    StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
    SetRootComponent(StaticMeshComponent);
}

void ACourseActor::OnConstruction(const FTransform& Transform)
{
    Super::OnConstruction(Transform);
    check(StaticMeshComponent);
    if (StaticMeshComponent)
    {
        StaticMeshComponent->SetStaticMesh(MyMesh1);
    }
}

int32 ACourseActor::GetMony() const
{
    return Mony;
}

int32 ACourseActor::GetMony_2()
{
    return Mony * 2;
}

int32 ACourseActor::GetMony_3()
{
    return Mony * 2;
}

float ACourseActor::GetMyFloat_Implementation() const
{
    return MYFloat;
}

// Called when the game starts or when spawned
void ACourseActor::BeginPlay()
{
    Super::BeginPlay();
    const bool bIsVisible = true;
    const int8 Number = -5;
    const uint8 Level_1 = 5;
    const uint16 Level_2 = 5;
    const int32 Point_1 = -2;
    const uint32 Point_2 = 2;
    const int64 Point_3 = 3;
    const float Damage = 0.345f;
    const double Damage_2 = 12.01;

    //checkNoEntry();

    FString ErrorName(TEXT("Import error!"));
    FName BoneName(TEXT("Pelvis"));
    FText Desctiption = FText::FromString(TEXT("Important error !"));

    FVector Location(0.0f, 12.0f, 10.0f);
    FRotator Rotation(0.0, 12.0, 15.7);
    FTransform Transform(Rotation, Location, FVector::OneVector);

    GEngine->AddOnScreenDebugMessage(INDEX_NONE, 2.0f, FColor::Green, TEXT("Hello World"));
    GEngine->AddOnScreenDebugMessage(INDEX_NONE, 2.0f, FColor::Green,
                                     FString::Printf(TEXT("Number  = %llu, Point_3 = %llu"), Number, Point_3));

    UE_LOG(LogTemp, Warning, TEXT("Some Text!"));
    UE_LOG(LogTemp, Error, TEXT("Some Error"));
    UE_LOG(LogTemp, Display, TEXT("Some String !"));
    UE_LOG(LogTemp, Display, TEXT("bIsVisable = %d"), bIsVisible);
    UE_LOG(LogTemp, Display, TEXT("false = %i"), bIsVisible);
    UE_LOG(LogTemp, Display, TEXT("false = %s"), bIsVisible ? TEXT("Trur") : TEXT("False"));
    UE_LOG(LogTemp, Warning, TEXT("float = %f"), Damage);
    UE_LOG(LogTemp, Warning, TEXT("float = %.2f"), Damage);

    UE_LOG(LogTemp, Error, TEXT("ErrorName = %s"), *ErrorName);
    UE_LOG(LogTemp, Error, TEXT("BoneName = %s"), *BoneName.ToString());
    UE_LOG(LogTemp, Error, TEXT("Desctiption = %s"), *Desctiption.ToString());

    UE_LOG(LogTemp, Warning, TEXT("Location = %s"), *Location.ToString());
    UE_LOG(LogTemp, Warning, TEXT("Rotation = %s"), *Rotation.ToString());
    UE_LOG(LogTemp, Warning, TEXT("Transform = %s"), *Transform.ToString());

    UE_LOG(LogMyActor, Warning, TEXT("Transform = %s"), *Transform.ToString());
}

// Called every frame
void ACourseActor::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    //check(false);
    //ensure(false);
    //ensureMsgf(false, TEXT("Info about error"));
    //ensureAlways(false);


}
