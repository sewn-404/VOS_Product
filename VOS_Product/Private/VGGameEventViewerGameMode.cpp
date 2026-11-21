#include "VGGameEventViewerGameMode.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Pawn -FallbackName=Pawn
#include "VGGameEventViewerGameState.h"
#include "VGHUD.h"

AVGGameEventViewerGameMode::AVGGameEventViewerGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GameStateClass = AVGGameEventViewerGameState::StaticClass();
    this->HUDClass = AVGHUD::StaticClass();
    this->DefaultPawnClass = APawn::StaticClass();
}


