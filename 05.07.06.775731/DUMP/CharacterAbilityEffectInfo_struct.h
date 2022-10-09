// UserDefinedStruct CharacterAbilityEffectInfo.CharacterAbilityEffectInfo
// Size: 0x38 (Inherited: 0x00)
struct FCharacterAbilityEffectInfo {
	enum class ECharacterAbilityStatisticList Statistic_2_0868666A4F6501815AB301BB615B2B5C; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FText LocalizedStat_14_C3A26F5E46CDAD94571AE6B0EDEA058B; // 0x08(0x18)
	float Value_7_E46F38AE4D245059AF7BB09E301C3C65; // 0x20(0x04)
	float Time_8_6CD58DD7441CBD0407DD1F89FDD05167; // 0x24(0x04)
	struct TArray<struct FCharacterAbilityAffectedTargetInfo> AffectedTargetsArray_29_CA57B47B4F4CB9D69F7E61865EB48BD4; // 0x28(0x10)
};

