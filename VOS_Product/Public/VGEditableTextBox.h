#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=EditableTextBox -FallbackName=EditableTextBox
#include "VGEditableTextBox.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGEditableTextBox : public UEditableTextBox {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LettersToMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RegexString;
    
    UVGEditableTextBox();

    UFUNCTION(BlueprintCallable)
    void CommitText();
    
};

