// WidgetBlueprintGeneratedClass CurrentRoundHUDElement.CurrentRoundHUDElement_C
// Size: 0x358 (Inherited: 0x2d8)
struct UCurrentRoundHUDElement_C : UCoordinatedHUDElement {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d8(0x08)
	struct UCoordinatedHUDModel* HUDModel; // 0x2e0(0x08)
	int32_t NumberOfHideRequests; // 0x2e8(0x04)
	char pad_2EC[0x4]; // 0x2ec(0x04)
	struct UGamepadInputIconBase* BuyButtonGamepad; // 0x2f0(0x08)
	struct UTextBlock* Attacking_ref; // 0x2f8(0x08)
	struct UTextBlock* Defending_ref; // 0x300(0x08)
	struct UTextBlock* BuyButtonB_ref; // 0x308(0x08)
	struct UOverlay* BuyPhaseAnnouncement_ref; // 0x310(0x08)
	struct UBorder* NewVar_1; // 0x318(0x08)
	struct UBorder* GamepadPromptBorder_ref; // 0x320(0x08)
	struct UTextBlock* MainText_ref; // 0x328(0x08)
	struct UHorizontalBox* PressButtonToBuy_ref; // 0x330(0x08)
	struct UTextBlock* RoundText_ref; // 0x338(0x08)
	struct UCanvasPanel* SecondaryCanvas_ref; // 0x340(0x08)
	struct USizeBox* sizebox_ref; // 0x348(0x08)
	struct UWidgetAnimation* IntroAnimation_ref; // 0x350(0x08)
};

