#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ParticleModuleBeamModifier -FallbackName=ParticleModuleBeamModifier
#include "VGParticleModuleBeamModifier.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UVGParticleModuleBeamModifier : public UParticleModuleBeamModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsLocalToWorld;
    
    UVGParticleModuleBeamModifier();

};

