#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=StringAssetReference -FallbackName=StringAssetReference
#include "VGAbyssDungeonSubQuestManager.generated.h"

class UDataTable;
class UVGQuestRecord;

UCLASS(Blueprintable, Config=Game)
class VOS_PRODUCT_API UVGAbyssDungeonSubQuestManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGQuestRecord* m_now_order_sub_quest;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStringAssetReference m_abyss_dungeon_sub_quest_param_asset_ref;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataTable* m_abyss_dungeon_sub_quest_param_table;
    
public:
    UVGAbyssDungeonSubQuestManager();

};

