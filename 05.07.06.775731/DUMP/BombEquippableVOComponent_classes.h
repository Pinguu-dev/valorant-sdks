// BlueprintGeneratedClass BombEquippableVOComponent.BombEquippableVOComponent_C
// Size: 0x1d8 (Inherited: 0xe8)
struct UBombEquippableVOComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	struct ABombEquippable_C* OwningBombEquippable; // 0xf0(0x08)
	struct FVector LastSightedLocation; // 0xf8(0x0c)
	float BombLeftOnGroundVODistance; // 0x104(0x04)
	struct FVector BombLeftOnGroundVOLocation; // 0x108(0x0c)
	bool ShouldPlayBombLeftOnGroundVO; // 0x114(0x01)
	char pad_115[0x3]; // 0x115(0x03)
	struct UVisibilityComponent* VisibilityComponent; // 0x118(0x08)
	struct TMap<struct AShooterCharacter*, float> CharacterDroppedTimestamps; // 0x120(0x50)
	float BombDroppedCooldownTime; // 0x170(0x04)
	char pad_174[0x4]; // 0x174(0x04)
	struct TMap<struct AShooterCharacter*, float> CharacterPickedUpTimestamps; // 0x178(0x50)
	float BombPickedUpCooldownTime; // 0x1c8(0x04)
	float DistanceFromLastSightedLocationToTriggerVO; // 0x1cc(0x04)
	bool PickupVOEnabled; // 0x1d0(0x01)
	bool DroppedVOEnabled; // 0x1d1(0x01)
	char pad_1D2[0x2]; // 0x1d2(0x02)
	float SecondsUntilBombSpottedVOPlays; // 0x1d4(0x04)

	void GetLivingCharacters(struct TArray<struct AShooterCharacter*>& Characters, struct TArray<struct AShooterCharacter*>& Living Characters); // Function BombEquippableVOComponent.BombEquippableVOComponent_C.GetLivingCharacters // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3511190
	void MakeChatMsg(struct FText Character Name, enum class ECalloutSuperRegion Super Region, struct FText& ChatMessage); // Function BombEquippableVOComponent.BombEquippableVOComponent_C.MakeChatMsg // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void PlayBombLeftOnGroundVOIfNeeded(); // Function BombEquippableVOComponent.BombEquippableVOComponent_C.PlayBombLeftOnGroundVOIfNeeded // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void ReceiveBeginPlay(); // Function BombEquippableVOComponent.BombEquippableVOComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x3511190
	void ReceiveTick(float DeltaSeconds); // Function BombEquippableVOComponent.BombEquippableVOComponent_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x3511190
	void OnOwnerEnteredTeamSight(struct AActor* ActorThatEnteredTeamSight, struct TArray<struct AShooterCharacter*>& CharactersWithVisibility); // Function BombEquippableVOComponent.BombEquippableVOComponent_C.OnOwnerEnteredTeamSight // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void OnBombDropped(struct AShooterCharacter* OldCharacter); // Function BombEquippableVOComponent.BombEquippableVOComponent_C.OnBombDropped // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void OnBombPickedUp(struct AShooterCharacter* Character); // Function BombEquippableVOComponent.BombEquippableVOComponent_C.OnBombPickedUp // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void GetCharacterNameEvent(struct UCharacterHandle* CharacterHandle); // Function BombEquippableVOComponent.BombEquippableVOComponent_C.GetCharacterNameEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void ExecuteUbergraph_BombEquippableVOComponent(int32_t EntryPoint); // Function BombEquippableVOComponent.BombEquippableVOComponent_C.ExecuteUbergraph_BombEquippableVOComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0x3511190
};

