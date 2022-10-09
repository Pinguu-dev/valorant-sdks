// BlueprintGeneratedClass CharacterAbilityStatisticsComponent.CharacterAbilityStatisticsComponent_C
// Size: 0x228 (Inherited: 0x118)
struct UCharacterAbilityStatisticsComponent_C : UGameStatisticsComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x118(0x08)
	struct TArray<struct FCharacterAbilityCastInfo> AuthAbilityCasts; // 0x120(0x10)
	int32_t MostRecentCast; // 0x130(0x04)
	char pad_134[0x4]; // 0x134(0x04)
	struct TArray<struct FAbilityUsageEvent> TelemetryCastEvents; // 0x138(0x10)
	struct AShooterCharacter* OwningCharacter; // 0x148(0x08)
	struct AAresEquippable* OwningEquippable; // 0x150(0x08)
	struct TMap<enum class ECharacterAbilityStatisticList, struct FText> StatToLocalizedTextMap; // 0x158(0x50)
	float RoundStartTime; // 0x1a8(0x04)
	char pad_1AC[0x4]; // 0x1ac(0x04)
	struct UBaseTeamComponent* TeamComponent; // 0x1b0(0x08)
	bool ReclaimableAbility; // 0x1b8(0x01)
	char pad_1B9[0x7]; // 0x1b9(0x07)
	struct TMap<enum class ECharacterAbilityStatisticList, enum class EAbilityStatisticAccumulationType> StatToAccumulationType; // 0x1c0(0x50)
	bool bAutoTrackDestroyedCount; // 0x210(0x01)
	char pad_211[0x7]; // 0x211(0x07)
	struct TArray<struct FAbilityTelemetryEventPackage> TelemetryUsageEvents; // 0x218(0x10)
};

