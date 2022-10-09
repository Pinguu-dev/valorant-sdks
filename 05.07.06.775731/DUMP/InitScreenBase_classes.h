// WidgetBlueprintGeneratedClass InitScreenBase.InitScreenBase_C
// Size: 0x2d0 (Inherited: 0x2c8)
struct UInitScreenBase_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)

	void ShouldShowPhotoSensitivityWarning(bool& ShouldShow); // Function InitScreenBase.InitScreenBase_C.ShouldShowPhotoSensitivityWarning // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3511190
	void DisplayVNWarning(); // Function InitScreenBase.InitScreenBase_C.DisplayVNWarning // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	bool GetRequiresRatingDisplay(); // Function InitScreenBase.InitScreenBase_C.GetRequiresRatingDisplay // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void UpdateLocalizationOverrides(); // Function InitScreenBase.InitScreenBase_C.UpdateLocalizationOverrides // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void UpdateState(); // Function InitScreenBase.InitScreenBase_C.UpdateState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void Construct(); // Function InitScreenBase.InitScreenBase_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3511190
	void OnClientGameInstanceInitStatusChanged(enum class EAresClientGameInstanceInitStatus Status, struct FText ErrorCode); // Function InitScreenBase.InitScreenBase_C.OnClientGameInstanceInitStatusChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void OnQueueUpdated(); // Function InitScreenBase.InitScreenBase_C.OnQueueUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void OnLoginReady(); // Function InitScreenBase.InitScreenBase_C.OnLoginReady // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void OnInitialized(); // Function InitScreenBase.InitScreenBase_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3511190
	void ExecuteUbergraph_InitScreenBase(int32_t EntryPoint); // Function InitScreenBase.InitScreenBase_C.ExecuteUbergraph_InitScreenBase // (Final|UbergraphFunction|HasDefaults) // @ game+0x3511190
};

