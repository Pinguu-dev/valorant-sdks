// BlueprintGeneratedClass Comp_PlayerCharacter_Downed.Comp_PlayerCharacter_Downed_C
// Size: 0x1d0 (Inherited: 0xe8)
struct UComp_PlayerCharacter_Downed_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	float ; // 0xf0(0x04)
	float ; // 0xf4(0x04)
	struct FMulticastInlineDelegate OnDowned; // 0xf8(0x10)
	struct FMulticastInlineDelegate OnRecovered; // 0x108(0x10)
	struct UAresGameplayBuff* ; // 0x118(0x08)
	struct UAresGameplayBuff* ; // 0x120(0x08)
	struct FActiveGameplayEffectHandle ; // 0x128(0x08)
	struct FActiveGameplayEffectHandle ; // 0x130(0x08)
	struct FTimerHandle ; // 0x138(0x08)
	bool bIsDowned; // 0x140(0x01)
	char pad_141[0x7]; // 0x141(0x07)
	struct FMulticastInlineDelegate ; // 0x148(0x10)
	struct AGameObject_Downed_PickUpCharacterUsable_C* ; // 0x158(0x08)
	struct AGameObject_Downed_PickUpCharacterUsable_C* ; // 0x160(0x08)
	struct UDamageResponse* ; // 0x168(0x08)
	struct FMulticastInlineDelegate ; // 0x170(0x10)
	struct AAresEquippable* ; // 0x180(0x08)
	struct AAresEquippable* ; // 0x188(0x08)
	struct UAresGameplayBuff* PreventSwitchingBuff; // 0x190(0x08)
	struct FActiveGameplayEffectHandle ; // 0x198(0x08)
	bool ; // 0x1a0(0x01)
	bool ; // 0x1a1(0x01)
	char pad_1A2[0x6]; // 0x1a2(0x06)
	struct FMulticastInlineDelegate ; // 0x1a8(0x10)
	struct FMulticastInlineDelegate ; // 0x1b8(0x10)
	struct FActiveGameplayEffectHandle ; // 0x1c8(0x08)

	void (); // Function Comp_PlayerCharacter_Downed.Comp_PlayerCharacter_Downed_C. // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function Comp_PlayerCharacter_Downed.Comp_PlayerCharacter_Downed_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function Comp_PlayerCharacter_Downed.Comp_PlayerCharacter_Downed_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (float& TimeRemaining); // Function Comp_PlayerCharacter_Downed.Comp_PlayerCharacter_Downed_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x3322a60
	void (struct UComp_PlayerState_DownedState_C*& ); // Function Comp_PlayerCharacter_Downed.Comp_PlayerCharacter_Downed_C. // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x3322a60
	void (bool& ); // Function Comp_PlayerCharacter_Downed.Comp_PlayerCharacter_Downed_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322a60
	void (); // Function Comp_PlayerCharacter_Downed.Comp_PlayerCharacter_Downed_C. // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (bool& ); // Function Comp_PlayerCharacter_Downed.Comp_PlayerCharacter_Downed_C. // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x3322a60
	void (); // Function Comp_PlayerCharacter_Downed.Comp_PlayerCharacter_Downed_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function Comp_PlayerCharacter_Downed.Comp_PlayerCharacter_Downed_C. // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct AShooterPlayerState* RecoveredByPlayer); // Function Comp_PlayerCharacter_Downed.Comp_PlayerCharacter_Downed_C. // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct UDamageResponse* DamageResponse); // Function Comp_PlayerCharacter_Downed.Comp_PlayerCharacter_Downed_C. // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function Comp_PlayerCharacter_Downed.Comp_PlayerCharacter_Downed_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct AShooterPlayerState* ); // Function Comp_PlayerCharacter_Downed.Comp_PlayerCharacter_Downed_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct AActor* , struct AController* , struct UDamageType* ); // Function Comp_PlayerCharacter_Downed.Comp_PlayerCharacter_Downed_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void IsDowned(bool& bIsDowned); // Function Comp_PlayerCharacter_Downed.Comp_PlayerCharacter_Downed_C.IsDowned // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x3322a60
	void GetOwningShooterCharacter(struct AShooterCharacter*& ); // Function Comp_PlayerCharacter_Downed.Comp_PlayerCharacter_Downed_C.GetOwningShooterCharacter // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x3322a60
	void InitializeForRespawn(); // Function Comp_PlayerCharacter_Downed.Comp_PlayerCharacter_Downed_C.InitializeForRespawn // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void ReceiveBeginPlay(); // Function Comp_PlayerCharacter_Downed.Comp_PlayerCharacter_Downed_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x3322a60
	void _1(struct UActorComponent* Component, bool bReset); // Function Comp_PlayerCharacter_Downed.Comp_PlayerCharacter_Downed_C._1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void _1(struct UActorComponent* Component); // Function Comp_PlayerCharacter_Downed.Comp_PlayerCharacter_Downed_C._1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct AShooterCharacter* DeathResistCharacter, struct UDamageResponse* DamageResponse); // Function Comp_PlayerCharacter_Downed.Comp_PlayerCharacter_Downed_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function Comp_PlayerCharacter_Downed.Comp_PlayerCharacter_Downed_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct AShooterPlayerState* RecoveredByPlayer); // Function Comp_PlayerCharacter_Downed.Comp_PlayerCharacter_Downed_C. // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct AShooterCharacter* ); // Function Comp_PlayerCharacter_Downed.Comp_PlayerCharacter_Downed_C. // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function Comp_PlayerCharacter_Downed.Comp_PlayerCharacter_Downed_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function Comp_PlayerCharacter_Downed.Comp_PlayerCharacter_Downed_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void ReceiveTick(float DeltaSeconds); // Function Comp_PlayerCharacter_Downed.Comp_PlayerCharacter_Downed_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x3322a60
	void (); // Function Comp_PlayerCharacter_Downed.Comp_PlayerCharacter_Downed_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function Comp_PlayerCharacter_Downed.Comp_PlayerCharacter_Downed_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void CleanupForRespawn(); // Function Comp_PlayerCharacter_Downed.Comp_PlayerCharacter_Downed_C.CleanupForRespawn // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void AuthOnPlayerKilledAndProcessed(); // Function Comp_PlayerCharacter_Downed.Comp_PlayerCharacter_Downed_C.AuthOnPlayerKilledAndProcessed // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void OneTimeInitialization(); // Function Comp_PlayerCharacter_Downed.Comp_PlayerCharacter_Downed_C.OneTimeInitialization // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (int32_t EntryPoint); // Function Comp_PlayerCharacter_Downed.Comp_PlayerCharacter_Downed_C. // (Final|UbergraphFunction|HasDefaults) // @ game+0x3322a60
	void (); // Function Comp_PlayerCharacter_Downed.Comp_PlayerCharacter_Downed_C. // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function Comp_PlayerCharacter_Downed.Comp_PlayerCharacter_Downed_C. // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function Comp_PlayerCharacter_Downed.Comp_PlayerCharacter_Downed_C. // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function Comp_PlayerCharacter_Downed.Comp_PlayerCharacter_Downed_C. // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void OnRecovered__DelegateSignature(struct AShooterPlayerState* RecoveredByPlayer); // Function Comp_PlayerCharacter_Downed.Comp_PlayerCharacter_Downed_C.OnRecovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void OnDowned__DelegateSignature(); // Function Comp_PlayerCharacter_Downed.Comp_PlayerCharacter_Downed_C.OnDowned__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
};

