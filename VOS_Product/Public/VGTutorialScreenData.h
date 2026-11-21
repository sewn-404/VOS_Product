#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "VGTextSymbol.h"
#include "VGTutorialScreenPageData.h"
#include "VGTutorialScreenData.generated.h"

UCLASS(Blueprintable)
class UVGTutorialScreenData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGTutorialScreenPageData> Pages;
    
    UVGTutorialScreenData();

};

