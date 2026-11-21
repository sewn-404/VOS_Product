#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateWidgetStyle -FallbackName=SlateWidgetStyle
#include "VGWidgetSoundRecord.h"
#include "VGUISoundStyle.generated.h"

USTRUCT(BlueprintType)
struct FVGUISoundStyle : public FSlateWidgetStyle {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGWidgetSoundRecord default_sounds[106];
    
    VOS_PRODUCT_API FVGUISoundStyle();
};

