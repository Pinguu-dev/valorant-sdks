// WidgetBlueprintGeneratedClass RadialMenu.RadialMenu_C
// Size: 0x410 (Inherited: 0x2c8)
struct URadialMenu_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct UCanvasPanel* CanvasPanel_1; // 0x2d0(0x08)
	struct UImage* ClampedDot; // 0x2d8(0x08)
	struct UImage* CursorDot; // 0x2e0(0x08)
	struct UImage* Image; // 0x2e8(0x08)
	struct UImage* Image_158; // 0x2f0(0x08)
	struct UTextBlock* intendedPingText; // 0x2f8(0x08)
	struct UOverlay* Items; // 0x300(0x08)
	struct UCanvasPanel* NeedleContainer; // 0x308(0x08)
	struct UImage* RotatingCursor; // 0x310(0x08)
	struct UImage* Wheel; // 0x318(0x08)
	struct URetainerBox* WheelRTT; // 0x320(0x08)
	float MouseAngle; // 0x328(0x04)
	float MouseDist; // 0x32c(0x04)
	float RadiusSelectableInner; // 0x330(0x04)
	int32_t NumOptions; // 0x334(0x04)
	int32_t LastSelected; // 0x338(0x04)
	bool CenterMouseOnShow; // 0x33c(0x01)
	char pad_33D[0x3]; // 0x33d(0x03)
	struct FVector2D MouseReferencePosition; // 0x340(0x08)
	bool ClampMouseCursor; // 0x348(0x01)
	char pad_349[0x7]; // 0x349(0x07)
	struct TMap<struct UTexture*, struct FText> iconToTextMap; // 0x350(0x50)
	struct FText basePingName; // 0x3a0(0x18)
	struct UMaterialInstanceDynamic* WheelMaterial; // 0x3b8(0x08)
	float RadiusSelectableOuter; // 0x3c0(0x04)
	char pad_3C4[0x4]; // 0x3c4(0x04)
	struct UMaterialInstanceDynamic* CursorMaterial; // 0x3c8(0x08)
	struct TArray<enum class NonVerbalCommTypesEnum> VOLinesArray; // 0x3d0(0x10)
	bool IsPings; // 0x3e0(0x01)
	char pad_3E1[0x7]; // 0x3e1(0x07)
	struct FText BlankText; // 0x3e8(0x18)
	int32_t PointerIndex; // 0x400(0x04)
	struct FVector2D PointerPosition; // 0x404(0x08)
	float CursorRadius; // 0x40c(0x04)

	void OnPaint(struct FPaintContext& Context); // Function RadialMenu.RadialMenu_C.OnPaint // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x3520f50
	bool CheckIfGamepadStickReleased(struct FVector2D StickVectorWhenClosed); // Function RadialMenu.RadialMenu_C.CheckIfGamepadStickReleased // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3520f50
	float CalculateAngleFromVector2D(struct FVector2D A); // Function RadialMenu.RadialMenu_C.CalculateAngleFromVector2D // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3520f50
	void OnShowMobile(struct FPointerEvent MouseEvent); // Function RadialMenu.RadialMenu_C.OnShowMobile // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void UpdatePointerPositionFromMouseEvent(struct FPointerEvent MouseEvent, bool& Success); // Function RadialMenu.RadialMenu_C.UpdatePointerPositionFromMouseEvent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void UpdateHighlightedSegment(); // Function RadialMenu.RadialMenu_C.UpdateHighlightedSegment // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void OnShow(); // Function RadialMenu.RadialMenu_C.OnShow // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void UpdateMouseParams(struct FGeometry MyGeometry); // Function RadialMenu.RadialMenu_C.UpdateMouseParams // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function RadialMenu.RadialMenu_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3520f50
	void CreateRadialPieces(struct TArray<struct UTexture*>& PingIcons, struct TArray<enum class NonVerbalCommTypesEnum>& VOLinesEnum, bool IsPings); // Function RadialMenu.RadialMenu_C.CreateRadialPieces // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void PreConstruct(bool IsDesignTime); // Function RadialMenu.RadialMenu_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3520f50
	void Initialize(); // Function RadialMenu.RadialMenu_C.Initialize // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void ExecuteUbergraph_RadialMenu(int32_t EntryPoint); // Function RadialMenu.RadialMenu_C.ExecuteUbergraph_RadialMenu // (Final|UbergraphFunction|HasDefaults) // @ game+0x3520f50
};

