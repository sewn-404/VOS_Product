#include "VGPadUtil.h"

UVGPadUtil::UVGPadUtil() {
}

bool UVGPadUtil::WasInputKeyJustReleased(TEnumAsByte<EVGPadKey::Type> code, UObject* ContextObject, int32 index) {
    return false;
}

bool UVGPadUtil::WasInputKeyJustPressed(TEnumAsByte<EVGPadKey::Type> code, UObject* ContextObject, int32 index) {
    return false;
}

bool UVGPadUtil::IsInputKeyDown(TEnumAsByte<EVGPadKey::Type> code, UObject* ContextObject, int32 index) {
    return false;
}

FVector UVGPadUtil::GetInputVectorKeyState(TEnumAsByte<EVGPadKey::Type> code, UObject* ContextObject, int32 index) {
    return FVector{};
}

float UVGPadUtil::GetInputAnalogKeyState(TEnumAsByte<EVGPadKey::Type> code, UObject* ContextObject, int32 index) {
    return 0.0f;
}


