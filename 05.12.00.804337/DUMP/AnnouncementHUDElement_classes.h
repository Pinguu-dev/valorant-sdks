// WidgetBlueprintGeneratedClass AnnouncementHUDElement.
// Size: 0x399 (Inherited: 0x2d8)
struct U : UCoordinatedHUDElement {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d8(0x08)
	struct UCoordinatedHUDModel* HUDModel; // 0x2e0(0x08)
	struct U* ; // 0x2e8(0x08)
	struct FTimerHandle ; // 0x2f0(0x08)
	struct ABaseGameState_C* BaseGameState; // 0x2f8(0x08)
	struct TArray<struct U*> ; // 0x300(0x10)
	struct TArray<struct U*> ; // 0x310(0x10)
	struct TArray<struct U*> ; // 0x320(0x10)
	struct TArray<struct U*> ; // 0x330(0x10)
	struct TArray<struct U*> ; // 0x340(0x10)
	struct TArray<struct U*> ; // 0x350(0x10)
	struct FMulticastInlineDelegate ; // 0x360(0x10)
	struct TArray<struct U*> ; // 0x370(0x10)
	struct U* ; // 0x380(0x08)
	struct TArray<struct U*> ; // 0x388(0x10)
	enum class EAresBombStates BombState; // 0x398(0x01)

	void (struct UWidgetAnimation*& Animation); // Function AnnouncementHUDElement.. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322a90
	void (struct UWidgetAnimation*& Animation); // Function AnnouncementHUDElement.. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322a90
	void (struct UBorder*& ); // Function AnnouncementHUDElement.. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322a90
	void (struct APlayerController* Owning Player, struct AShooterCharacter* Character, struct AActor* , float , struct U*& Widget); // Function AnnouncementHUDElement.. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void ShouldPlayBombEvents(bool& ShouldPlayBombCarrierEvents); // Function AnnouncementHUDElement..ShouldPlayBombEvents // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322a90
	void (struct APlayerController* Owning Player, struct AShooterCharacter* Character, float , struct U*& Widget); // Function AnnouncementHUDElement.. // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct APlayerController* Owning Player, struct AShooterCharacter* Character, struct AActor* , float , struct U*& Widget); // Function AnnouncementHUDElement.. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct APlayerController* Owning Player, struct AShooterCharacter* Character, struct FText , struct AActor* , struct FText Money, struct FText , struct FText Objective, struct FText , struct FText , struct FSlateBrush , struct FText , float , struct U*& Widget); // Function AnnouncementHUDElement.. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct APlayerController* Owning Player, struct AShooterCharacter* Character, float , struct U*& Widget); // Function AnnouncementHUDElement.. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct APlayerController* Owning Player, struct AShooterCharacter* Character, float , struct U*& Widget); // Function AnnouncementHUDElement.. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct APlayerController* Owning Player, struct AShooterCharacter* Character, struct FText Text, struct AActor* , float , bool , struct U*& Widget); // Function AnnouncementHUDElement.. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (bool& Attacker); // Function AnnouncementHUDElement.. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322a90
	void (bool& Defender); // Function AnnouncementHUDElement.. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322a90
	void (struct FText& ); // Function AnnouncementHUDElement.. // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct AAresCeremony* ChosenCeremony); // Function AnnouncementHUDElement.. // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (); // Function AnnouncementHUDElement.. // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct U* ); // Function AnnouncementHUDElement.. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct U* ); // Function AnnouncementHUDElement.. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (); // Function AnnouncementHUDElement.. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct AShooterPlayerState* Player State, struct UTexture*& Portrait); // Function AnnouncementHUDElement.. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322a90
	void (); // Function AnnouncementHUDElement.. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct U* ); // Function AnnouncementHUDElement.. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (); // Function AnnouncementHUDElement.. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (); // Function AnnouncementHUDElement.. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void SetHUDModel(struct UCoordinatedHUDModel* HUDModel); // Function AnnouncementHUDElement..SetHUDModel // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void Construct(); // Function AnnouncementHUDElement..Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3322a90
	void _1(); // Function AnnouncementHUDElement.._1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (); // Function AnnouncementHUDElement.. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void _2(); // Function AnnouncementHUDElement.._2 // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void _1(int32_t NewValue); // Function AnnouncementHUDElement.._1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void OnGameStateChanged(); // Function AnnouncementHUDElement..OnGameStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct AShooterCharacter* OldCarrier); // Function AnnouncementHUDElement.. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void OnBombDropped(struct AShooterCharacter* ); // Function AnnouncementHUDElement..OnBombDropped // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct AShooterCharacter* Planter); // Function AnnouncementHUDElement.. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void OnBombDefuseStart(struct AShooterCharacter* Defuser); // Function AnnouncementHUDElement..OnBombDefuseStart // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (); // Function AnnouncementHUDElement.. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void OnRoundResultsUpdated(); // Function AnnouncementHUDElement..OnRoundResultsUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct AAresCeremony* ChosenCeremony); // Function AnnouncementHUDElement.. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void OnShouldDisplayCeremony(struct AAresCeremony* ChosenCeremony); // Function AnnouncementHUDElement..OnShouldDisplayCeremony // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void OnUltPointsChanged(int32_t NewValue, bool IsUltNewlyReady); // Function AnnouncementHUDElement..OnUltPointsChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct AShooterCharacter* Defuser); // Function AnnouncementHUDElement.. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void OnBombPlanted(struct FVector PlantLocation, struct AShooterCharacter* BombPlanter, enum class BombSiteEnum PlantSite); // Function AnnouncementHUDElement..OnBombPlanted // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void OnBombPickedUp(struct AShooterCharacter* NewBombHolder); // Function AnnouncementHUDElement..OnBombPickedUp // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (bool WaitingForPlayers); // Function AnnouncementHUDElement.. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct ABombEquippable_C* BombEquippable, struct AShooterCharacter* OldCarrier); // Function AnnouncementHUDElement.. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void OnCinematicModeUpdated_Event_1(); // Function AnnouncementHUDElement..OnCinematicModeUpdated_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (); // Function AnnouncementHUDElement.. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct AShooterCharacter* Planter, enum class BombSiteEnum PlantSite); // Function AnnouncementHUDElement.. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void OnBombPlantCancelled(enum class BombSiteEnum PlantSite); // Function AnnouncementHUDElement..OnBombPlantCancelled // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (bool IsVisible); // Function AnnouncementHUDElement.. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void OnPlayerViewTargetChanged_Event_1(); // Function AnnouncementHUDElement..OnPlayerViewTargetChanged_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void _1(bool IsWarmupRound); // Function AnnouncementHUDElement.._1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void OnInitialized(); // Function AnnouncementHUDElement..OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3322a90
	void (struct AAresPlayerStateBase* NewValue); // Function AnnouncementHUDElement.. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (int32_t EntryPoint); // Function AnnouncementHUDElement.. // (Final|UbergraphFunction|HasDefaults) // @ game+0x3322a90
	void (bool ); // Function AnnouncementHUDElement.. // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
};

