#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AssetUserData -FallbackName=AssetUserData
#include "VGPhysicsParamAssetUserData.generated.h"

class UVGPhysicsParamAsset;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGPhysicsParamAssetUserData : public UAssetUserData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGPhysicsParamAsset* m_physics_param;
    
public:
    UVGPhysicsParamAssetUserData();

};

