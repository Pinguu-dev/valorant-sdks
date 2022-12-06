// BlueprintGeneratedClass BombEquippableVOComponent.BombEquippableVOComponent_C
// Size: 0x1d8 (Inherited: 0xe8)
struct UBombEquippableVOComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	struct ABombEquippable_C* ; // 0xf0(0x08)
	struct FVector ; // 0xf8(0x0c)
	float ; // 0x104(0x04)
	struct FVector ; // 0x108(0x0c)
	bool ; // 0x114(0x01)
	char pad_115[0x3]; // 0x115(0x03)
	struct UVisibilityComponent* VisibilityComponent; // 0x118(0x08)
	struct TMap<struct AShooterCharacter*, float> ; // 0x120(0x50)
	float ; // 0x170(0x04)
	char pad_174[0x4]; // 0x174(0x04)
	struct TMap<struct AShooterCharacter*, float> ; // 0x178(0x50)
	float ; // 0x1c8(0x04)
	float DistanceFromLastSightedLocationToTriggerVO; // 0x1cc(0x04)
	bool ; // 0x1d0(0x01)
	bool ; // 0x1d1(0x01)
	char pad_1D2[0x2]; // 0x1d2(0x02)
	float ; // 0x1d4(0x04)

	void (struct TArray<struct AShooterCharacter*>& Characters, struct TArray<struct AShooterCharacter*>& ); // Function BombEquippableVOComponent.BombEquippableVOComponent_C. // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322a60
	void MakeChatMsg(struct FText , enum class ECalloutSuperRegion , struct FText& ChatMessage); // Function BombEquippableVOComponent.BombEquippableVOComponent_C.MakeChatMsg // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function BombEquippableVOComponent.BombEquippableVOComponent_C. // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void ReceiveBeginPlay(); // Function BombEquippableVOComponent.BombEquippableVOComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x3322a60
	void ReceiveTick(float DeltaSeconds); // Function BombEquippableVOComponent.BombEquippableVOComponent_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x3322a60
	void OnOwnerEnteredTeamSight(struct AActor* ActorThatEnteredTeamSight, struct TArray<struct AShooterCharacter*>& CharactersWithVisibility); // Function BombEquippableVOComponent.BombEquippableVOComponent_C.OnOwnerEnteredTeamSight // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void OnBombDropped(struct AShooterCharacter* OldCharacter); // Function BombEquippableVOComponent.BombEquippableVOComponent_C.OnBombDropped // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void OnBombPickedUp(struct AShooterCharacter* Character); // Function BombEquippableVOComponent.BombEquippableVOComponent_C.OnBombPickedUp // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void GetCharacterNameEvent(struct UCharacterHandle* CharacterHandle); // Function BombEquippableVOComponent.BombEquippableVOComponent_C.GetCharacterNameEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (int32_t EntryPoint); // Function BombEquippableVOComponent.BombEquippableVOComponent_C. // (Final|UbergraphFunction|HasDefaults) // @ game+0x3322a60
};

