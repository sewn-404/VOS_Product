#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "VGMeshVisualCustomizeFacePaintPattern.h"
#include "VGFacePaintDataAsset.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGFacePaintDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGMeshVisualCustomizeFacePaintPattern> face_paint_patterns;
    
    UVGFacePaintDataAsset();

};

