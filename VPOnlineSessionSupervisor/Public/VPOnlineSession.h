#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=OnlineSession -FallbackName=OnlineSession
#include "VPOnlineSession.generated.h"

UCLASS(Blueprintable)
class VPONLINESESSIONSUPERVISOR_API UVPOnlineSession : public UOnlineSession {
    GENERATED_BODY()
public:
    UVPOnlineSession();

};

