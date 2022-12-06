// WidgetBlueprintGeneratedClass RadialMenu.
// Size: 0x410 (Inherited: 0x2c8)
struct U : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct UCanvasPanel* CanvasPanel_1; // 0x2d0(0x08)
	struct UImage* ; // 0x2d8(0x08)
	struct UImage* ; // 0x2e0(0x08)
	struct UImage* Image; // 0x2e8(0x08)
	struct UImage* Image_158; // 0x2f0(0x08)
	struct UTextBlock* ; // 0x2f8(0x08)
	struct UOverlay* Items; // 0x300(0x08)
	struct UCanvasPanel* ; // 0x308(0x08)
	struct UImage* ; // 0x310(0x08)
	struct UImage* Wheel; // 0x318(0x08)
	struct URetainerBox* ; // 0x320(0x08)
	float ; // 0x328(0x04)
	float ; // 0x32c(0x04)
	float ; // 0x330(0x04)
	int32_t ; // 0x334(0x04)
	int32_t ; // 0x338(0x04)
	bool ; // 0x33c(0x01)
	char pad_33D[0x3]; // 0x33d(0x03)
	struct FVector2D ; // 0x340(0x08)
	bool ; // 0x348(0x01)
	char pad_349[0x7]; // 0x349(0x07)
	struct TMap<struct UTexture*, struct FText> ; // 0x350(0x50)
	struct FText ; // 0x3a0(0x18)
	struct UMaterialInstanceDynamic* ; // 0x3b8(0x08)
	float ; // 0x3c0(0x04)
	char pad_3C4[0x4]; // 0x3c4(0x04)
	struct UMaterialInstanceDynamic* ; // 0x3c8(0x08)
	struct TArray<enum class NonVerbalCommTypesEnum> ; // 0x3d0(0x10)
	bool ; // 0x3e0(0x01)
	char pad_3E1[0x7]; // 0x3e1(0x07)
	struct FText ; // 0x3e8(0x18)
	int32_t PointerIndex; // 0x400(0x04)
	struct FVector2D ; // 0x404(0x08)
	float ; // 0x40c(0x04)

	void OnPaint(struct FPaintContext& Context); // Function RadialMenu..OnPaint // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x3322a60
	bool (struct FVector2D ); // Function RadialMenu.. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322a60
	float (struct FVector2D A); // Function RadialMenu.. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322a60
	void (struct FPointerEvent MouseEvent); // Function RadialMenu.. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct FPointerEvent MouseEvent, bool& Success); // Function RadialMenu.. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function RadialMenu.. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void OnShow(); // Function RadialMenu..OnShow // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct FGeometry MyGeometry); // Function RadialMenu.. // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function RadialMenu..Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3322a60
	void (struct TArray<struct UTexture*>& , struct TArray<enum class NonVerbalCommTypesEnum>& , bool ); // Function RadialMenu.. // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void PreConstruct(bool IsDesignTime); // Function RadialMenu..PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3322a60
	void Initialize(); // Function RadialMenu..Initialize // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (int32_t EntryPoint); // Function RadialMenu.. // (Final|UbergraphFunction|HasDefaults) // @ game+0x3322a60
};

