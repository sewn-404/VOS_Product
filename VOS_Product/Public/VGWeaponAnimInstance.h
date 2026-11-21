#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstance -FallbackName=AnimInstance
#include "VGWeaponAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class VOS_PRODUCT_API UVGWeaponAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UVGWeaponAnimInstance();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBarrelRotation() const;
    
};

