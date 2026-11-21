#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "VGCharacterBoneTransform.h"
#include "VGCharacterFigureSetting.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGCharacterFigureSetting : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGCharacterBoneTransform> Transforms;
    
    UVGCharacterFigureSetting();

};

