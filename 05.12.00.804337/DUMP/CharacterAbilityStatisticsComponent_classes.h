// BlueprintGeneratedClass CharacterAbilityStatisticsComponent.CharacterAbilityStatisticsComponent_C
// Size: 0x22a (Inherited: 0x118)
struct UCharacterAbilityStatisticsComponent_C : UGameStatisticsComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x118(0x08)
	struct TArray<struct FCharacterAbilityCastInfo> AuthAbilityCasts; // 0x120(0x10)
	int32_t ; // 0x130(0x04)
	char pad_134[0x4]; // 0x134(0x04)
	struct TArray<struct FAbilityUsageEvent> ; // 0x138(0x10)
	struct AShooterCharacter* OwningCharacter; // 0x148(0x08)
	struct AAresEquippable* ; // 0x150(0x08)
	struct TMap<enum class ECharacterAbilityStatisticList, struct FText> ; // 0x158(0x50)
	float ; // 0x1a8(0x04)
	char pad_1AC[0x4]; // 0x1ac(0x04)
	struct UBaseTeamComponent* TeamComponent; // 0x1b0(0x08)
	bool ; // 0x1b8(0x01)
	char pad_1B9[0x7]; // 0x1b9(0x07)
	struct TMap<enum class ECharacterAbilityStatisticList, enum class EAbilityStatisticAccumulationType> ; // 0x1c0(0x50)
	bool ; // 0x210(0x01)
	char pad_211[0x7]; // 0x211(0x07)
	struct TArray<struct FAbilityTelemetryEventPackage> ; // 0x218(0x10)
	enum class EAbilityUsageLocationType ; // 0x228(0x01)
	bool ; // 0x229(0x01)

	bool AuthShouldInferAbilityLocationType(); // Function CharacterAbilityStatisticsComponent.CharacterAbilityStatisticsComponent_C.AuthShouldInferAbilityLocationType // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void AuthUpdateAbilityLocationType(enum class EAbilityUsageLocationType LocationType); // Function CharacterAbilityStatisticsComponent.CharacterAbilityStatisticsComponent_C.AuthUpdateAbilityLocationType // (BlueprintAuthorityOnly|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (int32_t Index, struct FVector EffectLocation); // Function CharacterAbilityStatisticsComponent.CharacterAbilityStatisticsComponent_C. // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (int32_t Index); // Function CharacterAbilityStatisticsComponent.CharacterAbilityStatisticsComponent_C. // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (int32_t EventID, int32_t DestroyedCount); // Function CharacterAbilityStatisticsComponent.CharacterAbilityStatisticsComponent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct AActor* , int32_t& CastIndex); // Function CharacterAbilityStatisticsComponent.CharacterAbilityStatisticsComponent_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322a90
	void (struct FVector EventLocation, struct TArray<struct FAbilityTelemetryStasticParameters>& Stats, struct AActor* , int32_t& EventID); // Function CharacterAbilityStatisticsComponent.CharacterAbilityStatisticsComponent_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (int32_t EventID, enum class ECharacterAbilityStatisticList Statistic, struct AShooterCharacter*& Player, enum class EAresAlliance Alliance); // Function CharacterAbilityStatisticsComponent.CharacterAbilityStatisticsComponent_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct TArray<struct FCharacterAbilityEffectInfo>& , struct TArray<struct FAbilityEffectInfo>& ); // Function CharacterAbilityStatisticsComponent.CharacterAbilityStatisticsComponent_C. // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (int32_t EventID, enum class ECharacterAbilityStatisticList Stat, enum class EAresAlliance Alliance, float Value, struct AShooterCharacter* ); // Function CharacterAbilityStatisticsComponent.CharacterAbilityStatisticsComponent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct FVector Location, struct AActor* , int32_t& EventID); // Function CharacterAbilityStatisticsComponent.CharacterAbilityStatisticsComponent_C. // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (bool NewParam); // Function CharacterAbilityStatisticsComponent.CharacterAbilityStatisticsComponent_C. // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (enum class ECharacterAbilityStatisticList Statistic, float Value, struct FVector Location, struct AShooterPlayerState* , float ); // Function CharacterAbilityStatisticsComponent.CharacterAbilityStatisticsComponent_C. // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (int32_t DestroyedCount, int32_t CastIndex); // Function CharacterAbilityStatisticsComponent.CharacterAbilityStatisticsComponent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct TArray<struct FCharacterAbilityEffectInfo>& , enum class ECharacterAbilityStatisticList Stat, enum class EAresAlliance Alliance, float Value, struct AShooterCharacter* ); // Function CharacterAbilityStatisticsComponent.CharacterAbilityStatisticsComponent_C. // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (enum class ECharacterAbilityStatisticList Stat, enum class EAresAlliance Alliance, float Value, int32_t CastIndex, struct AShooterCharacter* ); // Function CharacterAbilityStatisticsComponent.CharacterAbilityStatisticsComponent_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	int32_t GetLatestCastIndex(); // Function CharacterAbilityStatisticsComponent.CharacterAbilityStatisticsComponent_C.GetLatestCastIndex // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (float , enum class EAresGamePhase , float& ); // Function CharacterAbilityStatisticsComponent.CharacterAbilityStatisticsComponent_C. // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322a90
	void (enum class ECharacterAbilityStatisticList Statistic, float , struct AShooterPlayerState* , float , struct FCharacterAbilityEffectInfo& CharacterAbilityEffectInfo); // Function CharacterAbilityStatisticsComponent.CharacterAbilityStatisticsComponent_C. // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct FVector Location, struct FCharacterAbilityCastInfo& ); // Function CharacterAbilityStatisticsComponent.CharacterAbilityStatisticsComponent_C. // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322a90
	void AuthAddAbilityStatisticToNewestCast(enum class ECharacterAbilityStatisticList Stat, float Value, struct AShooterCharacter* ); // Function CharacterAbilityStatisticsComponent.CharacterAbilityStatisticsComponent_C.AuthAddAbilityStatisticToNewestCast // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (enum class ECharacterAbilityStatisticList Statistic, struct AShooterCharacter*& Player, enum class EAresAlliance Alliance); // Function CharacterAbilityStatisticsComponent.CharacterAbilityStatisticsComponent_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (int32_t CastIndex, enum class ECharacterAbilityStatisticList Statistic, struct AShooterCharacter*& Player, enum class EAresAlliance Alliance); // Function CharacterAbilityStatisticsComponent.CharacterAbilityStatisticsComponent_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (int32_t CastIndex, int32_t& ); // Function CharacterAbilityStatisticsComponent.CharacterAbilityStatisticsComponent_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	int32_t AuthCastAbility(struct FVector AbilityLocation); // Function CharacterAbilityStatisticsComponent.CharacterAbilityStatisticsComponent_C.AuthCastAbility // (BlueprintAuthorityOnly|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (enum class ECharacterAbilityStatisticList Stat, enum class EAresAlliance Alliance, float Value, int32_t CastIndex, struct AShooterCharacter* ); // Function CharacterAbilityStatisticsComponent.CharacterAbilityStatisticsComponent_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void ReceiveBeginPlay(); // Function CharacterAbilityStatisticsComponent.CharacterAbilityStatisticsComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x3322a90
	void (int32_t CastIndex, struct FVector Location); // Function CharacterAbilityStatisticsComponent.CharacterAbilityStatisticsComponent_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void _1(int32_t RoundNumberBeginning); // Function CharacterAbilityStatisticsComponent.CharacterAbilityStatisticsComponent_C._1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void _1(enum class EAresGamePhase NewPhase); // Function CharacterAbilityStatisticsComponent.CharacterAbilityStatisticsComponent_C._1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void AuthItemOnSetOwner_Event_1(struct AAresItem* item, struct AActor* PrevOwner, struct AActor* NewOwner); // Function CharacterAbilityStatisticsComponent.CharacterAbilityStatisticsComponent_C.AuthItemOnSetOwner_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void OnRoundEnd_Event_1(int32_t RoundNumberEnding); // Function CharacterAbilityStatisticsComponent.CharacterAbilityStatisticsComponent_C.OnRoundEnd_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (int32_t CastIndex, struct AActor* SubActor); // Function CharacterAbilityStatisticsComponent.CharacterAbilityStatisticsComponent_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct UDamageResponse* Response); // Function CharacterAbilityStatisticsComponent.CharacterAbilityStatisticsComponent_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct AActor* DestroyedActor); // Function CharacterAbilityStatisticsComponent.CharacterAbilityStatisticsComponent_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void AuthClearAbilityLocationsWithIndex(int32_t CastIndex); // Function CharacterAbilityStatisticsComponent.CharacterAbilityStatisticsComponent_C.AuthClearAbilityLocationsWithIndex // (BlueprintAuthorityOnly|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void AuthUpdateAbilityLocationWithIndex(int32_t CastIndex, struct FVector AbilityLocation); // Function CharacterAbilityStatisticsComponent.CharacterAbilityStatisticsComponent_C.AuthUpdateAbilityLocationWithIndex // (BlueprintAuthorityOnly|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (int32_t EntryPoint); // Function CharacterAbilityStatisticsComponent.CharacterAbilityStatisticsComponent_C. // (Final|UbergraphFunction|HasDefaults) // @ game+0x3322a90
};

