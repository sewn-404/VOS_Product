#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "VGMeshMaterialOverrideManagerTicker.generated.h"

class UVGMeshMaterialOverrideManager;

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGMeshMaterialOverrideManagerTicker : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UVGMeshMaterialOverrideManager*> m_entries;
    
public:
    UVGMeshMaterialOverrideManagerTicker();

};

