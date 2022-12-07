// BlueprintGeneratedClass CosmeticActionsComponent.CosmeticActionsComponent_C
// Size: 0x108 (Inherited: 0xe8)
struct UCosmeticActionsComponent_C : UInputBindingComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	float ; // 0xf0(0x04)
	bool ; // 0xf4(0x01)
	char pad_F5[0x3]; // 0xf5(0x03)
	float ; // 0xf8(0x04)
	float ; // 0xfc(0x04)
	struct FActiveGameplayEffectHandle ; // 0x100(0x08)

	void (); // Function CosmeticActionsComponent.CosmeticActionsComponent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (bool& ); // Function CosmeticActionsComponent.CosmeticActionsComponent_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (enum class EAresItemSlot , bool& ); // Function CosmeticActionsComponent.CosmeticActionsComponent_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void _1(struct FKey Key); // Function CosmeticActionsComponent.CosmeticActionsComponent_C._1 // (BlueprintEvent) // @ game+0x3322a90
	void (); // Function CosmeticActionsComponent.CosmeticActionsComponent_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct FEEmoteSetup Emote); // Function CosmeticActionsComponent.CosmeticActionsComponent_C. // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (); // Function CosmeticActionsComponent.CosmeticActionsComponent_C. // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void _1(struct AShooterCharacter* KillerCharacter, struct AShooterCharacter* VictimCharacter, struct UDamageResponse* KillDamageResponse); // Function CosmeticActionsComponent.CosmeticActionsComponent_C._1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (); // Function CosmeticActionsComponent.CosmeticActionsComponent_C. // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void ReceiveBeginPlay(); // Function CosmeticActionsComponent.CosmeticActionsComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x3322a90
	void (); // Function CosmeticActionsComponent.CosmeticActionsComponent_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (int32_t EntryPoint); // Function CosmeticActionsComponent.CosmeticActionsComponent_C. // (Final|UbergraphFunction|HasDefaults) // @ game+0x3322a90
};

