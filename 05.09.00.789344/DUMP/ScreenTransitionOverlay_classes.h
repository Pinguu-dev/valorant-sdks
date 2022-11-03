// WidgetBlueprintGeneratedClass ScreenTransitionOverlay.ScreenTransitionOverlay_C
// Size: 0x2f0 (Inherited: 0x2d8)
struct UScreenTransitionOverlay_C : UCoordinatedHUDElement {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d8(0x08)
	struct UInvalidationBox* InvalidationBox_ScreenTransitionOverlay; // 0x2e0(0x08)
	struct UImage* OverlayImage; // 0x2e8(0x08)

	void SetHUDModel(struct UCoordinatedHUDModel* HUDModel); // Function ScreenTransitionOverlay.ScreenTransitionOverlay_C.SetHUDModel // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void ExecuteUbergraph_ScreenTransitionOverlay(int32_t EntryPoint); // Function ScreenTransitionOverlay.ScreenTransitionOverlay_C.ExecuteUbergraph_ScreenTransitionOverlay // (Final|UbergraphFunction) // @ game+0x32f73d0
};

