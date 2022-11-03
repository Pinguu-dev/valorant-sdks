// WidgetBlueprintGeneratedClass AnimatedMaterialWidget.AnimatedMaterialWidget_C
// Size: 0x33c (Inherited: 0x2c8)
struct UAnimatedMaterialWidget_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct UNamedSlot* Content; // 0x2d0(0x08)
	struct URetainerBox* Retainer; // 0x2d8(0x08)
	int32_t FPS; // 0x2e0(0x04)
	float FadeInDuration; // 0x2e4(0x04)
	struct UMaterialInstanceDynamic* MaterialRef; // 0x2e8(0x08)
	struct UMaterial* Material; // 0x2f0(0x08)
	struct UCurveFloat* DissolveCurve; // 0x2f8(0x08)
	struct UCurveLinearColor* ColorAndOpacityCurve; // 0x300(0x08)
	struct UTexture2D* DissolveTexture; // 0x308(0x08)
	float LoopTime; // 0x310(0x04)
	float PercentComplete; // 0x314(0x04)
	float UpdateInterval; // 0x318(0x04)
	char pad_31C[0x4]; // 0x31c(0x04)
	struct FTimerHandle LoopHandle; // 0x320(0x08)
	bool IsForward; // 0x328(0x01)
	bool AutoPlay; // 0x329(0x01)
	bool RenderContents; // 0x32a(0x01)
	char pad_32B[0x5]; // 0x32b(0x05)
	struct UTexture2D* OverrideTexture; // 0x330(0x08)
	float FadeOutDuration; // 0x338(0x04)

	void VerifyMaterialTextures(); // Function AnimatedMaterialWidget.AnimatedMaterialWidget_C.VerifyMaterialTextures // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void Recache(); // Function AnimatedMaterialWidget.AnimatedMaterialWidget_C.Recache // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void UpdateParams(); // Function AnimatedMaterialWidget.AnimatedMaterialWidget_C.UpdateParams // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void PreConstruct(bool IsDesignTime); // Function AnimatedMaterialWidget.AnimatedMaterialWidget_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x32f73d0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function AnimatedMaterialWidget.AnimatedMaterialWidget_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x32f73d0
	void BeginAnimation(bool PlayForward); // Function AnimatedMaterialWidget.AnimatedMaterialWidget_C.BeginAnimation // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void Loop(); // Function AnimatedMaterialWidget.AnimatedMaterialWidget_C.Loop // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void OnInitialized(); // Function AnimatedMaterialWidget.AnimatedMaterialWidget_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x32f73d0
	void ExecuteUbergraph_AnimatedMaterialWidget(int32_t EntryPoint); // Function AnimatedMaterialWidget.AnimatedMaterialWidget_C.ExecuteUbergraph_AnimatedMaterialWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x32f73d0
};

