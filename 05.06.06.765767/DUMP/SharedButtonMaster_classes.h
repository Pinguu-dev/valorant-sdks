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
};

