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

	void Assign Kill Champion(struct AOwnerExclusivePlayerInfo* Killer); // Function Comp_GameState_KillChampion.Comp_GameState_KillChampion_C.Assign Kill Champion // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void GetPointsForKill(struct UDamageResponse* Response, int32_t& Points); // Function Comp_GameState_KillChampion.Comp_GameState_KillChampion_C.GetPointsForKill // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void IsWarmupRound(bool& IsWarmupRound); // Function Comp_GameState_KillChampion.Comp_GameState_KillChampion_C.IsWarmupRound // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3520f50
	void GrantKillReward(struct AOwnerExclusivePlayerInfo* Killer, struct AOwnerExclusivePlayerInfo* Victim); // Function Comp_GameState_KillChampion.Comp_GameState_KillChampion_C.GrantKillReward // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void ReceiveBeginPlay(); // Function Comp_GameState_KillChampion.Comp_GameState_KillChampion_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x3520f50
	void OnPlayerKilled_Event_1(struct AOwnerExclusivePlayerInfo* Killer, struct AOwnerExclusivePlayerInfo* Victim, struct APawn* KilledPawn, struct UDamageResponse* Response, struct TArray<struct FAresAssist>& AssistList, struct UDamageType* DamageType); // Function Comp_GameState_KillChampion.Comp_GameState_KillChampion_C.OnPlayerKilled_Event_1 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void MulticastUpdateChampion(struct AShooterPlayerState* NewChampion); // Function Comp_GameState_KillChampion.Comp_GameState_KillChampion_C.MulticastUpdateChampion // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void ExecuteUbergraph_Comp_GameState_KillChampion(int32_t EntryPoint); // Function Comp_GameState_KillChampion.Comp_GameState_KillChampion_C.ExecuteUbergraph_Comp_GameState_KillChampion // (Final|UbergraphFunction|HasDefaults) // @ game+0x3520f50
	void OnChampionUpdated__DelegateSignature(struct AShooterPlayerState* NewChampion); // Function Comp_GameState_KillChampion.Comp_GameState_KillChampion_C.OnChampionUpdated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
};

