// WidgetBlueprintGeneratedClass KillBanner_Base.KillBanner_Base_C
// Size: 0x488 (Inherited: 0x2c8)
struct UKillBanner_Base_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct UWidgetAnimation* HeadshotCleanup; // 0x2d0(0x08)
	struct UWidgetAnimation* HeadshotFlicker; // 0x2d8(0x08)
	struct UWidgetAnimation* IntroAnimation; // 0x2e0(0x08)
	struct UTextBlock* Assister1; // 0x2e8(0x08)
	struct UTextBlock* Assister2; // 0x2f0(0x08)
	struct UTextBlock* Assister3; // 0x2f8(0x08)
	struct UTextBlock* Assister4; // 0x300(0x08)
	struct UTextBlock* Assister5; // 0x308(0x08)
	struct UVerticalBox* AssistersBox; // 0x310(0x08)
	struct UTextBlock* AssistersTitle; // 0x318(0x08)
	struct UImage* BadgeDefault; // 0x320(0x08)
	struct UAnimatedMaterialWidget_C* FrameMaterial; // 0x328(0x08)
	struct UImage* FrameTexture; // 0x330(0x08)
	struct UOverlay* GlobalHolder; // 0x338(0x08)
	struct UHeadShot_Base_C* HeadShot_Base; // 0x340(0x08)
	struct UOverlay* HeadShotCallout; // 0x348(0x08)
	struct UHeadShotParticles_C* HeadShotParticles; // 0x350(0x08)
	struct UImage* HS_Bg; // 0x358(0x08)
	struct UAnimatedMaterialWidget_C* KillBadgeMaterial; // 0x360(0x08)
	struct UKillBanner_FX_C* KillBanner_FX; // 0x368(0x08)
	struct UKillBanner_Wheel_C* KillBanner_Wheel; // 0x370(0x08)
	struct UOverlay* OptionalEffects; // 0x378(0x08)
	struct UImage* shadow; // 0x380(0x08)
	struct UAnimatedSpriteWidget_C* Tier1FireEffect; // 0x388(0x08)
	struct UAnimatedSpriteWidget_C* Tier2Sparks; // 0x390(0x08)
	int32_t CurrentKillCount; // 0x398(0x04)
	bool IsHeadshot; // 0x39c(0x01)
	char pad_39D[0x3]; // 0x39d(0x03)
	int32_t MaxKills; // 0x3a0(0x04)
	char pad_3A4[0x4]; // 0x3a4(0x04)
	struct FKillBannerStruct KillBannerData; // 0x3a8(0xb0)
	struct UOptionalKillBannerEffects_Parent_C* OptionalFXRef; // 0x458(0x08)
	struct FMulticastInlineDelegate OnFinishedPlaying; // 0x460(0x10)
	bool IsPreview; // 0x470(0x01)
	char pad_471[0x7]; // 0x471(0x07)
	struct TArray<struct FAresAssist> Assisters; // 0x478(0x10)

	void SequenceEvent__ENTRYPOINTKillBanner_Base_5(); // Function KillBanner_Base.KillBanner_Base_C.SequenceEvent__ENTRYPOINTKillBanner_Base_5 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void SequenceEvent__ENTRYPOINTKillBanner_Base_4(); // Function KillBanner_Base.KillBanner_Base_C.SequenceEvent__ENTRYPOINTKillBanner_Base_4 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void SequenceEvent__ENTRYPOINTKillBanner_Base_3(); // Function KillBanner_Base.KillBanner_Base_C.SequenceEvent__ENTRYPOINTKillBanner_Base_3 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void SequenceEvent__ENTRYPOINTKillBanner_Base_2(); // Function KillBanner_Base.KillBanner_Base_C.SequenceEvent__ENTRYPOINTKillBanner_Base_2 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void SequenceEvent__ENTRYPOINTKillBanner_Base_1(); // Function KillBanner_Base.KillBanner_Base_C.SequenceEvent__ENTRYPOINTKillBanner_Base_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void FormatAssistText(struct FAresAssist Assist, struct FText& AssistText); // Function KillBanner_Base.KillBanner_Base_C.FormatAssistText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3520f50
	void PopulateAssisterWidgets(); // Function KillBanner_Base.KillBanner_Base_C.PopulateAssisterWidgets // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void PlayKillBannerSound(bool WasVisible, int32_t KillCount); // Function KillBanner_Base.KillBanner_Base_C.PlayKillBannerSound // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void StartKillBannerAnimation(); // Function KillBanner_Base.KillBanner_Base_C.StartKillBannerAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void PassDataToWidgets(); // Function KillBanner_Base.KillBanner_Base_C.PassDataToWidgets // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void ConfigureKillBanner(struct FKillBannerStruct EquippableSkinUIData, int32_t KillCount, int32_t MaxKills, bool WasHeadshot, bool bIsPreview, struct TArray<struct FAresAssist>& Assisters); // Function KillBanner_Base.KillBanner_Base_C.ConfigureKillBanner // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void TriggerEmblemFadeout(); // Function KillBanner_Base.KillBanner_Base_C.TriggerEmblemFadeout // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void TriggerGeneralFadeout(); // Function KillBanner_Base.KillBanner_Base_C.TriggerGeneralFadeout // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void TriggerFX(); // Function KillBanner_Base.KillBanner_Base_C.TriggerFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void TriggerGeneralFadeIn(); // Function KillBanner_Base.KillBanner_Base_C.TriggerGeneralFadeIn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void TriggerWheelSpin(); // Function KillBanner_Base.KillBanner_Base_C.TriggerWheelSpin // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void TriggerPieSliceFadeIn(); // Function KillBanner_Base.KillBanner_Base_C.TriggerPieSliceFadeIn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void Wait1FrameToPlayAnimation(); // Function KillBanner_Base.KillBanner_Base_C.Wait1FrameToPlayAnimation // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void OnInitialized(); // Function KillBanner_Base.KillBanner_Base_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3520f50
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function KillBanner_Base.KillBanner_Base_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3520f50
	void Construct(); // Function KillBanner_Base.KillBanner_Base_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3520f50
	void DelayedSound(float Delay, bool WasVisible, int32_t KillCount); // Function KillBanner_Base.KillBanner_Base_C.DelayedSound // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void PreConstruct(bool IsDesignTime); // Function KillBanner_Base.KillBanner_Base_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3520f50
	void ExecuteUbergraph_KillBanner_Base(int32_t EntryPoint); // Function KillBanner_Base.KillBanner_Base_C.ExecuteUbergraph_KillBanner_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x3520f50
	void OnFinishedPlaying__DelegateSignature(); // Function KillBanner_Base.KillBanner_Base_C.OnFinishedPlaying__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
};

