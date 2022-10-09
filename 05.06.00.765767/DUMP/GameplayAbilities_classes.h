// Class GameplayAbilities.AbilitySystemBlueprintLibrary
// Size: 0x30 (Inherited: 0x30)
struct UAbilitySystemBlueprintLibrary : UBlueprintFunctionLibrary {
};

// Class GameplayAbilities.AbilitySystemComponent
// Size: 0x1340 (Inherited: 0x158)
struct UAbilitySystemComponent : UGameplayTasksComponent {
	char pad_158[0x10]; // 0x158(0x10)
	struct TArray<struct FAttributeDefaults> DefaultStartingData; // 0x168(0x10)
	struct TArray<struct UAttributeSet*> SpawnedAttributes; // 0x178(0x10)
	struct FName AffectedAnimInstanceTag; // 0x188(0x0c)
	char pad_194[0x194]; // 0x194(0x194)
	float OutgoingDuration; // 0x328(0x04)
	float IncomingDuration; // 0x32c(0x04)
	char pad_330[0x20]; // 0x330(0x20)
	struct TArray<struct FString> ClientDebugStrings; // 0x350(0x10)
	struct TArray<struct FString> ServerDebugStrings; // 0x360(0x10)
	char pad_370[0x58]; // 0x370(0x58)
	bool UserAbilityActivationInhibited; // 0x3c8(0x01)
	bool ReplicationProxyEnabled; // 0x3c9(0x01)
	bool bSuppressGrantAbility; // 0x3ca(0x01)
	bool bSuppressGameplayCues; // 0x3cb(0x01)
	char pad_3CC[0x4]; // 0x3cc(0x04)
	struct TArray<struct AGameplayAbilityTargetActor*> SpawnedTargetActors; // 0x3d0(0x10)
	char pad_3E0[0x28]; // 0x3e0(0x28)
	struct AActor* OwnerActor; // 0x408(0x08)
	struct AActor* AvatarActor; // 0x410(0x08)
	char pad_418[0x10]; // 0x418(0x10)
	struct FGameplayAbilitySpecContainer ActivatableAbilities; // 0x428(0x120)
	char pad_548[0x30]; // 0x548(0x30)
	struct TArray<struct UGameplayAbility*> AllReplicatedInstancedAbilities; // 0x578(0x10)
	char pad_588[0x200]; // 0x588(0x200)
	struct FGameplayAbilityRepAnimMontage RepAnimMontageInfo; // 0x788(0x30)
	bool bCachedIsNetSimulated; // 0x7b8(0x01)
	bool bPendingMontageRep; // 0x7b9(0x01)
	char pad_7BA[0x6]; // 0x7ba(0x06)
	struct FGameplayAbilityLocalAnimMontage LocalAnimMontageInfo; // 0x7c0(0x28)
	char pad_7E8[0xa0]; // 0x7e8(0xa0)
	struct FActiveGameplayEffectsContainer ActiveGameplayEffects; // 0x888(0x478)
	struct FActiveGameplayCueContainer ActiveGameplayCues; // 0xd00(0x128)
	struct FActiveGameplayCueContainer MinimalReplicationGameplayCues; // 0xe28(0x128)
	char pad_F50[0x128]; // 0xf50(0x128)
	struct TArray<char> BlockedAbilityBindings; // 0x1078(0x10)
	char pad_1088[0x128]; // 0x1088(0x128)
	struct FMinimalReplicationTagCountMap MinimalReplicationTags; // 0x11b0(0x60)
	char pad_1210[0x18]; // 0x1210(0x18)
	struct FReplicatedPredictionKeyMap ReplicatedPredictionKeyMap; // 0x1228(0x118)
};

// Class GameplayAbilities.AbilitySystemDebugHUD
// Size: 0x4d0 (Inherited: 0x4d0)
struct AAbilitySystemDebugHUD : AHUD {
};

// Class GameplayAbilities.AbilitySystemGlobals
// Size: 0x2f8 (Inherited: 0x30)
struct UAbilitySystemGlobals : UObject {
	struct FSoftClassPath AbilitySystemGlobalsClassName; // 0x30(0x20)
	char pad_50[0x28]; // 0x50(0x28)
	struct FGameplayTag ActivateFailIsDeadTag; // 0x78(0x0c)
	struct FName ActivateFailIsDeadName; // 0x84(0x0c)
	struct FGameplayTag ActivateFailCooldownTag; // 0x90(0x0c)
	struct FName ActivateFailCooldownName; // 0x9c(0x0c)
	struct FGameplayTag ActivateFailCostTag; // 0xa8(0x0c)
	struct FName ActivateFailCostName; // 0xb4(0x0c)
	struct FGameplayTag ActivateFailTagsBlockedTag; // 0xc0(0x0c)
	struct FName ActivateFailTagsBlockedName; // 0xcc(0x0c)
	struct FGameplayTag ActivateFailTagsMissingTag; // 0xd8(0x0c)
	struct FName ActivateFailTagsMissingName; // 0xe4(0x0c)
	struct FGameplayTag ActivateFailNetworkingTag; // 0xf0(0x0c)
	struct FName ActivateFailNetworkingName; // 0xfc(0x0c)
	int32_t MinimalReplicationTagCountBits; // 0x108(0x04)
	char pad_10C[0x4]; // 0x10c(0x04)
	struct FNetSerializeScriptStructCache TargetDataStructCache; // 0x110(0x10)
	bool bAllowGameplayModEvaluationChannels; // 0x120(0x01)
	enum class EGameplayModEvaluationChannel DefaultGameplayModEvaluationChannel; // 0x121(0x01)
	char pad_122[0x2]; // 0x122(0x02)
	struct FName GameplayModEvaluationChannelAliases[0xa]; // 0x124(0x78)
	char pad_19C[0x4]; // 0x19c(0x04)
	struct FSoftObjectPath GlobalCurveTableName; // 0x1a0(0x20)
	struct UCurveTable* GlobalCurveTable; // 0x1c0(0x08)
	struct FSoftObjectPath GlobalAttributeMetaDataTableName; // 0x1c8(0x20)
	struct UDataTable* GlobalAttributeMetaDataTable; // 0x1e8(0x08)
	struct FSoftObjectPath GlobalAttributeSetDefaultsTableName; // 0x1f0(0x20)
	struct TArray<struct FSoftObjectPath> GlobalAttributeSetDefaultsTableNames; // 0x210(0x10)
	struct TArray<struct UCurveTable*> GlobalAttributeDefaultsTables; // 0x220(0x10)
	struct FSoftObjectPath GlobalGameplayCueManagerClass; // 0x230(0x20)
	struct FSoftObjectPath GlobalGameplayCueManagerName; // 0x250(0x20)
	struct TArray<struct FString> GameplayCueNotifyPaths; // 0x270(0x10)
	struct FSoftObjectPath GameplayTagResponseTableName; // 0x280(0x20)
	struct UGameplayTagReponseTable* GameplayTagResponseTable; // 0x2a0(0x08)
	bool PredictTargetGameplayEffects; // 0x2a8(0x01)
	char pad_2A9[0x7]; // 0x2a9(0x07)
	struct UGameplayCueManager* GlobalGameplayCueManager; // 0x2b0(0x08)
	char pad_2B8[0x40]; // 0x2b8(0x40)
};

// Class GameplayAbilities.AbilitySystemInterface
// Size: 0x30 (Inherited: 0x30)
struct UAbilitySystemInterface : UInterface {
};

// Class GameplayAbilities.AbilitySystemReplicationProxyInterface
// Size: 0x30 (Inherited: 0x30)
struct UAbilitySystemReplicationProxyInterface : UInterface {
};

// Class GameplayAbilities.AttributeSet
// Size: 0x38 (Inherited: 0x30)
struct UAttributeSet : UObject {
	char pad_30[0x8]; // 0x30(0x08)
};

// Class GameplayAbilities.AbilitySystemTestAttributeSet
// Size: 0x78 (Inherited: 0x38)
struct UAbilitySystemTestAttributeSet : UAttributeSet {
	float MaxHealth; // 0x38(0x04)
	float Health; // 0x3c(0x04)
	float Mana; // 0x40(0x04)
	float MaxMana; // 0x44(0x04)
	float Damage; // 0x48(0x04)
	float SpellDamage; // 0x4c(0x04)
	float PhysicalDamage; // 0x50(0x04)
	float CritChance; // 0x54(0x04)
	float CritMultiplier; // 0x58(0x04)
	float ArmorDamageReduction; // 0x5c(0x04)
	float DodgeChance; // 0x60(0x04)
	float LifeSteal; // 0x64(0x04)
	float Strength; // 0x68(0x04)
	float StackingAttribute1; // 0x6c(0x04)
	float StackingAttribute2; // 0x70(0x04)
	float NoStackAttribute; // 0x74(0x04)
};

// Class GameplayAbilities.AbilitySystemTestPawn
// Size: 0x478 (Inherited: 0x458)
struct AAbilitySystemTestPawn : ADefaultPawn {
	char pad_458[0x18]; // 0x458(0x18)
	struct UAbilitySystemComponent* AbilitySystemComponent; // 0x470(0x08)
};

// Class GameplayAbilities.AbilityTask
// Size: 0x88 (Inherited: 0x70)
struct UAbilityTask : UGameplayTask {
	struct UGameplayAbility* Ability; // 0x70(0x08)
	struct UAbilitySystemComponent* AbilitySystemComponent; // 0x78(0x08)
	char pad_80[0x8]; // 0x80(0x08)
};

// Class GameplayAbilities.AbilityTask_ApplyRootMotion_Base
// Size: 0xc0 (Inherited: 0x88)
struct UAbilityTask_ApplyRootMotion_Base : UAbilityTask {
	struct FName ForceName; // 0x88(0x0c)
	enum class ERootMotionFinishVelocityMode FinishVelocityMode; // 0x94(0x01)
	char pad_95[0x3]; // 0x95(0x03)
	struct FVector FinishSetVelocity; // 0x98(0x0c)
	float FinishClampVelocity; // 0xa4(0x04)
	struct UCharacterMovementComponent* MovementComponent; // 0xa8(0x08)
	char pad_B0[0x10]; // 0xb0(0x10)
};

// Class GameplayAbilities.AbilityTask_ApplyRootMotionConstantForce
// Size: 0xf8 (Inherited: 0xc0)
struct UAbilityTask_ApplyRootMotionConstantForce : UAbilityTask_ApplyRootMotion_Base {
	struct FMulticastInlineDelegate OnFinish; // 0xc0(0x10)
	struct FVector WorldDirection; // 0xd0(0x0c)
	float Strength; // 0xdc(0x04)
	float Duration; // 0xe0(0x04)
	bool bIsAdditive; // 0xe4(0x01)
	char pad_E5[0x3]; // 0xe5(0x03)
	struct UCurveFloat* StrengthOverTime; // 0xe8(0x08)
	bool bEnableGravity; // 0xf0(0x01)
	char pad_F1[0x7]; // 0xf1(0x07)
};

// Class GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce
// Size: 0x118 (Inherited: 0xc0)
struct UAbilityTask_ApplyRootMotionJumpForce : UAbilityTask_ApplyRootMotion_Base {
	struct FMulticastInlineDelegate OnFinish; // 0xc0(0x10)
	struct FMulticastInlineDelegate OnLanded; // 0xd0(0x10)
	struct FRotator Rotation; // 0xe0(0x0c)
	float Distance; // 0xec(0x04)
	float Height; // 0xf0(0x04)
	float Duration; // 0xf4(0x04)
	float MinimumLandedTriggerTime; // 0xf8(0x04)
	bool bFinishOnLanded; // 0xfc(0x01)
	char pad_FD[0x3]; // 0xfd(0x03)
	struct UCurveVector* PathOffsetCurve; // 0x100(0x08)
	struct UCurveFloat* TimeMappingCurve; // 0x108(0x08)
	char pad_110[0x8]; // 0x110(0x08)
};

// Class GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce
// Size: 0x138 (Inherited: 0xc0)
struct UAbilityTask_ApplyRootMotionMoveToActorForce : UAbilityTask_ApplyRootMotion_Base {
	struct FMulticastInlineDelegate OnFinished; // 0xc0(0x10)
	char pad_D0[0x8]; // 0xd0(0x08)
	struct FVector StartLocation; // 0xd8(0x0c)
	struct FVector TargetLocation; // 0xe4(0x0c)
	struct AActor* TargetActor; // 0xf0(0x08)
	struct FVector TargetLocationOffset; // 0xf8(0x0c)
	enum class ERootMotionMoveToActorTargetOffsetType OffsetAlignment; // 0x104(0x01)
	char pad_105[0x3]; // 0x105(0x03)
	float Duration; // 0x108(0x04)
	bool bDisableDestinationReachedInterrupt; // 0x10c(0x01)
	bool bSetNewMovementMode; // 0x10d(0x01)
	enum class EMovementMode NewMovementMode; // 0x10e(0x01)
	bool bRestrictSpeedToExpected; // 0x10f(0x01)
	struct UCurveVector* PathOffsetCurve; // 0x110(0x08)
	struct UCurveFloat* TimeMappingCurve; // 0x118(0x08)
	struct UCurveFloat* TargetLerpSpeedHorizontalCurve; // 0x120(0x08)
	struct UCurveFloat* TargetLerpSpeedVerticalCurve; // 0x128(0x08)
	char pad_130[0x8]; // 0x130(0x08)
};

// Class GameplayAbilities.AbilityTask_ApplyRootMotionMoveToForce
// Size: 0x110 (Inherited: 0xc0)
struct UAbilityTask_ApplyRootMotionMoveToForce : UAbilityTask_ApplyRootMotion_Base {
	struct FMulticastInlineDelegate OnTimedOut; // 0xc0(0x10)
	struct FMulticastInlineDelegate OnTimedOutAndDestinationReached; // 0xd0(0x10)
	struct FVector StartLocation; // 0xe0(0x0c)
	struct FVector TargetLocation; // 0xec(0x0c)
	float Duration; // 0xf8(0x04)
	bool bSetNewMovementMode; // 0xfc(0x01)
	enum class EMovementMode NewMovementMode; // 0xfd(0x01)
	bool bRestrictSpeedToExpected; // 0xfe(0x01)
	char pad_FF[0x1]; // 0xff(0x01)
	struct UCurveVector* PathOffsetCurve; // 0x100(0x08)
	char pad_108[0x8]; // 0x108(0x08)
};

// Class GameplayAbilities.AbilityTask_ApplyRootMotionRadialForce
// Size: 0x118 (Inherited: 0xc0)
struct UAbilityTask_ApplyRootMotionRadialForce : UAbilityTask_ApplyRootMotion_Base {
	struct FMulticastInlineDelegate OnFinish; // 0xc0(0x10)
	struct FVector Location; // 0xd0(0x0c)
	char pad_DC[0x4]; // 0xdc(0x04)
	struct AActor* LocationActor; // 0xe0(0x08)
	float Strength; // 0xe8(0x04)
	float Duration; // 0xec(0x04)
	float Radius; // 0xf0(0x04)
	bool bIsPush; // 0xf4(0x01)
	bool bIsAdditive; // 0xf5(0x01)
	bool bNoZForce; // 0xf6(0x01)
	char pad_F7[0x1]; // 0xf7(0x01)
	struct UCurveFloat* StrengthDistanceFalloff; // 0xf8(0x08)
	struct UCurveFloat* StrengthOverTime; // 0x100(0x08)
	bool bUseFixedWorldDirection; // 0x108(0x01)
	char pad_109[0x3]; // 0x109(0x03)
	struct FRotator FixedWorldDirection; // 0x10c(0x0c)
};

// Class GameplayAbilities.AbilityTask_MoveToLocation
// Size: 0xd0 (Inherited: 0x88)
struct UAbilityTask_MoveToLocation : UAbilityTask {
	struct FMulticastInlineDelegate OnTargetLocationReached; // 0x88(0x10)
	char pad_98[0x4]; // 0x98(0x04)
	struct FVector StartLocation; // 0x9c(0x0c)
	struct FVector TargetLocation; // 0xa8(0x0c)
	float DurationOfMovement; // 0xb4(0x04)
	char pad_B8[0x8]; // 0xb8(0x08)
	struct UCurveFloat* LerpCurve; // 0xc0(0x08)
	struct UCurveVector* LerpCurveVector; // 0xc8(0x08)
};

// Class GameplayAbilities.AbilityTask_NetworkSyncPoint
// Size: 0xa0 (Inherited: 0x88)
struct UAbilityTask_NetworkSyncPoint : UAbilityTask {
	struct FMulticastInlineDelegate OnSync; // 0x88(0x10)
	char pad_98[0x8]; // 0x98(0x08)
};

// Class GameplayAbilities.AbilityTask_PlayMontageAndWait
// Size: 0x118 (Inherited: 0x88)
struct UAbilityTask_PlayMontageAndWait : UAbilityTask {
	struct FMulticastInlineDelegate OnCompleted; // 0x88(0x10)
	struct FMulticastInlineDelegate OnBlendOut; // 0x98(0x10)
	struct FMulticastInlineDelegate OnInterrupted; // 0xa8(0x10)
	struct FMulticastInlineDelegate OnCancelled; // 0xb8(0x10)
	char pad_C8[0x28]; // 0xc8(0x28)
	struct UAnimMontage* MontageToPlay; // 0xf0(0x08)
	float Rate; // 0xf8(0x04)
	struct FName StartSection; // 0xfc(0x0c)
	float AnimRootMotionTranslationScale; // 0x108(0x04)
	float StartTimeSeconds; // 0x10c(0x04)
	bool bStopWhenAbilityEnds; // 0x110(0x01)
	char pad_111[0x7]; // 0x111(0x07)
};

// Class GameplayAbilities.AbilityTask_Repeat
// Size: 0xc0 (Inherited: 0x88)
struct UAbilityTask_Repeat : UAbilityTask {
	struct FMulticastInlineDelegate OnPerformAction; // 0x88(0x10)
	struct FMulticastInlineDelegate OnFinished; // 0x98(0x10)
	char pad_A8[0x18]; // 0xa8(0x18)
};

// Class GameplayAbilities.AbilityTask_SpawnActor
// Size: 0xd0 (Inherited: 0x88)
struct UAbilityTask_SpawnActor : UAbilityTask {
	struct FMulticastInlineDelegate Success; // 0x88(0x10)
	struct FMulticastInlineDelegate DidNotSpawn; // 0x98(0x10)
	char pad_A8[0x28]; // 0xa8(0x28)
};

// Class GameplayAbilities.AbilityTask_StartAbilityState
// Size: 0xc0 (Inherited: 0x88)
struct UAbilityTask_StartAbilityState : UAbilityTask {
	struct FMulticastInlineDelegate OnStateEnded; // 0x88(0x10)
	struct FMulticastInlineDelegate OnStateInterrupted; // 0x98(0x10)
	char pad_A8[0x18]; // 0xa8(0x18)
};

// Class GameplayAbilities.AbilityTask_VisualizeTargeting
// Size: 0xb0 (Inherited: 0x88)
struct UAbilityTask_VisualizeTargeting : UAbilityTask {
	struct FMulticastInlineDelegate TimeElapsed; // 0x88(0x10)
	char pad_98[0x18]; // 0x98(0x18)
};

// Class GameplayAbilities.AbilityTask_WaitAbilityActivate
// Size: 0x148 (Inherited: 0x88)
struct UAbilityTask_WaitAbilityActivate : UAbilityTask {
	struct FMulticastInlineDelegate OnActivate; // 0x88(0x10)
	char pad_98[0xb0]; // 0x98(0xb0)
};

// Class GameplayAbilities.AbilityTask_WaitAbilityCommit
// Size: 0x108 (Inherited: 0x88)
struct UAbilityTask_WaitAbilityCommit : UAbilityTask {
	struct FMulticastInlineDelegate OnCommit; // 0x88(0x10)
	char pad_98[0x70]; // 0x98(0x70)
};

// Class GameplayAbilities.AbilityTask_WaitAttributeChange
// Size: 0x108 (Inherited: 0x88)
struct UAbilityTask_WaitAttributeChange : UAbilityTask {
	struct FMulticastInlineDelegate OnChange; // 0x88(0x10)
	char pad_98[0x68]; // 0x98(0x68)
	struct UAbilitySystemComponent* ExternalOwner; // 0x100(0x08)
};

// Class GameplayAbilities.AbilityTask_WaitAttributeChangeRatioThreshold
// Size: 0x148 (Inherited: 0x88)
struct UAbilityTask_WaitAttributeChangeRatioThreshold : UAbilityTask {
	struct FMulticastInlineDelegate OnChange; // 0x88(0x10)
	char pad_98[0xa8]; // 0x98(0xa8)
	struct UAbilitySystemComponent* ExternalOwner; // 0x140(0x08)
};

// Class GameplayAbilities.AbilityTask_WaitAttributeChangeThreshold
// Size: 0xf8 (Inherited: 0x88)
struct UAbilityTask_WaitAttributeChangeThreshold : UAbilityTask {
	struct FMulticastInlineDelegate OnChange; // 0x88(0x10)
	char pad_98[0x58]; // 0x98(0x58)
	struct UAbilitySystemComponent* ExternalOwner; // 0xf0(0x08)
};

// Class GameplayAbilities.AbilityTask_WaitCancel
// Size: 0xa0 (Inherited: 0x88)
struct UAbilityTask_WaitCancel : UAbilityTask {
	struct FMulticastInlineDelegate OnCancel; // 0x88(0x10)
	char pad_98[0x8]; // 0x98(0x08)
};

// Class GameplayAbilities.AbilityTask_WaitConfirm
// Size: 0xa8 (Inherited: 0x88)
struct UAbilityTask_WaitConfirm : UAbilityTask {
	struct FMulticastInlineDelegate OnConfirm; // 0x88(0x10)
	char pad_98[0x10]; // 0x98(0x10)
};

// Class GameplayAbilities.AbilityTask_WaitConfirmCancel
// Size: 0xb0 (Inherited: 0x88)
struct UAbilityTask_WaitConfirmCancel : UAbilityTask {
	struct FMulticastInlineDelegate OnConfirm; // 0x88(0x10)
	struct FMulticastInlineDelegate OnCancel; // 0x98(0x10)
	char pad_A8[0x8]; // 0xa8(0x08)
};

// Class GameplayAbilities.AbilityTask_WaitDelay
// Size: 0xa0 (Inherited: 0x88)
struct UAbilityTask_WaitDelay : UAbilityTask {
	struct FMulticastInlineDelegate OnFinish; // 0x88(0x10)
	char pad_98[0x8]; // 0x98(0x08)
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied
// Size: 0x1c0 (Inherited: 0x88)
struct UAbilityTask_WaitGameplayEffectApplied : UAbilityTask {
	char pad_88[0x128]; // 0x88(0x128)
	struct UAbilitySystemComponent* ExternalOwner; // 0x1b0(0x08)
	char pad_1B8[0x8]; // 0x1b8(0x08)
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self
// Size: 0x1e0 (Inherited: 0x1c0)
struct UAbilityTask_WaitGameplayEffectApplied_Self : UAbilityTask_WaitGameplayEffectApplied {
	struct FMulticastInlineDelegate OnApplied; // 0x1c0(0x10)
	char pad_1D0[0x10]; // 0x1d0(0x10)
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target
// Size: 0x1e0 (Inherited: 0x1c0)
struct UAbilityTask_WaitGameplayEffectApplied_Target : UAbilityTask_WaitGameplayEffectApplied {
	struct FMulticastInlineDelegate OnApplied; // 0x1c0(0x10)
	char pad_1D0[0x10]; // 0x1d0(0x10)
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectBlockedImmunity
// Size: 0x130 (Inherited: 0x88)
struct UAbilityTask_WaitGameplayEffectBlockedImmunity : UAbilityTask {
	struct FMulticastInlineDelegate bLocked; // 0x88(0x10)
	char pad_98[0x88]; // 0x98(0x88)
	struct UAbilitySystemComponent* ExternalOwner; // 0x120(0x08)
	char pad_128[0x8]; // 0x128(0x08)
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved
// Size: 0xc8 (Inherited: 0x88)
struct UAbilityTask_WaitGameplayEffectRemoved : UAbilityTask {
	struct FMulticastInlineDelegate OnRemoved; // 0x88(0x10)
	struct FMulticastInlineDelegate InvalidHandle; // 0x98(0x10)
	char pad_A8[0x20]; // 0xa8(0x20)
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange
// Size: 0xc0 (Inherited: 0x88)
struct UAbilityTask_WaitGameplayEffectStackChange : UAbilityTask {
	struct FMulticastInlineDelegate OnChange; // 0x88(0x10)
	struct FMulticastInlineDelegate InvalidHandle; // 0x98(0x10)
	char pad_A8[0x18]; // 0xa8(0x18)
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEvent
// Size: 0xc0 (Inherited: 0x88)
struct UAbilityTask_WaitGameplayEvent : UAbilityTask {
	struct FMulticastInlineDelegate EventReceived; // 0x88(0x10)
	char pad_98[0x10]; // 0x98(0x10)
	struct UAbilitySystemComponent* OptionalExternalTarget; // 0xa8(0x08)
	char pad_B0[0x10]; // 0xb0(0x10)
};

// Class GameplayAbilities.AbilityTask_WaitGameplayTag
// Size: 0xb0 (Inherited: 0x88)
struct UAbilityTask_WaitGameplayTag : UAbilityTask {
	char pad_88[0x10]; // 0x88(0x10)
	struct UAbilitySystemComponent* OptionalExternalTarget; // 0x98(0x08)
	char pad_A0[0x10]; // 0xa0(0x10)
};

// Class GameplayAbilities.AbilityTask_WaitGameplayTagAdded
// Size: 0xc0 (Inherited: 0xb0)
struct UAbilityTask_WaitGameplayTagAdded : UAbilityTask_WaitGameplayTag {
	struct FMulticastInlineDelegate Added; // 0xb0(0x10)
};

// Class GameplayAbilities.AbilityTask_WaitGameplayTagRemoved
// Size: 0xc0 (Inherited: 0xb0)
struct UAbilityTask_WaitGameplayTagRemoved : UAbilityTask_WaitGameplayTag {
	struct FMulticastInlineDelegate Removed; // 0xb0(0x10)
};

// Class GameplayAbilities.AbilityTask_WaitInputPress
// Size: 0xa8 (Inherited: 0x88)
struct UAbilityTask_WaitInputPress : UAbilityTask {
	struct FMulticastInlineDelegate OnPress; // 0x88(0x10)
	char pad_98[0x10]; // 0x98(0x10)
};

// Class GameplayAbilities.AbilityTask_WaitInputRelease
// Size: 0xa8 (Inherited: 0x88)
struct UAbilityTask_WaitInputRelease : UAbilityTask {
	struct FMulticastInlineDelegate OnRelease; // 0x88(0x10)
	char pad_98[0x10]; // 0x98(0x10)
};

// Class GameplayAbilities.AbilityTask_WaitMovementModeChange
// Size: 0xa8 (Inherited: 0x88)
struct UAbilityTask_WaitMovementModeChange : UAbilityTask {
	struct FMulticastInlineDelegate OnChange; // 0x88(0x10)
	char pad_98[0x10]; // 0x98(0x10)
};

// Class GameplayAbilities.AbilityTask_WaitOverlap
// Size: 0x98 (Inherited: 0x88)
struct UAbilityTask_WaitOverlap : UAbilityTask {
	struct FMulticastInlineDelegate OnOverlap; // 0x88(0x10)
};

// Class GameplayAbilities.AbilityTask_WaitTargetData
// Size: 0xc8 (Inherited: 0x88)
struct UAbilityTask_WaitTargetData : UAbilityTask {
	struct FMulticastInlineDelegate ValidData; // 0x88(0x10)
	struct FMulticastInlineDelegate Cancelled; // 0x98(0x10)
	struct AGameplayAbilityTargetActor* TargetClass; // 0xa8(0x08)
	struct AGameplayAbilityTargetActor* TargetActor; // 0xb0(0x08)
	char pad_B8[0x10]; // 0xb8(0x10)
};

// Class GameplayAbilities.AbilityTask_WaitVelocityChange
// Size: 0xb0 (Inherited: 0x88)
struct UAbilityTask_WaitVelocityChange : UAbilityTask {
	struct FMulticastInlineDelegate OnVelocityChage; // 0x88(0x10)
	struct UMovementComponent* CachedMovementComponent; // 0x98(0x08)
	char pad_A0[0x10]; // 0xa0(0x10)
};

// Class GameplayAbilities.GameplayAbility
// Size: 0x3c0 (Inherited: 0x30)
struct UGameplayAbility : UObject {
	char pad_30[0x80]; // 0x30(0x80)
	struct FGameplayTagContainer AbilityTags; // 0xb0(0x20)
	bool bReplicateInputDirectly; // 0xd0(0x01)
	bool RemoteInstanceEnded; // 0xd1(0x01)
	char pad_D2[0x4]; // 0xd2(0x04)
	enum class EGameplayAbilityReplicationPolicy ReplicationPolicy; // 0xd6(0x01)
	enum class EGameplayAbilityInstancingPolicy InstancingPolicy; // 0xd7(0x01)
	bool bServerRespectsRemoteAbilityCancellation; // 0xd8(0x01)
	bool bRetriggerInstancedAbility; // 0xd9(0x01)
	char pad_DA[0x6]; // 0xda(0x06)
	struct FGameplayAbilityActivationInfo CurrentActivationInfo; // 0xe0(0x18)
	struct FGameplayEventData CurrentEventData; // 0xf8(0xb8)
	enum class EGameplayAbilityNetExecutionPolicy NetExecutionPolicy; // 0x1b0(0x01)
	enum class EGameplayAbilityNetSecurityPolicy NetSecurityPolicy; // 0x1b1(0x01)
	char pad_1B2[0x6]; // 0x1b2(0x06)
	struct UGameplayEffect* CostGameplayEffectClass; // 0x1b8(0x08)
	struct TArray<struct FAbilityTriggerData> AbilityTriggers; // 0x1c0(0x10)
	struct UGameplayEffect* CooldownGameplayEffectClass; // 0x1d0(0x08)
	struct FGameplayTagContainer CancelAbilitiesWithTag; // 0x1d8(0x20)
	struct FGameplayTagContainer BlockAbilitiesWithTag; // 0x1f8(0x20)
	struct FGameplayTagContainer ActivationOwnedTags; // 0x218(0x20)
	struct FGameplayTagContainer ActivationRequiredTags; // 0x238(0x20)
	struct FGameplayTagContainer ActivationBlockedTags; // 0x258(0x20)
	struct FGameplayTagContainer SourceRequiredTags; // 0x278(0x20)
	struct FGameplayTagContainer SourceBlockedTags; // 0x298(0x20)
	struct FGameplayTagContainer TargetRequiredTags; // 0x2b8(0x20)
	struct FGameplayTagContainer TargetBlockedTags; // 0x2d8(0x20)
	char pad_2F8[0x20]; // 0x2f8(0x20)
	struct TArray<struct UGameplayTask*> ActiveTasks; // 0x318(0x10)
	char pad_328[0x10]; // 0x328(0x10)
	struct UAnimMontage* CurrentMontage; // 0x338(0x08)
	char pad_340[0x60]; // 0x340(0x60)
	bool bIsActive; // 0x3a0(0x01)
	bool bIsCancelable; // 0x3a1(0x01)
	bool bIsBlockingOtherAbilities; // 0x3a2(0x01)
	char pad_3A3[0x15]; // 0x3a3(0x15)
	bool bMarkPendingKillOnAbilityEnd; // 0x3b8(0x01)
	char pad_3B9[0x7]; // 0x3b9(0x07)
};

// Class GameplayAbilities.GameplayAbility_CharacterJump
// Size: 0x3c0 (Inherited: 0x3c0)
struct UGameplayAbility_CharacterJump : UGameplayAbility {
};

// Class GameplayAbilities.GameplayAbility_Montage
// Size: 0x3f8 (Inherited: 0x3c0)
struct UGameplayAbility_Montage : UGameplayAbility {
	struct UAnimMontage* MontageToPlay; // 0x3c0(0x08)
	float PlayRate; // 0x3c8(0x04)
	struct FName SectionName; // 0x3cc(0x0c)
	struct TArray<struct UGameplayEffect*> GameplayEffectClassesWhileAnimating; // 0x3d8(0x10)
	struct TArray<struct UGameplayEffect*> GameplayEffectsWhileAnimating; // 0x3e8(0x10)
};

// Class GameplayAbilities.GameplayAbilityBlueprint
// Size: 0xa8 (Inherited: 0xa8)
struct UGameplayAbilityBlueprint : UBlueprint {
};

// Class GameplayAbilities.GameplayAbilitySet
// Size: 0x48 (Inherited: 0x38)
struct UGameplayAbilitySet : UDataAsset {
	struct TArray<struct FGameplayAbilityBindInfo> Abilities; // 0x38(0x10)
};

// Class GameplayAbilities.GameplayAbilityTargetActor
// Size: 0x500 (Inherited: 0x3d0)
struct AGameplayAbilityTargetActor : AActor {
	bool ShouldProduceTargetDataOnServer; // 0x3d0(0x01)
	char pad_3D1[0xf]; // 0x3d1(0x0f)
	struct FGameplayAbilityTargetingLocationInfo StartLocation; // 0x3e0(0x80)
	char pad_460[0x30]; // 0x460(0x30)
	struct APlayerController* MasterPC; // 0x490(0x08)
	struct UGameplayAbility* OwningAbility; // 0x498(0x08)
	bool bDestroyOnConfirmation; // 0x4a0(0x01)
	char pad_4A1[0x7]; // 0x4a1(0x07)
	struct AActor* SourceActor; // 0x4a8(0x08)
	struct FWorldReticleParameters ReticleParams; // 0x4b0(0x0c)
	char pad_4BC[0x4]; // 0x4bc(0x04)
	struct AGameplayAbilityWorldReticle* ReticleClass; // 0x4c0(0x08)
	struct FGameplayTargetDataFilterHandle Filter; // 0x4c8(0x10)
	bool bDebug; // 0x4d8(0x01)
	char pad_4D9[0x17]; // 0x4d9(0x17)
	struct UAbilitySystemComponent* GenericDelegateBoundASC; // 0x4f0(0x08)
	char pad_4F8[0x8]; // 0x4f8(0x08)
};

// Class GameplayAbilities.GameplayAbilityTargetActor_Trace
// Size: 0x520 (Inherited: 0x500)
struct AGameplayAbilityTargetActor_Trace : AGameplayAbilityTargetActor {
	float MaxRange; // 0x4f8(0x04)
	struct FCollisionProfileName TraceProfile; // 0x4fc(0x0c)
	bool bTraceAffectsAimPitch; // 0x508(0x01)
	char pad_511[0xf]; // 0x511(0x0f)
};

// Class GameplayAbilities.GameplayAbilityTargetActor_GroundTrace
// Size: 0x540 (Inherited: 0x520)
struct AGameplayAbilityTargetActor_GroundTrace : AGameplayAbilityTargetActor_Trace {
	float CollisionRadius; // 0x518(0x04)
	float CollisionHeight; // 0x51c(0x04)
	char pad_528[0x18]; // 0x528(0x18)
};

// Class GameplayAbilities.GameplayAbilityTargetActor_ActorPlacement
// Size: 0x550 (Inherited: 0x540)
struct AGameplayAbilityTargetActor_ActorPlacement : AGameplayAbilityTargetActor_GroundTrace {
	struct UObject* PlacedActorClass; // 0x538(0x08)
	struct UMaterialInterface* PlacedActorMaterial; // 0x540(0x08)
};

// Class GameplayAbilities.GameplayAbilityTargetActor_Radius
// Size: 0x500 (Inherited: 0x500)
struct AGameplayAbilityTargetActor_Radius : AGameplayAbilityTargetActor {
	float Radius; // 0x4f8(0x04)
};

// Class GameplayAbilities.GameplayAbilityTargetActor_SingleLineTrace
// Size: 0x520 (Inherited: 0x520)
struct AGameplayAbilityTargetActor_SingleLineTrace : AGameplayAbilityTargetActor_Trace {
};

// Class GameplayAbilities.GameplayAbilityWorldReticle
// Size: 0x3f0 (Inherited: 0x3d0)
struct AGameplayAbilityWorldReticle : AActor {
	struct FWorldReticleParameters Parameters; // 0x3d0(0x0c)
	bool bFaceOwnerFlat; // 0x3dc(0x01)
	bool bSnapToTargetedActor; // 0x3dd(0x01)
	bool bIsTargetValid; // 0x3de(0x01)
	bool bIsTargetAnActor; // 0x3df(0x01)
	struct APlayerController* MasterPC; // 0x3e0(0x08)
	struct AActor* TargetingActor; // 0x3e8(0x08)
};

// Class GameplayAbilities.GameplayAbilityWorldReticle_ActorVisualization
// Size: 0x408 (Inherited: 0x3f0)
struct AGameplayAbilityWorldReticle_ActorVisualization : AGameplayAbilityWorldReticle {
	struct UCapsuleComponent* CollisionComponent; // 0x3f0(0x08)
	struct TArray<struct UActorComponent*> VisualizationComponents; // 0x3f8(0x10)
};

// Class GameplayAbilities.GameplayCueInterface
// Size: 0x30 (Inherited: 0x30)
struct UGameplayCueInterface : UInterface {
};

// Class GameplayAbilities.GameplayCueManager
// Size: 0x318 (Inherited: 0x38)
struct UGameplayCueManager : UDataAsset {
	char pad_38[0x18]; // 0x38(0x18)
	struct FGameplayCueObjectLibrary RuntimeGameplayCueObjectLibrary; // 0x50(0x50)
	struct FGameplayCueObjectLibrary EditorGameplayCueObjectLibrary; // 0xa0(0x50)
	char pad_F0[0x1c8]; // 0xf0(0x1c8)
	struct TArray<struct UObject*> LoadedGameplayCueNotifyClasses; // 0x2b8(0x10)
	struct TArray<struct AGameplayCueNotify_Actor*> GameplayCueClassesForPreallocation; // 0x2c8(0x10)
	struct TArray<struct FGameplayCuePendingExecute> PendingExecuteCues; // 0x2d8(0x10)
	int32_t GameplayCueSendContextCount; // 0x2e8(0x04)
	char pad_2EC[0x4]; // 0x2ec(0x04)
	struct TArray<struct FPreallocationInfo> PreallocationInfoList_Internal; // 0x2f0(0x10)
	char pad_300[0x18]; // 0x300(0x18)
};

// Class GameplayAbilities.GameplayCueNotify_Actor
// Size: 0x438 (Inherited: 0x3d0)
struct AGameplayCueNotify_Actor : AActor {
	bool bAutoDestroyOnRemove; // 0x3d0(0x01)
	char pad_3D1[0x3]; // 0x3d1(0x03)
	float AutoDestroyDelay; // 0x3d4(0x04)
	bool WarnIfTimelineIsStillRunning; // 0x3d8(0x01)
	bool WarnIfLatentActionIsStillRunning; // 0x3d9(0x01)
	char pad_3DA[0x2]; // 0x3da(0x02)
	struct FGameplayTag GameplayCueTag; // 0x3dc(0x0c)
	struct FName GameplayCueName; // 0x3e8(0x0c)
	bool bAutoAttachToOwner; // 0x3f4(0x01)
	bool IsOverride; // 0x3f5(0x01)
	bool bUniqueInstancePerInstigator; // 0x3f6(0x01)
	bool bUniqueInstancePerSourceObject; // 0x3f7(0x01)
	bool bAllowMultipleOnActiveEvents; // 0x3f8(0x01)
	bool bAllowMultipleWhileActiveEvents; // 0x3f9(0x01)
	char pad_3FA[0x2]; // 0x3fa(0x02)
	int32_t NumPreallocatedInstances; // 0x3fc(0x04)
	char pad_400[0x38]; // 0x400(0x38)
};

// Class GameplayAbilities.GameplayCueNotify_Static
// Size: 0x50 (Inherited: 0x30)
struct UGameplayCueNotify_Static : UObject {
	struct FGameplayTag GameplayCueTag; // 0x30(0x0c)
	struct FName GameplayCueName; // 0x3c(0x0c)
	bool IsOverride; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// Class GameplayAbilities.GameplayCueNotify_HitImpact
// Size: 0x60 (Inherited: 0x50)
struct UGameplayCueNotify_HitImpact : UGameplayCueNotify_Static {
	struct USoundBase* Sound; // 0x50(0x08)
	struct UParticleSystem* ParticleSystem; // 0x58(0x08)
};

// Class GameplayAbilities.GameplayCueSet
// Size: 0x98 (Inherited: 0x38)
struct UGameplayCueSet : UDataAsset {
	struct TArray<struct FGameplayCueNotifyData> GameplayCueData; // 0x38(0x10)
	char pad_48[0x50]; // 0x48(0x50)
};

// Class GameplayAbilities.GameplayCueTranslator
// Size: 0x30 (Inherited: 0x30)
struct UGameplayCueTranslator : UObject {
};

// Class GameplayAbilities.GameplayCueTranslator_Test
// Size: 0x30 (Inherited: 0x30)
struct UGameplayCueTranslator_Test : UGameplayCueTranslator {
};

// Class GameplayAbilities.GameplayEffect
// Size: 0x8b8 (Inherited: 0x30)
struct UGameplayEffect : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	enum class EGameplayEffectDurationType DurationPolicy; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct FGameplayEffectModifierMagnitude DurationMagnitude; // 0x40(0x280)
	struct FScalableFloat Period; // 0x2c0(0x28)
	bool bExecutePeriodicEffectOnApplication; // 0x2e8(0x01)
	enum class EGameplayEffectPeriodInhibitionRemovedPolicy PeriodicInhibitionPolicy; // 0x2e9(0x01)
	char pad_2EA[0x6]; // 0x2ea(0x06)
	struct TArray<struct FGameplayModifierInfo> Modifiers; // 0x2f0(0x10)
	struct TArray<struct FGameplayEffectExecutionDefinition> Executions; // 0x300(0x10)
	struct FScalableFloat ChanceToApplyToTarget; // 0x310(0x28)
	struct TArray<struct UGameplayEffectCustomApplicationRequirement*> ApplicationRequirements; // 0x338(0x10)
	struct TArray<struct UGameplayEffect*> TargetEffectClasses; // 0x348(0x10)
	struct TArray<struct FConditionalGameplayEffect> ConditionalGameplayEffects; // 0x358(0x10)
	struct TArray<struct UGameplayEffect*> OverflowEffects; // 0x368(0x10)
	bool bDenyOverflowApplication; // 0x378(0x01)
	bool bClearStackOnOverflow; // 0x379(0x01)
	char pad_37A[0x6]; // 0x37a(0x06)
	struct TArray<struct UGameplayEffect*> PrematureExpirationEffectClasses; // 0x380(0x10)
	struct TArray<struct UGameplayEffect*> RoutineExpirationEffectClasses; // 0x390(0x10)
	bool bRequireModifierSuccessToTriggerCues; // 0x3a0(0x01)
	bool bSuppressStackingCues; // 0x3a1(0x01)
	char pad_3A2[0x6]; // 0x3a2(0x06)
	struct TArray<struct FGameplayEffectCue> GameplayCues; // 0x3a8(0x10)
	struct UGameplayEffectUIData* UIData; // 0x3b8(0x08)
	struct FInheritedTagContainer InheritableGameplayEffectTags; // 0x3c0(0x60)
	struct FInheritedTagContainer InheritableOwnedTagsContainer; // 0x420(0x60)
	struct FGameplayTagRequirements OngoingTagRequirements; // 0x480(0x40)
	struct FGameplayTagRequirements ApplicationTagRequirements; // 0x4c0(0x40)
	struct FGameplayTagRequirements RemovalTagRequirements; // 0x500(0x40)
	struct FInheritedTagContainer RemoveGameplayEffectsWithTags; // 0x540(0x60)
	struct FGameplayTagRequirements GrantedApplicationImmunityTags; // 0x5a0(0x40)
	struct FGameplayEffectQuery GrantedApplicationImmunityQuery; // 0x5e0(0x158)
	char pad_738[0x8]; // 0x738(0x08)
	struct FGameplayEffectQuery RemoveGameplayEffectQuery; // 0x740(0x158)
	char pad_898[0x1]; // 0x898(0x01)
	enum class EGameplayEffectStackingType StackingType; // 0x899(0x01)
	char pad_89A[0x2]; // 0x89a(0x02)
	int32_t StackLimitCount; // 0x89c(0x04)
	enum class EGameplayEffectStackingDurationPolicy StackDurationRefreshPolicy; // 0x8a0(0x01)
	enum class EGameplayEffectStackingPeriodPolicy StackPeriodResetPolicy; // 0x8a1(0x01)
	enum class EGameplayEffectStackingExpirationPolicy StackExpirationPolicy; // 0x8a2(0x01)
	char pad_8A3[0x5]; // 0x8a3(0x05)
	struct TArray<struct FGameplayAbilitySpecDef> GrantedAbilities; // 0x8a8(0x10)
};

// Class GameplayAbilities.GameplayEffectCalculation
// Size: 0x40 (Inherited: 0x30)
struct UGameplayEffectCalculation : UObject {
	struct TArray<struct FGameplayEffectAttributeCaptureDefinition> RelevantAttributesToCapture; // 0x30(0x10)
};

// Class GameplayAbilities.GameplayEffectCustomApplicationRequirement
// Size: 0x30 (Inherited: 0x30)
struct UGameplayEffectCustomApplicationRequirement : UObject {
};

// Class GameplayAbilities.GameplayEffectExecutionCalculation
// Size: 0x48 (Inherited: 0x40)
struct UGameplayEffectExecutionCalculation : UGameplayEffectCalculation {
	bool bRequiresPassedInTags; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// Class GameplayAbilities.GameplayEffectUIData
// Size: 0x30 (Inherited: 0x30)
struct UGameplayEffectUIData : UObject {
};

// Class GameplayAbilities.GameplayEffectUIData_TextOnly
// Size: 0x48 (Inherited: 0x30)
struct UGameplayEffectUIData_TextOnly : UGameplayEffectUIData {
	struct FText Description; // 0x30(0x18)
};

// Class GameplayAbilities.GameplayModMagnitudeCalculation
// Size: 0x48 (Inherited: 0x40)
struct UGameplayModMagnitudeCalculation : UGameplayEffectCalculation {
	bool bAllowNonNetAuthorityDependencyRegistration; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// Class GameplayAbilities.GameplayTagReponseTable
// Size: 0x1f8 (Inherited: 0x38)
struct UGameplayTagReponseTable : UDataAsset {
	struct TArray<struct FGameplayTagResponseTableEntry> Entries; // 0x38(0x10)
	char pad_48[0x1b0]; // 0x48(0x1b0)
};

// Class GameplayAbilities.TickableAttributeSetInterface
// Size: 0x30 (Inherited: 0x30)
struct UTickableAttributeSetInterface : UInterface {
};

