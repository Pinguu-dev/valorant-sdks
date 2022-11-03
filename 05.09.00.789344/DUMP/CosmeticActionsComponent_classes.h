// BlueprintGeneratedClass CosmeticActionsComponent.CosmeticActionsComponent_C
// Size: 0x108 (Inherited: 0xe8)
struct UCosmeticActionsComponent_C : UInputBindingComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	float SprayCooldown; // 0xf0(0x04)
	bool SprayAvailable; // 0xf4(0x01)
	char pad_F5[0x3]; // 0xf5(0x03)
	float CosmeticCooldownTimestamp; // 0xf8(0x04)
	float CosmeticCooldown; // 0xfc(0x04)
	struct FActiveGameplayEffectHandle Third Person Buff; // 0x100(0x08)

	void StartCosmeticCooldown(); // Function CosmeticActionsComponent.CosmeticActionsComponent_C.StartCosmeticCooldown // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void CosmeticOnCooldown(bool& OnCooldown); // Function CosmeticActionsComponent.CosmeticActionsComponent_C.CosmeticOnCooldown // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void Check Fidget(enum class EAresItemSlot InventorySlot, bool& ShouldFidget); // Function CosmeticActionsComponent.CosmeticActionsComponent_C.Check Fidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void InpActEvt_Inspect_K2Node_InputActionEvent_1(struct FKey Key); // Function CosmeticActionsComponent.CosmeticActionsComponent_C.InpActEvt_Inspect_K2Node_InputActionEvent_1 // (BlueprintEvent) // @ game+0x32f73d0
	void LocalPlayInspect(); // Function CosmeticActionsComponent.CosmeticActionsComponent_C.LocalPlayInspect // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void ServerExecuteEmote(struct FEEmoteSetup Emote); // Function CosmeticActionsComponent.CosmeticActionsComponent_C.ServerExecuteEmote // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void Server Play Inspect(); // Function CosmeticActionsComponent.CosmeticActionsComponent_C.Server Play Inspect // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void OnAuthGotKill_Event_1(struct AShooterCharacter* KillerCharacter, struct AShooterCharacter* VictimCharacter, struct UDamageResponse* KillDamageResponse); // Function CosmeticActionsComponent.CosmeticActionsComponent_C.OnAuthGotKill_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void ServerTriggerSpray(); // Function CosmeticActionsComponent.CosmeticActionsComponent_C.ServerTriggerSpray // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void ReceiveBeginPlay(); // Function CosmeticActionsComponent.CosmeticActionsComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x32f73d0
	void ExecuteUbergraph_CosmeticActionsComponent(int32_t EntryPoint); // Function CosmeticActionsComponent.CosmeticActionsComponent_C.ExecuteUbergraph_CosmeticActionsComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0x32f73d0
};

