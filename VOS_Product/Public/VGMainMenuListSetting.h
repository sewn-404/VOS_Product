#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "EVGMainMenuType.h"
#include "VGMainMenuListItemInfo.h"
#include "VGTextSymbol.h"
#include "VGMainMenuListSetting.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGMainMenuListSetting : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol CaptionSymbol;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGMainMenuType MenuType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGMainMenuListItemInfo> Item;
    
    UVGMainMenuListSetting();

};

