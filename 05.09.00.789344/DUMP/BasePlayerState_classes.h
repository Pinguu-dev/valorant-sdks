// BlueprintGeneratedClass BasePlayerState.BasePlayerState_C
// Size: 0xa70 (Inherited: 0x968)
struct ABasePlayerState_C : AShooterPlayerState {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x968(0x08)
	struct UComp_PlayerState_DownedState_C* Comp_PlayerState_DownedState; // 0x970(0x08)
	struct UComp_PlayerState_TimedVO_C* Comp_PlayerState_TimedVO; // 0x978(0x08)
	struct UPlayerSprayComponent_C* PlayerSprayComponent; // 0x980(0x08)
	struct UPlayerScoreCombatTrackerComponent_C* PlayerScoreCombatTrackerComponent; // 0x988(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x990(0x08)
	struct FMulticastInlineDelegate OnUltActiveChanged; // 0x998(0x10)
	bool UltActive; // 0x9a8(0x01)
	char pad_9A9[0x7]; // 0x9a9(0x07)
	struct FMulticastInlineDelegate intentionUpdated; // 0x9b0(0x10)
	struct FNewPlayerExperienceDetails NewPlayerExperienceDetails; // 0x9c0(0xa8)
	struct AActor* LastUsedSpawnPoint; // 0xa68(0x08)

	void PopulateParticipantMatchResults(struct FParticipantMatchResults& OutParticpantMatchResults); // Function BasePlayerState.BasePlayerState_C.PopulateParticipantMatchResults // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x32f73d0
	bool ShouldPopulateParticipantMatchResults(); // Function BasePlayerState.BasePlayerState_C.ShouldPopulateParticipantMatchResults // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x32f73d0
	void AuthSetUltActive(bool UltActive); // Function BasePlayerState.BasePlayerState_C.AuthSetUltActive // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void OnRep_UltActive(); // Function BasePlayerState.BasePlayerState_C.OnRep_UltActive // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void GetUltActive(bool& UltActivated); // Function BasePlayerState.BasePlayerState_C.GetUltActive // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x32f73d0
	void ReceiveBeginPlay(); // Function BasePlayerState.BasePlayerState_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x32f73d0
	void OnMakeGunRequest_Event_1(struct FAresGunRequest UpdatedGunRequest); // Function BasePlayerState.BasePlayerState_C.OnMakeGunRequest_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void OnFulfillGunRequest_Event_1(struct FAresGunRequest UpdatedGunRequest, struct AShooterPlayerState* FulfillingPlayer); // Function BasePlayerState.BasePlayerState_C.OnFulfillGunRequest_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void OnPlayerConnectionStatusChanged_2(struct AAresPlayerStateBase* Player, enum class EConnectionStatus OldStatus, enum class EConnectionStatus NewStatus); // Function BasePlayerState.BasePlayerState_C.OnPlayerConnectionStatusChanged_2 // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void ExecuteUbergraph_BasePlayerState(int32_t EntryPoint); // Function BasePlayerState.BasePlayerState_C.ExecuteUbergraph_BasePlayerState // (Final|UbergraphFunction|HasDefaults) // @ game+0x32f73d0
	void intentionUpdated__DelegateSignature(struct AShooterCharacter* Character, struct UStaticMeshComponent* intendedMeshComponent); // Function BasePlayerState.BasePlayerState_C.intentionUpdated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void OnUltActiveChanged__DelegateSignature(bool UltActive); // Function BasePlayerState.BasePlayerState_C.OnUltActiveChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
};

