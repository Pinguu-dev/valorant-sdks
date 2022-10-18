// BlueprintGeneratedClass Comp_Ability_ResourceRefreshOnKill.Comp_Ability_ResourceRefreshOnKill_C
// Size: 0xfc (Inherited: 0xe8)
struct UComp_Ability_ResourceRefreshOnKill_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	int32_t L CurrentKillCount; // 0xf0(0x04)
	int32_t KillsToRefresh; // 0xf4(0x04)
	int32_t Charges Refreshed per Kill; // 0xf8(0x04)

	void OnRep_L CurrentKillCount(); // Function Comp_Ability_ResourceRefreshOnKill.Comp_Ability_ResourceRefreshOnKill_C.OnRep_L CurrentKillCount // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void Get Current Kill Count(int32_t& L CurrentKillCount); // Function Comp_Ability_ResourceRefreshOnKill.Comp_Ability_ResourceRefreshOnKill_C.Get Current Kill Count // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3520f50
	void ReceiveBeginPlay(); // Function Comp_Ability_ResourceRefreshOnKill.Comp_Ability_ResourceRefreshOnKill_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x3520f50
	void OnAuthGotKill_Event_1(struct AShooterCharacter* KillerCharacter, struct AShooterCharacter* VictimCharacter, struct UDamageResponse* KillDamageResponse); // Function Comp_Ability_ResourceRefreshOnKill.Comp_Ability_ResourceRefreshOnKill_C.OnAuthGotKill_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void EquippableOnSetOwner_Event_1(struct AAresEquippable* Equippable, struct AActor* Owner); // Function Comp_Ability_ResourceRefreshOnKill.Comp_Ability_ResourceRefreshOnKill_C.EquippableOnSetOwner_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void Replenish Charge(); // Function Comp_Ability_ResourceRefreshOnKill.Comp_Ability_ResourceRefreshOnKill_C.Replenish Charge // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void OnRoundEnd_Event_1(int32_t RoundNumberEnded); // Function Comp_Ability_ResourceRefreshOnKill.Comp_Ability_ResourceRefreshOnKill_C.OnRoundEnd_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void ExecuteUbergraph_Comp_Ability_ResourceRefreshOnKill(int32_t EntryPoint); // Function Comp_Ability_ResourceRefreshOnKill.Comp_Ability_ResourceRefreshOnKill_C.ExecuteUbergraph_Comp_Ability_ResourceRefreshOnKill // (Final|UbergraphFunction) // @ game+0x3520f50
};

