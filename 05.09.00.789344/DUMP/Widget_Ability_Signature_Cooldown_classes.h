// WidgetBlueprintGeneratedClass Widget_Ability_Signature_Cooldown.Widget_Ability_Signature_Cooldown_C
// Size: 0x380 (Inherited: 0x360)
struct UWidget_Ability_Signature_Cooldown_C : UWidget_Ability_Parent_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x360(0x08)
	struct UOverlay* Overlay_1; // 0x368(0x08)
	struct UWidget_Ability_Element_Signature_Cooldown_C* Widget_Ability_Element_Signature_Cooldown; // 0x370(0x08)
	struct UWidget_Ability_Standard_C* Widget_Ability_Prototype_v2; // 0x378(0x08)

	void OnStartWidget(); // Function Widget_Ability_Signature_Cooldown.Widget_Ability_Signature_Cooldown_C.OnStartWidget // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x32f73d0
	void AddTimer(struct UUserWidget* InTimerWidget); // Function Widget_Ability_Signature_Cooldown.Widget_Ability_Signature_Cooldown_C.AddTimer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void AddInputPrompt(struct UUserWidget* InInputPromptWidget); // Function Widget_Ability_Signature_Cooldown.Widget_Ability_Signature_Cooldown_C.AddInputPrompt // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void InputPromptRemoved(); // Function Widget_Ability_Signature_Cooldown.Widget_Ability_Signature_Cooldown_C.InputPromptRemoved // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void ExecuteUbergraph_Widget_Ability_Signature_Cooldown(int32_t EntryPoint); // Function Widget_Ability_Signature_Cooldown.Widget_Ability_Signature_Cooldown_C.ExecuteUbergraph_Widget_Ability_Signature_Cooldown // (Final|UbergraphFunction) // @ game+0x32f73d0
};

