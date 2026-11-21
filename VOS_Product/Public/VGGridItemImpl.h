#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "VGGridItemImpl.generated.h"

class UVGGridViewItem;

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGGridItemImpl : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGGridViewItem* Widget;
    
    UVGGridItemImpl();

};

