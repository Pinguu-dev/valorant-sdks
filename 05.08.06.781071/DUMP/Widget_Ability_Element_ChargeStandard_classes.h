// WidgetBlueprintGeneratedClass Widget_Ability_Element_ChargeStandard.Widget_Ability_Element_ChargeStandard_C
// Size: 0x490 (Inherited: 0x358)
struct UWidget_Ability_Element_ChargeStandard_C : UCharacterAbilityWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x358(0x08)
	struct UImage* ChargeImage; // 0x360(0x08)
	struct UImage* ChargeImage_Extra; // 0x368(0x08)
	struct UTextBlock* ChargeNumberText; // 0x370(0x08)
	struct UImage* ChargeTexture; // 0x378(0x08)
	struct UImage* Image_73; // 0x380(0x08)
	struct UImage* Image_75; // 0x388(0x08)
	struct UImage* Image_76; // 0x390(0x08)
	struct UImage* Image_77; // 0x398(0x08)
	struct UImage* Image_78; // 0x3a0(0x08)
	struct UImage* Image_79; // 0x3a8(0x08)
	struct UImage* Image_80; // 0x3b0(0x08)
	struct UImage* Image_81; // 0x3b8(0x08)
	struct UImage* Image_82; // 0x3c0(0x08)
	struct UHorizontalBox* PipRectBox; // 0x3c8(0x08)
	struct UHorizontalBox* UltChargeBox; // 0x3d0(0x08)
	struct FMulticastInlineDelegate DispatchUpdateWidget; // 0x3d8(0x10)
	struct TArray<struct FStruct_AbilityChargeImages> ChargeImages; // 0x3e8(0x10)
	struct FSlateColor Suppressed Charge Tint; // 0x3f8(0x28)
	struct FSlateColor Base Charge Tint; // 0x420(0x28)
	struct FSlateColor BaseChargeTextureTint; // 0x448(0x28)
	struct TArray<struct FStruct_AbilityChargeImages> ChargeImagesRed; // 0x470(0x10)
	struct UProgressBar* UltProgressBar; // 0x480(0x08)
	struct UComp_Ability_CooldownComponent_C* CooldownComponent; // 0x488(0x08)

	void SetCooldownComponent(); // Function Widget_Ability_Element_ChargeStandard.Widget_Ability_Element_ChargeStandard_C.SetCooldownComponent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void UpdateRechargeInfo(); // Function Widget_Ability_Element_ChargeStandard.Widget_Ability_Element_ChargeStandard_C.UpdateRechargeInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void GetPipCost(int32_t& PipCost); // Function Widget_Ability_Element_ChargeStandard.Widget_Ability_Element_ChargeStandard_C.GetPipCost // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3520f50
	void SetPipChargeInfo(int32_t PipCost, bool HasCharges); // Function Widget_Ability_Element_ChargeStandard.Widget_Ability_Element_ChargeStandard_C.SetPipChargeInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void GetCurrentDisplayCharges(int32_t& CurrentCharges); // Function Widget_Ability_Element_ChargeStandard.Widget_Ability_Element_ChargeStandard_C.GetCurrentDisplayCharges // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3520f50
	void GetMaxDisplayCharges(int32_t& MaxCharges); // Function Widget_Ability_Element_ChargeStandard.Widget_Ability_Element_ChargeStandard_C.GetMaxDisplayCharges // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3520f50
	void SetupDisabledUI(); // Function Widget_Ability_Element_ChargeStandard.Widget_Ability_Element_ChargeStandard_C.SetupDisabledUI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	int32_t GetMaxIntForChargesGreaterThan3(int32_t Int); // Function Widget_Ability_Element_ChargeStandard.Widget_Ability_Element_ChargeStandard_C.GetMaxIntForChargesGreaterThan3 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3520f50
	void SetRegularChargeInfo_DPT_GreaterThan3(int32_t Charges, int32_t MaxCharges, int32_t Extra Charges); // Function Widget_Ability_Element_ChargeStandard.Widget_Ability_Element_ChargeStandard_C.SetRegularChargeInfo_DPT_GreaterThan3 // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	int32_t GetTempCharges(); // Function Widget_Ability_Element_ChargeStandard.Widget_Ability_Element_ChargeStandard_C.GetTempCharges // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3520f50
	int32_t GetPermanentCharges(); // Function Widget_Ability_Element_ChargeStandard.Widget_Ability_Element_ChargeStandard_C.GetPermanentCharges // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3520f50
	void UpdateUltCharges(); // Function Widget_Ability_Element_ChargeStandard.Widget_Ability_Element_ChargeStandard_C.UpdateUltCharges // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void UpdateChargeInfo(); // Function Widget_Ability_Element_ChargeStandard.Widget_Ability_Element_ChargeStandard_C.UpdateChargeInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void SetRegularChargeInfo(int32_t Charges, int32_t MaxCharges, int32_t Extra Charges); // Function Widget_Ability_Element_ChargeStandard.Widget_Ability_Element_ChargeStandard_C.SetRegularChargeInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void AddTimer(struct UUserWidget* InTimerWidget); // Function Widget_Ability_Element_ChargeStandard.Widget_Ability_Element_ChargeStandard_C.AddTimer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void AddInputPrompt(struct UUserWidget* InInputPromptWidget); // Function Widget_Ability_Element_ChargeStandard.Widget_Ability_Element_ChargeStandard_C.AddInputPrompt // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void InputPromptRemoved(); // Function Widget_Ability_Element_ChargeStandard.Widget_Ability_Element_ChargeStandard_C.InputPromptRemoved // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void OnStartWidget(); // Function Widget_Ability_Element_ChargeStandard.Widget_Ability_Element_ChargeStandard_C.OnStartWidget // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x3520f50
	void DispatchUpdateAbilityWidget_Event_1(); // Function Widget_Ability_Element_ChargeStandard.Widget_Ability_Element_ChargeStandard_C.DispatchUpdateAbilityWidget_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void BuffAdded(struct FStruct_GameplayTagAndHUD_Info TagInfo); // Function Widget_Ability_Element_ChargeStandard.Widget_Ability_Element_ChargeStandard_C.BuffAdded // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void BuffRemoved(struct FStruct_GameplayTagAndHUD_Info TagInfo); // Function Widget_Ability_Element_ChargeStandard.Widget_Ability_Element_ChargeStandard_C.BuffRemoved // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void OnCooldownStarted(); // Function Widget_Ability_Element_ChargeStandard.Widget_Ability_Element_ChargeStandard_C.OnCooldownStarted // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void ExecuteUbergraph_Widget_Ability_Element_ChargeStandard(int32_t EntryPoint); // Function Widget_Ability_Element_ChargeStandard.Widget_Ability_Element_ChargeStandard_C.ExecuteUbergraph_Widget_Ability_Element_ChargeStandard // (Final|UbergraphFunction|HasDefaults) // @ game+0x3520f50
	void DispatchUpdateWidget__DelegateSignature(); // Function Widget_Ability_Element_ChargeStandard.Widget_Ability_Element_ChargeStandard_C.DispatchUpdateWidget__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
};

