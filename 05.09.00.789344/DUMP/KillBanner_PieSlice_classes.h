// WidgetBlueprintGeneratedClass KillBanner_PieSlice.KillBanner_PieSlice_C
// Size: 0x33c (Inherited: 0x2c8)
struct UKillBanner_PieSlice_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct UWidgetAnimation* AnimateIn; // 0x2d0(0x08)
	struct UWidgetAnimation* State3_PreviouslyLit; // 0x2d8(0x08)
	struct UWidgetAnimation* State2_CurrentlyLit; // 0x2e0(0x08)
	struct UWidgetAnimation* State1_NotLit; // 0x2e8(0x08)
	struct UBorder* Colorizer; // 0x2f0(0x08)
	struct UImage* hover; // 0x2f8(0x08)
	struct USpacer* SpaceMaker; // 0x300(0x08)
	struct UImage* Up; // 0x308(0x08)
	float Height; // 0x310(0x04)
	char pad_314[0x4]; // 0x314(0x04)
	struct UTexture2D* SliceUp; // 0x318(0x08)
	struct UTexture2D* SliceHover; // 0x320(0x08)
	int32_t State; // 0x328(0x04)
	struct FLinearColor PrimaryColor; // 0x32c(0x10)

	void SetSize(float Height); // Function KillBanner_PieSlice.KillBanner_PieSlice_C.SetSize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void LightenColor(struct FLinearColor PrimaryColor, struct FLinearColor& DarkColor); // Function KillBanner_PieSlice.KillBanner_PieSlice_C.LightenColor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x32f73d0
	void DarkenColor(struct FLinearColor PrimaryColor, struct FLinearColor& DarkColor); // Function KillBanner_PieSlice.KillBanner_PieSlice_C.DarkenColor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x32f73d0
	void SetTextures(struct UTexture2D* SliceUp, struct UTexture2D* SliceHover); // Function KillBanner_PieSlice.KillBanner_PieSlice_C.SetTextures // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void SetColor(struct FLinearColor ColorOverride); // Function KillBanner_PieSlice.KillBanner_PieSlice_C.SetColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void SetPipState(int32_t State); // Function KillBanner_PieSlice.KillBanner_PieSlice_C.SetPipState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void PreConstruct(bool IsDesignTime); // Function KillBanner_PieSlice.KillBanner_PieSlice_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x32f73d0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function KillBanner_PieSlice.KillBanner_PieSlice_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x32f73d0
	void ExecuteUbergraph_KillBanner_PieSlice(int32_t EntryPoint); // Function KillBanner_PieSlice.KillBanner_PieSlice_C.ExecuteUbergraph_KillBanner_PieSlice // (Final|UbergraphFunction|HasDefaults) // @ game+0x32f73d0
};

