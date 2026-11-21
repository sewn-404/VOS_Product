#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "VGGameplayData.generated.h"

UCLASS(Abstract, Blueprintable)
class VOS_PRODUCT_API UVGGameplayData : public UObject {
    GENERATED_BODY()
public:
    UVGGameplayData();

};

