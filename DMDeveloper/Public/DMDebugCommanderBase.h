#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "DMDebugCommanderBase.generated.h"

UCLASS(Abstract, Blueprintable)
class DMDEVELOPER_API UDMDebugCommanderBase : public UObject {
    GENERATED_BODY()
public:
    UDMDebugCommanderBase();

};

