// BlueprintGeneratedClass Comp_AbilityStatisticsReplicator.Comp_AbilityStatisticsReplicator_C
// Size: 0x101 (Inherited: 0xe8)
struct UComp_AbilityStatisticsReplicator_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	struct FMulticastInlineDelegate OnLocalAbilityCastsUpdated; // 0xf0(0x10)
	bool IsEnabled; // 0x100(0x01)

	void SetIsEnabled(bool IsEnabled); // Function Comp_AbilityStatisticsReplicator.Comp_AbilityStatisticsReplicator_C.SetIsEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void GatherAllCastsForThisRound(struct TArray<struct FCharacterAbilityCastInfo>& CastsThisRound); // Function Comp_AbilityStatisticsReplicator.Comp_AbilityStatisticsReplicator_C.GatherAllCastsForThisRound // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void LocalReceiveRoundCasts(int32_t RoundNumber, struct TArray<struct FCharacterAbilityCastInfo>& AbilityCastsThisRound); // Function Comp_AbilityStatisticsReplicator.Comp_AbilityStatisticsReplicator_C.LocalReceiveRoundCasts // (Net|NetReliableHasOutParms|NetClient|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void OnRoundEnd_Event_1(int32_t RoundNumberEnding); // Function Comp_AbilityStatisticsReplicator.Comp_AbilityStatisticsReplicator_C.OnRoundEnd_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void AuthInitReplication(); // Function Comp_AbilityStatisticsReplicator.Comp_AbilityStatisticsReplicator_C.AuthInitReplication // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void AuthReplicateRoundCasts(int32_t RoundNumber); // Function Comp_AbilityStatisticsReplicator.Comp_AbilityStatisticsReplicator_C.AuthReplicateRoundCasts // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void ReceiveBeginPlay(); // Function Comp_AbilityStatisticsReplicator.Comp_AbilityStatisticsReplicator_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x32f73d0
	void OnCharacterDeath_Event_1(struct AShooterCharacter* Character, struct UDamageResponse* Response); // Function Comp_AbilityStatisticsReplicator.Comp_AbilityStatisticsReplicator_C.OnCharacterDeath_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void ExecuteUbergraph_Comp_AbilityStatisticsReplicator(int32_t EntryPoint); // Function Comp_AbilityStatisticsReplicator.Comp_AbilityStatisticsReplicator_C.ExecuteUbergraph_Comp_AbilityStatisticsReplicator // (Final|UbergraphFunction|HasDefaults) // @ game+0x32f73d0
	void OnLocalAbilityCastsUpdated__DelegateSignature(int32_t RoundNumber, struct TArray<struct FCharacterAbilityCastInfo>& AbilityCastsThisRound); // Function Comp_AbilityStatisticsReplicator.Comp_AbilityStatisticsReplicator_C.OnLocalAbilityCastsUpdated__DelegateSignature // (Public|Delegate|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
};

