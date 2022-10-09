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

	void AuthSetTelemetryDestroyedCount(int32_t EventID, int32_t DestroyedCount); // Function CharacterAbilityStatisticsComponent.CharacterAbilityStatisticsComponent_C.AuthSetTelemetryDestroyedCount // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void GetBestCastIndexForReporter(struct AActor* Reporter, int32_t& CastIndex); // Function CharacterAbilityStatisticsComponent.CharacterAbilityStatisticsComponent_C.GetBestCastIndexForReporter // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3511190
	void Auth Create Telemetry Usage Event with Stats(struct FVector EventLocation, struct TArray<struct FAbilityTelemetryStasticParameters>& Stats, struct AActor* CastLookupActor, int32_t& EventID); // Function CharacterAbilityStatisticsComponent.CharacterAbilityStatisticsComponent_C.Auth Create Telemetry Usage Event with Stats // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void Auth Add Effected Player to Telemetry Event(int32_t EventID, enum class ECharacterAbilityStatisticList Statistic, struct AShooterCharacter*& Player, enum class EAresAlliance Alliance); // Function CharacterAbilityStatisticsComponent.CharacterAbilityStatisticsComponent_C.Auth Add Effected Player to Telemetry Event // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void ConvertEffectInfosToTelemetryEffectInfos(struct TArray<struct FCharacterAbilityEffectInfo>& InEffectInfo, struct TArray<struct FAbilityEffectInfo>& OutTelemetryEffectInfos); // Function CharacterAbilityStatisticsComponent.CharacterAbilityStatisticsComponent_C.ConvertEffectInfosToTelemetryEffectInfos // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void AuthAddTelemetryStatistic(int32_t EventID, enum class ECharacterAbilityStatisticList Stat, enum class EAresAlliance Alliance, float Value, struct AShooterCharacter* AffectedCharacter); // Function CharacterAbilityStatisticsComponent.CharacterAbilityStatisticsComponent_C.AuthAddTelemetryStatistic // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void AuthCreateTelemetryUsageEvent(struct FVector Location, struct AActor* CastLookupActor, int32_t& EventID); // Function CharacterAbilityStatisticsComponent.CharacterAbilityStatisticsComponent_C.AuthCreateTelemetryUsageEvent // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void AuthCommitTelemetryUsageEvents(); // Function CharacterAbilityStatisticsComponent.CharacterAbilityStatisticsComponent_C.AuthCommitTelemetryUsageEvents // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void AuthAddTempTelemetryUsageEvent(enum class ECharacterAbilityStatisticList Statistic, float Value, struct FVector Location, struct AShooterPlayerState* AffectedPlayer, float AffectedPlayerValue); // Function CharacterAbilityStatisticsComponent.CharacterAbilityStatisticsComponent_C.AuthAddTempTelemetryUsageEvent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void AuthIncrementAbilityDestroyedCount(int32_t DestroyedCount, int32_t CastIndex); // Function CharacterAbilityStatisticsComponent.CharacterAbilityStatisticsComponent_C.AuthIncrementAbilityDestroyedCount // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void AddAbilityStatisticToArray(struct TArray<struct FCharacterAbilityEffectInfo>& InOutEffectArray, enum class ECharacterAbilityStatisticList Stat, enum class EAresAlliance Alliance, float Value, struct AShooterCharacter* AffectedCharacter); // Function CharacterAbilityStatisticsComponent.CharacterAbilityStatisticsComponent_C.AddAbilityStatisticToArray // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void AuthAddAbilityStatistic_New(enum class ECharacterAbilityStatisticList Stat, enum class EAresAlliance Alliance, float Value, int32_t CastIndex, struct AShooterCharacter* AffectedCharacter); // Function CharacterAbilityStatisticsComponent.CharacterAbilityStatisticsComponent_C.AuthAddAbilityStatistic_New // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	int32_t GetLatestCastIndex(); // Function CharacterAbilityStatisticsComponent.CharacterAbilityStatisticsComponent_C.GetLatestCastIndex // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void GetCastTime(float PhaseTime, enum class EAresGamePhase PhaseName, float& CastTime); // Function CharacterAbilityStatisticsComponent.CharacterAbilityStatisticsComponent_C.GetCastTime // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3511190
	void CreateAbilityEffectInfo(enum class ECharacterAbilityStatisticList Statistic, float AggregateValue, struct AShooterPlayerState* AffectedPlayer, float AffectedPlayerValue, struct FCharacterAbilityEffectInfo& CharacterAbilityEffectInfo); // Function CharacterAbilityStatisticsComponent.CharacterAbilityStatisticsComponent_C.CreateAbilityEffectInfo // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void CreateAbilityCastInfo(struct FVector Location, struct FCharacterAbilityCastInfo& CastInfo); // Function CharacterAbilityStatisticsComponent.CharacterAbilityStatisticsComponent_C.CreateAbilityCastInfo // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3511190
	void AuthAddAbilityStatisticToNewestCast(enum class ECharacterAbilityStatisticList Stat, float Value, struct AShooterCharacter* AffectedCharacter); // Function CharacterAbilityStatisticsComponent.CharacterAbilityStatisticsComponent_C.AuthAddAbilityStatisticToNewestCast // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void AuthAddEffectedPlayerToNewestCast(enum class ECharacterAbilityStatisticList Statistic, struct AShooterCharacter*& Player, enum class EAresAlliance Alliance); // Function CharacterAbilityStatisticsComponent.CharacterAbilityStatisticsComponent_C.AuthAddEffectedPlayerToNewestCast // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void AuthAddEffectedPlayer(int32_t CastIndex, enum class ECharacterAbilityStatisticList Statistic, struct AShooterCharacter*& Player, enum class EAresAlliance Alliance); // Function CharacterAbilityStatisticsComponent.CharacterAbilityStatisticsComponent_C.AuthAddEffectedPlayer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void GetValidCastIndex(int32_t CastIndex, int32_t& ValidIndex); // Function CharacterAbilityStatisticsComponent.CharacterAbilityStatisticsComponent_C.GetValidCastIndex // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	int32_t AuthCastAbility(struct FVector AbilityLocation); // Function CharacterAbilityStatisticsComponent.CharacterAbilityStatisticsComponent_C.AuthCastAbility // (BlueprintAuthorityOnly|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void AuthAddAbilityStatistic(enum class ECharacterAbilityStatisticList Stat, enum class EAresAlliance Alliance, float Value, int32_t CastIndex, struct AShooterCharacter* AffectedCharacter); // Function CharacterAbilityStatisticsComponent.CharacterAbilityStatisticsComponent_C.AuthAddAbilityStatistic // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void ReceiveBeginPlay(); // Function CharacterAbilityStatisticsComponent.CharacterAbilityStatisticsComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x3511190
	void AuthUpdateEffectLocation(int32_t CastIndex, struct FVector Location); // Function CharacterAbilityStatisticsComponent.CharacterAbilityStatisticsComponent_C.AuthUpdateEffectLocation // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void OnRoundBegin_Event_1(int32_t RoundNumberBeginning); // Function CharacterAbilityStatisticsComponent.CharacterAbilityStatisticsComponent_C.OnRoundBegin_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void OnPhaseChange_Event_1(enum class EAresGamePhase NewPhase); // Function CharacterAbilityStatisticsComponent.CharacterAbilityStatisticsComponent_C.OnPhaseChange_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void AuthItemOnSetOwner_Event_1(struct AAresItem* item, struct AActor* PrevOwner, struct AActor* NewOwner); // Function CharacterAbilityStatisticsComponent.CharacterAbilityStatisticsComponent_C.AuthItemOnSetOwner_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void OnRoundEnd_Event_1(int32_t RoundNumberEnding); // Function CharacterAbilityStatisticsComponent.CharacterAbilityStatisticsComponent_C.OnRoundEnd_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void HandleAbilitySpawnedSubActor(int32_t CastIndex, struct AActor* SubActor); // Function CharacterAbilityStatisticsComponent.CharacterAbilityStatisticsComponent_C.HandleAbilitySpawnedSubActor // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void HandleSubActorPreDeath(struct UDamageResponse* Response); // Function CharacterAbilityStatisticsComponent.CharacterAbilityStatisticsComponent_C.HandleSubActorPreDeath // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void OnSubActorDestroyed(struct AActor* DestroyedActor); // Function CharacterAbilityStatisticsComponent.CharacterAbilityStatisticsComponent_C.OnSubActorDestroyed // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void ExecuteUbergraph_CharacterAbilityStatisticsComponent(int32_t EntryPoint); // Function CharacterAbilityStatisticsComponent.CharacterAbilityStatisticsComponent_C.ExecuteUbergraph_CharacterAbilityStatisticsComponent // (Final|UbergraphFunction) // @ game+0x3511190
};

