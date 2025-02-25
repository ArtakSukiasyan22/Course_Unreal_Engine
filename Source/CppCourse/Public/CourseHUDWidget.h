// Coypright:(c) Art

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CourseHUDWidget.generated.h"

class UTextBlock;

UCLASS(Abstract)
class CPPCOURSE_API UCourseHUDWidget : public UUserWidget
{
	GENERATED_BODY()
public:
    virtual void NativeConstruct() override;

protected:
    UPROPERTY(meta = (BindWidget))
    UTextBlock* HealtTextBlock;

private:
    UFUNCTION()
    void OnHealthChanged(const float NewHealth);
	
};
