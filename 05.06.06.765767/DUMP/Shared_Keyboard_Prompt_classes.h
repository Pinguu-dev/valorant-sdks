// WidgetBlueprintGeneratedClass Shared_Keyboard_Prompt.Shared_Keyboard_Prompt_C
// Size: 0x350 (Inherited: 0x2c8)
struct UShared_Keyboard_Prompt_C : UDesignableUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct UImage* Keyboard_Bg; // 0x2d0(0x08)
	struct UImage* Keyboard_Outline; // 0x2d8(0x08)
	struct UImage* Keyboard_Toggle; // 0x2e0(0x08)
	struct UTextBlock* Text_Keybind; // 0x2e8(0x08)
	bool Background; // 0x2f0(0x01)
	bool Outline; // 0x2f1(0x01)
	bool Toggle; // 0x2f2(0x01)
	char pad_2F3[0x5]; // 0x2f3(0x05)
	struct FText Font_Text; // 0x2f8(0x18)
	struct FLinearColor Bacground_Color; // 0x310(0x10)
	struct FLinearColor Outline_Color; // 0x320(0x10)
	struct FLinearColor Toggle_Color; // 0x330(0x10)
	struct FLinearColor Font_Color; // 0x340(0x10)
};

