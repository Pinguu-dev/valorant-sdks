// BlueprintGeneratedClass BasePlayerCharacter.BasePlayerCharacter_C
// Size: 0x1361 (Inherited: 0x11d0)
struct ABasePlayerCharacter_C : ABasePawn_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x11d0(0x08)
	struct UTotemSelectorComponent_C* TotemSelectorComponent; // 0x11d8(0x08)
	struct UPMAimToolingSkeletalTargetComponent* PMAimToolingTarget; // 0x11e0(0x08)
	struct UComp_PlayerCharacter_DebuffTagVisuals_C* Comp_PlayerCharacter_DebuffTagVisuals; // 0x11e8(0x08)
	struct UCapsuleComponent* ; // 0x11f0(0x08)
	struct UDisarmedComponent* Disarmed; // 0x11f8(0x08)
	struct UAresWidgetComponent* InWorldCharacterWidget; // 0x1200(0x08)
	struct UAssistTrackingComponent* ; // 0x1208(0x08)
	struct UComp_PlayerCharacter_HealingTracker_C* Comp_PlayerCharacter_HealingTracker; // 0x1210(0x08)
	struct UShooterCharacterAudioAttenuationComponent_C* ShooterCharacterAudioAttenuationComponent; // 0x1218(0x08)
	struct UComp_PlayerCharacter_NearsightManager_C* Comp_PlayerCharacter_NearsightManager; // 0x1220(0x08)
	struct UComp_AbilityStatisticsReplicator_C* Comp_AbilityStatisticsReplicator; // 0x1228(0x08)
	struct UComp_PlayerCharacter_DebuffTagHUD_C* Comp_PlayerCharacter_DebuffTagHUD; // 0x1230(0x08)
	struct UComp_PlayerCharacter_SmokeOverlays_C* Comp_PlayerCharacter_SmokeOverlays; // 0x1238(0x08)
	struct UEnemySpottedVOComponent_C* EnemySpottedVOComponent; // 0x1240(0x08)
	struct UAresAudioComponentManagerComponent* AresAudioComponentManager; // 0x1248(0x08)
	struct UCharacterSprayComponent_C* CharacterSprayComponent; // 0x1250(0x08)
	struct USpringArmComponent* ; // 0x1258(0x08)
	struct UFootstepsComponent* ; // 0x1260(0x08)
	struct UCameraComponent* ; // 0x1268(0x08)
	struct UInteractableUserComponent* ; // 0x1270(0x08)
	struct UWidgetComponent* ; // 0x1278(0x08)
	struct UAnimationStateComponent* AnimationState; // 0x1280(0x08)
	struct UCorpseExploitationComponent* ; // 0x1288(0x08)
	struct FEffectID ; // 0x1290(0x20)
	struct TMap<enum class NonVerbalCommTypesEnum, int32_t> ; // 0x12b0(0x50)
	struct FEffectID ; // 0x1300(0x20)
	struct FMulticastInlineDelegate ; // 0x1320(0x10)
	struct FMulticastInlineDelegate ; // 0x1330(0x10)
	struct FEffectID ; // 0x1340(0x20)
	bool ; // 0x1360(0x01)

	void HasAltDeathReaction(bool& Result); // Function BasePlayerCharacter.BasePlayerCharacter_C.HasAltDeathReaction // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	bool ScriptCanAutoPickupEquippable(struct AAresEquippable* TargetEquippable); // Function BasePlayerCharacter.BasePlayerCharacter_C.ScriptCanAutoPickupEquippable // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x3322a60
	void (); // Function BasePlayerCharacter.BasePlayerCharacter_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function BasePlayerCharacter.BasePlayerCharacter_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function BasePlayerCharacter.BasePlayerCharacter_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (bool HasBomb); // Function BasePlayerCharacter.BasePlayerCharacter_C. // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (enum class NonVerbalCommTypesEnum ); // Function BasePlayerCharacter.BasePlayerCharacter_C. // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function BasePlayerCharacter.BasePlayerCharacter_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void _1(enum class EAresGamePhase NewGamePhase, int32_t RoundNumberEnded); // Function BasePlayerCharacter.BasePlayerCharacter_C._1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void ReceiveBeginPlay(); // Function BasePlayerCharacter.BasePlayerCharacter_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x3322a60
	void UpdateHalosEvent(enum class NonVerbalCommTypesEnum ); // Function BasePlayerCharacter.BasePlayerCharacter_C.UpdateHalosEvent // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (enum class EInventoryTransaction Transaction, struct UAresInventory* Inventory, struct AAresItem* item); // Function BasePlayerCharacter.BasePlayerCharacter_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct AController* PC); // Function BasePlayerCharacter.BasePlayerCharacter_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void _1(struct AActor* Actor); // Function BasePlayerCharacter.BasePlayerCharacter_C._1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void InitializeForRespawn(); // Function BasePlayerCharacter.BasePlayerCharacter_C.InitializeForRespawn // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void NotifyOnPlayerState(); // Function BasePlayerCharacter.BasePlayerCharacter_C.NotifyOnPlayerState // (Event|Public|BlueprintEvent) // @ game+0x3322a60
	void _1(bool bCollisionEnabled); // Function BasePlayerCharacter.BasePlayerCharacter_C._1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct UCorpseExploitationComponent* ExploitationComponent); // Function BasePlayerCharacter.BasePlayerCharacter_C. // (BlueprintEvent) // @ game+0x3322a60
	void (enum class EAresBoolSettingName SettingName, bool OldValue, bool NewValue); // Function BasePlayerCharacter.BasePlayerCharacter_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void OnCharacterDeath_Event_1(struct AShooterCharacter* Character, struct UDamageResponse* Response); // Function BasePlayerCharacter.BasePlayerCharacter_C.OnCharacterDeath_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void OnBombDefused(); // Function BasePlayerCharacter.BasePlayerCharacter_C.OnBombDefused // (Event|Public|BlueprintEvent) // @ game+0x3322a60
	void NotifyHandednessUpdated(); // Function BasePlayerCharacter.BasePlayerCharacter_C.NotifyHandednessUpdated // (Event|Public|BlueprintEvent) // @ game+0x3322a60
	void (int32_t EntryPoint); // Function BasePlayerCharacter.BasePlayerCharacter_C. // (Final|UbergraphFunction|HasDefaults) // @ game+0x3322a60
	void (enum class NonVerbalCommTypesEnum ); // Function BasePlayerCharacter.BasePlayerCharacter_C. // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (enum class SpeakingStates ); // Function BasePlayerCharacter.BasePlayerCharacter_C. // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
};

