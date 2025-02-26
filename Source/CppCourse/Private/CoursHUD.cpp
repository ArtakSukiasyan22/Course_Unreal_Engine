// Coypright:(c) Art

#include "CoursHUD.h"
#include "Blueprint/UserWidget.h"
#include "Kismet/KismetSystemLibrary.h"

void ACoursHUD::BeginPlay()
{
    Super::BeginPlay();

    FLatentActionInfo LatentActionInfo;
    LatentActionInfo.CallbackTarget = this;
    LatentActionInfo.ExecutionFunction = FName(TEXT("AddHUDToViewport"));
    LatentActionInfo.Linkage = 0;
    UKismetSystemLibrary::Delay(this, DelayBeforAddingHUD, LatentActionInfo);
}

void ACoursHUD::AddHUDToViewport()
{

    check(HUDWidget);

    UUserWidget* UserWidget = CreateWidget<UUserWidget>(GetOwningPlayerController(), HUDWidget);
    if (UserWidget)
    {
        UserWidget->AddToViewport();
    }
}
