// Coypright:(c) Art

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "CoursHUD.generated.h"

UCLASS(Abstract)
class CPPCOURSE_API ACoursHUD : public AHUD
{
    GENERATED_BODY()
public:
    virtual void BeginPlay() override;

private:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UUserWidget> HUDWidget;
};
