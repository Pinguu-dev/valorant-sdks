// WidgetBlueprintGeneratedClass Widget_Ability_Element_Key.Widget_Ability_Element_Key_C
// Size: 0x380 (Inherited: 0x358)
struct UWidget_Ability_Element_Key_C : UCharacterAbilityWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x358(0x08)
	struct UBorder* Border_1; // 0x360(0x08)
	struct UTextBlock* KeyText; // 0x368(0x08)
	struct FMulticastInlineDelegate DispatchUpdateWidget; // 0x370(0x10)

	void UpdateHotkeyInternal(struct FInputChord FoundChord, bool bIsBound); // Function Widget_Ability_Element_Key.Widget_Ability_Element_Key_C.UpdateHotkeyInternal // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void UpdateEnabled(); // Function Widget_Ability_Element_Key.Widget_Ability_Element_Key_C.UpdateEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void UpdateFromEquippable(); // Function Widget_Ability_Element_Key.Widget_Ability_Element_Key_C.UpdateFromEquippable // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void SetHotkeyText(struct FName BindingText); // Function Widget_Ability_Element_Key.Widget_Ability_Element_Key_C.SetHotkeyText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void AddTimer(struct UUserWidget* InTimerWidget); // Function Widget_Ability_Element_Key.Widget_Ability_Element_Key_C.AddTimer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void AddInputPrompt(struct UUserWidget* InInputPromptWidget); // Function Widget_Ability_Element_Key.Widget_Ability_Element_Key_C.AddInputPrompt // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void InputPromptRemoved(); // Function Widget_Ability_Element_Key.Widget_Ability_Element_Key_C.InputPromptRemoved // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void OnStartWidget(); // Function Widget_Ability_Element_Key.Widget_Ability_Element_Key_C.OnStartWidget // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x3520f50
	void SettingChanged(struct FName& Setting); // Function Widget_Ability_Element_Key.Widget_Ability_Element_Key_C.SettingChanged // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void DispatchUpdateAbilityWidget_Event_1(); // Function Widget_Ability_Element_Key.Widget_Ability_Element_Key_C.DispatchUpdateAbilityWidget_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void ExecuteUbergraph_Widget_Ability_Element_Key(int32_t EntryPoint); // Function Widget_Ability_Element_Key.Widget_Ability_Element_Key_C.ExecuteUbergraph_Widget_Ability_Element_Key // (Final|UbergraphFunction) // @ game+0x3520f50
	void DispatchUpdateWidget__DelegateSignature(); // Function Widget_Ability_Element_Key.Widget_Ability_Element_Key_C.DispatchUpdateWidget__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
};

