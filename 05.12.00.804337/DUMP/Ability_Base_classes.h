// BlueprintGeneratedClass Ability_Base.Ability_Base_C
// Size: 0xff1 (Inherited: 0xef0)
struct AAbility_Base_C : AAresEquippable {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xef0(0x08)
	struct UAbilityTrackingComponent* AbilityTrackingComponent; // 0xef8(0x08)
	struct URespondToEventStateComponent* ; // 0xf00(0x08)
	struct UCharacterAbilityStatisticsComponent_C* CharacterAbilityStatisticsComponent; // 0xf08(0x08)
	struct FEmbeddedEffectInfo ; // 0xf10(0x30)
	struct FEffectID FXC_Equipped_ID; // 0xf40(0x20)
	struct UCharacterAbilityWidget* ; // 0xf60(0x08)
	struct UCharacterAbilityWidget* AbilityHUDWidget; // 0xf68(0x08)
	struct FMulticastInlineDelegate ; // 0xf70(0x10)
	bool ; // 0xf80(0x01)
	char pad_F81[0x7]; // 0xf81(0x07)
	struct FMulticastInlineDelegate ; // 0xf88(0x10)
	struct FMulticastInlineDelegate ; // 0xf98(0x10)
	bool ; // 0xfa8(0x01)
	char pad_FA9[0x3]; // 0xfa9(0x03)
	int32_t ; // 0xfac(0x04)
	bool ; // 0xfb0(0x01)
	char pad_FB1[0x7]; // 0xfb1(0x07)
	struct FMulticastInlineDelegate ; // 0xfb8(0x10)
	bool ; // 0xfc8(0x01)
	char pad_FC9[0x7]; // 0xfc9(0x07)
	struct FMulticastInlineDelegate ; // 0xfd0(0x10)
	struct FMulticastInlineDelegate ; // 0xfe0(0x10)
	bool ; // 0xff0(0x01)

	void (bool& ); // Function Ability_Base.Ability_Base_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322a90
	void (); // Function Ability_Base.Ability_Base_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (bool& Result); // Function Ability_Base.Ability_Base_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322a90
	void (bool ); // Function Ability_Base.Ability_Base_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct TSoftClassPtr<UObject> ); // Function Ability_Base.Ability_Base_C. // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (enum class EAresEquippableInput Button, enum class EAresEquippableInputAction InputType); // Function Ability_Base.Ability_Base_C. // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (enum class EEquippableRejectInputReason Selection); // Function Ability_Base.Ability_Base_C. // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (bool Enable); // Function Ability_Base.Ability_Base_C. // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (); // Function Ability_Base.Ability_Base_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (bool& ); // Function Ability_Base.Ability_Base_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (); // Function Ability_Base.Ability_Base_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct UCharacterAbilityWidget*& AbilityHUDWidget); // Function Ability_Base.Ability_Base_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322a90
	void (struct UCharacterAbilityWidget* AbilityHUDWidget); // Function Ability_Base.Ability_Base_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void ClientItemEquipped(); // Function Ability_Base.Ability_Base_C.ClientItemEquipped // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3322a90
	void ClientItemUnEquipped(); // Function Ability_Base.Ability_Base_C.ClientItemUnEquipped // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3322a90
	void ReceiveBeginPlay(); // Function Ability_Base.Ability_Base_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x3322a90
	void _1(struct UResourceComponent* ResourceComponent); // Function Ability_Base.Ability_Base_C._1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void _1(); // Function Ability_Base.Ability_Base_C._1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void _1(int32_t NewValue, bool IsUltNewlyReady); // Function Ability_Base.Ability_Base_C._1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void _1(struct AAresItem* item, struct AActor* PrevOwner, struct AActor* NewOwner); // Function Ability_Base.Ability_Base_C._1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void _1(struct AAresEquippable* Equippable, enum class EEquippableRejectInputReason Reason); // Function Ability_Base.Ability_Base_C._1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void _1(); // Function Ability_Base.Ability_Base_C._1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void AuthOnEquipped(); // Function Ability_Base.Ability_Base_C.AuthOnEquipped // (BlueprintAuthorityOnly|Event|Protected|BlueprintEvent) // @ game+0x3322a90
	void AuthOnUnEquipped(); // Function Ability_Base.Ability_Base_C.AuthOnUnEquipped // (BlueprintAuthorityOnly|Event|Protected|BlueprintEvent) // @ game+0x3322a90
	void _1(enum class EGameFeatureToggleName GameFeatureToggleName, bool bEnabled); // Function Ability_Base.Ability_Base_C._1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (); // Function Ability_Base.Ability_Base_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void _1(struct UScriptStateComponent* State, enum class EAresEquippableInput Input, enum class EAresEquippableInputAction InputAction, float FrameDeltaTimeSeconds); // Function Ability_Base.Ability_Base_C._1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (); // Function Ability_Base.Ability_Base_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void _1(struct AAresEquippable* Equippable); // Function Ability_Base.Ability_Base_C._1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (); // Function Ability_Base.Ability_Base_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (int32_t EntryPoint); // Function Ability_Base.Ability_Base_C. // (Final|UbergraphFunction|HasDefaults) // @ game+0x3322a90
	void (); // Function Ability_Base.Ability_Base_C. // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct FStruct_Ability_Timer_Info ); // Function Ability_Base.Ability_Base_C. // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (); // Function Ability_Base.Ability_Base_C. // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (); // Function Ability_Base.Ability_Base_C. // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (); // Function Ability_Base.Ability_Base_C. // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (); // Function Ability_Base.Ability_Base_C. // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
};

