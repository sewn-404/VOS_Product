#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTDecorator -FallbackName=BTDecorator
#include "VGBTD_CheckWeaponCanNotFire.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGBTD_CheckWeaponCanNotFire : public UBTDecorator {
    GENERATED_BODY()
public:
    UVGBTD_CheckWeaponCanNotFire();

};

