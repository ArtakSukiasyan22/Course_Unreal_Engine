// Coypright:(c) Art

#include "CourseHUDWidget.h"
//#include "../CppCourseCharacter.h"
#include "Components/TextBlock.h"
#include "Interface/HealthInterface.h"

void UCourseHUDWidget::NativeConstruct()
{
    Super::NativeConstruct();
    IHealthInterface* Health = Cast<IHealthInterface>(GetOwningPlayerPawn());

    if (Health)
    {

        Health->OnHealthChanged().AddDynamic(this, &ThisClass::OnHealthChanged);
        OnHealthChanged(Health->GetHealth());
    }

    // ACppCourseCharacter* CourseCharactor = Cast<ACppCourseCharacter>(GetOwningPlayerPawn());
    //  check(CourseCharactor);
    /*  if (CourseCharactor)
    {

          CourseCharactor->OnHealthChangedEvent.AddDynamic(this, &ThisClass::OnHealthChanged);

    }*/
}

void UCourseHUDWidget::OnHealthChanged(const float NewHealth)
{
    check(HealtTextBlock);
    HealtTextBlock->SetText(FText::AsNumber(NewHealth));
}
