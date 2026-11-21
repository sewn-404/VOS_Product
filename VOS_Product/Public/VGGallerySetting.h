#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "VGGallerySetting.generated.h"

class UVGGallerySetting;

UCLASS(Blueprintable, Config=Game)
class VOS_PRODUCT_API UVGGallerySetting : public UObject {
    GENERATED_BODY()
public:
    UVGGallerySetting();

    UFUNCTION(BlueprintCallable)
    void SetGallerySelectIndex(int32 Num);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableShare(bool is_enable);
    
    UFUNCTION(BlueprintCallable)
    static UVGGallerySetting* GetVGGallerySetting();
    
};

