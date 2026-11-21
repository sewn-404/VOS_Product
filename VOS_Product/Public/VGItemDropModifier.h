#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "VGItemDropGroup.h"
#include "VGItemDropModifier.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGItemDropModifier : public UObject {
    GENERATED_BODY()
public:
    UVGItemDropModifier();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ItemDropModify(float& probability, int32& dropNum, bool& allSlotLock, bool& attackSpecialized, const FVGItemDropGroup& itemDropGroup, UObject* Context);
    
};

