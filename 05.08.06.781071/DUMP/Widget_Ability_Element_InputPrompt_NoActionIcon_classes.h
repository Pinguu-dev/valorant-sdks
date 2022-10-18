// WidgetBlueprintGeneratedClass Widget_Ability_Element_InputPrompt_NoActionIcon.Widget_Ability_Element_InputPrompt_NoActionIcon_C
// Size: 0x320 (Inherited: 0x2c8)
struct UWidget_Ability_Element_InputPrompt_NoActionIcon_C : UDesignableUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct UBorder* GamepadChordBorder; // 0x2d0(0x08)
	struct UShared_Keyboard_Prompt_C* Shared_Keyboard_Prompt; // 0x2d8(0x08)
	struct UShared_Mouse_Prompt_C* Shared_Mouse_Prompt; // 0x2e0(0x08)
	struct FStruct_Widget_Ability_Input CurrentInputStruct; // 0x2e8(0x38)

	enum class Enum_AbilityInputs GetMouseBinding(struct FName ActionMapping); // Function Widget_Ability_Element_InputPrompt_NoActionIcon.Widget_Ability_Element_InputPrompt_NoActionIcon_C.GetMouseBinding // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3520f50
	void GetKeyText(struct FName BindingName, struct FText& DisplayName); // Function Widget_Ability_Element_InputPrompt_NoActionIcon.Widget_Ability_Element_InputPrompt_NoActionIcon_C.GetKeyText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3520f50
	void SetupInputPrompt(struct FStruct_Widget_Ability_Input InputStruct); // Function Widget_Ability_Element_InputPrompt_NoActionIcon.Widget_Ability_Element_InputPrompt_NoActionIcon_C.SetupInputPrompt // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void PreConstruct(bool IsDesignTime); // Function Widget_Ability_Element_InputPrompt_NoActionIcon.Widget_Ability_Element_InputPrompt_NoActionIcon_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3520f50
	void Construct(); // Function Widget_Ability_Element_InputPrompt_NoActionIcon.Widget_Ability_Element_InputPrompt_NoActionIcon_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3520f50
	void ExecuteUbergraph_Widget_Ability_Element_InputPrompt_NoActionIcon(int32_t EntryPoint); // Function Widget_Ability_Element_InputPrompt_NoActionIcon.Widget_Ability_Element_InputPrompt_NoActionIcon_C.ExecuteUbergraph_Widget_Ability_Element_InputPrompt_NoActionIcon // (Final|UbergraphFunction|HasDefaults) // @ game+0x3520f50
};

