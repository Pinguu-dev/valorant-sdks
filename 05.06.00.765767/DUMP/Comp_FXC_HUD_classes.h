// BlueprintGeneratedClass Comp_FXC_HUD.Comp_FXC_HUD_C
// Size: 0x134 (Inherited: 0xf8)
struct UComp_FXC_HUD_C : UEffectComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf8(0x08)
	struct AShooterCharacter* ShooterCharacter; // 0x100(0x08)
	struct UUserWidget* HUD_Element; // 0x108(0x08)
	int32_t ZOrder; // 0x110(0x04)
	char pad_114[0x4]; // 0x114(0x04)
	struct UUserWidget* HUD_Class; // 0x118(0x08)
	struct FMulticastInlineDelegate SetupHUD; // 0x120(0x10)
	bool AllowThirdPerson; // 0x130(0x01)
	bool HUD_Active; // 0x131(0x01)
	bool Default_HUD_Active; // 0x132(0x01)
	bool UseTailTime; // 0x133(0x01)
};

