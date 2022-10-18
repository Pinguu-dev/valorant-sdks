// WidgetBlueprintGeneratedClass Widget_Ability_Element_InputPrompt.Widget_Ability_Element_InputPrompt_C
// Size: 0x320 (Inherited: 0x2c8)
struct UWidget_Ability_Element_InputPrompt_C : UDesignableUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct UImage* ActionIcon; // 0x2d0(0x08)
	struct UOverlay* RootOverlay; // 0x2d8(0x08)
	struct UWidget_Ability_Element_InputPrompt_NoActionIcon_C* Widget_Ability_Element_InputPrompt_NoActionIcon; // 0x2e0(0x08)
	struct FStruct_Widget_Ability_Input CurrentInputStruct; // 0x2e8(0x38)

	void Construct(); // Function Widget_Ability_Element_InputPrompt.Widget_Ability_Element_InputPrompt_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3520f50
	void SetupInputPrompt(struct FStruct_Widget_Ability_Input InputStruct); // Function Widget_Ability_Element_InputPrompt.Widget_Ability_Element_InputPrompt_C.SetupInputPrompt // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void ExecuteUbergraph_Widget_Ability_Element_InputPrompt(int32_t EntryPoint); // Function Widget_Ability_Element_InputPrompt.Widget_Ability_Element_InputPrompt_C.ExecuteUbergraph_Widget_Ability_Element_InputPrompt // (Final|UbergraphFunction|HasDefaults) // @ game+0x3520f50
};

