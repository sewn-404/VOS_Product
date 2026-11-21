#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=StringAssetReference -FallbackName=StringAssetReference
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=StringClassReference -FallbackName=StringClassReference
#include "EVGCharaUnique.h"
#include "VGCustomizeBaseAgent.h"
#include "VGCoordinateAgent.generated.h"

class AActor;
class AVGCharacter;
class UVGAvatarCustomizeSetting;
class UVGCoordinateWidget;
class UVGMeshMaterialOverrideManager;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGCoordinateAgent : public AVGCustomizeBaseAgent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStringClassReference m_coordinate_widget_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStringAssetReference> m_weapon_icons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStringAssetReference> m_costume_icons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStringAssetReference> m_accessory_icons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator m_weapon_default_rotator;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVGCoordinateWidget* m_coordinate_widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AVGCharacter* m_avatar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* m_weapon_actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EVGCharaUnique m_target_uid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGAvatarCustomizeSetting* m_temp_setting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGMeshMaterialOverrideManager* m_mmo;
    
public:
    AVGCoordinateAgent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Start(bool cancelable);
    
    UFUNCTION(BlueprintCallable)
    void CommitSettingData(EVGCharaUnique Type);
    
    UFUNCTION(BlueprintCallable)
    void BindWeaponActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void BindAvatar(AVGCharacter* avatar, EVGCharaUnique cid);
    
};

