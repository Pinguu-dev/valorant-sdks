// BlueprintGeneratedClass DONOTUSE_Comp_Ability_CooldownChargeComponent.DONOTUSE_Comp_Ability_CooldownChargeComponent_C
// Size: 0x1a6 (Inherited: 0x178)
struct UDONOTUSE_Comp_Ability_CooldownChargeComponent_C : UEquipmentChargeComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x178(0x08)
	float CooldownSeconds; // 0x180(0x04)
	bool ; // 0x184(0x01)
	char pad_185[0x3]; // 0x185(0x03)
	struct FMulticastInlineDelegate ; // 0x188(0x10)
	struct FTimerHandle ; // 0x198(0x08)
	float StartTimeStamp; // 0x1a0(0x04)
	bool ; // 0x1a4(0x01)
	bool ; // 0x1a5(0x01)

	void (); // Function DONOTUSE_Comp_Ability_CooldownChargeComponent.DONOTUSE_Comp_Ability_CooldownChargeComponent_C. // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (bool& , float& ); // Function DONOTUSE_Comp_Ability_CooldownChargeComponent.DONOTUSE_Comp_Ability_CooldownChargeComponent_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322a90
	void ReceiveBeginPlay(); // Function DONOTUSE_Comp_Ability_CooldownChargeComponent.DONOTUSE_Comp_Ability_CooldownChargeComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x3322a90
	void _1(struct UResourceComponent* ResourceComponent); // Function DONOTUSE_Comp_Ability_CooldownChargeComponent.DONOTUSE_Comp_Ability_CooldownChargeComponent_C._1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (); // Function DONOTUSE_Comp_Ability_CooldownChargeComponent.DONOTUSE_Comp_Ability_CooldownChargeComponent_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (); // Function DONOTUSE_Comp_Ability_CooldownChargeComponent.DONOTUSE_Comp_Ability_CooldownChargeComponent_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (float ); // Function DONOTUSE_Comp_Ability_CooldownChargeComponent.DONOTUSE_Comp_Ability_CooldownChargeComponent_C. // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (float Time); // Function DONOTUSE_Comp_Ability_CooldownChargeComponent.DONOTUSE_Comp_Ability_CooldownChargeComponent_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void OnRoundEnd_Event_1(int32_t RoundNumberEnded); // Function DONOTUSE_Comp_Ability_CooldownChargeComponent.DONOTUSE_Comp_Ability_CooldownChargeComponent_C.OnRoundEnd_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void _1(bool NewGameplayActive); // Function DONOTUSE_Comp_Ability_CooldownChargeComponent.DONOTUSE_Comp_Ability_CooldownChargeComponent_C._1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void EventMulticastCancelCooldown(); // Function DONOTUSE_Comp_Ability_CooldownChargeComponent.DONOTUSE_Comp_Ability_CooldownChargeComponent_C.EventMulticastCancelCooldown // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (int32_t EntryPoint); // Function DONOTUSE_Comp_Ability_CooldownChargeComponent.DONOTUSE_Comp_Ability_CooldownChargeComponent_C. // (Final|UbergraphFunction|HasDefaults) // @ game+0x3322a90
	void (); // Function DONOTUSE_Comp_Ability_CooldownChargeComponent.DONOTUSE_Comp_Ability_CooldownChargeComponent_C. // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
};

