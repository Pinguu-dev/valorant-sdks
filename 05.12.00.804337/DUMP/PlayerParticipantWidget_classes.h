// WidgetBlueprintGeneratedClass PlayerParticipantWidget.
// Size: 0x460 (Inherited: 0x2c8)
struct U : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct UWidgetAnimation* ; // 0x2d0(0x08)
	struct UWidgetAnimation* ; // 0x2d8(0x08)
	struct UOverlay* ; // 0x2e0(0x08)
	struct UImage* ; // 0x2e8(0x08)
	struct UImage* ; // 0x2f0(0x08)
	struct UImage* ; // 0x2f8(0x08)
	struct UOverlay* BombCarrier; // 0x300(0x08)
	struct UImage* ; // 0x308(0x08)
	struct USizeBox* ; // 0x310(0x08)
	struct UImage* CharacterPortrait; // 0x318(0x08)
	struct USizeBox* ; // 0x320(0x08)
	struct UImage* ; // 0x328(0x08)
	struct UOverlay* ; // 0x330(0x08)
	struct UImage* _3; // 0x338(0x08)
	struct UImage* _4; // 0x340(0x08)
	struct UImage* _2; // 0x348(0x08)
	struct UOverlay* ; // 0x350(0x08)
	struct UTextBlock* ; // 0x358(0x08)
	struct UProgressBar* Health; // 0x360(0x08)
	struct UImage* ; // 0x368(0x08)
	struct UOverlay* ; // 0x370(0x08)
	struct UImage* Image; // 0x378(0x08)
	struct UImage* Image_2; // 0x380(0x08)
	struct UImage* Image_3; // 0x388(0x08)
	struct UImage* Image_4; // 0x390(0x08)
	struct UImage* Image_79; // 0x398(0x08)
	struct UImage* Image_107; // 0x3a0(0x08)
	struct UImage* Image_148; // 0x3a8(0x08)
	struct UInvalidationBox* ; // 0x3b0(0x08)
	struct UImage* ; // 0x3b8(0x08)
	struct UBorder* ; // 0x3c0(0x08)
	struct UOverlay* ; // 0x3c8(0x08)
	struct UImage* ; // 0x3d0(0x08)
	struct UImage* _2; // 0x3d8(0x08)
	struct UImage* ; // 0x3e0(0x08)
	struct UHorizontalBox* ; // 0x3e8(0x08)
	struct UImage* ; // 0x3f0(0x08)
	struct UImage* ; // 0x3f8(0x08)
	struct UImage* ; // 0x400(0x08)
	struct UImage* ViewedCharacter; // 0x408(0x08)
	struct UImage* ; // 0x410(0x08)
	struct UHUDPlayerModel* PlayerModel; // 0x418(0x08)
	bool IsLocalPlayer; // 0x420(0x01)
	bool ; // 0x421(0x01)
	char pad_422[0x6]; // 0x422(0x06)
	struct UCoordinatedHUDModel* HUDModel; // 0x428(0x08)
	bool ; // 0x430(0x01)
	char pad_431[0x7]; // 0x431(0x07)
	struct TArray<struct UComp_Equippable_UltActiveOnEquip_C*> ; // 0x438(0x10)
	bool ; // 0x448(0x01)
	bool ; // 0x449(0x01)
	bool ; // 0x44a(0x01)
	bool ; // 0x44b(0x01)
	char pad_44C[0x4]; // 0x44c(0x04)
	struct AAresPlayerStateBase* PlayerState; // 0x450(0x08)
	struct FTimerHandle ; // 0x458(0x08)

	void (); // Function PlayerParticipantWidget.. // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	bool (bool ); // Function PlayerParticipantWidget.. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322a90
	void (struct UComp_PlayerState_DownedState_C* ); // Function PlayerParticipantWidget.. // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (bool ); // Function PlayerParticipantWidget.. // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (bool ); // Function PlayerParticipantWidget.. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (); // Function PlayerParticipantWidget.. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	bool (); // Function PlayerParticipantWidget.. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322a90
	void (struct AShooterPlayerState* ShooterPlayerState); // Function PlayerParticipantWidget.. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (); // Function PlayerParticipantWidget.. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (); // Function PlayerParticipantWidget.. // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void NumUltimatePointsChanged(int32_t NewValue, bool IsUltNewlyReady); // Function PlayerParticipantWidget..NumUltimatePointsChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void DesiredClassChanged(struct AShooterCharacter* NewValue); // Function PlayerParticipantWidget..DesiredClassChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void SpawnedCharacterChanged(struct AShooterCharacter* NewValue); // Function PlayerParticipantWidget..SpawnedCharacterChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void OnAliveStateChanged(bool NewValue); // Function PlayerParticipantWidget..OnAliveStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (bool ); // Function PlayerParticipantWidget.. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void Destruct(); // Function PlayerParticipantWidget..Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3322a90
	void (); // Function PlayerParticipantWidget.. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void OnAnyPlayerTemporaryDeath(struct AShooterPlayerState* DamagerPlayerState, struct AShooterPlayerState* DownedPlayerState, struct UDamageResponse* DamageResponse, struct AAresEquippable* EquippableUsed, bool bRecoversInstantly); // Function PlayerParticipantWidget..OnAnyPlayerTemporaryDeath // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void OnAnyPlayerRecovered(struct AShooterPlayerState* RecoveredByPlayerState, struct AShooterPlayerState* RecoveredPlayerState); // Function PlayerParticipantWidget..OnAnyPlayerRecovered // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void Construct(); // Function PlayerParticipantWidget..Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3322a90
	void OnAwayPenaltyStateChanged(struct AShooterPlayerState* Owner, bool bIsPenalizedForBeingAway); // Function PlayerParticipantWidget..OnAwayPenaltyStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void OnVitalityDirtied(); // Function PlayerParticipantWidget..OnVitalityDirtied // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void OnInventoryItemsChanged(); // Function PlayerParticipantWidget..OnInventoryItemsChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (bool NewGameplayActive); // Function PlayerParticipantWidget.. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (int32_t EntryPoint); // Function PlayerParticipantWidget.. // (Final|UbergraphFunction|HasDefaults) // @ game+0x3322a90
};

