// Coypright:(c) Art

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "HealthInterface.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHealthChanged, float, NewHeath);


// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UHealthInterface : public UInterface
{
	GENERATED_BODY()
};

class CPPCOURSE_API IHealthInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
    virtual FOnHealthChanged& OnHealthChanged() = 0;
    virtual float GetHealth() const = 0; 
};
