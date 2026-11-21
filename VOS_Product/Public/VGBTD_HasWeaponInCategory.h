#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTDecorator -FallbackName=BTDecorator
#include "EVGBTWeaponCategory.h"
#include "VGBTD_HasWeaponInCategory.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGBTD_HasWeaponInCategory : public UBTDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EVGBTWeaponCategory> m_weapon_category;
    
public:
    UVGBTD_HasWeaponInCategory();

};

