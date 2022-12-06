// BlueprintGeneratedClass BasePlayerState.BasePlayerState_C
// Size: 0xa78 (Inherited: 0x970)
struct ABasePlayerState_C : AShooterPlayerState {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x970(0x08)
	struct UComp_PlayerState_DownedState_C* Comp_PlayerState_DownedState; // 0x978(0x08)
	struct UComp_PlayerState_TimedVO_C* Comp_PlayerState_TimedVO; // 0x980(0x08)
	struct UPlayerSprayComponent_C* PlayerSprayComponent; // 0x988(0x08)
	struct UPlayerScoreCombatTrackerComponent_C* PlayerScoreCombatTrackerComponent; // 0x990(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x998(0x08)
	struct FMulticastInlineDelegate ; // 0x9a0(0x10)
	bool ; // 0x9b0(0x01)
	char pad_9B1[0x7]; // 0x9b1(0x07)
	struct FMulticastInlineDelegate ; // 0x9b8(0x10)
	struct FNewPlayerExperienceDetails NewPlayerExperienceDetails; // 0x9c8(0xa8)
	struct AActor* ; // 0xa70(0x08)

	void PopulateParticipantMatchResults(struct FParticipantMatchResults& OutParticpantMatchResults); // Function BasePlayerState.BasePlayerState_C.PopulateParticipantMatchResults // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x3322a60
	bool ShouldPopulateParticipantMatchResults(); // Function BasePlayerState.BasePlayerState_C.ShouldPopulateParticipantMatchResults // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x3322a60
	void (bool ); // Function BasePlayerState.BasePlayerState_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function BasePlayerState.BasePlayerState_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (bool& ); // Function BasePlayerState.BasePlayerState_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322a60
	void ReceiveBeginPlay(); // Function BasePlayerState.BasePlayerState_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x3322a60
	void _1(struct FAresGunRequest UpdatedGunRequest); // Function BasePlayerState.BasePlayerState_C._1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void _1(struct FAresGunRequest UpdatedGunRequest, struct AShooterPlayerState* FulfillingPlayer); // Function BasePlayerState.BasePlayerState_C._1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void OnPlayerConnectionStatusChanged_2(struct AAresPlayerStateBase* Player, enum class EConnectionStatus OldStatus, enum class EConnectionStatus NewStatus); // Function BasePlayerState.BasePlayerState_C.OnPlayerConnectionStatusChanged_2 // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (int32_t EntryPoint); // Function BasePlayerState.BasePlayerState_C. // (Final|UbergraphFunction|HasDefaults) // @ game+0x3322a60
	void (struct AShooterCharacter* Character, struct UStaticMeshComponent* ); // Function BasePlayerState.BasePlayerState_C. // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (bool ); // Function BasePlayerState.BasePlayerState_C. // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
};

