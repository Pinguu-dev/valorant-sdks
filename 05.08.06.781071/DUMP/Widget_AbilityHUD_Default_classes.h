// WidgetBlueprintGeneratedClass Widget_AbilityHUD_Default.Widget_AbilityHUD_Default_C
// Size: 0x3a8 (Inherited: 0x358)
struct UWidget_AbilityHUD_Default_C : UCharacterAbilityWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x358(0x08)
	struct UWidgetAnimation* Intro; // 0x360(0x08)
	struct UHorizontalBox* AbilityBoxBase; // 0x368(0x08)
	struct UOverlay* AbilityWidget; // 0x370(0x08)
	struct UImage* bg_Normal; // 0x378(0x08)
	struct UImage* darkbg; // 0x380(0x08)
	struct UInvalidationBox* InvalidationBox_1; // 0x388(0x08)
	struct UInvalidationBox* InvalidationBox_2; // 0x390(0x08)
	struct TArray<struct UCharacterAbilityWidget*> AbilityWidgets; // 0x398(0x10)

	void StartWidgetForSlot(enum class EAresItemSlot Slot); // Function Widget_AbilityHUD_Default.Widget_AbilityHUD_Default_C.StartWidgetForSlot // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void AllAbilitiesFound(bool& Found); // Function Widget_AbilityHUD_Default.Widget_AbilityHUD_Default_C.AllAbilitiesFound // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void OnStartWidget(); // Function Widget_AbilityHUD_Default.Widget_AbilityHUD_Default_C.OnStartWidget // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x3520f50
	void OnStopWidget(); // Function Widget_AbilityHUD_Default.Widget_AbilityHUD_Default_C.OnStopWidget // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x3520f50
	void RetryFindWeapons(); // Function Widget_AbilityHUD_Default.Widget_AbilityHUD_Default_C.RetryFindWeapons // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void OnAliveStateChanged_Event_2(bool NewValue); // Function Widget_AbilityHUD_Default.Widget_AbilityHUD_Default_C.OnAliveStateChanged_Event_2 // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void ExecuteUbergraph_Widget_AbilityHUD_Default(int32_t EntryPoint); // Function Widget_AbilityHUD_Default.Widget_AbilityHUD_Default_C.ExecuteUbergraph_Widget_AbilityHUD_Default // (Final|UbergraphFunction|HasDefaults) // @ game+0x3520f50
};

