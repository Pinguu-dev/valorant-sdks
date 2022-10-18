// WidgetBlueprintGeneratedClass Widget_Ability_Element_Timer.Widget_Ability_Element_Timer_C
// Size: 0x330 (Inherited: 0x30a)
struct UWidget_Ability_Element_Timer_C : UWidget_Ability_Element_Timer_Parent_C {
	char pad_30A[0x6]; // 0x30a(0x06)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x310(0x08)
	struct UWidgetAnimation* ClockExpiring; // 0x318(0x08)
	struct UProgressBar* ProgressBar_1; // 0x320(0x08)
	struct UTextBlock* TimeRemaningText; // 0x328(0x08)

	void UpdateTimerPercent(float NewPercent); // Function Widget_Ability_Element_Timer.Widget_Ability_Element_Timer_C.UpdateTimerPercent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void SetTimeRemaining(float TimeRemaining); // Function Widget_Ability_Element_Timer.Widget_Ability_Element_Timer_C.SetTimeRemaining // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function Widget_Ability_Element_Timer.Widget_Ability_Element_Timer_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3520f50
	void ExpireWarningActivated(); // Function Widget_Ability_Element_Timer.Widget_Ability_Element_Timer_C.ExpireWarningActivated // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void ExecuteUbergraph_Widget_Ability_Element_Timer(int32_t EntryPoint); // Function Widget_Ability_Element_Timer.Widget_Ability_Element_Timer_C.ExecuteUbergraph_Widget_Ability_Element_Timer // (Final|UbergraphFunction|HasDefaults) // @ game+0x3520f50
};

