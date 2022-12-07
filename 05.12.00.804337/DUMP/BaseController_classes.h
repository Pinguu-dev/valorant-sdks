// BlueprintGeneratedClass BaseController.BaseController_C
// Size: 0xca0 (Inherited: 0xb88)
struct ABaseController_C : AShooterPlayerController {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb88(0x08)
	struct UAresMovementToolingTuningComponent* ; // 0xb90(0x08)
	struct URateLimiterComponent* ; // 0xb98(0x08)
	struct URateLimiterComponent* ; // 0xba0(0x08)
	struct URateLimiterComponent* ; // 0xba8(0x08)
	struct UGameModeControllerData* GameModeControllerData; // 0xbb0(0x08)
	struct UAresAimToolingTuningComponent* ; // 0xbb8(0x08)
	struct UPlayerNonverbalChatComponent_C* PlayerNonverbalChatComponent; // 0xbc0(0x08)
	struct UThrottledMapPingComponent_C* ThrottledMapPingComponent; // 0xbc8(0x08)
	struct UAud_Base_UI_Component_C* Aud_Base_UI_Component; // 0xbd0(0x08)
	struct UAudioComponent* ; // 0xbd8(0x08)
	bool ; // 0xbe0(0x01)
	char pad_BE1[0x7]; // 0xbe1(0x07)
	struct FTimerHandle ; // 0xbe8(0x08)
	struct FMulticastInlineDelegate ; // 0xbf0(0x10)
	float ; // 0xc00(0x04)
	bool ; // 0xc04(0x01)
	bool ; // 0xc05(0x01)
	bool ; // 0xc06(0x01)
	bool ; // 0xc07(0x01)
	struct FText ; // 0xc08(0x18)
	struct FText ; // 0xc20(0x18)
	bool ; // 0xc38(0x01)
	bool ; // 0xc39(0x01)
	char pad_C3A[0x2]; // 0xc3a(0x02)
	float Adjustment; // 0xc3c(0x04)
	struct ATextRenderActor* ; // 0xc40(0x08)
	struct FMulticastInlineDelegate ; // 0xc48(0x10)
	struct FMulticastInlineDelegate ; // 0xc58(0x10)
	enum class NonVerbalCommTypesEnum ; // 0xc68(0x01)
	char pad_C69[0x7]; // 0xc69(0x07)
	struct FText CharacterName; // 0xc70(0x18)
	int32_t ; // 0xc88(0x04)
	bool ; // 0xc8c(0x01)
	char pad_C8D[0x3]; // 0xc8d(0x03)
	struct FMulticastInlineDelegate ; // 0xc90(0x10)

	void (bool Invert); // Function BaseController.BaseController_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (); // Function BaseController.BaseController_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (bool& bSuccess); // Function BaseController.BaseController_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (bool& bSuccess); // Function BaseController.BaseController_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (bool& bSuccess); // Function BaseController.BaseController_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (bool& bSuccess); // Function BaseController.BaseController_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void AuthBroadcastTacCalloutChatMessageToTeam(struct FText ChatMessage, struct AShooterPlayerState* Source, struct AShooterPlayerState* Target); // Function BaseController.BaseController_C.AuthBroadcastTacCalloutChatMessageToTeam // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (enum class NonVerbalCommTypesEnum , struct FText& ); // Function BaseController.BaseController_C. // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (); // Function BaseController.BaseController_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (bool Up, bool ); // Function BaseController.BaseController_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct FText ChatMessage, struct AShooterPlayerState* Source, struct AShooterPlayerState* Target); // Function BaseController.BaseController_C. // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (); // Function BaseController.BaseController_C. // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (float ); // Function BaseController.BaseController_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	float GetSmokeOverlay(); // Function BaseController.BaseController_C.GetSmokeOverlay // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x3322a90
	void AudSetupComponents(); // Function BaseController.BaseController_C.AudSetupComponents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct AShooterCharacter* ); // Function BaseController.BaseController_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct AShooterCharacter* ShooterCharacter, struct AActor* OtherActor, float& Distance); // Function BaseController.BaseController_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x3322a90
	void (struct AShooterCharacter*& ); // Function BaseController.BaseController_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x3322a90
	void AuthToggleAutoHeal(); // Function BaseController.BaseController_C.AuthToggleAutoHeal // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void _1(struct FKey Key); // Function BaseController.BaseController_C._1 // (BlueprintEvent) // @ game+0x3322a90
	void ReceiveBeginPlay(); // Function BaseController.BaseController_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x3322a90
	void (); // Function BaseController.BaseController_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void NewRound(int32_t RoundNumberBeginning); // Function BaseController.BaseController_C.NewRound // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct FVector Location, bool ); // Function BaseController.BaseController_C. // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct AAresOnGroundEquippable* Equippable, struct FEffectData MarkerData); // Function BaseController.BaseController_C. // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (bool Up, bool ); // Function BaseController.BaseController_C. // (Net|NetClient|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void OnMapToggle(bool bOpen); // Function BaseController.BaseController_C.OnMapToggle // (Event|Public|BlueprintEvent) // @ game+0x3322a90
	void (struct AActor* Orb); // Function BaseController.BaseController_C. // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void _1(bool TransitionActive); // Function BaseController.BaseController_C._1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct APlayerState* , struct APlayerState* , struct FText Msg); // Function BaseController.BaseController_C. // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (bool Visible); // Function BaseController.BaseController_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (bool IsVisible); // Function BaseController.BaseController_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void ReceiveTick(float DeltaSeconds); // Function BaseController.BaseController_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x3322a90
	void (bool Invert); // Function BaseController.BaseController_C. // (Net|NetClient|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void TryInspectWeapon(); // Function BaseController.BaseController_C.TryInspectWeapon // (Event|Public|BlueprintEvent) // @ game+0x3322a90
	void (int32_t EntryPoint); // Function BaseController.BaseController_C. // (Final|UbergraphFunction|HasDefaults) // @ game+0x3322a90
	void (bool IsVisible); // Function BaseController.BaseController_C. // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (); // Function BaseController.BaseController_C. // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (bool Open); // Function BaseController.BaseController_C. // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct FVector Location, bool ); // Function BaseController.BaseController_C. // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
};

