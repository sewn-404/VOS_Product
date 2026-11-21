#include "VGMarqueePanel.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=EWidgetClipping -FallbackName=EWidgetClipping

UVGMarqueePanel::UVGMarqueePanel() {
    this->Clipping = EWidgetClipping::ClipToBounds;
    this->m_enable_scroll = false;
}

void UVGMarqueePanel::ResetScroll() {
}


