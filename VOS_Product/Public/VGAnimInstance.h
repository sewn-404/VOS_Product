#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstance -FallbackName=AnimInstance
#include "EVGAnimAsset.h"
#include "EVGAnimSlot.h"
#include "EVGIKLayer.h"
#include "EVGIKState.h"
#include "EVGIKType.h"
#include "VGAnimActionSlot.h"
#include "VGIKContext.h"
#include "VGLookAtContext.h"
#include "VGAnimInstance.generated.h"

class AVGCharacter;
class UAnimSequence;
class UBlendSpaceBase;
class UVGCharacterFigureSetting;

UCLASS(Blueprintable, NonTransient, Config=Game)
class VOS_PRODUCT_API UVGAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FVGAnimActionSlot> m_actions;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UVGCharacterFigureSetting* m_figure_setting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGLookAtContext m_lookat_context;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_lookat_rotate_limit;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_lookat_default_duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGIKContext> m_ik_context;
    
public:
    UVGAnimInstance();

    UFUNCTION(BlueprintCallable)
    void SetLookAtPosition(FVector pos, float Duration);
    
    UFUNCTION(BlueprintCallable)
    void SetLookAtEnabled(bool value);
    
    UFUNCTION(BlueprintCallable)
    void SetIKState(TEnumAsByte<EVGIKType::Type> Type, TEnumAsByte<EVGIKLayer::Type> Layer, TEnumAsByte<EVGIKState::Type> State, float lerpTime, bool addCount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoop(TEnumAsByte<EVGAnimSlot::Type> Slot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AVGCharacter* GetVGCharacter() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVGLookAtContext GetLookAtContext() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetIKLerp(TEnumAsByte<EVGIKType::Type> Type, bool enabledCheck) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetIdleAnimationStartPosition() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UVGCharacterFigureSetting* GetFigureSetting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBlendTime(TEnumAsByte<EVGAnimSlot::Type> Slot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBlendSpaceBase* GetBlendSpace(TEnumAsByte<EVGAnimSlot::Type> Slot, TEnumAsByte<EVGAnimAsset::Type> asset_type, float& param_x, float& param_y, float& play_rate, bool& is_loop) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBlendConfigId(TEnumAsByte<EVGAnimSlot::Type> Slot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimSequence* GetAnimSequence(TEnumAsByte<EVGAnimSlot::Type> Slot, TEnumAsByte<EVGAnimAsset::Type> asset_type, float& play_rate) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<EVGAnimAsset::Type> GetAnimAssetType(TEnumAsByte<EVGAnimSlot::Type> Slot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetAdditiveFilterBoneName() const;
    
    UFUNCTION(BlueprintCallable)
    void ApplyFigureSetting(UVGCharacterFigureSetting* setting);
    
};

