#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "VGDamageDesc.h"
#include "VGDamageCauser.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGDamageCauser : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGDamageDesc m_desc;
    
public:
    AVGDamageCauser(const FObjectInitializer& ObjectInitializer);

};

