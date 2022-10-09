// BlueprintGeneratedClass FXC_Global_Reveal_HiddenWhenVisible.FXC_Global_Reveal_HiddenWhenVisible_C
// Size: 0x5f9 (Inherited: 0x5d5)
struct AFXC_Global_Reveal_HiddenWhenVisible_C : AFXC_Global_Reveal_C {
	char pad_5D5[0x3]; // 0x5d5(0x03)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5d8(0x08)
	bool OnlyShowWhenVisible; // 0x5e0(0x01)
	enum class ETraceTypeQuery VisibilityChannel; // 0x5e1(0x01)
	bool CurrentlyVisible; // 0x5e2(0x01)
	char pad_5E3[0x5]; // 0x5e3(0x05)
	struct FMulticastInlineDelegate UpdateVisible; // 0x5e8(0x10)
	bool VisibilitySet; // 0x5f8(0x01)
};

