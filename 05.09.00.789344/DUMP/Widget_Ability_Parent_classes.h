// WidgetBlueprintGeneratedClass Widget_Ability_Parent.Widget_Ability_Parent_C
// Size: 0x360 (Inherited: 0x358)
struct UWidget_Ability_Parent_C : UCharacterAbilityWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x358(0x08)

	void SetupChildren(struct UPanelWidget* InBasePanelWidget); // Function Widget_Ability_Parent.Widget_Ability_Parent_C.SetupChildren // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void AddTimer(struct UUserWidget* InTimerWidget); // Function Widget_Ability_Parent.Widget_Ability_Parent_C.AddTimer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void AddInputPrompt(struct UUserWidget* InInputPromptWidget); // Function Widget_Ability_Parent.Widget_Ability_Parent_C.AddInputPrompt // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void InputPromptRemoved(); // Function Widget_Ability_Parent.Widget_Ability_Parent_C.InputPromptRemoved // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void OnStartWidget(); // Function Widget_Ability_Parent.Widget_Ability_Parent_C.OnStartWidget // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x32f73d0
	void DispatchUpdateAbilityWidget_Event_1(); // Function Widget_Ability_Parent.Widget_Ability_Parent_C.DispatchUpdateAbilityWidget_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void ExecuteUbergraph_Widget_Ability_Parent(int32_t EntryPoint); // Function Widget_Ability_Parent.Widget_Ability_Parent_C.ExecuteUbergraph_Widget_Ability_Parent // (Final|UbergraphFunction) // @ game+0x32f73d0
};

