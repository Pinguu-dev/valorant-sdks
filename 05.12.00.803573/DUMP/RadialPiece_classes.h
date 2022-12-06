// WidgetBlueprintGeneratedClass RadialPiece.
// Size: 0x378 (Inherited: 0x2c8)
struct U : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct UImage* Icon; // 0x2d0(0x08)
	struct UCanvasPanel* ; // 0x2d8(0x08)
	struct UTextBlock* ; // 0x2e0(0x08)
	float ; // 0x2e8(0x04)
	float ; // 0x2ec(0x04)
	float ; // 0x2f0(0x04)
	float ; // 0x2f4(0x04)
	float InnerRadius; // 0x2f8(0x04)
	float OuterRadius; // 0x2fc(0x04)
	struct UTexture* IconTexture; // 0x300(0x08)
	struct FText PingText; // 0x308(0x18)
	float ; // 0x320(0x04)
	enum class NonVerbalCommTypesEnum ; // 0x324(0x01)
	bool ; // 0x325(0x01)
	char pad_326[0x2]; // 0x326(0x02)
	struct TMap<struct UTexture*, struct FLinearColor> ; // 0x328(0x50)

	bool (float , float ); // Function RadialPiece.. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void Construct(); // Function RadialPiece..Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3322a60
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function RadialPiece..Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3322a60
	void (int32_t EntryPoint); // Function RadialPiece.. // (Final|UbergraphFunction|HasDefaults) // @ game+0x3322a60
};

