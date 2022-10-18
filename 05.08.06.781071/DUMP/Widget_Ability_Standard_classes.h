// WidgetBlueprintGeneratedClass Widget_Ability_Standard.Widget_Ability_Standard_C
// Size: 0x459 (Inherited: 0x360)
struct UWidget_Ability_Standard_C : UWidget_Ability_Parent_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x360(0x08)
	struct UWidgetAnimation* TimerExpiring; // 0x368(0x08)
	struct UNamedSlot* AbilityIconSlot; // 0x370(0x08)
	struct UImage* BackAnimIcon; // 0x378(0x08)
	struct UImage* FrontAnimIcon; // 0x380(0x08)
	struct UGamepadInputPromptSwitcher_C* GamepadInputPromptSwitcher; // 0x388(0x08)
	struct UBorder* GamepadPromptBorder; // 0x390(0x08)
	struct UHorizontalBox* InputPromptHolder; // 0x398(0x08)
	struct UOverlay* Main; // 0x3a0(0x08)
	struct UNamedSlot* OverImageSlot; // 0x3a8(0x08)
	struct UImage* RechargeAnimIcon_2; // 0x3b0(0x08)
	struct UImage* Spacer; // 0x3b8(0x08)
	struct UImage* ThreeHolder; // 0x3c0(0x08)
	struct UVerticalBox* TimerVerticalBox; // 0x3c8(0x08)
	struct UImage* TwoHolder; // 0x3d0(0x08)
	struct UWidget_Ability_Element_ChargeStandard_C* Widget_Ability_ChargeStandard; // 0x3d8(0x08)
	struct UWidget_Ability_Element_InputPrompt_C* Widget_Ability_Element_InputPrompt; // 0x3e0(0x08)
	struct UWidget_Ability_Element_Signature_Cooldown_C* Widget_Ability_Element_Signature_Cooldown; // 0x3e8(0x08)
	struct UWidget_Ability_Element_Timer_C* Widget_Ability_Element_Timer; // 0x3f0(0x08)
	struct UWidget_Ability_Element_Icon_C* Widget_Ability_Icon; // 0x3f8(0x08)
	struct UWidget_Ability_Element_Key_C* Widget_Ability_Key_1; // 0x400(0x08)
	float BackIconTimeUpdateSpeed; // 0x408(0x04)
	char pad_40C[0x4]; // 0x40c(0x04)
	struct FTimerHandle BackIconTimer; // 0x410(0x08)
	struct FTimerHandle FrontIconTimer; // 0x418(0x08)
	float FrontIconUpdateSpeed; // 0x420(0x04)
	float BackIconStartTime; // 0x424(0x04)
	float FrontIconStartTime; // 0x428(0x04)
	float FrontIconDuration; // 0x42c(0x04)
	float BackIconDuration; // 0x430(0x04)
	float RechargeIconDuration; // 0x434(0x04)
	float RechargeIconUpdateSpeed; // 0x438(0x04)
	char pad_43C[0x4]; // 0x43c(0x04)
	struct FTimerHandle RechargeIconTimer; // 0x440(0x08)
	float RechargeIconStartTime; // 0x448(0x04)
	char pad_44C[0x4]; // 0x44c(0x04)
	struct UMaterialInstance* Suppressed Icon Template; // 0x450(0x08)
	bool HideInputHolder; // 0x458(0x01)

	void UpdateHolderVisuals(); // Function Widget_Ability_Standard.Widget_Ability_Standard_C.UpdateHolderVisuals // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void StartRechargeAnimEffect(); // Function Widget_Ability_Standard.Widget_Ability_Standard_C.StartRechargeAnimEffect // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void StartBackAnimEffect(); // Function Widget_Ability_Standard.Widget_Ability_Standard_C.StartBackAnimEffect // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void StartFrontAnimEffect(); // Function Widget_Ability_Standard.Widget_Ability_Standard_C.StartFrontAnimEffect // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void UpdateIconAnimation(float StartTime, float Duration, struct FTimerHandle& TimerHandle, struct UImage* Icon); // Function Widget_Ability_Standard.Widget_Ability_Standard_C.UpdateIconAnimation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void SortAndAddTimer(struct UWidget* Content); // Function Widget_Ability_Standard.Widget_Ability_Standard_C.SortAndAddTimer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void GetNextBestInput(struct TArray<struct UWidget*>& Array, struct UWidget_Ability_Element_InputPrompt_C*& CurrentBestInput); // Function Widget_Ability_Standard.Widget_Ability_Standard_C.GetNextBestInput // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void SortActiveInputs(struct TArray<struct UWidget*>& SortedInputs); // Function Widget_Ability_Standard.Widget_Ability_Standard_C.SortActiveInputs // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void OnStartWidget(); // Function Widget_Ability_Standard.Widget_Ability_Standard_C.OnStartWidget // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x3520f50
	void AddTimer(struct UUserWidget* InTimerWidget); // Function Widget_Ability_Standard.Widget_Ability_Standard_C.AddTimer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void AddInputPrompt(struct UUserWidget* InInputPromptWidget); // Function Widget_Ability_Standard.Widget_Ability_Standard_C.AddInputPrompt // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void ExpireWarningActive_Event_1(); // Function Widget_Ability_Standard.Widget_Ability_Standard_C.ExpireWarningActive_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void TimerComplete_Event_1(); // Function Widget_Ability_Standard.Widget_Ability_Standard_C.TimerComplete_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void PreConstruct(bool IsDesignTime); // Function Widget_Ability_Standard.Widget_Ability_Standard_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3520f50
	void PlayBackIconAnim(); // Function Widget_Ability_Standard.Widget_Ability_Standard_C.PlayBackIconAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void PlayFrontIconAnim(); // Function Widget_Ability_Standard.Widget_Ability_Standard_C.PlayFrontIconAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void UpdateBackIcon(); // Function Widget_Ability_Standard.Widget_Ability_Standard_C.UpdateBackIcon // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void UpdateFrontIcon(); // Function Widget_Ability_Standard.Widget_Ability_Standard_C.UpdateFrontIcon // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void PlayRechargeAnim(); // Function Widget_Ability_Standard.Widget_Ability_Standard_C.PlayRechargeAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void UpdateRechargeIcon(); // Function Widget_Ability_Standard.Widget_Ability_Standard_C.UpdateRechargeIcon // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void InputPromptRemoved(); // Function Widget_Ability_Standard.Widget_Ability_Standard_C.InputPromptRemoved // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void OnInitialized(); // Function Widget_Ability_Standard.Widget_Ability_Standard_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3520f50
	void ExecuteUbergraph_Widget_Ability_Standard(int32_t EntryPoint); // Function Widget_Ability_Standard.Widget_Ability_Standard_C.ExecuteUbergraph_Widget_Ability_Standard // (Final|UbergraphFunction|HasDefaults) // @ game+0x3520f50
};

