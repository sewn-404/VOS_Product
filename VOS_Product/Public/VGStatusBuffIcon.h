#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "VGStatusBuffIconItem.h"
#include "VGStatusBuffIcon.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGStatusBuffIcon : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGStatusBuffIconItem> icons;
    
    UVGStatusBuffIcon();

};

