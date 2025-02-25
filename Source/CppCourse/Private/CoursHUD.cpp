// Coypright:(c) Art

#include "CoursHUD.h"
#include "Blueprint/UserWidget.h"

void ACoursHUD::BeginPlay()
{
    Super::BeginPlay();
    check(HUDWidget);
    UUserWidget* UserWidget = CreateWidget<UUserWidget>(GetOwningPlayerController(), HUDWidget);
    if (UserWidget)
    {
        UserWidget->AddToViewport();
    }
}
