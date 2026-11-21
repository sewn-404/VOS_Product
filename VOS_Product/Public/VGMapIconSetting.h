#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "VGMapIconInfo.h"
#include "VGMapIconSetting.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGMapIconSetting : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGMapIconInfo> Icon;
    
    UVGMapIconSetting();

};

