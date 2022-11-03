// BlueprintGeneratedClass Comp_PlayerCharacter_Downed.Comp_PlayerCharacter_Downed_C
// Size: 0x1d0 (Inherited: 0xe8)
struct UComp_PlayerCharacter_Downed_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	float DownedTimeLimit; // 0xf0(0x04)
	float DefaultRecoveredHealth; // 0xf4(0x04)
	struct FMulticastInlineDelegate OnDowned; // 0xf8(0x10)
	struct FMulticastInlineDelegate OnRecovered; // 0x108(0x10)
	struct UAresGameplayBuff* DownedDebuff; // 0x118(0x08)
	struct UAresGameplayBuff* DeathResistBuff; // 0x120(0x08)
	struct FActiveGameplayEffectHandle DeathResistHandle; // 0x128(0x08)
	struct FActiveGameplayEffectHandle DownedDebuffHandle; // 0x130(0x08)
	struct FTimerHandle DownedTimerHandle; // 0x138(0x08)
	bool bIsDowned; // 0x140(0x01)
	char pad_141[0x7]; // 0x141(0x07)
	struct FMulticastInlineDelegate OnDownedTimedOut; // 0x148(0x10)
	struct AGameObject_Downed_PickUpCharacterUsable_C* PickUpUsable; // 0x158(0x08)
	struct AGameObject_Downed_PickUpCharacterUsable_C* SpawnedPickUpUsable; // 0x160(0x08)
	struct UDamageResponse* DowningDamageResponse; // 0x168(0x08)
	struct FMulticastInlineDelegate OnPreDowned; // 0x170(0x10)
	struct AAresEquippable* DownedEquippable; // 0x180(0x08)
	struct AAresEquippable* DownedEquippableObject; // 0x188(0x08)
	struct UAresGameplayBuff* PreventSwitchingBuff; // 0x190(0x08)
	struct FActiveGameplayEffectHandle PreventSwitchingHandle; // 0x198(0x08)
	bool bWasDown; // 0x1a0(0x01)
	bool bShouldDie; // 0x1a1(0x01)
	char pad_1A2[0x6]; // 0x1a2(0x06)
	struct FMulticastInlineDelegate OnTimerPaused; // 0x1a8(0x10)
	struct FMulticastInlineDelegate OnTimerUnpaused; // 0x1b8(0x10)
	struct FActiveGameplayEffectHandle PreventFiringHandle; // 0x1c8(0x08)

	void ResetDowned(); // Function Comp_PlayerCharacter_Downed.Comp_PlayerCharacter_Downed_C.ResetDowned // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void AuthUnpauseDownedTimer(); // Function Comp_PlayerCharacter_Downed.Comp_PlayerCharacter_Downed_C.AuthUnpauseDownedTimer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void AuthPauseDownedTimer(); // Function Comp_PlayerCharacter_Downed.Comp_PlayerCharacter_Downed_C.AuthPauseDownedTimer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void GetRemainingDownedTime(float& TimeRemaining); // Function Comp_PlayerCharacter_Downed.Comp_PlayerCharacter_Downed_C.GetRemainingDownedTime // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x32f73d0
	void GetDownedStateComponent(struct UComp_PlayerState_DownedState_C*& DownedTimerComponent); // Function Comp_PlayerCharacter_Downed.Comp_PlayerCharacter_Downed_C.GetDownedStateComponent // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x32f73d0
	void WasDowned(bool& bWasDowned); // Function Comp_PlayerCharacter_Downed.Comp_PlayerCharacter_Downed_C.WasDowned // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x32f73d0
	void KillIfNoAlliesLeft(); // Function Comp_PlayerCharacter_Downed.Comp_PlayerCharacter_Downed_C.KillIfNoAlliesLeft // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void HasAliveAllies(bool& bHasAliveAllies); // Function Comp_PlayerCharacter_Downed.Comp_PlayerCharacter_Downed_C.HasAliveAllies // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x32f73d0
	void DeactivateDownable(); // Function Comp_PlayerCharacter_Downed.Comp_PlayerCharacter_Downed_C.DeactivateDownable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void ActivateDownable(); // Function Comp_PlayerCharacter_Downed.Comp_PlayerCharacter_Downed_C.ActivateDownable // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void AuthGrantRecoveredHealth(struct AShooterPlayerState* RecoveredByPlayer); // Function Comp_PlayerCharacter_Downed.Comp_PlayerCharacter_Downed_C.AuthGrantRecoveredHealth // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void AuthDownPlayer(struct UDamageResponse* DamageResponse); // Function Comp_PlayerCharacter_Downed.Comp_PlayerCharacter_Downed_C.AuthDownPlayer // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void AuthKillSelfWhileDowned(); // Function Comp_PlayerCharacter_Downed.Comp_PlayerCharacter_Downed_C.AuthKillSelfWhileDowned // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void AuthRecoverWhileDowned(struct AShooterPlayerState* Recovered By Player); // Function Comp_PlayerCharacter_Downed.Comp_PlayerCharacter_Downed_C.AuthRecoverWhileDowned // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void Auth Kill While Downed(struct AActor* Damage Causer, struct AController* Killing Player, struct UDamageType* Damage Type); // Function Comp_PlayerCharacter_Downed.Comp_PlayerCharacter_Downed_C.Auth Kill While Downed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void IsDowned(bool& bIsDowned); // Function Comp_PlayerCharacter_Downed.Comp_PlayerCharacter_Downed_C.IsDowned // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x32f73d0
	void GetOwningShooterCharacter(struct AShooterCharacter*& Shooter Character); // Function Comp_PlayerCharacter_Downed.Comp_PlayerCharacter_Downed_C.GetOwningShooterCharacter // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x32f73d0
	void InitializeForRespawn(); // Function Comp_PlayerCharacter_Downed.Comp_PlayerCharacter_Downed_C.InitializeForRespawn // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void OneTimeInitialization(); // Function Comp_PlayerCharacter_Downed.Comp_PlayerCharacter_Downed_C.OneTimeInitialization // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void ReceiveBeginPlay(); // Function Comp_PlayerCharacter_Downed.Comp_PlayerCharacter_Downed_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x32f73d0
	void OnComponentActivated_Event_1(struct UActorComponent* Component, bool bReset); // Function Comp_PlayerCharacter_Downed.Comp_PlayerCharacter_Downed_C.OnComponentActivated_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void OnComponentDeactivated_Event_1(struct UActorComponent* Component); // Function Comp_PlayerCharacter_Downed.Comp_PlayerCharacter_Downed_C.OnComponentDeactivated_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void AuthOnResistDeath(struct AShooterCharacter* DeathResistCharacter, struct UDamageResponse* DamageResponse); // Function Comp_PlayerCharacter_Downed.Comp_PlayerCharacter_Downed_C.AuthOnResistDeath // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void OnDownedTimerExpired(); // Function Comp_PlayerCharacter_Downed.Comp_PlayerCharacter_Downed_C.OnDownedTimerExpired // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void MulticastRecoverWhileDowned(struct AShooterPlayerState* RecoveredByPlayer); // Function Comp_PlayerCharacter_Downed.Comp_PlayerCharacter_Downed_C.MulticastRecoverWhileDowned // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void MulticastOnResistDeath(struct AShooterCharacter* Death Resist Character); // Function Comp_PlayerCharacter_Downed.Comp_PlayerCharacter_Downed_C.MulticastOnResistDeath // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void UnbindKillIfNoAlliesLeftEvent(); // Function Comp_PlayerCharacter_Downed.Comp_PlayerCharacter_Downed_C.UnbindKillIfNoAlliesLeftEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void BindKillIfNoAlliesLeftEvent(); // Function Comp_PlayerCharacter_Downed.Comp_PlayerCharacter_Downed_C.BindKillIfNoAlliesLeftEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void ReceiveTick(float DeltaSeconds); // Function Comp_PlayerCharacter_Downed.Comp_PlayerCharacter_Downed_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x32f73d0
	void OnTimerPausedEvent(); // Function Comp_PlayerCharacter_Downed.Comp_PlayerCharacter_Downed_C.OnTimerPausedEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void OnTimerUnpausedEvent(); // Function Comp_PlayerCharacter_Downed.Comp_PlayerCharacter_Downed_C.OnTimerUnpausedEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void CleanupForRespawn(); // Function Comp_PlayerCharacter_Downed.Comp_PlayerCharacter_Downed_C.CleanupForRespawn // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void AuthOnPlayerKilledAndProcessed(); // Function Comp_PlayerCharacter_Downed.Comp_PlayerCharacter_Downed_C.AuthOnPlayerKilledAndProcessed // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void ExecuteUbergraph_Comp_PlayerCharacter_Downed(int32_t EntryPoint); // Function Comp_PlayerCharacter_Downed.Comp_PlayerCharacter_Downed_C.ExecuteUbergraph_Comp_PlayerCharacter_Downed // (Final|UbergraphFunction|HasDefaults) // @ game+0x32f73d0
	void OnTimerUnpaused__DelegateSignature(); // Function Comp_PlayerCharacter_Downed.Comp_PlayerCharacter_Downed_C.OnTimerUnpaused__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void OnTimerPaused__DelegateSignature(); // Function Comp_PlayerCharacter_Downed.Comp_PlayerCharacter_Downed_C.OnTimerPaused__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void OnPreDowned__DelegateSignature(); // Function Comp_PlayerCharacter_Downed.Comp_PlayerCharacter_Downed_C.OnPreDowned__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void OnDownedTimedOut__DelegateSignature(); // Function Comp_PlayerCharacter_Downed.Comp_PlayerCharacter_Downed_C.OnDownedTimedOut__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void OnRecovered__DelegateSignature(struct AShooterPlayerState* RecoveredByPlayer); // Function Comp_PlayerCharacter_Downed.Comp_PlayerCharacter_Downed_C.OnRecovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void OnDowned__DelegateSignature(); // Function Comp_PlayerCharacter_Downed.Comp_PlayerCharacter_Downed_C.OnDowned__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
};

