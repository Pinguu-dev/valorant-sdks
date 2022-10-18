// WidgetBlueprintGeneratedClass Widget_Ability_Element_PrimaryAbilityFeedback.Widget_Ability_Element_PrimaryAbilityFeedback_C
// Size: 0x2f4 (Inherited: 0x2c8)
struct UWidget_Ability_Element_PrimaryAbilityFeedback_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct UHorizontalBox* InputPromptBox; // 0x2d0(0x08)
	struct USizeBox* SizeBox_1; // 0x2d8(0x08)
	struct UVerticalBox* TimerBox; // 0x2e0(0x08)
	struct UVerticalBox* VerticalBox_1; // 0x2e8(0x08)
	float TimerBottomPadding; // 0x2f0(0x04)

	void AdjustLayoutForDevice(); // Function Widget_Ability_Element_PrimaryAbilityFeedback.Widget_Ability_Element_PrimaryAbilityFeedback_C.AdjustLayoutForDevice // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void InputPromptRemoved(); // Function Widget_Ability_Element_PrimaryAbilityFeedback.Widget_Ability_Element_PrimaryAbilityFeedback_C.InputPromptRemoved // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void AddTimer(struct UUserWidget* InTimerWidget); // Function Widget_Ability_Element_PrimaryAbilityFeedback.Widget_Ability_Element_PrimaryAbilityFeedback_C.AddTimer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void AddInputPrompt(struct UUserWidget* InInputPromptWidget); // Function Widget_Ability_Element_PrimaryAbilityFeedback.Widget_Ability_Element_PrimaryAbilityFeedback_C.AddInputPrompt // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void Construct(); // Function Widget_Ability_Element_PrimaryAbilityFeedback.Widget_Ability_Element_PrimaryAbilityFeedback_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3520f50
	void ExecuteUbergraph_Widget_Ability_Element_PrimaryAbilityFeedback(int32_t EntryPoint); // Function Widget_Ability_Element_PrimaryAbilityFeedback.Widget_Ability_Element_PrimaryAbilityFeedback_C.ExecuteUbergraph_Widget_Ability_Element_PrimaryAbilityFeedback // (Final|UbergraphFunction) // @ game+0x3520f50
};

