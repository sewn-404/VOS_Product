#include "VGBattleOfflineGameMode.h"

AVGBattleOfflineGameMode::AVGBattleOfflineGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GameStateClass = AVGBattleOfflineGameMode::StaticClass();
    this->k_ms_respawn_interval = 2.00f;
    this->k_mp_respawn_interval = 5.00f;
}


