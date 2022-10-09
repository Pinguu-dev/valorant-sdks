// WidgetBlueprintGeneratedClass UltDangerHUD.UltDangerHUD_C
// Size: 0x340 (Inherited: 0x2c8)
struct UUltDangerHUD_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct UWidgetAnimation* blinky; // 0x2d0(0x08)
	struct UImage* dangerIcon; // 0x2d8(0x08)
	struct UImage* dangerRing; // 0x2e0(0x08)
	struct UInvalidationBox* InvalidationBox_UltDangerHud; // 0x2e8(0x08)
	struct FSlateColor CriticalDangerColor; // 0x2f0(0x28)
	struct FSlateColor DangerColor; // 0x318(0x28)

	void AdjustLayoutForDevice(); // Function UltDangerHUD.UltDangerHUD_C.AdjustLayoutForDevice // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void Construct(); // Function UltDangerHUD.UltDangerHUD_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3511190
	void ExecuteUbergraph_UltDangerHUD(int32_t EntryPoint); // Function UltDangerHUD.UltDangerHUD_C.ExecuteUbergraph_UltDangerHUD // (Final|UbergraphFunction) // @ game+0x3511190
};

