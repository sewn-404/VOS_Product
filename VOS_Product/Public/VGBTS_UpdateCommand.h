#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTService -FallbackName=BTService
#include "VGBTS_UpdateCommand.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGBTS_UpdateCommand : public UBTService {
    GENERATED_BODY()
public:
    UVGBTS_UpdateCommand();

};

