#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "VGSituationEntry.h"
#include "VGSituationSetting.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGSituationSetting : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGSituationEntry> situation_entries;
    
    UVGSituationSetting();

};

