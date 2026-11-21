#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "VGMapGameEventData.h"
#include "VGMapGameEventSetting.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGMapGameEventSetting : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGMapGameEventData> GameEvent;
    
    UVGMapGameEventSetting();

};

