// BlueprintGeneratedClass Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C
// Size: 0x139 (Inherited: 0xe8)
struct UComp_Ability_CooldownComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	float CooldownSeconds; // 0xf0(0x04)
	bool AutoCooldown; // 0xf4(0x01)
	char pad_F5[0x3]; // 0xf5(0x03)
	struct FMulticastInlineDelegate OnCooldownStarted; // 0xf8(0x10)
	struct FTimerHandle CooldownTimer; // 0x108(0x08)
	float StartTimeStamp; // 0x110(0x04)
	bool PlaySignatureReplenishVisuals; // 0x114(0x01)
	char pad_115[0x3]; // 0x115(0x03)
	struct FMulticastInlineDelegate OnCooldownComplete; // 0x118(0x10)
	float DPT_Cooldown; // 0x128(0x04)
	enum class EGameFeatureToggleName DPT_FeatureToggle; // 0x12c(0x01)
	char pad_12D[0x3]; // 0x12d(0x03)
	int32_t MaxChargesThisRound; // 0x130(0x04)
	bool ReplenishTempCharges; // 0x134(0x01)
	bool AllowPreRoundUse; // 0x135(0x01)
	bool RechargeDisabled; // 0x136(0x01)
	bool PauseDuringPreRound; // 0x137(0x01)
	bool InstantCooldownOnRecall; // 0x138(0x01)

	void PotentiallyPerformSubsequentCooldown(); // Function Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C.PotentiallyPerformSubsequentCooldown // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void SetCooldown(float NewCooldownSeconds); // Function Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C.SetCooldown // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void AuthRestartCooldown(); // Function Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C.AuthRestartCooldown // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void ReplenishCharge(); // Function Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C.ReplenishCharge // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void AttemptToStartCooldown(); // Function Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C.AttemptToStartCooldown // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void UpdateCooldownTime(); // Function Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C.UpdateCooldownTime // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void PlayReplenishVisuals(); // Function Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C.PlayReplenishVisuals // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void GetCooldownStatus(bool& InCooldown, float& SecondsRemaining); // Function Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C.GetCooldownStatus // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x32f73d0
	void ReceiveBeginPlay(); // Function Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x32f73d0
	void OnResourceChanged_Event_1(struct UResourceComponent* ResourceComponent); // Function Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C.OnResourceChanged_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void Event Start Cooldown(bool AbilityDestroyed); // Function Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C.Event Start Cooldown // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void Event Finish Cooldown(); // Function Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C.Event Finish Cooldown // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void EventMulticastSetCooldown(float InCooldown); // Function Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C.EventMulticastSetCooldown // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void StartCooldownTimer(float Time); // Function Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C.StartCooldownTimer // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void OnRoundEnd_Event_1(int32_t RoundNumberEnded); // Function Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C.OnRoundEnd_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void EventMulticastCancelCooldown(); // Function Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C.EventMulticastCancelCooldown // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void OnGameplayActiveChanged_Event_1(bool NewGameplayActive); // Function Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C.OnGameplayActiveChanged_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void OnGameFeatureToggleChanged_NotifyBlueprint_Event_1(enum class EGameFeatureToggleName GameFeatureToggleName, bool bEnabled); // Function Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C.OnGameFeatureToggleChanged_NotifyBlueprint_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void OnRoundBegin_Event_1(int32_t RoundNumberBeginning); // Function Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C.OnRoundBegin_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void EventMulticastRestartCooldown(float Cooldown); // Function Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C.EventMulticastRestartCooldown // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void ExecuteUbergraph_Comp_Ability_CooldownComponent(int32_t EntryPoint); // Function Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C.ExecuteUbergraph_Comp_Ability_CooldownComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0x32f73d0
	void OnCooldownComplete__DelegateSignature(); // Function Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C.OnCooldownComplete__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void OnCooldownStarted__DelegateSignature(); // Function Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C.OnCooldownStarted__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
};

