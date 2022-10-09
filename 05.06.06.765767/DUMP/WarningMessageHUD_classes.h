// WidgetBlueprintGeneratedClass WarningMessageHUD.WarningMessageHUD_C
// Size: 0x366 (Inherited: 0x2d8)
struct UWarningMessageHUD_C : UCoordinatedHUDElement {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d8(0x08)
	struct UWidgetAnimation* BlinkRed; // 0x2e0(0x08)
	struct UHorizontalBox* HorizontalBox_3; // 0x2e8(0x08)
	struct UImage* Image; // 0x2f0(0x08)
	struct UImage* Image_85; // 0x2f8(0x08)
	struct UScaleBox* ScaleBox_1; // 0x300(0x08)
	struct UTextBlock* TextBlock_2; // 0x308(0x08)
	struct UTextBlock* TextBlock_6; // 0x310(0x08)
	int32_t LifeSpan; // 0x318(0x04)
	char pad_31C[0x4]; // 0x31c(0x04)
	struct FText MessageText; // 0x320(0x18)
	struct FText SubText; // 0x338(0x18)
	struct FTimerHandle WarningTimer; // 0x350(0x08)
	struct UAkAudioEvent* AudioPulse; // 0x358(0x08)
	int32_t MessageCount; // 0x360(0x04)
	bool Continuous; // 0x364(0x01)
	bool LoopAudio; // 0x365(0x01)
};

