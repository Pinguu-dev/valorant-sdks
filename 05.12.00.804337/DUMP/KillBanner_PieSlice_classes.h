// WidgetBlueprintGeneratedClass KillBanner_PieSlice.
// Size: 0x33c (Inherited: 0x2c8)
struct U : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct UWidgetAnimation* AnimateIn; // 0x2d0(0x08)
	struct UWidgetAnimation* ; // 0x2d8(0x08)
	struct UWidgetAnimation* ; // 0x2e0(0x08)
	struct UWidgetAnimation* ; // 0x2e8(0x08)
	struct UBorder* ; // 0x2f0(0x08)
	struct UImage* hover; // 0x2f8(0x08)
	struct USpacer* ; // 0x300(0x08)
	struct UImage* Up; // 0x308(0x08)
	float Height; // 0x310(0x04)
	char pad_314[0x4]; // 0x314(0x04)
	struct UTexture2D* ; // 0x318(0x08)
	struct UTexture2D* ; // 0x320(0x08)
	int32_t State; // 0x328(0x04)
	struct FLinearColor PrimaryColor; // 0x32c(0x10)

	void SetSize(float Height); // Function KillBanner_PieSlice..SetSize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct FLinearColor PrimaryColor, struct FLinearColor& ); // Function KillBanner_PieSlice.. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322a90
	void (struct FLinearColor PrimaryColor, struct FLinearColor& ); // Function KillBanner_PieSlice.. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322a90
	void (struct UTexture2D* , struct UTexture2D* ); // Function KillBanner_PieSlice.. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct FLinearColor ); // Function KillBanner_PieSlice.. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (int32_t State); // Function KillBanner_PieSlice.. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void PreConstruct(bool IsDesignTime); // Function KillBanner_PieSlice..PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3322a90
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function KillBanner_PieSlice..Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3322a90
	void (int32_t EntryPoint); // Function KillBanner_PieSlice.. // (Final|UbergraphFunction|HasDefaults) // @ game+0x3322a90
};

