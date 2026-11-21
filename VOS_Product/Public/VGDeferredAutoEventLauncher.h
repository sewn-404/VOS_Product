#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "VGDeferredAutoEventLauncher.generated.h"

class UVGDialog;

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGDeferredAutoEventLauncher : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGDialog* m_notify_dialog;
    
public:
    UVGDeferredAutoEventLauncher();

};

