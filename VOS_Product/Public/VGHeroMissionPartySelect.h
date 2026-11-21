#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "EVGHeroSelectableCharacter.h"
#include "VGHeroMissionPartySelect.generated.h"

USTRUCT(BlueprintType)
struct FVGHeroMissionPartySelect : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EVGHeroSelectableCharacter> selectable_chara_ids;
    
    VOS_PRODUCT_API FVGHeroMissionPartySelect();
};

