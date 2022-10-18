// WidgetBlueprintGeneratedClass SharedButtonMaster.SharedButtonMaster_C
// Size: 0x4c1 (Inherited: 0x2c8)
struct USharedButtonMaster_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct UWidgetAnimation* Click; // 0x2d0(0x08)
	struct UWidgetAnimation* hover; // 0x2d8(0x08)
	struct UOverlay* BorderWidgets; // 0x2e0(0x08)
	struct UOverlay* BottomBar; // 0x2e8(0x08)
	struct UImage* BottomBG; // 0x2f0(0x08)
	struct UTextBlock* BottomLabelTextWidget; // 0x2f8(0x08)
	struct UTelemetryButton* Button; // 0x300(0x08)
	struct UScaleBox* ButtonContentsScaleBox; // 0x308(0x08)
	struct UVerticalBox* ButtonContentsWidgets; // 0x310(0x08)
	struct UImage* ButtonIconWidget; // 0x318(0x08)
	struct UTextBlock* ButtonTextWidget; // 0x320(0x08)
	struct UImage* LiquidBG; // 0x328(0x08)
	struct UImage* LockIcon; // 0x330(0x08)
	struct UScaleBox* LockScaleBox; // 0x338(0x08)
	struct UImage* SelectBG; // 0x340(0x08)
	struct UImage* SelectedLiquidBG; // 0x348(0x08)
	struct UImage* TopBG; // 0x350(0x08)
	struct FMulticastInlineDelegate Clicked; // 0x358(0x10)
	struct FText BottomLabelText; // 0x368(0x18)
	struct FText ButtonText; // 0x380(0x18)
	struct UTexture2D* Icon; // 0x398(0x08)
	bool ShowBorder; // 0x3a0(0x01)
	enum class SharedButtonStyles ButtonStyle; // 0x3a1(0x01)
	bool IsDisabled; // 0x3a2(0x01)
	char pad_3A3[0x5]; // 0x3a3(0x05)
	struct FSharedButtonStyle ButtonStyleOverrides; // 0x3a8(0x48)
	struct TMap<enum class SharedButtonStyles, struct FSharedButtonStyle> StylesMap; // 0x3f0(0x50)
	struct FSharedButtonStyle ButtonStyleStruct; // 0x440(0x48)
	struct FLinearColor DefaultUglyColor; // 0x488(0x10)
	bool SendTelemetry; // 0x498(0x01)
	char pad_499[0x7]; // 0x499(0x07)
	struct FString TelemetryAction; // 0x4a0(0x10)
	struct FMargin ContentPadding; // 0x4b0(0x10)
	bool ShowLockWhenDisabled; // 0x4c0(0x01)

	void SequenceEvent__ENTRYPOINTSharedButtonMaster_2(); // Function SharedButtonMaster.SharedButtonMaster_C.SequenceEvent__ENTRYPOINTSharedButtonMaster_2 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void SequenceEvent__ENTRYPOINTSharedButtonMaster_1(); // Function SharedButtonMaster.SharedButtonMaster_C.SequenceEvent__ENTRYPOINTSharedButtonMaster_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void ApplyProperties(); // Function SharedButtonMaster.SharedButtonMaster_C.ApplyProperties // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void UpdateTelemetry(bool SendTelemetry, struct FString TelemetryAction); // Function SharedButtonMaster.SharedButtonMaster_C.UpdateTelemetry // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void UpdateIsSelected(struct FLinearColor SetToColor, bool Reset); // Function SharedButtonMaster.SharedButtonMaster_C.UpdateIsSelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void SetContentPadding(struct FMargin Padding); // Function SharedButtonMaster.SharedButtonMaster_C.SetContentPadding // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void SetButtonContents(); // Function SharedButtonMaster.SharedButtonMaster_C.SetButtonContents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void SetBackgroundColors(); // Function SharedButtonMaster.SharedButtonMaster_C.SetBackgroundColors // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void HoverB(); // Function SharedButtonMaster.SharedButtonMaster_C.HoverB // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void HoverA(); // Function SharedButtonMaster.SharedButtonMaster_C.HoverA // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void SetLabelColor(struct FLinearColor Color); // Function SharedButtonMaster.SharedButtonMaster_C.SetLabelColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void SetButtonStyleOverrides(struct FSharedButtonStyle Style Override); // Function SharedButtonMaster.SharedButtonMaster_C.SetButtonStyleOverrides // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void SetButtonStyle(enum class SharedButtonStyles Style); // Function SharedButtonMaster.SharedButtonMaster_C.SetButtonStyle // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void SetDisabled(bool IsDisabled); // Function SharedButtonMaster.SharedButtonMaster_C.SetDisabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void SetBorderVisibility(bool Show); // Function SharedButtonMaster.SharedButtonMaster_C.SetBorderVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void SetIcon(struct UTexture2D* Texture); // Function SharedButtonMaster.SharedButtonMaster_C.SetIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void SetButtonText(struct FText Text); // Function SharedButtonMaster.SharedButtonMaster_C.SetButtonText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void SetBottomLabelText(struct FText Text); // Function SharedButtonMaster.SharedButtonMaster_C.SetBottomLabelText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function SharedButtonMaster.SharedButtonMaster_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x3520f50
	void BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function SharedButtonMaster.SharedButtonMaster_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x3520f50
	void BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function SharedButtonMaster.SharedButtonMaster_C.BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x3520f50
	void PreConstruct(bool IsDesignTime); // Function SharedButtonMaster.SharedButtonMaster_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3520f50
	void Construct(); // Function SharedButtonMaster.SharedButtonMaster_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3520f50
	void ExecuteUbergraph_SharedButtonMaster(int32_t EntryPoint); // Function SharedButtonMaster.SharedButtonMaster_C.ExecuteUbergraph_SharedButtonMaster // (Final|UbergraphFunction) // @ game+0x3520f50
	void Clicked__DelegateSignature(); // Function SharedButtonMaster.SharedButtonMaster_C.Clicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
};

