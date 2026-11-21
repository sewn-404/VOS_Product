#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameEngine -FallbackName=GameEngine
#include "VPGameEngine.generated.h"

UCLASS(Blueprintable, NonTransient)
class VPGAMEENGINE_API UVPGameEngine : public UGameEngine {
    GENERATED_BODY()
public:
    UVPGameEngine();

};

