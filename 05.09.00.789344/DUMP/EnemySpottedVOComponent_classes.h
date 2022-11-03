// BlueprintGeneratedClass EnemySpottedVOComponent.EnemySpottedVOComponent_C
// Size: 0x24c (Inherited: 0xe8)
struct UEnemySpottedVOComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	struct TArray<struct AActor*> EnemiesSpottedSinceLastVO; // 0xf0(0x10)
	struct TMap<struct AActor*, enum class ECalloutSuperRegion> EnemySuperRegions; // 0x100(0x50)
	bool HasQueuedUpVO; // 0x150(0x01)
	char pad_151[0x3]; // 0x151(0x03)
	float SecondsUntilEnemiesSpottedVOPlays; // 0x154(0x04)
	float LastEnemySpottedTimestamp; // 0x158(0x04)
	char pad_15C[0x4]; // 0x15c(0x04)
	struct UShooterCharacterVisibilityComponent* VisibilityComponent; // 0x160(0x08)
	struct AShooterCharacter* CharacterToSendVOEventTo; // 0x168(0x08)
	float EnemySpottedCooldown; // 0x170(0x04)
	float DistanceFromLastSightedLocationToTriggerVO; // 0x174(0x04)
	struct FVector LastEnemySpottedLocation; // 0x178(0x0c)
	int32_t NumLivingEnemies; // 0x184(0x04)
	enum class ECalloutSuperRegion LastSuperregionOccupied; // 0x188(0x01)
	bool SuperregionUpdated; // 0x189(0x01)
	char pad_18A[0x6]; // 0x18a(0x06)
	struct TMap<enum class ECalloutSuperRegion, int32_t> NumLivingEnemiesPerRegion; // 0x190(0x50)
	struct TMap<enum class ECalloutSuperRegion, float> NearestSqEnemyPerRegion; // 0x1e0(0x50)
	struct FText CharacterName; // 0x230(0x18)
	int32_t NumLivingEnemiesPerRegionTotal; // 0x248(0x04)

	void SelectCalloutRegion(enum class ECalloutSuperRegion& SuperRegion); // Function EnemySpottedVOComponent.EnemySpottedVOComponent_C.SelectCalloutRegion // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	bool ShouldPlayEnemySpottedVO(); // Function EnemySpottedVOComponent.EnemySpottedVOComponent_C.ShouldPlayEnemySpottedVO // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x32f73d0
	void MakeChatMsg(enum class ECalloutSuperRegion SuperRegionName, bool Plural, struct FText& ChatMessage); // Function EnemySpottedVOComponent.EnemySpottedVOComponent_C.MakeChatMsg // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void CleanupForRespawn(); // Function EnemySpottedVOComponent.EnemySpottedVOComponent_C.CleanupForRespawn // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void OneTimeInitialization(); // Function EnemySpottedVOComponent.EnemySpottedVOComponent_C.OneTimeInitialization // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void ReceiveBeginPlay(); // Function EnemySpottedVOComponent.EnemySpottedVOComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x32f73d0
	void PlayEnemiesSpottedVO(); // Function EnemySpottedVOComponent.EnemySpottedVOComponent_C.PlayEnemiesSpottedVO // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void EnemyEnteredSight(struct AActor* Enemy); // Function EnemySpottedVOComponent.EnemySpottedVOComponent_C.EnemyEnteredSight // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void OnOwnerEnteredTeamSight(struct AActor* ActorThatEnteredTeamSight, struct TArray<struct AShooterCharacter*>& CharactersWithVisibility); // Function EnemySpottedVOComponent.EnemySpottedVOComponent_C.OnOwnerEnteredTeamSight // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void OnOwnerExitedTeamSight(struct AActor* ActorThatExitedTeamSight); // Function EnemySpottedVOComponent.EnemySpottedVOComponent_C.OnOwnerExitedTeamSight // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void InitializeForRespawn(); // Function EnemySpottedVOComponent.EnemySpottedVOComponent_C.InitializeForRespawn // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void ResetValuesForRespawn(); // Function EnemySpottedVOComponent.EnemySpottedVOComponent_C.ResetValuesForRespawn // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void PlayEnemiesSpottedVOWithRegion(); // Function EnemySpottedVOComponent.EnemySpottedVOComponent_C.PlayEnemiesSpottedVOWithRegion // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void GetCharacterNameEvent(struct UCharacterHandle* CharacterHandle); // Function EnemySpottedVOComponent.EnemySpottedVOComponent_C.GetCharacterNameEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void ExecuteUbergraph_EnemySpottedVOComponent(int32_t EntryPoint); // Function EnemySpottedVOComponent.EnemySpottedVOComponent_C.ExecuteUbergraph_EnemySpottedVOComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0x32f73d0
};

