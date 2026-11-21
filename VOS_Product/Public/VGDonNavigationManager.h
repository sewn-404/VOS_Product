#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DonAINavigation -ObjectName=DonNavigationManager -FallbackName=DonNavigationManager
#include "VGDonNavigationManager.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGDonNavigationManager : public ADonNavigationManager {
    GENERATED_BODY()
public:
    AVGDonNavigationManager(const FObjectInitializer& ObjectInitializer);

};

