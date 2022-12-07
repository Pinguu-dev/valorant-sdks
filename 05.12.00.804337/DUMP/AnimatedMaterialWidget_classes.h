// WidgetBlueprintGeneratedClass AnimatedMaterialWidget.
// Size: 0x33c (Inherited: 0x2c8)
struct U : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct UNamedSlot* Content; // 0x2d0(0x08)
	struct URetainerBox* ; // 0x2d8(0x08)
	int32_t FPS; // 0x2e0(0x04)
	float FadeInDuration; // 0x2e4(0x04)
	struct UMaterialInstanceDynamic* ; // 0x2e8(0x08)
	struct UMaterial* Material; // 0x2f0(0x08)
	struct UCurveFloat* ; // 0x2f8(0x08)
	struct UCurveLinearColor* ; // 0x300(0x08)
	struct UTexture2D* ; // 0x308(0x08)
	float ; // 0x310(0x04)
	float ; // 0x314(0x04)
	float UpdateInterval; // 0x318(0x04)
	char pad_31C[0x4]; // 0x31c(0x04)
	struct FTimerHandle ; // 0x320(0x08)
	bool ; // 0x328(0x01)
	bool ; // 0x329(0x01)
	bool ; // 0x32a(0x01)
	char pad_32B[0x5]; // 0x32b(0x05)
	struct UTexture2D* OverrideTexture; // 0x330(0x08)
	float FadeOutDuration; // 0x338(0x04)

	void (); // Function AnimatedMaterialWidget.. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (); // Function AnimatedMaterialWidget.. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (); // Function AnimatedMaterialWidget.. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void PreConstruct(bool IsDesignTime); // Function AnimatedMaterialWidget..PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3322a90
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function AnimatedMaterialWidget..Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3322a90
	void (bool ); // Function AnimatedMaterialWidget.. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void Loop(); // Function AnimatedMaterialWidget..Loop // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void OnInitialized(); // Function AnimatedMaterialWidget..OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3322a90
	void (int32_t EntryPoint); // Function AnimatedMaterialWidget.. // (Final|UbergraphFunction|HasDefaults) // @ game+0x3322a90
};

