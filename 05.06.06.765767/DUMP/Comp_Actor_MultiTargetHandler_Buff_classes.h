// BlueprintGeneratedClass Comp_Actor_MultiTargetHandler_Buff.Comp_Actor_MultiTargetHandler_Buff_C
// Size: 0x17e (Inherited: 0xe8)
struct UComp_Actor_MultiTargetHandler_Buff_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	struct TMap<struct AShooterCharacter*, struct FActiveGameplayEffectHandle> ActorAndBuffID_Map; // 0xf0(0x50)
	bool RemoveAllActiveBuffsOnEndPlay; // 0x140(0x01)
	char pad_141[0x3]; // 0x141(0x03)
	int32_t StacksRemoved; // 0x144(0x04)
	struct UAresGameplayBuff* BuffClass; // 0x148(0x08)
	float BuffLevel; // 0x150(0x04)
	char pad_154[0x4]; // 0x154(0x04)
	struct FMulticastInlineDelegate AuthBuffApplied; // 0x158(0x10)
	struct FMulticastInlineDelegate AuthBuffRemoved; // 0x168(0x10)
	bool ShouldTrackStatistics; // 0x178(0x01)
	enum class ECharacterAbilityStatisticList Statistic; // 0x179(0x01)
	enum class EAresAlliance StatisticAlliance; // 0x17a(0x01)
	bool Allow Reapply; // 0x17b(0x01)
	bool CanApplyToDeadCharacters; // 0x17c(0x01)
	bool AllowReapplyIfBuffIsNotActive; // 0x17d(0x01)
};

