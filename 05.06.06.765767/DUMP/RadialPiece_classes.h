// WidgetBlueprintGeneratedClass RadialPiece.RadialPiece_C
// Size: 0x378 (Inherited: 0x2c8)
struct URadialPiece_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct UImage* Icon; // 0x2d0(0x08)
	struct UCanvasPanel* IconContainer; // 0x2d8(0x08)
	struct UTextBlock* VOText; // 0x2e0(0x08)
	float StartAngle; // 0x2e8(0x04)
	float SectorSize; // 0x2ec(0x04)
	float MouseAngle; // 0x2f0(0x04)
	float MouseDist; // 0x2f4(0x04)
	float InnerRadius; // 0x2f8(0x04)
	float OuterRadius; // 0x2fc(0x04)
	struct UTexture* IconTexture; // 0x300(0x08)
	struct FText PingText; // 0x308(0x18)
	float IconSize; // 0x320(0x04)
	enum class NonVerbalCommTypesEnum VOLine; // 0x324(0x01)
	bool isIconBased; // 0x325(0x01)
	char pad_326[0x2]; // 0x326(0x02)
	struct TMap<struct UTexture*, struct FLinearColor> IconToColorMap; // 0x328(0x50)
};

