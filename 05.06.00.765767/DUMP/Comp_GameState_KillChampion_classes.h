// BlueprintGeneratedClass Comp_GameState_KillChampion.Comp_GameState_KillChampion_C
// Size: 0x170 (Inherited: 0xe8)
struct UComp_GameState_KillChampion_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	struct TArray<struct UActorComponent*> PointListeners; // 0xf0(0x10)
	struct TMap<struct AAresEquippable*, int32_t> BonusPointWeapons; // 0x100(0x50)
	int32_t PointsPerKill; // 0x150(0x04)
	char pad_154[0x4]; // 0x154(0x04)
	struct AShooterPlayerState* Champion; // 0x158(0x08)
	struct FMulticastInlineDelegate OnChampionUpdated; // 0x160(0x10)
};

