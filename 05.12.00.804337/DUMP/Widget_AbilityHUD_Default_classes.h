// WidgetBlueprintGeneratedClass Widget_AbilityHUD_Default.
// Size: 0x3a8 (Inherited: 0x358)
struct U : UCharacterAbilityWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x358(0x08)
	struct UWidgetAnimation* ; // 0x360(0x08)
	struct UHorizontalBox* ; // 0x368(0x08)
	struct UOverlay* ; // 0x370(0x08)
	struct UImage* ; // 0x378(0x08)
	struct UImage* ; // 0x380(0x08)
	struct UInvalidationBox* InvalidationBox_1; // 0x388(0x08)
	struct UInvalidationBox* InvalidationBox_2; // 0x390(0x08)
	struct TArray<struct UCharacterAbilityWidget*> ; // 0x398(0x10)

	void (enum class EAresItemSlot Slot); // Function Widget_AbilityHUD_Default.. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (bool& ); // Function Widget_AbilityHUD_Default.. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void OnStartWidget(); // Function Widget_AbilityHUD_Default..OnStartWidget // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x3322a90
	void OnStopWidget(); // Function Widget_AbilityHUD_Default..OnStopWidget // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x3322a90
	void (); // Function Widget_AbilityHUD_Default.. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void _2(bool NewValue); // Function Widget_AbilityHUD_Default.._2 // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (int32_t EntryPoint); // Function Widget_AbilityHUD_Default.. // (Final|UbergraphFunction|HasDefaults) // @ game+0x3322a90
};

