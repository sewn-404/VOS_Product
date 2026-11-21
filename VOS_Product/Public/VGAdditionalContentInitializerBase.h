#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "VGAdditionalContentInitializerBase.generated.h"

UCLASS(Blueprintable)
class UVGAdditionalContentInitializerBase : public UObject {
    GENERATED_BODY()
public:
    UVGAdditionalContentInitializerBase();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Execute();
    
};

