#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=NavLinkProxy -FallbackName=NavLinkProxy
#include "VGNavLinkProxy.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGNavLinkProxy : public ANavLinkProxy {
    GENERATED_BODY()
public:
    AVGNavLinkProxy(const FObjectInitializer& ObjectInitializer);

};

