#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=StringClassReference -FallbackName=StringClassReference
//CROSS-MODULE INCLUDE V2: -ModuleName=DMUtility -ObjectName=DMSettingsBase -FallbackName=DMSettingsBase
#include "DMCategorizedCommander.h"
#include "DMCommanderSettings.generated.h"

UCLASS(Blueprintable, MinimalAPI, Config=DevOnly)
class UDMCommanderSettings : public UDMSettingsBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStringClassReference> Commanders;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDMCategorizedCommander> CategorizedCommanders;
    
    UDMCommanderSettings();

};

