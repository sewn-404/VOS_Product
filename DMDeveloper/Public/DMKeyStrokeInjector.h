#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "DMKeyStrokeInjector.generated.h"

UCLASS(Blueprintable, Config=DevOnly)
class DMDEVELOPER_API UDMKeyStrokeInjector : public UObject {
    GENERATED_BODY()
public:
    UDMKeyStrokeInjector();

private:
    UFUNCTION(BlueprintCallable)
    static void EnableInputProcessor();
    
    UFUNCTION(BlueprintCallable)
    static void DisableInputProcessor();
    
};

