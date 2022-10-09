// WidgetBlueprintGeneratedClass Widget_Ability_Element_Signature_Cooldown.Widget_Ability_Element_Signature_Cooldown_C
// Size: 0x3e8 (Inherited: 0x360)
struct UWidget_Ability_Element_Signature_Cooldown_C : UWidget_Ability_Parent_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x360(0x08)
	struct UWidgetAnimation* SignatureCharge; // 0x368(0x08)
	struct UWidgetAnimation* Equipped; // 0x370(0x08)
	struct UWidgetAnimation* Ready; // 0x378(0x08)
	struct UWidgetAnimation* Normal; // 0x380(0x08)
	struct UTextBlock* CooldownSeconds; // 0x388(0x08)
	struct FLinearColor EquippedTextColor; // 0x390(0x10)
	struct FLinearColor UnEquippedTextColor; // 0x3a0(0x10)
	struct FLinearColor disabledIconColor; // 0x3b0(0x10)
	struct UImage* BackgroundImage_1; // 0x3c0(0x08)
	float CooldownUpdateRate; // 0x3c8(0x04)
	char pad_3CC[0x4]; // 0x3cc(0x04)
	struct FTimerHandle CooldownUpdateHandle; // 0x3d0(0x08)
	struct UDONOTUSE_Comp_Ability_CooldownChargeComponent_C* CooldownResourceComponent; // 0x3d8(0x08)
	struct UComp_Ability_CooldownComponent_C* CooldownComponent; // 0x3e0(0x08)

	void OnStartWidget(); // Function Widget_Ability_Element_Signature_Cooldown.Widget_Ability_Element_Signature_Cooldown_C.OnStartWidget // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x3511190
	void OnCooldownStarted_Event_1(); // Function Widget_Ability_Element_Signature_Cooldown.Widget_Ability_Element_Signature_Cooldown_C.OnCooldownStarted_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void Update Cooldown(); // Function Widget_Ability_Element_Signature_Cooldown.Widget_Ability_Element_Signature_Cooldown_C.Update Cooldown // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void ExecuteUbergraph_Widget_Ability_Element_Signature_Cooldown(int32_t EntryPoint); // Function Widget_Ability_Element_Signature_Cooldown.Widget_Ability_Element_Signature_Cooldown_C.ExecuteUbergraph_Widget_Ability_Element_Signature_Cooldown // (Final|UbergraphFunction|HasDefaults) // @ game+0x3511190
};

