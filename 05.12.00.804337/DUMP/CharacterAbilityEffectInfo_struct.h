// UserDefinedStruct CharacterAbilityEffectInfo.CharacterAbilityEffectInfo
// Size: 0x38 (Inherited: 0x00)
struct FCharacterAbilityEffectInfo {
	enum class ECharacterAbilityStatisticList ; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FText ; // 0x08(0x18)
	float ; // 0x20(0x04)
	float ; // 0x24(0x04)
	struct TArray<struct FCharacterAbilityAffectedTargetInfo> ; // 0x28(0x10)
};

