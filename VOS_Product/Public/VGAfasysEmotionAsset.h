#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "VGAfasysSituation.h"
#include "VGAfasysEmotionAsset.generated.h"

UCLASS(Blueprintable)
class UVGAfasysEmotionAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGAfasysSituation> situations;
    
    UVGAfasysEmotionAsset();

};

