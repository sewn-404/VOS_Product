#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "VGBattleTalkGroup.h"
#include "VGBattleTalkTable.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGBattleTalkTable : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FVGBattleTalkGroup> m_battle_talk_group_list;
    
public:
    UVGBattleTalkTable();

};

