// WidgetBlueprintGeneratedClass Widget_Ability_Element_InputPrompt_NoActionIcon.
// Size: 0x320 (Inherited: 0x2c8)
struct U : UDesignableUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct UBorder* ; // 0x2d0(0x08)
	struct U* Shared_Keyboard_Prompt; // 0x2d8(0x08)
	struct U* Shared_Mouse_Prompt; // 0x2e0(0x08)
	struct FStruct_Widget_Ability_Input ; // 0x2e8(0x38)

	enum class Enum_AbilityInputs (struct FName ActionMapping); // Function Widget_Ability_Element_InputPrompt_NoActionIcon.. // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322a90
	void (struct FName BindingName, struct FText& DisplayName); // Function Widget_Ability_Element_InputPrompt_NoActionIcon.. // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322a90
	void (struct FStruct_Widget_Ability_Input InputStruct); // Function Widget_Ability_Element_InputPrompt_NoActionIcon.. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void PreConstruct(bool IsDesignTime); // Function Widget_Ability_Element_InputPrompt_NoActionIcon..PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3322a90
	void Construct(); // Function Widget_Ability_Element_InputPrompt_NoActionIcon..Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3322a90
	void (int32_t EntryPoint); // Function Widget_Ability_Element_InputPrompt_NoActionIcon.. // (Final|UbergraphFunction|HasDefaults) // @ game+0x3322a90
};

