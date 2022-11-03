// WidgetBlueprintGeneratedClass Ceremony_RoundOutcome_Default.Ceremony_RoundOutcome_Default_C
// Size: 0x403 (Inherited: 0x2ce)
struct UCeremony_RoundOutcome_Default_C : UBaseAnnouncementWidget_C {
	char pad_2CE[0x2]; // 0x2ce(0x02)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d0(0x08)
	struct UWidgetAnimation* Outro; // 0x2d8(0x08)
	struct UWidgetAnimation* Intro; // 0x2e0(0x08)
	struct UImage* AttackingIcon; // 0x2e8(0x08)
	struct UImage* BannerBG; // 0x2f0(0x08)
	struct UImage* BottomLine; // 0x2f8(0x08)
	struct UImage* DefendingIcon; // 0x300(0x08)
	struct UImage* EndCapBL; // 0x308(0x08)
	struct UImage* EndCapBR; // 0x310(0x08)
	struct UImage* EndCapTL; // 0x318(0x08)
	struct UImage* EndCapTR; // 0x320(0x08)
	struct UImage* Ether; // 0x328(0x08)
	struct UImage* glitchtexture; // 0x330(0x08)
	struct UTextBlock* PlayerTeamWonTextLOST; // 0x338(0x08)
	struct UTextBlock* RoundNumberText; // 0x340(0x08)
	struct UTextBlock* RoundOutcomeText; // 0x348(0x08)
	struct UImage* TopLine; // 0x350(0x08)
	struct UTextBlock* WipeText; // 0x358(0x08)
	struct UImage* WonElementGlow; // 0x360(0x08)
	bool PlayerTeamWon; // 0x368(0x01)
	char pad_369[0x7]; // 0x369(0x07)
	struct AShooterPlayerState* PlayerState; // 0x370(0x08)
	enum class EAresRoundOutcome RoundOutcome; // 0x378(0x01)
	char pad_379[0x3]; // 0x379(0x03)
	int32_t CurrentRoundNumber; // 0x37c(0x04)
	struct UCoordinatedHUDModel* HUDModel; // 0x380(0x08)
	bool HasStartedAnimation; // 0x388(0x01)
	char pad_389[0x3]; // 0x389(0x03)
	struct FLinearColor AllyColorGlow; // 0x38c(0x10)
	struct FLinearColor EnemyColorGlow; // 0x39c(0x10)
	char pad_3AC[0x4]; // 0x3ac(0x04)
	struct FSlateColor EnemyColorWipe; // 0x3b0(0x28)
	struct FSlateColor AllyColorWipe; // 0x3d8(0x28)
	bool AttackingTeamWiped; // 0x400(0x01)
	bool DefendingTeamWiped; // 0x401(0x01)
	enum class EAresBombStates BombState; // 0x402(0x01)

	void GetWinnerColor(struct FLinearColor& Glow, struct FSlateColor& Wipe); // Function Ceremony_RoundOutcome_Default.Ceremony_RoundOutcome_Default_C.GetWinnerColor // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void AreWinnersAlliedWithDefenders(enum class EAresAlliance& WinnerDefenderAlliance); // Function Ceremony_RoundOutcome_Default.Ceremony_RoundOutcome_Default_C.AreWinnersAlliedWithDefenders // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	struct FText Get_RoundOutcome(); // Function Ceremony_RoundOutcome_Default.Ceremony_RoundOutcome_Default_C.Get_RoundOutcome // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x32f73d0
	struct FText Get_RoundNumber(); // Function Ceremony_RoundOutcome_Default.Ceremony_RoundOutcome_Default_C.Get_RoundNumber // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x32f73d0
	struct FText Get_PlayerTeamWon(); // Function Ceremony_RoundOutcome_Default.Ceremony_RoundOutcome_Default_C.Get_PlayerTeamWon // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x32f73d0
	void GetRoundOutcomeInfo(bool PlayerTeamWon, int32_t CurrentRoundNumber, enum class EAresRoundOutcome RoundOutcome); // Function Ceremony_RoundOutcome_Default.Ceremony_RoundOutcome_Default_C.GetRoundOutcomeInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void OnAnimatingOut(); // Function Ceremony_RoundOutcome_Default.Ceremony_RoundOutcome_Default_C.OnAnimatingOut // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void OnAnimatingIn(); // Function Ceremony_RoundOutcome_Default.Ceremony_RoundOutcome_Default_C.OnAnimatingIn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void Construct(); // Function Ceremony_RoundOutcome_Default.Ceremony_RoundOutcome_Default_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x32f73d0
	void OnViewTargetChanged_Event(struct AActor* NewViewTarget); // Function Ceremony_RoundOutcome_Default.Ceremony_RoundOutcome_Default_C.OnViewTargetChanged_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void ExecuteUbergraph_Ceremony_RoundOutcome_Default(int32_t EntryPoint); // Function Ceremony_RoundOutcome_Default.Ceremony_RoundOutcome_Default_C.ExecuteUbergraph_Ceremony_RoundOutcome_Default // (Final|UbergraphFunction|HasDefaults) // @ game+0x32f73d0
};

