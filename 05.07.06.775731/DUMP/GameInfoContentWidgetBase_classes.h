// WidgetBlueprintGeneratedClass GameInfoContentWidgetBase.GameInfoContentWidgetBase_C
// Size: 0x320 (Inherited: 0x2f8)
struct UGameInfoContentWidgetBase_C : UGameInfoContentWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2f8(0x08)
	struct UWidgetAnimation* Intro; // 0x300(0x08)
	struct UCoordinatedHUDModel* HUDModel; // 0x308(0x08)
	struct TArray<struct UCoordinatedHUDElement*> CoordinatedHUDElement; // 0x310(0x10)

	void CheckAddWidgetToPlayerScreen(); // Function GameInfoContentWidgetBase.GameInfoContentWidgetBase_C.CheckAddWidgetToPlayerScreen // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void GetGameTimer(struct UTimerHUDElement_C*& Timer HUD Element); // Function GameInfoContentWidgetBase.GameInfoContentWidgetBase_C.GetGameTimer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void OnCinematicModeUpdated(); // Function GameInfoContentWidgetBase.GameInfoContentWidgetBase_C.OnCinematicModeUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void OnAliveStateChanged_Event_1(bool NewValue); // Function GameInfoContentWidgetBase.GameInfoContentWidgetBase_C.OnAliveStateChanged_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void PulseTimer(); // Function GameInfoContentWidgetBase.GameInfoContentWidgetBase_C.PulseTimer // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void SetHUDModel(struct UCoordinatedHUDModel* HUDModel); // Function GameInfoContentWidgetBase.GameInfoContentWidgetBase_C.SetHUDModel // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void ExecuteUbergraph_GameInfoContentWidgetBase(int32_t EntryPoint); // Function GameInfoContentWidgetBase.GameInfoContentWidgetBase_C.ExecuteUbergraph_GameInfoContentWidgetBase // (Final|UbergraphFunction|HasDefaults) // @ game+0x3511190
};

