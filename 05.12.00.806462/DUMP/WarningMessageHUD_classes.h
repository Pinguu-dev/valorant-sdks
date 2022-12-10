// WidgetBlueprintGeneratedClass WarningMessageHUD.WarningMessageHUD_C
// Size: 0x3a8 (Inherited: 0x2d8)
struct UWarningMessageHUD_C : UCoordinatedHUDElement {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d8(0x08)
	struct UWidgetAnimation* SwapTextBack; // 0x2e0(0x08)
	struct UWidgetAnimation* SwapText; // 0x2e8(0x08)
	struct UWidgetAnimation* Outro; // 0x2f0(0x08)
	struct UWidgetAnimation* Intro; // 0x2f8(0x08)
	struct UWidgetAnimation* BlinkRed; // 0x300(0x08)
	struct UHorizontalBox* HorizontalBox_3; // 0x308(0x08)
	struct UImage* Image; // 0x310(0x08)
	struct UImage* Image_85; // 0x318(0x08)
	struct UScaleBox* ScaleBox_1; // 0x320(0x08)
	struct UTextBlock* TextBlock_2; // 0x328(0x08)
	struct UTextBlock* TextBlock_3; // 0x330(0x08)
	struct UTextBlock* TextBlock_6; // 0x338(0x08)
	int32_t LifeSpan; // 0x340(0x04)
	char pad_344[0x4]; // 0x344(0x04)
	struct FText MessageText; // 0x348(0x18)
	struct FText SubText; // 0x360(0x18)
	struct FTimerHandle WarningTimer; // 0x378(0x08)
	struct UAkAudioEvent* AudioPulse; // 0x380(0x08)
	int32_t MessageCount; // 0x388(0x04)
	bool Continuous; // 0x38c(0x01)
	bool LoopAudio; // 0x38d(0x01)
	bool PlayIntroAndOutro; // 0x38e(0x01)
	bool OutroStarted; // 0x38f(0x01)
	struct FText Message Two Text; // 0x390(0x18)

	void AdjustLayoutForDevice(); // Function WarningMessageHUD.WarningMessageHUD_C.AdjustLayoutForDevice // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322f00
	enum class ESlateVisibility Get_SubText_Visibility(); // Function WarningMessageHUD.WarningMessageHUD_C.Get_SubText_Visibility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322f00
	void SetupWarningText(int32_t LifeSpan, struct FText MessageText, struct FText MessageTwoText, struct FText SubText, struct UAkAudioEvent* AkEvent, bool Continuous, float PulseTime, bool LoopAudio, bool PlayIntroAndOutro); // Function WarningMessageHUD.WarningMessageHUD_C.SetupWarningText // (BlueprintCallable|BlueprintEvent) // @ game+0x3322f00
	void PlayWarning(); // Function WarningMessageHUD.WarningMessageHUD_C.PlayWarning // (BlueprintCallable|BlueprintEvent) // @ game+0x3322f00
	void Destruct(); // Function WarningMessageHUD.WarningMessageHUD_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3322f00
	void UpdateWarningText(struct FText MessageText, struct FText SubText); // Function WarningMessageHUD.WarningMessageHUD_C.UpdateWarningText // (BlueprintCallable|BlueprintEvent) // @ game+0x3322f00
	void UpdateColor(struct FSlateColor TintColor); // Function WarningMessageHUD.WarningMessageHUD_C.UpdateColor // (BlueprintCallable|BlueprintEvent) // @ game+0x3322f00
	void OnCinemtaticModeChanged(); // Function WarningMessageHUD.WarningMessageHUD_C.OnCinemtaticModeChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x3322f00
	void Construct(); // Function WarningMessageHUD.WarningMessageHUD_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3322f00
	void HideWarning(); // Function WarningMessageHUD.WarningMessageHUD_C.HideWarning // (BlueprintCallable|BlueprintEvent) // @ game+0x3322f00
	void PlayOutro(); // Function WarningMessageHUD.WarningMessageHUD_C.PlayOutro // (BlueprintCallable|BlueprintEvent) // @ game+0x3322f00
	void RemoveAfterAnim(); // Function WarningMessageHUD.WarningMessageHUD_C.RemoveAfterAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x3322f00
	void ExecuteUbergraph_WarningMessageHUD(int32_t EntryPoint); // Function WarningMessageHUD.WarningMessageHUD_C.ExecuteUbergraph_WarningMessageHUD // (Final|UbergraphFunction|HasDefaults) // @ game+0x3322f00
};

