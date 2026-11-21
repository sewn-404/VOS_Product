#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "VGSkillHeaderList.generated.h"

class UVGSkillHeader;

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGSkillHeaderList : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UVGSkillHeader*> headers;
    
    UVGSkillHeaderList();

};

