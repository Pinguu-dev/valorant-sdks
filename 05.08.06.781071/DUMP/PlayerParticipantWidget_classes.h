// WidgetBlueprintGeneratedClass PlayerParticipantWidget.PlayerParticipantWidget_C
// Size: 0x460 (Inherited: 0x2c8)
struct UPlayerParticipantWidget_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct UWidgetAnimation* UltActive; // 0x2d0(0x08)
	struct UWidgetAnimation* UltReady; // 0x2d8(0x08)
	struct UOverlay* ActiveUlt; // 0x2e0(0x08)
	struct UImage* ActiveUltGradiant; // 0x2e8(0x08)
	struct UImage* ActiveUltMat; // 0x2f0(0x08)
	struct UImage* Bomb; // 0x2f8(0x08)
	struct UOverlay* BombCarrier; // 0x300(0x08)
	struct UImage* bombCarrrierIcon; // 0x308(0x08)
	struct USizeBox* BombContainer; // 0x310(0x08)
	struct UImage* CharacterPortrait; // 0x318(0x08)
	struct USizeBox* CharHead; // 0x320(0x08)
	struct UImage* DeadCharacter; // 0x328(0x08)
	struct UOverlay* Debuffed; // 0x330(0x08)
	struct UImage* DebuffedGradiant_3; // 0x338(0x08)
	struct UImage* DebuffedGradiant_4; // 0x340(0x08)
	struct UImage* DebuffedMat_2; // 0x348(0x08)
	struct UOverlay* DownedOverlay; // 0x350(0x08)
	struct UTextBlock* DownedTimer; // 0x358(0x08)
	struct UProgressBar* Health; // 0x360(0x08)
	struct UImage* HealthBG; // 0x368(0x08)
	struct UOverlay* HealthOverlay; // 0x370(0x08)
	struct UImage* Image; // 0x378(0x08)
	struct UImage* Image_2; // 0x380(0x08)
	struct UImage* Image_3; // 0x388(0x08)
	struct UImage* Image_4; // 0x390(0x08)
	struct UImage* Image_79; // 0x398(0x08)
	struct UImage* Image_107; // 0x3a0(0x08)
	struct UImage* Image_148; // 0x3a8(0x08)
	struct UInvalidationBox* InvalidationBox_PlayerParticipantWidget; // 0x3b0(0x08)
	struct UImage* middle; // 0x3b8(0x08)
	struct UBorder* PlayerBorder; // 0x3c0(0x08)
	struct UOverlay* ReadyUlt; // 0x3c8(0x08)
	struct UImage* ReadyUltGradiant; // 0x3d0(0x08)
	struct UImage* ReadyUltGradiant_2; // 0x3d8(0x08)
	struct UImage* ReadyUltMat; // 0x3e0(0x08)
	struct UHorizontalBox* UltLine; // 0x3e8(0x08)
	struct UImage* UltOutline; // 0x3f0(0x08)
	struct UImage* UltOutline2; // 0x3f8(0x08)
	struct UImage* UltOutlineStationary; // 0x400(0x08)
	struct UImage* ViewedCharacter; // 0x408(0x08)
	struct UImage* YourPlayer; // 0x410(0x08)
	struct UHUDPlayerModel* PlayerModel; // 0x418(0x08)
	bool IsLocalPlayer; // 0x420(0x01)
	bool IsAlliedPlayer; // 0x421(0x01)
	char pad_422[0x6]; // 0x422(0x06)
	struct UCoordinatedHUDModel* HUDModel; // 0x428(0x08)
	bool UltReadyAnimationWillNeedPlaying; // 0x430(0x01)
	char pad_431[0x7]; // 0x431(0x07)
	struct TArray<struct UComp_Equippable_UltActiveOnEquip_C*> BoundUltActiveEquippables; // 0x438(0x10)
	bool UltIsActive; // 0x448(0x01)
	bool UltActiveAnimationWillNeedPlaying; // 0x449(0x01)
	bool IsOwnerObserver; // 0x44a(0x01)
	bool FaceRight; // 0x44b(0x01)
	char pad_44C[0x4]; // 0x44c(0x04)
	struct AAresPlayerStateBase* PlayerState; // 0x450(0x08)
	struct FTimerHandle DownedTimerHandle; // 0x458(0x08)

	void AdjustLayoutForDevice(); // Function PlayerParticipantWidget.PlayerParticipantWidget_C.AdjustLayoutForDevice // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	bool ShouldUpdateUltActive(bool UltActive); // Function PlayerParticipantWidget.PlayerParticipantWidget_C.ShouldUpdateUltActive // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3520f50
	void Update Downed Timer(struct UComp_PlayerState_DownedState_C* Downed Component); // Function PlayerParticipantWidget.PlayerParticipantWidget_C.Update Downed Timer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void UpdateDowned(bool Downed); // Function PlayerParticipantWidget.PlayerParticipantWidget_C.UpdateDowned // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void UpdateDebuffed(bool Debuff Active); // Function PlayerParticipantWidget.PlayerParticipantWidget_C.UpdateDebuffed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void UpdateViewedCharacter(); // Function PlayerParticipantWidget.PlayerParticipantWidget_C.UpdateViewedCharacter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	bool ShouldShowBombCarier(); // Function PlayerParticipantWidget.PlayerParticipantWidget_C.ShouldShowBombCarier // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3520f50
	void BindToUltActivate(struct AShooterPlayerState* ShooterPlayerState); // Function PlayerParticipantWidget.PlayerParticipantWidget_C.BindToUltActivate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void UpdateUlt(); // Function PlayerParticipantWidget.PlayerParticipantWidget_C.UpdateUlt // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void UpdateWidgets(); // Function PlayerParticipantWidget.PlayerParticipantWidget_C.UpdateWidgets // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void NumUltimatePointsChanged(int32_t NewValue, bool IsUltNewlyReady); // Function PlayerParticipantWidget.PlayerParticipantWidget_C.NumUltimatePointsChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void DesiredClassChanged(struct AShooterCharacter* NewValue); // Function PlayerParticipantWidget.PlayerParticipantWidget_C.DesiredClassChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void SpawnedCharacterChanged(struct AShooterCharacter* NewValue); // Function PlayerParticipantWidget.PlayerParticipantWidget_C.SpawnedCharacterChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void OnAliveStateChanged(bool NewValue); // Function PlayerParticipantWidget.PlayerParticipantWidget_C.OnAliveStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void OnUltActiveChanged(bool UltActive); // Function PlayerParticipantWidget.PlayerParticipantWidget_C.OnUltActiveChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void Destruct(); // Function PlayerParticipantWidget.PlayerParticipantWidget_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3520f50
	void Tick Downed Timer(); // Function PlayerParticipantWidget.PlayerParticipantWidget_C.Tick Downed Timer // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void OnAnyPlayerTemporaryDeath(struct AShooterPlayerState* DamagerPlayerState, struct AShooterPlayerState* DownedPlayerState, struct UDamageResponse* DamageResponse, struct AAresEquippable* EquippableUsed, bool bRecoversInstantly); // Function PlayerParticipantWidget.PlayerParticipantWidget_C.OnAnyPlayerTemporaryDeath // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void OnAnyPlayerRecovered(struct AShooterPlayerState* RecoveredByPlayerState, struct AShooterPlayerState* RecoveredPlayerState); // Function PlayerParticipantWidget.PlayerParticipantWidget_C.OnAnyPlayerRecovered // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void Construct(); // Function PlayerParticipantWidget.PlayerParticipantWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3520f50
	void OnAwayPenaltyStateChanged(struct AShooterPlayerState* Owner, bool bIsPenalizedForBeingAway); // Function PlayerParticipantWidget.PlayerParticipantWidget_C.OnAwayPenaltyStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void OnVitalityDirtied(); // Function PlayerParticipantWidget.PlayerParticipantWidget_C.OnVitalityDirtied // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void OnInventoryItemsChanged(); // Function PlayerParticipantWidget.PlayerParticipantWidget_C.OnInventoryItemsChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void GameplayActiveUpdate(bool NewGameplayActive); // Function PlayerParticipantWidget.PlayerParticipantWidget_C.GameplayActiveUpdate // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void ExecuteUbergraph_PlayerParticipantWidget(int32_t EntryPoint); // Function PlayerParticipantWidget.PlayerParticipantWidget_C.ExecuteUbergraph_PlayerParticipantWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x3520f50
};

