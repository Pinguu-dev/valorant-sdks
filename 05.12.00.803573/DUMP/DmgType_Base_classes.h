// BlueprintGeneratedClass DmgType_Base.DmgType_Base_C
// Size: 0x14f (Inherited: 0x130)
struct UDmgType_Base_C : UShooterDamageType {
	bool ; // 0x130(0x01)
	bool ; // 0x131(0x01)
	bool ; // 0x132(0x01)
	char pad_133[0x5]; // 0x133(0x05)
	struct TArray<enum class DirectionEnum> ; // 0x138(0x10)
	enum class DirectionEnum ; // 0x148(0x01)
	bool ; // 0x149(0x01)
	bool ; // 0x14a(0x01)
	bool ; // 0x14b(0x01)
	enum class EAresItemSlot EquippableSlot; // 0x14c(0x01)
	bool bKillGivesUltPoint; // 0x14d(0x01)
	bool ; // 0x14e(0x01)

	bool (struct UObject* Instigator, struct UDamageResponse* Response); // Function DmgType_Base.DmgType_Base_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x3322a60
	struct UCharacterAbilityStatisticsComponent_C* (struct UDamageResponse* Response, int32_t& CastIndex); // Function DmgType_Base.DmgType_Base_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x3322a60
	void RespondToDamage(struct UDamageResponse* DamageResponse); // Function DmgType_Base.DmgType_Base_C.RespondToDamage // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x3322a60
};

