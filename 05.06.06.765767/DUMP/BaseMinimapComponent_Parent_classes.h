// BlueprintGeneratedClass BaseMinimapComponent_Parent.BaseMinimapComponent_Parent_C
// Size: 0x663 (Inherited: 0x500)
struct UBaseMinimapComponent_Parent_C : UAresMinimapComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x500(0x08)
	bool Parameters Changed; // 0x508(0x01)
	char pad_509[0x3]; // 0x509(0x03)
	struct FVector2D Size; // 0x50c(0x08)
	struct FLinearColor ColorAndOpacity; // 0x514(0x10)
	struct FLinearColor EnemyColorAndOpacity; // 0x524(0x10)
	char pad_534[0x4]; // 0x534(0x04)
	struct FSlateBrush IconBrush; // 0x538(0x90)
	struct FSlateBrush EnemyIcon; // 0x5c8(0x90)
	struct UVisibilityComponent* VisibilityComp; // 0x658(0x08)
	bool ActiveOnMinimap; // 0x660(0x01)
	bool StartActive; // 0x661(0x01)
	bool UseTeamColorAndBrush; // 0x662(0x01)
};

