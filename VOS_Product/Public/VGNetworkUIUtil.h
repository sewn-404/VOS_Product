#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "VGNetworkUIUtil.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGNetworkUIUtil : public UObject {
    GENERATED_BODY()
public:
    UVGNetworkUIUtil();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDeathMatchReleased(UObject* Context);
    
};

