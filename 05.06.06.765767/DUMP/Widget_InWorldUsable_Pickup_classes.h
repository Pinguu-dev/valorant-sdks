// WidgetBlueprintGeneratedClass Widget_InWorldUsable_Pickup.Widget_InWorldUsable_Pickup_C
// Size: 0x360 (Inherited: 0x2d8)
struct UWidget_InWorldUsable_Pickup_C : UCoordinatedHUDElement {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d8(0x08)
	struct UImage* BlackBG; // 0x2e0(0x08)
	struct UKeyboardKeyBTN_C* KeyboardKeyBTN; // 0x2e8(0x08)
	struct UTextBlock* TextBlock_1; // 0x2f0(0x08)
	struct UTextBlock* TextBlock_2; // 0x2f8(0x08)
	struct UTextBlock* TextBlock_3; // 0x300(0x08)
	struct UTextBlock* TextBlock_SkinName; // 0x308(0x08)
	struct FMulticastInlineDelegate NewEventDispatcher_1; // 0x310(0x10)
	struct FString Owner; // 0x320(0x10)
	struct FString Equippable; // 0x330(0x10)
	struct AEquippableGroundPickup_C* GroundEquippable; // 0x340(0x08)
	struct TArray<struct UAresOutlineComponent*> OutlinedPrimitiveComponents; // 0x348(0x10)
	struct UWidgetComponent* WidgetComponent; // 0x358(0x08)
};

