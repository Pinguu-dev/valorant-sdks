// BlueprintGeneratedClass BasePawn.BasePawn_C
// Size: 0x11a0 (Inherited: 0x1080)
struct ABasePawn_C : AShooterCharacter {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1080(0x08)
	struct UComp_PlayerCharacter_SpawnInvulnerability_C* Comp_PlayerCharacter_SpawnInvulnerability; // 0x1088(0x08)
	struct UCharacterPortraitMinimapComponent_C* CharacterPortraitMinimapComponent; // 0x1090(0x08)
	struct UShooterCharacterMinimapComponent_C* ShooterCharacterMinimapComponent; // 0x1098(0x08)
	struct UShooterCharacterVisibilityComponent* ShooterCharacterVisibility1; // 0x10a0(0x08)
	struct USplitBodyRotationRopeComponent* SplitBodyRotationRope; // 0x10a8(0x08)
	struct UAresOutlineComponent* OutlineOverlay1P; // 0x10b0(0x08)
	struct UAresOutlineComponent* OutlineCosmetic3P; // 0x10b8(0x08)
	struct UComp_CharacterFalling_C* Comp_CharacterFalling; // 0x10c0(0x08)
	struct UCosmeticActionsComponent_C* CosmeticActionsComponent; // 0x10c8(0x08)
	struct UComp_Actor_Concussable_C* Comp_Actor_Concussable; // 0x10d0(0x08)
	struct UParticleSystemComponent* UD_FakeShadow_VFX; // 0x10d8(0x08)
	struct UIgnoreAllyWallPenetrationComponent* IgnoreAllyWallPenetration; // 0x10e0(0x08)
	struct UMinimapVisionConesComponent* MinimapVision; // 0x10e8(0x08)
	struct UAIPerceptionStimuliSourceComponent* AIPerceptionStimuliSource; // 0x10f0(0x08)
	struct UAresOutlineComponent* Outline1P; // 0x10f8(0x08)
	struct UAresOutlineComponent* Outline3P; // 0x1100(0x08)
	struct FNone* InEditorHotkeyComponent; // 0x1108(0x08)
	struct UBaseMovementSoundComponent_C* BaseMovementSoundComponent; // 0x1110(0x08)
	struct USplitBodyRotationGroundComponent* SplitBodyRotationGround; // 0x1118(0x08)
	struct UShooterCharacterDeathReactionComponent* ShooterCharacterDeathReaction; // 0x1120(0x08)
	struct UCharacterHudManagerComponent* CharacterHudManager; // 0x1128(0x08)
	struct UChildDamageSectionComponent* ShieldDamageSection; // 0x1130(0x08)
	struct UChildDamageSectionComponent* HealthDamageSection; // 0x1138(0x08)
	struct UAresHUDListener* AresHUDListener; // 0x1140(0x08)
	struct UAudBasePawnVOComponent_C* AudBasePawnVOComponent; // 0x1148(0x08)
	struct TArray<struct UMaterialInterface*> DefaultMaterials; // 0x1150(0x10)
	struct UAud_Base_SFX_Component_C* AudBaseSFXComponentClass; // 0x1160(0x08)
	struct UAud_Base_SFX_Component_C* AudBaseSFXComponent; // 0x1168(0x08)
	struct UAud_Base_UI_Component_C* Aud_Base_UI_Component; // 0x1170(0x08)
	bool SkipPerceptionSystemRegister; // 0x1178(0x01)
	char pad_1179[0x7]; // 0x1179(0x07)
	struct FEffectID FXC_ID_BaseDeaf; // 0x1180(0x20)

	void GetAudBasePawnVOComponent(struct UAudBasePawnVOComponent_C*& Component); // Function BasePawn.BasePawn_C.GetAudBasePawnVOComponent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void UpdateDeaf(bool IsDeaf); // Function BasePawn.BasePawn_C.UpdateDeaf // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void UpdateOutlineModes(); // Function BasePawn.BasePawn_C.UpdateOutlineModes // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	enum class EAresDeathCamFocusPoint DefaultDeathCamFocusPoint(); // Function BasePawn.BasePawn_C.DefaultDeathCamFocusPoint // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void AssignEnemyRenderCustomDepth(); // Function BasePawn.BasePawn_C.AssignEnemyRenderCustomDepth // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	struct UMatineeCameraShake* ShouldAimPunch(struct UDamageResponse* Response); // Function BasePawn.BasePawn_C.ShouldAimPunch // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void DestroyExternallyAddedComponent(struct UActorComponent* ComponentToDestroy); // Function BasePawn.BasePawn_C.DestroyExternallyAddedComponent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void GetDefaultMaterials(struct TArray<struct UMaterialInterface*>& DefaultMaterialInput, struct UMeshComponent* skelMeshReference); // Function BasePawn.BasePawn_C.GetDefaultMaterials // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void AudSetupComponents(); // Function BasePawn.BasePawn_C.AudSetupComponents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void ReceiveBeginPlay(); // Function BasePawn.BasePawn_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x3520f50
	void AuthOnDeath(struct AShooterPlayerController* Killer); // Function BasePawn.BasePawn_C.AuthOnDeath // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent) // @ game+0x3520f50
	void OnTeamChanged_Event_2(); // Function BasePawn.BasePawn_C.OnTeamChanged_Event_2 // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void AuthOnGameplayInvisibleUpdated(bool bNewInvisibility); // Function BasePawn.BasePawn_C.AuthOnGameplayInvisibleUpdated // (Event|Public|BlueprintEvent) // @ game+0x3520f50
	void ApplySpawnInvulnerability(bool DisableOnFire, bool DisableOnMove, float Duration); // Function BasePawn.BasePawn_C.ApplySpawnInvulnerability // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void UpdateOutlineModesOnViewTargetChanghed(struct APlayerController* PC); // Function BasePawn.BasePawn_C.UpdateOutlineModesOnViewTargetChanghed // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void UpdateOutlineModesOnPossession(struct AController* PC); // Function BasePawn.BasePawn_C.UpdateOutlineModesOnPossession // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void OnAuthFallingOutOfWorld_Event(struct AShooterCharacter* Character); // Function BasePawn.BasePawn_C.OnAuthFallingOutOfWorld_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void InitializeForRespawn(); // Function BasePawn.BasePawn_C.InitializeForRespawn // (Event|Public|BlueprintEvent) // @ game+0x3520f50
	void CustomEvent(struct AShooterCharacter* Character, struct UDamageResponse* Response); // Function BasePawn.BasePawn_C.CustomEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void CustomEvent_2(struct AShooterCharacter* ShooterCharacter, bool bFirstPersonVisible, bool bThirdPersonVisible); // Function BasePawn.BasePawn_C.CustomEvent_2 // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void DeafTagUpdated(struct UAresAbilitySystemComponent* AbilitySystem, struct FGameplayTag Tag, bool TagActive); // Function BasePawn.BasePawn_C.DeafTagUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void ExecuteUbergraph_BasePawn(int32_t EntryPoint); // Function BasePawn.BasePawn_C.ExecuteUbergraph_BasePawn // (Final|UbergraphFunction|HasDefaults) // @ game+0x3520f50
};

