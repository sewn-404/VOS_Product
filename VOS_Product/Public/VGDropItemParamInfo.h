#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Info -FallbackName=Info
#include "VGDropItemParamInfo.generated.h"

class AController;
class UVGPlayerData;

UCLASS(Blueprintable)
class AVGDropItemParamInfo : public AInfo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UVGPlayerData* m_player_data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_LgendaryAccessoryEnabledUsers, meta=(AllowPrivateAccess=true))
    TArray<FString> m_legendary_accessory_enabled_users;
    
public:
    AVGDropItemParamInfo(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void OnRep_LgendaryAccessoryEnabledUsers(TArray<FString> value);
    
private:
    UFUNCTION(BlueprintCallable)
    void onPlayerLogout(AController* Exiting);
    
};

