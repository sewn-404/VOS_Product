#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "VGMeshMaterialOverrideManager.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGMeshMaterialOverrideManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UObject*> m_object_holder;
    
public:
    UVGMeshMaterialOverrideManager();

};

