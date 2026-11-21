#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameSession -FallbackName=GameSession
#include "VPGameSession.generated.h"

UCLASS(Blueprintable)
class VPONLINESESSIONSUPERVISOR_API AVPGameSession : public AGameSession {
    GENERATED_BODY()
public:
    AVPGameSession(const FObjectInitializer& ObjectInitializer);

};

