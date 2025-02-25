// Coypright:(c) Art

#include "CourseCollision.h"
#include "Components/BoxComponent.h"

// Sets default values
ACourseCollision::ACourseCollision()
{
    //	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need
    // it. PrimaryActorTick.bCanEverTick = false;
    BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
    check(BoxComponent);
    SetRootComponent(BoxComponent);
    BoxComponent->OnComponentBeginOverlap.AddDynamic(this, &ThisClass::BeginOverlap);
    // BoxComponent->OnComponentBeginOverlap.__Internal_AddDynamic(this, &ThisClass::BeginOverlap);
}

void ACourseCollision::BeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
                                     UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep,
                                     const FHitResult& SweepResult)
{
    GEngine->AddOnScreenDebugMessage(INDEX_NONE, 2.0F, FColor::Red, TEXT("Helllo"));
}
