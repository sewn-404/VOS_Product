#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "VGCharacterSetup.h"
#include "VGCharacterSetupAsset.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGCharacterSetupAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGCharacterSetup setup;
    
    UVGCharacterSetupAsset();

};

