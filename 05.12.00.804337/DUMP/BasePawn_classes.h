// BlueprintGeneratedClass BasePawn.BasePawn_C
// Size: 0x11d0 (Inherited: 0x10b0)
struct ABasePawn_C : AShooterCharacter {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x10b0(0x08)
	struct UComp_PlayerCharacter_SpawnInvulnerability_C* Comp_PlayerCharacter_SpawnInvulnerability; // 0x10b8(0x08)
	struct UCharacterPortraitMinimapComponent_C* CharacterPortraitMinimapComponent; // 0x10c0(0x08)
	struct UShooterCharacterMinimapComponent_C* ShooterCharacterMinimapComponent; // 0x10c8(0x08)
	struct UShooterCharacterVisibilityComponent* ; // 0x10d0(0x08)
	struct USplitBodyRotationRopeComponent* ; // 0x10d8(0x08)
	struct UAresOutlineComponent* ; // 0x10e0(0x08)
	struct UAresOutlineComponent* ; // 0x10e8(0x08)
	struct UComp_CharacterFalling_C* Comp_CharacterFalling; // 0x10f0(0x08)
	struct UCosmeticActionsComponent_C* CosmeticActionsComponent; // 0x10f8(0x08)
	struct UComp_Actor_Concussable_C* Comp_Actor_Concussable; // 0x1100(0x08)
	struct UParticleSystemComponent* UD_FakeShadow_VFX; // 0x1108(0x08)
	struct UIgnoreAllyWallPenetrationComponent* ; // 0x1110(0x08)
	struct UMinimapVisionConesComponent* ; // 0x1118(0x08)
	struct UAIPerceptionStimuliSourceComponent* AIPerceptionStimuliSource; // 0x1120(0x08)
	struct UAresOutlineComponent* Outline1P; // 0x1128(0x08)
	struct UAresOutlineComponent* Outline3P; // 0x1130(0x08)
	struct FNone* ; // 0x1138(0x08)
	struct UBaseMovementSoundComponent_C* BaseMovementSoundComponent; // 0x1140(0x08)
	struct USplitBodyRotationGroundComponent* ; // 0x1148(0x08)
	struct UShooterCharacterDeathReactionComponent* ; // 0x1150(0x08)
	struct UCharacterHudManagerComponent* ; // 0x1158(0x08)
	struct UChildDamageSectionComponent* ; // 0x1160(0x08)
	struct UChildDamageSectionComponent* HealthDamageSection; // 0x1168(0x08)
	struct UAresHUDListener* AresHUDListener; // 0x1170(0x08)
	struct UAudBasePawnVOComponent_C* AudBasePawnVOComponent; // 0x1178(0x08)
	struct TArray<struct UMaterialInterface*> ; // 0x1180(0x10)
	struct UAud_Base_SFX_Component_C* ; // 0x1190(0x08)
	struct UAud_Base_SFX_Component_C* ; // 0x1198(0x08)
	struct UAud_Base_UI_Component_C* Aud_Base_UI_Component; // 0x11a0(0x08)
	bool ; // 0x11a8(0x01)
	char pad_11A9[0x7]; // 0x11a9(0x07)
	struct FEffectID ; // 0x11b0(0x20)

	void GetAudBasePawnVOComponent(struct UAudBasePawnVOComponent_C*& Component); // Function BasePawn.BasePawn_C.GetAudBasePawnVOComponent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (bool ); // Function BasePawn.BasePawn_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (); // Function BasePawn.BasePawn_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	enum class EAresDeathCamFocusPoint DefaultDeathCamFocusPoint(); // Function BasePawn.BasePawn_C.DefaultDeathCamFocusPoint // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (); // Function BasePawn.BasePawn_C. // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	struct UMatineeCameraShake* ShouldAimPunch(struct UDamageResponse* Response); // Function BasePawn.BasePawn_C.ShouldAimPunch // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct UActorComponent* ); // Function BasePawn.BasePawn_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct TArray<struct UMaterialInterface*>& , struct UMeshComponent* ); // Function BasePawn.BasePawn_C. // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void AudSetupComponents(); // Function BasePawn.BasePawn_C.AudSetupComponents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void ReceiveBeginPlay(); // Function BasePawn.BasePawn_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x3322a90
	void AuthOnDeath(struct AShooterPlayerController* Killer); // Function BasePawn.BasePawn_C.AuthOnDeath // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent) // @ game+0x3322a90
	void _2(); // Function BasePawn.BasePawn_C._2 // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void AuthOnGameplayInvisibleUpdated(bool bNewInvisibility); // Function BasePawn.BasePawn_C.AuthOnGameplayInvisibleUpdated // (Event|Public|BlueprintEvent) // @ game+0x3322a90
	void (bool , bool , float Duration); // Function BasePawn.BasePawn_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct APlayerController* PC); // Function BasePawn.BasePawn_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct AController* PC); // Function BasePawn.BasePawn_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct AShooterCharacter* Character); // Function BasePawn.BasePawn_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void InitializeForRespawn(); // Function BasePawn.BasePawn_C.InitializeForRespawn // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void CustomEvent(struct AShooterCharacter* Character, struct UDamageResponse* Response); // Function BasePawn.BasePawn_C.CustomEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void CustomEvent_2(struct AShooterCharacter* ShooterCharacter, bool bFirstPersonVisible, bool bThirdPersonVisible); // Function BasePawn.BasePawn_C.CustomEvent_2 // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct UAresAbilitySystemComponent* AbilitySystem, struct FGameplayTag Tag, bool TagActive); // Function BasePawn.BasePawn_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (int32_t EntryPoint); // Function BasePawn.BasePawn_C. // (Final|UbergraphFunction|HasDefaults) // @ game+0x3322a90
};

