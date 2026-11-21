#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "VGItemDropTableElement.h"
#include "VGItemDropTableSet.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGItemDropTableSet : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGItemDropTableElement> m_item_drop_table;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_item_drop_to_inventory;
    
    UVGItemDropTableSet();

};

