// WidgetBlueprintGeneratedClass AnnouncementHUDElement.AnnouncementHUDElement_C
// Size: 0x399 (Inherited: 0x2d8)
struct UAnnouncementHUDElement_C : UCoordinatedHUDElement {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d8(0x08)
	struct UCoordinatedHUDModel* HUDModel; // 0x2e0(0x08)
	struct UBaseAnnouncementWidget_C* CurrentAnnouncement; // 0x2e8(0x08)
	struct FTimerHandle CurrentIdleTimer; // 0x2f0(0x08)
	struct ABaseGameState_C* BaseGameState; // 0x2f8(0x08)
	struct TArray<struct UAnnouncement_Generic_Widget_C*> SavedAnnouncements; // 0x300(0x10)
	struct TArray<struct UBombDefusingAnnouncement_C*> SavedBombDefuseAnnouncements; // 0x310(0x10)
	struct TArray<struct UBombPlantingAnnouncement_C*> SavedBombPlantAnnouncements; // 0x320(0x10)
	struct TArray<struct UAnnouncement_ULTReady_C*> SavedUltReadyAnnouncements; // 0x330(0x10)
	struct TArray<struct UAnnouncement_BuyPhase_C*> SavedBuyPhaseAnnouncements; // 0x340(0x10)
	struct TArray<struct UAnnouncement_WaitingForPlayers_C*> SavedWaitingForPlayerAnnouncements; // 0x350(0x10)
	struct FMulticastInlineDelegate OnAnnouncementChange; // 0x360(0x10)
	struct TArray<struct UBombPickedUpAnnouncement_C*> SavedBombPickedUpAnnouncements; // 0x370(0x10)
	struct UAnnouncement_ULTReady_C* TEST ULT READY ANN; // 0x380(0x08)
	struct TArray<struct UAnnouncement_Warmup_C*> SavedWarmupAnnouncements; // 0x388(0x10)
	enum class EAresBombStates BombState; // 0x398(0x01)
};

