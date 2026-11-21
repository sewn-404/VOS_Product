#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "VGRoamNpcLookPoint.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGRoamNpcLookPoint : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_distance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_angle;
    
public:
    AVGRoamNpcLookPoint(const FObjectInitializer& ObjectInitializer);

};

