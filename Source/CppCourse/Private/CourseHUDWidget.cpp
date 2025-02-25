// Coypright:(c) Art

#include "CourseHUDWidget.h"
#include "../CppCourseCharacter.h"
#include "Components/TextBlock.h"

void UCourseHUDWidget::NativeConstruct()
{
    Super::NativeConstruct();
    ACppCourseCharacter* CourseCharactor = Cast<ACppCourseCharacter>(GetOwningPlayerPawn());
    // check(CourseCharactor);
    if (CourseCharactor)
    {

        CourseCharactor->OnHealthChangedEvent.AddDynamic(this, &ThisClass::OnHealthChanged);
                         
    }
}

void UCourseHUDWidget::OnHealthChanged(const float NewHealth)
{
    check(HealtTextBlock);
    HealtTextBlock->SetText(FText::AsNumber(NewHealth));
}
