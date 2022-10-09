// BlueprintGeneratedClass Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C
// Size: 0x139 (Inherited: 0xe8)
struct UComp_Ability_CooldownComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	float CooldownSeconds; // 0xf0(0x04)
	bool AutoCooldown; // 0xf4(0x01)
	char pad_F5[0x3]; // 0xf5(0x03)
	struct FMulticastInlineDelegate OnCooldownStarted; // 0xf8(0x10)
	struct FTimerHandle CooldownTimer; // 0x108(0x08)
	float StartTimeStamp; // 0x110(0x04)
	bool PlaySignatureReplenishVisuals; // 0x114(0x01)
	char pad_115[0x3]; // 0x115(0x03)
	struct FMulticastInlineDelegate OnCooldownComplete; // 0x118(0x10)
	float DPT_Cooldown; // 0x128(0x04)
	enum class EGameFeatureToggleName DPT_FeatureToggle; // 0x12c(0x01)
	char pad_12D[0x3]; // 0x12d(0x03)
	int32_t MaxChargesThisRound; // 0x130(0x04)
	bool ReplenishTempCharges; // 0x134(0x01)
	bool AllowPreRoundUse; // 0x135(0x01)
	bool RechargeDisabled; // 0x136(0x01)
	bool PauseDuringPreRound; // 0x137(0x01)
	bool InstantCooldownOnRecall; // 0x138(0x01)
};

