// BlueprintGeneratedClass BasePlayerState.BasePlayerState_C
// Size: 0xa58 (Inherited: 0x950)
struct ABasePlayerState_C : AShooterPlayerState {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x950(0x08)
	struct UComp_PlayerState_DownedState_C* Comp_PlayerState_DownedState; // 0x958(0x08)
	struct UComp_PlayerState_TimedVO_C* Comp_PlayerState_TimedVO; // 0x960(0x08)
	struct UPlayerSprayComponent_C* PlayerSprayComponent; // 0x968(0x08)
	struct UPlayerScoreCombatTrackerComponent_C* PlayerScoreCombatTrackerComponent; // 0x970(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x978(0x08)
	struct FMulticastInlineDelegate OnUltActiveChanged; // 0x980(0x10)
	bool UltActive; // 0x990(0x01)
	char pad_991[0x7]; // 0x991(0x07)
	struct FMulticastInlineDelegate intentionUpdated; // 0x998(0x10)
	struct FNewPlayerExperienceDetails NewPlayerExperienceDetails; // 0x9a8(0xa8)
	struct AActor* LastUsedSpawnPoint; // 0xa50(0x08)
};

