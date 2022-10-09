// WidgetBlueprintGeneratedClass PlayerAliasInit.PlayerAliasInit_C
// Size: 0x510 (Inherited: 0x2c8)
struct UPlayerAliasInit_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct UTextBlock* ErrorText; // 0x2d0(0x08)
	struct UEditableTextBox* GameNameInput; // 0x2d8(0x08)
	struct UTextBlock* GameNameTaglineSeparator; // 0x2e0(0x08)
	struct UImage* Image_59; // 0x2e8(0x08)
	struct UImage* Image_201; // 0x2f0(0x08)
	struct UImage* Image_203; // 0x2f8(0x08)
	struct UImage* PlayerAlias_SelectName_Logo; // 0x300(0x08)
	struct UImage* PlayerAliasFrame_bg; // 0x308(0x08)
	struct USharedButtonMaster_C* SharedButtonMaster; // 0x310(0x08)
	struct UEditableTextBox* TagLineInput; // 0x318(0x08)
	struct UTextBlock* TextBlock_255; // 0x320(0x08)
	struct UImage* ValidationIcon; // 0x328(0x08)
	enum class EInputValidated NameValidity; // 0x330(0x01)
	char pad_331[0x3]; // 0x331(0x03)
	float ValidationDelaySeconds; // 0x334(0x04)
	struct FSlateBrush ValidationFailedIcon; // 0x338(0x90)
	struct FSlateBrush ValidationPassedIcon; // 0x3c8(0x90)
	struct FSlateBrush ValidationProcessingIcon; // 0x458(0x90)
	struct FText ValidationErrorMessage; // 0x4e8(0x18)
	struct TArray<struct FString> ErrorList; // 0x500(0x10)

	bool Get_TagLineInput_bIsEnabled_1(); // Function PlayerAliasInit.PlayerAliasInit_C.Get_TagLineInput_bIsEnabled_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3511190
	void CheckLocalValidation(struct FPlayerAlias& PlayerAlias, bool& IsValid, struct FText& ValidationError); // Function PlayerAliasInit.PlayerAliasInit_C.CheckLocalValidation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3511190
	enum class ESlateVisibility Get_TagLineInput_Visibility_1(); // Function PlayerAliasInit.PlayerAliasInit_C.Get_TagLineInput_Visibility_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3511190
	struct FText Get_LocalizedErrorText(enum class EPlayerAliasError PlayerAliasError); // Function PlayerAliasInit.PlayerAliasInit_C.Get_LocalizedErrorText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3511190
	bool Get_ConfirmButtonEnabled(); // Function PlayerAliasInit.PlayerAliasInit_C.Get_ConfirmButtonEnabled // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3511190
	enum class ESlateVisibility Get_ValidationErrorText_Visibility_1(); // Function PlayerAliasInit.PlayerAliasInit_C.Get_ValidationErrorText_Visibility_1 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3511190
	struct FSlateBrush Get_ValidationIcon_Brush_1(); // Function PlayerAliasInit.PlayerAliasInit_C.Get_ValidationIcon_Brush_1 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3511190
	void BndEvt__DisplayNameInput_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature(struct FText& Text); // Function PlayerAliasInit.PlayerAliasInit_C.BndEvt__DisplayNameInput_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x3511190
	void ValidateName(); // Function PlayerAliasInit.PlayerAliasInit_C.ValidateName // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void OnAliasValid(); // Function PlayerAliasInit.PlayerAliasInit_C.OnAliasValid // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void OnValidationError(enum class EPlayerAliasError Problem); // Function PlayerAliasInit.PlayerAliasInit_C.OnValidationError // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void OnInvalidOrError(enum class EPlayerAliasError Problem); // Function PlayerAliasInit.PlayerAliasInit_C.OnInvalidOrError // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void BndEvt__SharedButtonMaster_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(); // Function PlayerAliasInit.PlayerAliasInit_C.BndEvt__SharedButtonMaster_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x3511190
	void ExecuteUbergraph_PlayerAliasInit(int32_t EntryPoint); // Function PlayerAliasInit.PlayerAliasInit_C.ExecuteUbergraph_PlayerAliasInit // (Final|UbergraphFunction|HasDefaults) // @ game+0x3511190
};

