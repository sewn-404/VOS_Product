#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "VGBattleConversationGroup.h"
#include "VGBattleConversationTable.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGBattleConversationTable : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FVGBattleConversationGroup> m_battle_conversation_group_list;
    
public:
    UVGBattleConversationTable();

};

