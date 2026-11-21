#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=CanvasPanel -FallbackName=CanvasPanel
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=Widget -FallbackName=Widget
#include "VGMarqueePanel.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGMarqueePanel : public UCanvasPanel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_enable_scroll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidget::FGetBool m_enable_scrollDelegate;
    
    UVGMarqueePanel();

    UFUNCTION(BlueprintCallable)
    void ResetScroll();
    
};

