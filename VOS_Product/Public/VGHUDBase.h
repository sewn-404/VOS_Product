#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HUD -FallbackName=HUD
#include "VGHUDBase.generated.h"

UCLASS(Blueprintable, NonTransient)
class AVGHUDBase : public AHUD {
    GENERATED_BODY()
public:
    AVGHUDBase(const FObjectInitializer& ObjectInitializer);

};

