// WidgetBlueprintGeneratedClass TimerHUDElement.TimerHUDElement_C
// Size: 0x335 (Inherited: 0x2d8)
struct UTimerHUDElement_C : UCoordinatedHUDElement {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d8(0x08)
	struct UImage* BackgroundImage; // 0x2e0(0x08)
	struct UImage* Center; // 0x2e8(0x08)
	struct UImage* Left; // 0x2f0(0x08)
	struct UImage* Right; // 0x2f8(0x08)
	struct UBorder* TimerBorder; // 0x300(0x08)
	struct UHorizontalBox* timerboundingbox; // 0x308(0x08)
	struct UTextBlock* TimerLine1; // 0x310(0x08)
	struct UTextBlock* TimerLine2; // 0x318(0x08)
	struct UCoordinatedHUDModel* Hud Model; // 0x320(0x08)
	int32_t CachedSeconds; // 0x328(0x04)
	int32_t CachedMilliseconds; // 0x32c(0x04)
	int32_t CachedMinutes; // 0x330(0x04)
	bool PulseOn; // 0x334(0x01)
};

