#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "VGAvatarItemDefinition.h"
#include "VGAvatarItemDataAsset.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGAvatarItemDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGAvatarItemDefinition> item_definitions;
    
    UVGAvatarItemDataAsset();

};

