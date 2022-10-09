// WidgetBlueprintGeneratedClass TeamScoreHUDElement.TeamScoreHUDElement_C
// Size: 0x31d (Inherited: 0x2d8)
struct UTeamScoreHUDElement_C : UCoordinatedHUDElement {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d8(0x08)
	struct UTextBlock* Score; // 0x2e0(0x08)
	struct UCoordinatedHUDModel* HUDModel; // 0x2e8(0x08)
	bool bShowEnemyScore; // 0x2f0(0x01)
	char pad_2F1[0x3]; // 0x2f1(0x03)
	struct FLinearColor DisplayColor; // 0x2f4(0x10)
	char pad_304[0x4]; // 0x304(0x04)
	struct UImage* TeamColor_1; // 0x308(0x08)
	struct FHUDVisibilityConfig VisibilityConfig; // 0x310(0x0d)
};

