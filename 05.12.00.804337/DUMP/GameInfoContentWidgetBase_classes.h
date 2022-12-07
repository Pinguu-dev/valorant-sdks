// WidgetBlueprintGeneratedClass GameInfoContentWidgetBase.GameInfoContentWidgetBase_C
// Size: 0x320 (Inherited: 0x2f8)
struct UGameInfoContentWidgetBase_C : UGameInfoContentWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2f8(0x08)
	struct UWidgetAnimation* ; // 0x300(0x08)
	struct UCoordinatedHUDModel* HUDModel; // 0x308(0x08)
	struct TArray<struct UCoordinatedHUDElement*> CoordinatedHUDElement; // 0x310(0x10)

	void (); // Function GameInfoContentWidgetBase.GameInfoContentWidgetBase_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct U*& ); // Function GameInfoContentWidgetBase.GameInfoContentWidgetBase_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void OnCinematicModeUpdated(); // Function GameInfoContentWidgetBase.GameInfoContentWidgetBase_C.OnCinematicModeUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void _1(bool NewValue); // Function GameInfoContentWidgetBase.GameInfoContentWidgetBase_C._1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void PulseTimer(); // Function GameInfoContentWidgetBase.GameInfoContentWidgetBase_C.PulseTimer // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void SetHUDModel(struct UCoordinatedHUDModel* HUDModel); // Function GameInfoContentWidgetBase.GameInfoContentWidgetBase_C.SetHUDModel // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (int32_t EntryPoint); // Function GameInfoContentWidgetBase.GameInfoContentWidgetBase_C. // (Final|UbergraphFunction|HasDefaults) // @ game+0x3322a90
};

