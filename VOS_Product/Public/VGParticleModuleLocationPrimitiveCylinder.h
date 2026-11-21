#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ParticleModuleLocationPrimitiveCylinder -FallbackName=ParticleModuleLocationPrimitiveCylinder
#include "VGParticleModuleLocationPrimitiveCylinder.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UVGParticleModuleLocationPrimitiveCylinder : public UParticleModuleLocationPrimitiveCylinder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChainRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bChainRandom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bChainInverse;
    
    UVGParticleModuleLocationPrimitiveCylinder();

};

