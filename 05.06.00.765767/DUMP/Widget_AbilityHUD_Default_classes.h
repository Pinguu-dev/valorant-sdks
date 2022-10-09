// WidgetBlueprintGeneratedClass Widget_AbilityHUD_Default.Widget_AbilityHUD_Default_C
// Size: 0x3a8 (Inherited: 0x358)
struct UWidget_AbilityHUD_Default_C : UCharacterAbilityWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x358(0x08)
	struct UWidgetAnimation* Intro; // 0x360(0x08)
	struct UHorizontalBox* AbilityBoxBase; // 0x368(0x08)
	struct UOverlay* AbilityWidget; // 0x370(0x08)
	struct UImage* bg_Normal; // 0x378(0x08)
	struct UImage* darkbg; // 0x380(0x08)
	struct UInvalidationBox* InvalidationBox_1; // 0x388(0x08)
	struct UInvalidationBox* InvalidationBox_2; // 0x390(0x08)
	struct TArray<struct UCharacterAbilityWidget*> AbilityWidgets; // 0x398(0x10)
};

