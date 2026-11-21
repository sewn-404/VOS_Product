#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "VGState.generated.h"

class UVGBehaviorComponent;

UCLASS(Abstract, Blueprintable)
class VOS_PRODUCT_API UVGState : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVGBehaviorComponent* m_owner;
    
public:
    UVGState();

};

