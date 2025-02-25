// Coypright:(c) Art

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CourseCollision.generated.h"

class UBoxComponent;

UCLASS()
class CPPCOURSE_API ACourseCollision : public AActor
{
    GENERATED_BODY()

public:
    // Sets default values for this actor's properties
    ACourseCollision();

protected:
    UPROPERTY(EditDefaultsOnly, Category = "Component")
    UBoxComponent* BoxComponent;

private:
    UFUNCTION()
    void BeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp,
                      int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
};
