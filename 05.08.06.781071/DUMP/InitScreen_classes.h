// WidgetBlueprintGeneratedClass InitScreen.InitScreen_C
// Size: 0x37d (Inherited: 0x2d0)
struct UInitScreen_C : UInitScreenBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d0(0x08)
	struct UWidgetAnimation* PhotoSensitivity; // 0x2d8(0x08)
	struct UWidgetAnimation* AgeRating; // 0x2e0(0x08)
	struct UWidgetAnimation* Intro; // 0x2e8(0x08)
	struct UCanvasPanel* AgeRatingDisplay; // 0x2f0(0x08)
	struct UImage* BackgroundTint3; // 0x2f8(0x08)
	struct UFatalVanguardErrorNotification_C* FatalVanguardErrorNotification; // 0x300(0x08)
	struct UFatalVanguardRebootNotification_C* FatalVanguardRebootNotification; // 0x308(0x08)
	struct UImage* Image_1; // 0x310(0x08)
	struct UInitFailure_C* InitFailure; // 0x318(0x08)
	struct UImage* Localized_Boot_Logo; // 0x320(0x08)
	struct ULoginQueue_C* LoginQueue; // 0x328(0x08)
	struct UPhotoSensitivityWarning_C* PhotoSensitivityWarning; // 0x330(0x08)
	struct UImage* PlayerAlias_Boot_Logo; // 0x338(0x08)
	struct UOverlay* PlayerAliasInitContainer; // 0x340(0x08)
	struct USizeBox* RegionalLogoSizeBox; // 0x348(0x08)
	struct UCanvasPanel* Spinner; // 0x350(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_2; // 0x358(0x08)
	bool WarningPeriodComplete; // 0x360(0x01)
	char pad_361[0x3]; // 0x361(0x03)
	struct FName HealthWarningEnabledKey; // 0x364(0x0c)
	struct FName HealthWarningSecondsKey; // 0x370(0x0c)
	bool IntroFinished; // 0x37c(0x01)

	void SequenceEvent__ENTRYPOINTInitScreen_1(); // Function InitScreen.InitScreen_C.SequenceEvent__ENTRYPOINTInitScreen_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void CreatePlayerAliasInitWidget(); // Function InitScreen.InitScreen_C.CreatePlayerAliasInitWidget // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void UpdateLocalizationOverrides(); // Function InitScreen.InitScreen_C.UpdateLocalizationOverrides // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void UpdateState(); // Function InitScreen.InitScreen_C.UpdateState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void SequenceEvent_1(); // Function InitScreen.InitScreen_C.SequenceEvent_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void GetInitializingWidget(struct UWidget*& NewParam); // Function InitScreen.InitScreen_C.GetInitializingWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3520f50
	void GetErrorWidget(struct UWidget*& Widget); // Function InitScreen.InitScreen_C.GetErrorWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3520f50
	void OnAnimationFinished(struct UWidgetAnimation* Animation); // Function InitScreen.InitScreen_C.OnAnimationFinished // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x3520f50
	void ShowSplashScreens(); // Function InitScreen.InitScreen_C.ShowSplashScreens // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void HandlePhotoSensitivityWarningDismissed(); // Function InitScreen.InitScreen_C.HandlePhotoSensitivityWarningDismissed // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void Construct(); // Function InitScreen.InitScreen_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3520f50
	void ExecuteUbergraph_InitScreen(int32_t EntryPoint); // Function InitScreen.InitScreen_C.ExecuteUbergraph_InitScreen // (Final|UbergraphFunction) // @ game+0x3520f50
};

