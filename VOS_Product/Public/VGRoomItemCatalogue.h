#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "VGRoomItemCatalogue.generated.h"

class UVGRoomItemDataAsset;

UCLASS(Blueprintable, Config=Game)
class VOS_PRODUCT_API UVGRoomItemCatalogue : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UVGRoomItemDataAsset*> m_data_assets;
    
public:
    UVGRoomItemCatalogue();

};

