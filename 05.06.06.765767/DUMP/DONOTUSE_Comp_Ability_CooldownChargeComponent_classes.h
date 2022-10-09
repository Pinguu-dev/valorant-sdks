// BlueprintGeneratedClass DONOTUSE_Comp_Ability_CooldownChargeComponent.DONOTUSE_Comp_Ability_CooldownChargeComponent_C
// Size: 0x196 (Inherited: 0x168)
struct UDONOTUSE_Comp_Ability_CooldownChargeComponent_C : UEquipmentChargeComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x168(0x08)
	float CooldownSeconds; // 0x170(0x04)
	bool AutoCooldown; // 0x174(0x01)
	char pad_175[0x3]; // 0x175(0x03)
	struct FMulticastInlineDelegate OnCooldownStarted; // 0x178(0x10)
	struct FTimerHandle CooldownTimer; // 0x188(0x08)
	float StartTimeStamp; // 0x190(0x04)
	bool PlaySignatureReplenishVisuals; // 0x194(0x01)
	bool GrantTemporaryCharge; // 0x195(0x01)
};

