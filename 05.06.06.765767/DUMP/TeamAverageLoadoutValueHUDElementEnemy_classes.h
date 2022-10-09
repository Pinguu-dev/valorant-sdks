// WidgetBlueprintGeneratedClass TeamAverageLoadoutValueHUDElementEnemy.TeamAverageLoadoutValueHUDElementEnemy_C
// Size: 0x324 (Inherited: 0x2d8)
struct UTeamAverageLoadoutValueHUDElementEnemy_C : UCoordinatedHUDElement {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d8(0x08)
	struct UWidgetAnimation* highThreatBgPulse; // 0x2e0(0x08)
	struct UOverlay* highEnemyMoneyContainer; // 0x2e8(0x08)
	struct UImage* highMoneyAlertBg; // 0x2f0(0x08)
	struct UImage* highMoneyAlertIcon; // 0x2f8(0x08)
	struct UTextBlock* Money; // 0x300(0x08)
	struct UCoordinatedHUDModel* HUDModel; // 0x308(0x08)
	bool bShowEnemyValue; // 0x310(0x01)
	char pad_311[0x3]; // 0x311(0x03)
	struct FLinearColor DisplayColor; // 0x314(0x10)
};

