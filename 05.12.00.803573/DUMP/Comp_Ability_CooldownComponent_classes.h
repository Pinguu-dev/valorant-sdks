// BlueprintGeneratedClass Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C
// Size: 0x13a (Inherited: 0xe8)
struct UComp_Ability_CooldownComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	float CooldownSeconds; // 0xf0(0x04)
	bool ; // 0xf4(0x01)
	char pad_F5[0x3]; // 0xf5(0x03)
	struct FMulticastInlineDelegate ; // 0xf8(0x10)
	struct FTimerHandle ; // 0x108(0x08)
	float StartTimeStamp; // 0x110(0x04)
	bool ; // 0x114(0x01)
	char pad_115[0x3]; // 0x115(0x03)
	struct FMulticastInlineDelegate ; // 0x118(0x10)
	float ; // 0x128(0x04)
	enum class EGameFeatureToggleName ; // 0x12c(0x01)
	char pad_12D[0x3]; // 0x12d(0x03)
	int32_t ; // 0x130(0x04)
	bool ; // 0x134(0x01)
	bool ; // 0x135(0x01)
	bool ; // 0x136(0x01)
	bool ; // 0x137(0x01)
	bool ; // 0x138(0x01)
	bool ; // 0x139(0x01)

	void (); // Function Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (float ); // Function Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C. // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (bool& , float& ); // Function Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322a60
	void ReceiveBeginPlay(); // Function Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x3322a60
	void _1(struct UResourceComponent* ResourceComponent); // Function Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C._1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (bool ); // Function Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (float ); // Function Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C. // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (float Time); // Function Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void OnRoundEnd_Event_1(int32_t RoundNumberEnded); // Function Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C.OnRoundEnd_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void EventMulticastCancelCooldown(); // Function Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C.EventMulticastCancelCooldown // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void _1(bool NewGameplayActive); // Function Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C._1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void OnGameFeatureToggleChanged_NotifyBlueprint_Event_1(enum class EGameFeatureToggleName GameFeatureToggleName, bool bEnabled); // Function Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C.OnGameFeatureToggleChanged_NotifyBlueprint_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void _1(int32_t RoundNumberBeginning); // Function Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C._1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (float ); // Function Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C. // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (int32_t EntryPoint); // Function Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C. // (Final|UbergraphFunction|HasDefaults) // @ game+0x3322a60
	void (); // Function Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C. // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C. // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
};

