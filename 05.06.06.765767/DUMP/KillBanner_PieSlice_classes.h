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
};

