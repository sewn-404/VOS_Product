#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "VGTriggerAssetSet.h"
#include "VGTriggerLibrary.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGTriggerLibrary : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGTriggerAssetSet> triggers;
    
    UVGTriggerLibrary();

};

