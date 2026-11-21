#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateWidgetStyleContainerBase -FallbackName=SlateWidgetStyleContainerBase
#include "VGInlineTextImageStyle.h"
#include "VGInlineTextImageWidgetStyle.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UVGInlineTextImageWidgetStyle : public USlateWidgetStyleContainerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGInlineTextImageStyle InlineTextImageStyle;
    
    UVGInlineTextImageWidgetStyle();

};

