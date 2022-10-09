// BlueprintGeneratedClass DONOTUSE_Comp_Ability_CooldownChargeComponent.DONOTUSE_Comp_Ability_CooldownChargeComponent_C
// Size: 0x196 (Inherited: 0x168)
struct UDONOTUSE_Comp_Ability_CooldownChargeComponent_C : UEquipmentChargeComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x168(0x08)
	float CooldownSeconds; // 0x170(0x04)
	bool AutoCooldown; // 0x174(0x01)
	char pad_175[0x3]; // 0x175(0x03)
	struct FMulticastInlineDelegate OnCooldownStarted; // 0x178(0x10)
	struct FTimerHandle CooldownTimer; // 0x188(0x08)
	float StartTimeStamp; // 0x190(0x04)
	bool PlaySignatureReplenishVisuals; // 0x194(0x01)
	bool GrantTemporaryCharge; // 0x195(0x01)

	void PlayReplenishVisuals(); // Function DONOTUSE_Comp_Ability_CooldownChargeComponent.DONOTUSE_Comp_Ability_CooldownChargeComponent_C.PlayReplenishVisuals // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void GetCooldownStatus(bool& InCooldown, float& SecondsRemaining); // Function DONOTUSE_Comp_Ability_CooldownChargeComponent.DONOTUSE_Comp_Ability_CooldownChargeComponent_C.GetCooldownStatus // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3511190
	void ReceiveBeginPlay(); // Function DONOTUSE_Comp_Ability_CooldownChargeComponent.DONOTUSE_Comp_Ability_CooldownChargeComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x3511190
	void OnResourceChanged_Event_1(struct UResourceComponent* ResourceComponent); // Function DONOTUSE_Comp_Ability_CooldownChargeComponent.DONOTUSE_Comp_Ability_CooldownChargeComponent_C.OnResourceChanged_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void Event Start Cooldown(); // Function DONOTUSE_Comp_Ability_CooldownChargeComponent.DONOTUSE_Comp_Ability_CooldownChargeComponent_C.Event Start Cooldown // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void Event Finish Cooldown(); // Function DONOTUSE_Comp_Ability_CooldownChargeComponent.DONOTUSE_Comp_Ability_CooldownChargeComponent_C.Event Finish Cooldown // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void EventMulticastSetCooldown(float InCooldown); // Function DONOTUSE_Comp_Ability_CooldownChargeComponent.DONOTUSE_Comp_Ability_CooldownChargeComponent_C.EventMulticastSetCooldown // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void StartCooldownTimer(float Time); // Function DONOTUSE_Comp_Ability_CooldownChargeComponent.DONOTUSE_Comp_Ability_CooldownChargeComponent_C.StartCooldownTimer // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void OnRoundEnd_Event_1(int32_t RoundNumberEnded); // Function DONOTUSE_Comp_Ability_CooldownChargeComponent.DONOTUSE_Comp_Ability_CooldownChargeComponent_C.OnRoundEnd_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void OnGameplayActiveChanged_Event_1(bool NewGameplayActive); // Function DONOTUSE_Comp_Ability_CooldownChargeComponent.DONOTUSE_Comp_Ability_CooldownChargeComponent_C.OnGameplayActiveChanged_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void EventMulticastCancelCooldown(); // Function DONOTUSE_Comp_Ability_CooldownChargeComponent.DONOTUSE_Comp_Ability_CooldownChargeComponent_C.EventMulticastCancelCooldown // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void ExecuteUbergraph_DONOTUSE_Comp_Ability_CooldownChargeComponent(int32_t EntryPoint); // Function DONOTUSE_Comp_Ability_CooldownChargeComponent.DONOTUSE_Comp_Ability_CooldownChargeComponent_C.ExecuteUbergraph_DONOTUSE_Comp_Ability_CooldownChargeComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0x3511190
	void OnCooldownStarted__DelegateSignature(); // Function DONOTUSE_Comp_Ability_CooldownChargeComponent.DONOTUSE_Comp_Ability_CooldownChargeComponent_C.OnCooldownStarted__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
};

