// BlueprintGeneratedClass DmgType_Base.DmgType_Base_C
// Size: 0x14f (Inherited: 0x130)
struct UDmgType_Base_C : UShooterDamageType {
	bool ShouldPlayVO_Pain; // 0x130(0x01)
	bool ShowDamageDirection; // 0x131(0x01)
	bool ShowNormalDamageIndicators; // 0x132(0x01)
	char pad_133[0x5]; // 0x133(0x05)
	struct TArray<enum class DirectionEnum> CustomDirectionalDamageBlurs; // 0x138(0x10)
	enum class DirectionEnum CustomHUD_ShakeDirection; // 0x148(0x01)
	bool ShowCustomShake; // 0x149(0x01)
	bool bReportDamageDone; // 0x14a(0x01)
	bool bReportKills; // 0x14b(0x01)
	enum class EAresItemSlot EquippableSlot; // 0x14c(0x01)
	bool bKillGivesUltPoint; // 0x14d(0x01)
	bool PreventsHealing; // 0x14e(0x01)
};

