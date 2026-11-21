#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "VGAfasysAction.h"
#include "VGAfasysActionLibrary.generated.h"

UCLASS(Blueprintable)
class UVGAfasysActionLibrary : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGAfasysAction> m_actions;
    
    UVGAfasysActionLibrary();

};

