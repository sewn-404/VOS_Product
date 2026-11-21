#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "VGBreastSwingAssetParam.h"
#include "VGClothAssetParam.h"
#include "VGCollisionAssetParam.h"
#include "VGPhysicsAssetParam.h"
#include "VGSkeletalMeshPhysicsParamAsset.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGSkeletalMeshPhysicsParamAsset : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGBreastSwingAssetParam> m_body_params;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGPhysicsAssetParam> m_hair_params;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGCollisionAssetParam> m_collision_params;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGClothAssetParam> m_cloth_params;
    
public:
    UVGSkeletalMeshPhysicsParamAsset();

};

