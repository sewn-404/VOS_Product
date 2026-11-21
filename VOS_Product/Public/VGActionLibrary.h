#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "VGActionLibrary.generated.h"

class UVGActionAsset;

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGActionLibrary : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UVGActionAsset*> m_actions;
    
    UVGActionLibrary();

};

