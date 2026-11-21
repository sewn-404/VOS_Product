#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=VPOnlineSessionSupervisor -ObjectName=VPOnlineSession -FallbackName=VPOnlineSession
#include "VGOnlineSession.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGOnlineSession : public UVPOnlineSession {
    GENERATED_BODY()
public:
    UVGOnlineSession();

};

