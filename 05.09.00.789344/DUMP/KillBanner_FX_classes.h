// WidgetBlueprintGeneratedClass KillBanner_FX.KillBanner_FX_C
// Size: 0x2d8 (Inherited: 0x2c8)
struct UKillBanner_FX_C : UUserWidget {
	struct UAnimatedSpriteWidget_C* Left; // 0x2c8(0x08)
	struct UAnimatedSpriteWidget_C* Right; // 0x2d0(0x08)

	void PlayAnimationsForTier(int32_t Teir); // Function KillBanner_FX.KillBanner_FX_C.PlayAnimationsForTier // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void ConfigureFXData(struct TArray<struct UPaperFlipbook*>& FlipBooks, struct FLinearColor ColorTint, struct FVector2D SizeOverride); // Function KillBanner_FX.KillBanner_FX_C.ConfigureFXData // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
};

