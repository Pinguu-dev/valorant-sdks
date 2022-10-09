// Class ShooterGame.BaseGameDataEventReceiver
// Size: 0x30 (Inherited: 0x30)
struct UBaseGameDataEventReceiver : UObject {
};

// Class ShooterGame.AbilityRechargeComponent
// Size: 0x108 (Inherited: 0xe8)
struct UAbilityRechargeComponent : UActorComponent {
	int32_t MaxCharges; // 0xe8(0x04)
	char pad_EC[0x4]; // 0xec(0x04)
	struct FMulticastInlineDelegate AuthOnAbilityRecharged; // 0xf0(0x10)
	int32_t CurrentCharges; // 0x100(0x04)
	char pad_104[0x4]; // 0x104(0x04)
};

// Class ShooterGame.ResourceComponent
// Size: 0x118 (Inherited: 0xe8)
struct UResourceComponent : UActorComponent {
	struct FMulticastInlineDelegate OnResourceChanged; // 0xe8(0x10)
	char pad_F8[0x4]; // 0xf8(0x04)
	int32_t PredictedResourceAmount; // 0xfc(0x04)
	int32_t AuthResourceAmount; // 0x100(0x04)
	char pad_104[0x4]; // 0x104(0x04)
	struct UValueDisagreementTimer* ClientPredictedValueDisagreementTimer; // 0x108(0x08)
	struct UValueDisagreementTimer* CurrentStateDisagreementTimerClassOverride; // 0x110(0x08)
};

// Class ShooterGame.AbilityResourceComponent
// Size: 0x138 (Inherited: 0x118)
struct UAbilityResourceComponent : UResourceComponent {
	struct UPurchasedItemComponent* PurchasedItemComponent; // 0x118(0x08)
	struct UTexture* ShopImage; // 0x120(0x08)
	int32_t PipCost; // 0x128(0x04)
	int32_t ChargesToGrantOnPipCast; // 0x12c(0x04)
	char pad_130[0x8]; // 0x130(0x08)
};

// Class ShooterGame.AbilityStatisticsDelegateComponent
// Size: 0xf8 (Inherited: 0xe8)
struct UAbilityStatisticsDelegateComponent : UActorComponent {
	int32_t AuthCastIndex; // 0xe8(0x04)
	char pad_EC[0x4]; // 0xec(0x04)
	struct UGameStatisticsComponent* AuthGameStatisticsComponent; // 0xf0(0x08)
};

// Class ShooterGame.AbilityTrackingComponent
// Size: 0x138 (Inherited: 0xe8)
struct UAbilityTrackingComponent : UActorComponent {
	struct TSet<struct AActor*> TrackedSubobjects; // 0xe8(0x50)
};

// Class ShooterGame.AbilityTrackingDelegateComponent
// Size: 0xf0 (Inherited: 0xe8)
struct UAbilityTrackingDelegateComponent : UActorComponent {
	struct UAbilityTrackingComponent* AbilityTrackingComponent; // 0xe8(0x08)
};

// Class ShooterGame.AbilityUpgradeComponent
// Size: 0x120 (Inherited: 0xe8)
struct UAbilityUpgradeComponent : UActorComponent {
	struct TArray<int32_t> RankCost; // 0xe8(0x10)
	enum class EUpgradeCostType CostType; // 0xf8(0x01)
	char pad_F9[0x7]; // 0xf9(0x07)
	struct UTexture* ShopImage; // 0x100(0x08)
	struct FMulticastInlineDelegate OnRankChanged; // 0x108(0x10)
	int32_t CurrentRank; // 0x118(0x04)
	char pad_11C[0x4]; // 0x11c(0x04)
};

// Class ShooterGame.InitSystem
// Size: 0x80 (Inherited: 0x30)
struct UInitSystem : UObject {
	struct TSet<struct UInitSystem*> Dependencies; // 0x30(0x50)
};

// Class ShooterGame.AccountXPManager
// Size: 0x108 (Inherited: 0x80)
struct UAccountXPManager : UInitSystem {
	struct FMulticastInlineDelegate OnAccountXPPlayerUpdated; // 0x80(0x10)
	struct UConfigManager* ConfigManager; // 0x90(0x08)
	struct URSOManager* RSOManager; // 0x98(0x08)
	struct UContentIndex* ContentIndex; // 0xa0(0x08)
	struct URMSManager* RMSManager; // 0xa8(0x08)
	struct UAccountXPService* AccountXPService; // 0xb0(0x08)
	struct UAccountXPViewModel* ViewModel; // 0xb8(0x08)
	int32_t LevelCheatOverride; // 0xc0(0x04)
	char pad_C4[0x44]; // 0xc4(0x44)
};

// Class ShooterGame.AccountXPService
// Size: 0x38 (Inherited: 0x30)
struct UAccountXPService : UObject {
	struct UConfigManager* ConfigManager; // 0x30(0x08)
};

// Class ShooterGame.AccountXPViewModel
// Size: 0x90 (Inherited: 0x30)
struct UAccountXPViewModel : UObject {
	struct FMulticastInlineDelegate OnAccountXPLevelChanged; // 0x30(0x10)
	struct FMulticastInlineDelegate OnAccountXPXPChanged; // 0x40(0x10)
	struct FMulticastInlineDelegate OnNextTimeFirstWinAvailableChanged; // 0x50(0x10)
	struct FMulticastInlineDelegate OnHistoryChanged; // 0x60(0x10)
	int32_t Level; // 0x70(0x04)
	int32_t XP; // 0x74(0x04)
	struct FDateTime NextTimeFirstWinAvailable; // 0x78(0x08)
	struct TArray<struct FAccountXPMatch> History; // 0x80(0x10)
};

// Class ShooterGame.GamepadPresetDataAsset
// Size: 0xc8 (Inherited: 0x38)
struct UGamepadPresetDataAsset : UDataAsset {
	struct FText PresetMapName; // 0x38(0x18)
	struct FText PresetMapDescription; // 0x50(0x18)
	struct TArray<struct FGamepadInputActionPreset> KeyMappings; // 0x68(0x10)
	struct TMap<struct FName, struct FGamepadAlternateActionMappingList> AlternateActionMappings; // 0x78(0x50)
};

// Class ShooterGame.GamepadPresetListAsset
// Size: 0x48 (Inherited: 0x38)
struct UGamepadPresetListAsset : UDataAsset {
	struct TArray<struct UGamepadPresetDataAsset*> KeyMappings; // 0x38(0x10)
};

// Class ShooterGame.ActionBindingsManager
// Size: 0x390 (Inherited: 0x80)
struct UActionBindingsManager : UInitSystem {
	struct FMulticastInlineDelegate ActionBindingChanged; // 0x80(0x10)
	char pad_90[0x90]; // 0x90(0x90)
	struct FMulticastInlineDelegate AttemptAlternateBoundAction; // 0x120(0x10)
	char pad_130[0xf0]; // 0x130(0xf0)
	struct TMap<struct FActionBindSetIdentifier, struct UActionBindSet*> actions; // 0x220(0x50)
	struct UActionTraitsManager* ActionTraitsManager; // 0x270(0x08)
	struct UPlayerSettingsTelemetry* PlayerSettingsTelemetry; // 0x278(0x08)
	struct UContentIndex* ContentIndex; // 0x280(0x08)
	char pad_288[0x58]; // 0x288(0x58)
	struct FMulticastInlineDelegate OnConflictStatesUpdated; // 0x2e0(0x10)
	char pad_2F0[0xa0]; // 0x2f0(0xa0)
};

// Class ShooterGame.ActionBindSet
// Size: 0x198 (Inherited: 0x30)
struct UActionBindSet : UObject {
	struct FMulticastInlineDelegate ActionBindingChanged; // 0x30(0x10)
	struct FMulticastInlineDelegate ActionBindConflictStateUpdated; // 0x40(0x10)
	char pad_50[0x10]; // 0x50(0x10)
	struct UActionTraits* Traits; // 0x60(0x08)
	struct UActionBindingsManager* ActionBindingsManager; // 0x68(0x08)
	struct UPlayerSettingsTelemetry* PlayerSettingsTelemetry; // 0x70(0x08)
	char pad_78[0x120]; // 0x78(0x120)
};

// Class ShooterGame.ActionTraits
// Size: 0x50 (Inherited: 0x30)
struct UActionTraits : UObject {
	struct FName ActionName; // 0x30(0x0c)
	enum class EActionSettingsContext SettingsContext; // 0x3c(0x01)
	enum class EActionBindRestrictions BindRestriction; // 0x3d(0x01)
	char pad_3E[0x2]; // 0x3e(0x02)
	struct TArray<struct FName> SharedInputCategories; // 0x40(0x10)
};

// Class ShooterGame.ActionTraitsManager
// Size: 0x90 (Inherited: 0x30)
struct UActionTraitsManager : UObject {
	struct TArray<struct UActionTraits*> ActionTraitClasses; // 0x30(0x10)
	char pad_40[0x50]; // 0x40(0x50)
};

// Class ShooterGame.StateComponent
// Size: 0xf8 (Inherited: 0xe8)
struct UStateComponent : UActorComponent {
	bool bAutoAddToStateMachine; // 0xe8(0x01)
	char pad_E9[0x7]; // 0xe9(0x07)
	struct UStateMachineComponent* OwningStateMachineComponent; // 0xf0(0x08)
};

// Class ShooterGame.EquippableStateComponent
// Size: 0x1e0 (Inherited: 0xf8)
struct UEquippableStateComponent : UStateComponent {
	bool bEquippableUsedState; // 0xf8(0x01)
	bool bRequiresTick; // 0xf9(0x01)
	bool bRequiresReplication; // 0xfa(0x01)
	char pad_FB[0x5]; // 0xfb(0x05)
	struct FItemSlotBlocking EquipBlocking; // 0x100(0x18)
	struct FItemSlotBlocking ActivationInputBlocking; // 0x118(0x18)
	enum class EStateBehaviorOnUnequip UnequipBehavior; // 0x130(0x01)
	char pad_131[0x7]; // 0x131(0x07)
	struct UValueDisagreementTimer* ClientPredictedValueDisagreementTimerClassOverride; // 0x138(0x08)
	struct UValueDisagreementTimer* ClientPredictedValueDisagreementTimer; // 0x140(0x08)
	bool bOverrideFogOfWarWhileInState; // 0x148(0x01)
	char pad_149[0x3]; // 0x149(0x03)
	float FogOfWarAudibleDistance; // 0x14c(0x04)
	float FogOfWarOutroTime; // 0x150(0x04)
	float FogOfWarMaxStateDuration; // 0x154(0x04)
	char pad_158[0x88]; // 0x158(0x88)
};

// Class ShooterGame.ScriptStateComponent
// Size: 0x2c8 (Inherited: 0x1e0)
struct UScriptStateComponent : UEquippableStateComponent {
	char pad_1E0[0x8]; // 0x1e0(0x08)
	struct TArray<struct FEquippableStateBuffInfo> StateBuffs; // 0x1e8(0x10)
	struct FMulticastInlineDelegate OnStateEnter; // 0x1f8(0x10)
	struct FMulticastInlineDelegate OnStateExit; // 0x208(0x10)
	struct FMulticastInlineDelegate OnStateTick; // 0x218(0x10)
	struct TArray<struct FScriptStateEffectInfo> StateEffects; // 0x228(0x10)
	struct UStateComponent* ScriptNextState; // 0x238(0x08)
	struct UStateComponent* ScriptSuppressedState; // 0x240(0x08)
	char pad_248[0x4]; // 0x248(0x04)
	struct TWeakObjectPtr<struct UObject> CustomContext; // 0x24c(0x08)
	char pad_254[0x4]; // 0x254(0x04)
	struct TArray<struct FActiveScriptStateEffect> ActiveStateEffects; // 0x258(0x10)
	struct TArray<struct FActiveScriptStateEffect> InterruptableStateEffects; // 0x268(0x10)
	struct FQueuedStateTransition QueuedStateTransition; // 0x278(0x38)
	struct FMulticastInlineDelegate OnStateHandleInputAction; // 0x2b0(0x10)
	struct UStateTransitionContext* CurrentContext; // 0x2c0(0x08)
};

// Class ShooterGame.RespondToEventStateComponent
// Size: 0x368 (Inherited: 0x2c8)
struct URespondToEventStateComponent : UScriptStateComponent {
	struct FMulticastInlineDelegate OnIgnoredResponseOutOfGameplay; // 0x2c8(0x10)
	struct TArray<struct FStateChangeInputResponse> StateChangeInputs; // 0x2d8(0x10)
	struct TArray<struct FTriggerEventInputResponse> TriggerEventInputs; // 0x2e8(0x10)
	struct FActorContextResponse StateChangeActorEvent; // 0x2f8(0x30)
	struct TArray<struct FEquippableInventoryEventResponse> StateChangesInventoryEvent; // 0x328(0x10)
	struct FEquippableResourceResponse StateChangeResourceAvailable; // 0x338(0x10)
	char pad_348[0x20]; // 0x348(0x20)
};

// Class ShooterGame.ActorLockonStateComponent
// Size: 0x398 (Inherited: 0x368)
struct UActorLockonStateComponent : URespondToEventStateComponent {
	float Radius; // 0x368(0x04)
	float ConeAngle; // 0x36c(0x04)
	float ConePullBack; // 0x370(0x04)
	bool bTwoDimensionalCone; // 0x374(0x01)
	bool bCheckLineOfSight; // 0x375(0x01)
	enum class ECollisionChannel LineOfSightCollision; // 0x376(0x01)
	char pad_377[0x1]; // 0x377(0x01)
	float LockGracePeriod; // 0x378(0x04)
	char pad_37C[0x4]; // 0x37c(0x04)
	struct AActor* LockedOnTarget; // 0x380(0x08)
	struct UScriptStateComponent* LockLostState; // 0x388(0x08)
	char pad_390[0x8]; // 0x390(0x08)
};

// Class ShooterGame.MinimapDisplayComponentDeprecated
// Size: 0x290 (Inherited: 0x290)
struct UMinimapDisplayComponentDeprecated : USceneComponent {
};

// Class ShooterGame.ActorMinimapDisplayComponentDeprecated
// Size: 0x290 (Inherited: 0x290)
struct UActorMinimapDisplayComponentDeprecated : UMinimapDisplayComponentDeprecated {
};

// Class ShooterGame.ActorTargetingStateComponent
// Size: 0x430 (Inherited: 0x368)
struct UActorTargetingStateComponent : URespondToEventStateComponent {
	struct FMulticastInlineDelegate OnActorSelected; // 0x368(0x10)
	struct FMulticastInlineDelegate OnInvalidActor; // 0x378(0x10)
	struct FMulticastInlineDelegate OnActorTargetedLocally; // 0x388(0x10)
	struct FClassInclusionExclusionFilter ActorFilter; // 0x398(0x50)
	enum class EAresTeamTargeting TeamFilter; // 0x3e8(0x01)
	bool bPawnsOnly; // 0x3e9(0x01)
	char pad_3EA[0x2]; // 0x3ea(0x02)
	float Radius; // 0x3ec(0x04)
	float ConfirmationGraceAmount; // 0x3f0(0x04)
	enum class ECollisionChannel SearchCollision; // 0x3f4(0x01)
	char pad_3F5[0x3]; // 0x3f5(0x03)
	float ConeAngle; // 0x3f8(0x04)
	float ConeYawAngle; // 0x3fc(0x04)
	float ConePitchAngle; // 0x400(0x04)
	float ConePullBack; // 0x404(0x04)
	bool bTwoDimensionalCone; // 0x408(0x01)
	bool bCheckLineOfSight; // 0x409(0x01)
	enum class ECollisionChannel LineOfSightCollision; // 0x40a(0x01)
	bool bTargetOnRemoteClients; // 0x40b(0x01)
	char pad_40C[0x4]; // 0x40c(0x04)
	struct AActor* CurrentActorTarget; // 0x410(0x08)
	bool bDrawDebugTargeting; // 0x418(0x01)
	char pad_419[0x17]; // 0x419(0x17)
};

// Class ShooterGame.VisibilityComponent
// Size: 0x180 (Inherited: 0xe8)
struct UVisibilityComponent : UActorComponent {
	char pad_E8[0x8]; // 0xe8(0x08)
	struct FMulticastInlineDelegate OnOwnerEnteredTeamSight; // 0xf0(0x10)
	struct FMulticastInlineDelegate OnOwnerExitedTeamSight; // 0x100(0x10)
	bool bSeenByResult; // 0x110(0x01)
	enum class EEnemyVisibilityOption EnemyVisibility; // 0x111(0x01)
	char pad_112[0x6]; // 0x112(0x06)
	struct FMulticastInlineDelegate CanBeSeenByCharacterOverride; // 0x118(0x10)
	char pad_128[0x20]; // 0x128(0x20)
	float VisibilityLostTime; // 0x148(0x04)
	char pad_14C[0x4]; // 0x14c(0x04)
	struct TArray<struct AShooterCharacter*> CharactersWithVisibility; // 0x150(0x10)
	struct FTimerHandle ExitVisibilityTimerHandle; // 0x160(0x08)
	char pad_168[0x18]; // 0x168(0x18)
};

// Class ShooterGame.ActorVisibilityComponent
// Size: 0x180 (Inherited: 0x180)
struct UActorVisibilityComponent : UVisibilityComponent {
};

// Class ShooterGame.ActorVisualizationComponent
// Size: 0x1a8 (Inherited: 0xe8)
struct UActorVisualizationComponent : UActorComponent {
	char pad_E8[0x8]; // 0xe8(0x08)
	bool bPawnsOnly; // 0xf0(0x01)
	char pad_F1[0x7]; // 0xf1(0x07)
	struct FClassInclusionExclusionFilter ActorFilter; // 0xf8(0x50)
	enum class EAresTeamTargeting TeamFilter; // 0x148(0x01)
	char pad_149[0x7]; // 0x149(0x07)
	struct FEmbeddedEffectInfo VisualizationEffect; // 0x150(0x30)
	bool bVisualizationActiveInitially; // 0x180(0x01)
	char pad_181[0x17]; // 0x181(0x17)
	struct TArray<struct AActor*> PendingVisualizedActors; // 0x198(0x10)
};

// Class ShooterGame.AresBasePrimaryDataAsset
// Size: 0x50 (Inherited: 0x38)
struct UAresBasePrimaryDataAsset : UPrimaryDataAsset {
	struct FGuid UUID; // 0x38(0x10)
	bool bHideIfNotOwned; // 0x48(0x01)
	bool bBaseContent; // 0x49(0x01)
	char pad_4A[0x6]; // 0x4a(0x06)
};

// Class ShooterGame.ActRankBorderDataAsset
// Size: 0x80 (Inherited: 0x50)
struct UActRankBorderDataAsset : UAresBasePrimaryDataAsset {
	struct TSoftClassPtr<UObject> UIData; // 0x50(0x30)
};

// Class ShooterGame.BaseContentUIData
// Size: 0x90 (Inherited: 0x30)
struct UBaseContentUIData : UObject {
	struct FText DisplayName; // 0x30(0x18)
	struct FText DisplayNameAllCaps; // 0x48(0x18)
	struct UTexture* DisplayIcon; // 0x60(0x08)
	struct FWidgetTransform IconTransform; // 0x68(0x1c)
	struct TWeakObjectPtr<struct UObject> WorldContext; // 0x84(0x08)
	char pad_8C[0x4]; // 0x8c(0x04)
};

// Class ShooterGame.ActRankBorderUIData
// Size: 0x98 (Inherited: 0x90)
struct UActRankBorderUIData : UBaseContentUIData {
	struct UTexture* SmallIcon; // 0x90(0x08)
};

// Class ShooterGame.AFKDetectionComponent
// Size: 0x160 (Inherited: 0xe8)
struct UAFKDetectionComponent : UActorComponent {
	struct FMulticastInlineDelegate OnAFKStatusChanged; // 0xe8(0x10)
	struct FMulticastInlineDelegate OnAwayPenaltyStateChanged; // 0xf8(0x10)
	struct FMulticastInlineDelegate OnDidLeaveSpawnChanged; // 0x108(0x10)
	struct FShooterGameTimeMarker AuthLastPlayerInputTimestamp; // 0x118(0x0c)
	struct FShooterGameTimeMarker AuthDisconnectedSinceTimestamp; // 0x124(0x0c)
	struct FShooterGameTimeMarker AuthLastPlayerChangedRegionTimestamp; // 0x130(0x0c)
	bool bIsPenalizedForBeingAway; // 0x13c(0x01)
	bool bIsAFK; // 0x13d(0x01)
	bool bDidLeaveSpawn; // 0x13e(0x01)
	char pad_13F[0x1]; // 0x13f(0x01)
	struct AShooterPlayerState* OwningShooterPlayer; // 0x140(0x08)
	struct AShooterGameState* GameState; // 0x148(0x08)
	char pad_150[0x10]; // 0x150(0x10)
};

// Class ShooterGame.IdleTimeAFKDetectionComponent
// Size: 0x168 (Inherited: 0x160)
struct UIdleTimeAFKDetectionComponent : UAFKDetectionComponent {
	float PlayerAFKInactivityThreshold; // 0x160(0x04)
	char pad_164[0x4]; // 0x164(0x04)
};

// Class ShooterGame.RoundBasedAFKDetectionComponent
// Size: 0x178 (Inherited: 0x160)
struct URoundBasedAFKDetectionComponent : UAFKDetectionComponent {
	int32_t RoundsAFKThreshold; // 0x160(0x04)
	char pad_164[0x14]; // 0x164(0x14)
};

// Class ShooterGame.EquippableListAsset
// Size: 0x48 (Inherited: 0x38)
struct UEquippableListAsset : UDataAsset {
	struct TArray<struct TSoftClassPtr<UObject>> Equippables; // 0x38(0x10)
};

// Class ShooterGame.AimToolsTuningComponent
// Size: 0x1b8 (Inherited: 0xe8)
struct UAimToolsTuningComponent : UActorComponent {
	struct UCurveFloat* MagnetDistanceCurve; // 0xe8(0x08)
	struct UCurveFloat* MagnetVelocityCurve; // 0xf0(0x08)
	struct UCurveFloat* MagnetRampUpCurve; // 0xf8(0x08)
	struct UCurveFloat* SnapDistanceCurveHorizontal; // 0x100(0x08)
	struct UCurveFloat* SnapDistanceCurveVertical; // 0x108(0x08)
	struct UCurveFloat* SnapAngleCurveHorizontal; // 0x110(0x08)
	struct UCurveFloat* SnapAngleCurveVertical; // 0x118(0x08)
	struct UCurveFloat* HeadshotSnapDistanceCurve; // 0x120(0x08)
	struct UCurveFloat* HeadshotSnapAngleCurve; // 0x128(0x08)
	struct UEquippableListAsset* MagnetizedAbilities; // 0x130(0x08)
	struct UEquippableListAsset* AimSnapExcludedWeapons; // 0x138(0x08)
	struct UEquippableListAsset* AimSnapExcludedWhileZoomedWeapons; // 0x140(0x08)
	struct UEquippableListAsset* AimSnapIncludedAbilities; // 0x148(0x08)
	struct UCurveFloat* DeployablesSnapAngleScaleCurve; // 0x150(0x08)
	struct TMap<struct TSoftClassPtr<UObject>, struct FSnapTargetTypeTunables> TargetTypeMap; // 0x158(0x50)
	struct TArray<struct TSoftClassPtr<UObject>> BaseScalingClasses; // 0x1a8(0x10)
};

// Class ShooterGame.AITargetData
// Size: 0xf0 (Inherited: 0xe8)
struct UAITargetData : UActorComponent {
	bool bIsPriorityTarget; // 0xe8(0x01)
	bool bIsShootableFlash; // 0xe9(0x01)
	char pad_EA[0x6]; // 0xea(0x06)
};

// Class ShooterGame.AllPawnsTargetingStateComponent
// Size: 0x2c8 (Inherited: 0x2c8)
struct UAllPawnsTargetingStateComponent : UScriptStateComponent {
};

// Class ShooterGame.DesignableUserWidget
// Size: 0x2c8 (Inherited: 0x2c8)
struct UDesignableUserWidget : UUserWidget {
};

// Class ShooterGame.CoordinatedHUDElement
// Size: 0x2d8 (Inherited: 0x2c8)
struct UCoordinatedHUDElement : UDesignableUserWidget {
	bool bShowMouseWhenVisible; // 0x2c8(0x01)
	bool bCaptureMouseWhenVisible; // 0x2c9(0x01)
	char pad_2CA[0x2]; // 0x2ca(0x02)
	int32_t AllowedGameInputWhileVisible; // 0x2cc(0x04)
	int32_t AllowedGameInputWhileShowingMouse; // 0x2d0(0x04)
	bool bNeedsFocus; // 0x2d4(0x01)
	char pad_2D5[0x3]; // 0x2d5(0x03)
};

// Class ShooterGame.AllyEdgeIndicatorHUD
// Size: 0x348 (Inherited: 0x2d8)
struct UAllyEdgeIndicatorHUD : UCoordinatedHUDElement {
	char pad_2D8[0x18]; // 0x2d8(0x18)
	struct FMulticastInlineDelegate OnAllyEnterRange; // 0x2f0(0x10)
	struct FMulticastInlineDelegate OnAllyExitRange; // 0x300(0x10)
	struct FMulticastInlineDelegate OnAllyDeath; // 0x310(0x10)
	float RelevantRangeModifier; // 0x320(0x04)
	char pad_324[0x4]; // 0x324(0x04)
	struct TArray<struct UHUDPlayerModel*> TrackedHUDPlayerModelsList; // 0x328(0x10)
	struct UCoordinatedHUDModel* HUDModel; // 0x338(0x08)
	struct APlayerState* CurrentlyTrackedPlayerState; // 0x340(0x08)
};

// Class ShooterGame.AmmoComponent
// Size: 0x138 (Inherited: 0x118)
struct UAmmoComponent : UResourceComponent {
	bool bInfiniteReserveAmmo; // 0x118(0x01)
	char pad_119[0x3]; // 0x119(0x03)
	int32_t Ammo; // 0x11c(0x04)
	int32_t MaxAmmo; // 0x120(0x04)
	char pad_124[0x4]; // 0x124(0x04)
	struct UAmmoComponent* ReserveComponent; // 0x128(0x08)
	bool bInBeginPlay; // 0x130(0x01)
	char pad_131[0x7]; // 0x131(0x07)
};

// Class ShooterGame.AnimatableUserWidget
// Size: 0x2e0 (Inherited: 0x2c8)
struct UAnimatableUserWidget : UDesignableUserWidget {
	char pad_2C8[0x8]; // 0x2c8(0x08)
	struct FMulticastInlineDelegate OnScopedCueEvent; // 0x2d0(0x10)
};

// Class ShooterGame.ZoomComponent
// Size: 0x528 (Inherited: 0xe8)
struct UZoomComponent : UActorComponent {
	char pad_E8[0x8]; // 0xe8(0x08)
	struct FMulticastInlineDelegate OnZoomInStarted; // 0xf0(0x10)
	struct FMulticastInlineDelegate OnZoomInCompleted; // 0x100(0x10)
	struct FMulticastInlineDelegate OnUnZoomStarted; // 0x110(0x10)
	struct FMulticastInlineDelegate OnUnZoomCompleted; // 0x120(0x10)
	struct FMulticastInlineDelegate OnZoomTransitionStatusChanged; // 0x130(0x10)
	struct FMulticastInlineDelegate OnCosmeticZoomInPercent; // 0x140(0x10)
	struct FMulticastInlineDelegate OnZoomCooldownCompleted; // 0x150(0x10)
	struct FZoomTransitionSettings ZoomTransitionSettings; // 0x160(0x14)
	char pad_174[0x4]; // 0x174(0x04)
	struct UCurveFloat* ZoomInCurve; // 0x178(0x08)
	struct UCurveFloat* ZoomOutCurve; // 0x180(0x08)
	struct FRuntimeFloatCurve FoVInitialZoomInCurve; // 0x188(0x88)
	struct FRuntimeFloatCurve FoVSubsequentZoomInCurve; // 0x210(0x88)
	struct FRuntimeFloatCurve FoVZoomOutCurve; // 0x298(0x88)
	struct FRuntimeFloatCurve FoV1PInitialZoomInCurve; // 0x320(0x88)
	struct FRuntimeFloatCurve FoV1PSubsequentZoomInCurve; // 0x3a8(0x88)
	struct FRuntimeFloatCurve FoV1PZoomOutCurve; // 0x430(0x88)
	struct TArray<struct FZoomLevelInfo> ZoomLevelInfo; // 0x4b8(0x10)
	struct FZoomTransition AuthZoomTransition; // 0x4c8(0x24)
	struct FZoomTransition ClientPredictedZoomTransition; // 0x4ec(0x24)
	struct FTimerHandle ZoomTimer[0x3]; // 0x510(0x18)
};

// Class ShooterGame.AnimatedZoomComponent
// Size: 0x538 (Inherited: 0x528)
struct UAnimatedZoomComponent : UZoomComponent {
	float WorldFOVMin; // 0x528(0x04)
	float WorldFOVMax; // 0x52c(0x04)
	float Mesh1PFOVMin; // 0x530(0x04)
	float Mesh1PFOVMax; // 0x534(0x04)
};

// Class ShooterGame.ProgressModel
// Size: 0x30 (Inherited: 0x30)
struct UProgressModel : UInterface {
};

// Class ShooterGame.AnimationConductorNode
// Size: 0x30 (Inherited: 0x30)
struct UAnimationConductorNode : UProgressModel {
};

// Class ShooterGame.ProgressModelBase
// Size: 0x58 (Inherited: 0x30)
struct UProgressModelBase : UObject {
	char pad_30[0x28]; // 0x30(0x28)
};

// Class ShooterGame.NumericProgressModelBase
// Size: 0x70 (Inherited: 0x58)
struct UNumericProgressModelBase : UProgressModelBase {
	char pad_58[0x18]; // 0x58(0x18)
};

// Class ShooterGame.ManualNumericProgressModelBase
// Size: 0x88 (Inherited: 0x70)
struct UManualNumericProgressModelBase : UNumericProgressModelBase {
	char pad_70[0x18]; // 0x70(0x18)
};

// Class ShooterGame.AnimationConductorNodeBase
// Size: 0xa8 (Inherited: 0x88)
struct UAnimationConductorNodeBase : UManualNumericProgressModelBase {
	char pad_88[0x20]; // 0x88(0x20)
};

// Class ShooterGame.AnimationConductorNodeBlueprintLibrary
// Size: 0x30 (Inherited: 0x30)
struct UAnimationConductorNodeBlueprintLibrary : UBlueprintFunctionLibrary {
};

// Class ShooterGame.AnimationCueSource
// Size: 0x30 (Inherited: 0x30)
struct UAnimationCueSource : UInterface {
};

// Class ShooterGame.AnimationCueSourceBlueprintLibrary
// Size: 0x30 (Inherited: 0x30)
struct UAnimationCueSourceBlueprintLibrary : UBlueprintFunctionLibrary {
};

// Class ShooterGame.AnimationStateComponent
// Size: 0xb20 (Inherited: 0xe8)
struct UAnimationStateComponent : UActorComponent {
	char pad_E8[0x18]; // 0xe8(0x18)
	struct FAnimationStateParams AnimationStateParams; // 0x100(0x1d0)
	struct FAnimationAssetsGun1P AnimationAssetsGun1P; // 0x2d0(0x48)
	struct FAnimationAssetsGun1P CosmeticAnimationAssetsGun1P; // 0x318(0x48)
	struct FBoneTransformAim3P BoneTransformAim3P; // 0x360(0x74)
	char pad_3D4[0x1]; // 0x3d4(0x01)
	bool bIsOnRope; // 0x3d5(0x01)
	bool bGlideActive; // 0x3d6(0x01)
	bool bIsMeleeAttacking; // 0x3d7(0x01)
	bool bForceAnimSlot1PNoBlend; // 0x3d8(0x01)
	bool bForceAnimSlotUpperBody3PNoBlend; // 0x3d9(0x01)
	bool bForceAnimSlotLowerBody3PNoBlend; // 0x3da(0x01)
	char pad_3DB[0x1]; // 0x3db(0x01)
	float MaxErrorDegrees; // 0x3dc(0x04)
	char pad_3E0[0x4]; // 0x3e0(0x04)
	float ErrorAnimationInterpolationRate; // 0x3e4(0x04)
	float WeaponInaccuracySpring1PStiffness; // 0x3e8(0x04)
	float WeaponInaccuracySpring1PDampening; // 0x3ec(0x04)
	float DefaultHitReactionBlendTime; // 0x3f0(0x04)
	float HitReactionAlpha; // 0x3f4(0x04)
	bool bHitReactionTriggeredThisFrame; // 0x3f8(0x01)
	char pad_3F9[0x3]; // 0x3f9(0x03)
	float CrouchLowerBodyMontageAlpha; // 0x3fc(0x04)
	float CrouchSplitterTranslationScale; // 0x400(0x04)
	float RopeSpineBlendWeightScale; // 0x404(0x04)
	bool bDisableSplitBodyRotation; // 0x408(0x01)
	char pad_409[0x43]; // 0x409(0x43)
	float AnimDynamicsBlendTime; // 0x44c(0x04)
	float AimModeBlendTime; // 0x450(0x04)
	float IkBlendTime; // 0x454(0x04)
	float FootIKMaxActorPullDownDistance; // 0x458(0x04)
	float FootIKActorPullDownInterpRate; // 0x45c(0x04)
	float FootIKRootScalar; // 0x460(0x04)
	char pad_464[0x4]; // 0x464(0x04)
	struct UCurveFloat* FootIKEnableCurve; // 0x468(0x08)
	float AnimSlotBlendTime; // 0x470(0x04)
	float Idle1PBlendTime; // 0x474(0x04)
	float Run1PBlendTime; // 0x478(0x04)
	float Walk1PBlendTime; // 0x47c(0x04)
	float Crouch1PBlendTime; // 0x480(0x04)
	float CrouchIdle1PBlendTime; // 0x484(0x04)
	float CrouchWalk1PBlendTime; // 0x488(0x04)
	float StandUp1PBlendTime; // 0x48c(0x04)
	float Jump1PBlendTime; // 0x490(0x04)
	float JumpLand1PBlendTime; // 0x494(0x04)
	float BoneTransformAimPitchAngleLimit; // 0x498(0x04)
	float BoneTransformAimPitchMultiplier; // 0x49c(0x04)
	float BoneTransformAimYawMultiplier; // 0x4a0(0x04)
	float Spine1AimRotationScale; // 0x4a4(0x04)
	float Spine2AimRotationScale; // 0x4a8(0x04)
	float Spine3AimRotationScale; // 0x4ac(0x04)
	float Spine4AimRotationScale; // 0x4b0(0x04)
	float NeckAimRotationScale; // 0x4b4(0x04)
	float HeadAimRotationScale; // 0x4b8(0x04)
	float LeftClavicleAimRotationScale; // 0x4bc(0x04)
	float RightClavicleAimRotationScale; // 0x4c0(0x04)
	float AimSpring1PTargetRotationScale; // 0x4c4(0x04)
	float RecentlyFiredTime; // 0x4c8(0x04)
	float MinCounterStrafeAngle; // 0x4cc(0x04)
	bool bCanGlide; // 0x4d0(0x01)
	char pad_4D1[0x7]; // 0x4d1(0x07)
	struct TMap<struct UAnimSlot1P*, struct UAnimationAsset*> Anims1P; // 0x4d8(0x50)
	struct TMap<struct UAnimSlotUpperBody3P*, struct UAnimationAsset*> AnimsUpperBody3P; // 0x528(0x50)
	struct TMap<struct UAnimSlotLowerBody3P*, struct UAnimationAsset*> AnimsLowerBody3P; // 0x578(0x50)
	struct TMap<struct UAnimSlot1P*, struct UAnimationAsset*> OverrideAnims1P; // 0x5c8(0x50)
	struct TMap<struct UAnimSlotUpperBody3P*, struct UAnimationAsset*> OverrideAnimsUpperBody3P; // 0x618(0x50)
	struct TMap<struct UAnimSlotLowerBody3P*, struct UAnimationAsset*> OverrideAnimsLowerBody3P; // 0x668(0x50)
	struct TArray<struct UBlendSpace*> HeadHitReactions3P; // 0x6b8(0x10)
	struct TArray<struct UBlendSpace*> BodyHitReactions3P; // 0x6c8(0x10)
	struct TArray<struct UBlendSpace*> LegHitReactions3P; // 0x6d8(0x10)
	struct TMap<struct UAnimSlotFace3P*, struct UAnimSequence*> AnimsFace3P; // 0x6e8(0x50)
	struct TArray<struct UAnimSequence*> FaceFidgets3P; // 0x738(0x10)
	float FaceFidgetDelayMin; // 0x748(0x04)
	float FaceFidgetDelayMax; // 0x74c(0x04)
	float FaceFidgetDelayLength; // 0x750(0x04)
	float FaceFidgetDelayTimer; // 0x754(0x04)
	float FaceFidgetPlayLength; // 0x758(0x04)
	float FaceFidgetPlayTimer; // 0x75c(0x04)
	struct FAlphaBlend ZoomedModeAlphaBlend; // 0x760(0x30)
	bool bDisabled; // 0x790(0x01)
	char pad_791[0xf]; // 0x791(0x0f)
	struct FTransform GunToScopeTransform; // 0x7a0(0x30)
	struct UCurveFloat* ADSWeaponRecoveryCurve; // 0x7d0(0x08)
	struct TMap<struct UAnimSlot1P*, struct FAnimationSlotArray> Arms1PAnimations; // 0x7d8(0x50)
	struct TMap<struct UAnimSlotLowerBody3P*, struct FAnimationSlotArray> LowerBody3PAnimations; // 0x828(0x50)
	struct TMap<struct UAnimSlotUpperBody3P*, struct FAnimationSlotArray> UpperBody3PAnimations; // 0x878(0x50)
	struct FAnimationSlotArray UpperBodyAimOffsets; // 0x8c8(0x18)
	struct FAnimationSlotArray LowerBodyAimOffsets; // 0x8e0(0x18)
	struct FAnimationSlotArray HitReactionAnimations; // 0x8f8(0x18)
	struct UAnimSequence* FaceFidgetAnimation; // 0x910(0x08)
	struct FVector ReticlePosition; // 0x918(0x0c)
	bool bHasReticlePosition; // 0x924(0x01)
	char pad_925[0x3]; // 0x925(0x03)
	struct FName ADSIdleRefBoneName; // 0x928(0x0c)
	char pad_934[0x9c]; // 0x934(0x9c)
	struct AAresEquippable* LastEquippable; // 0x9d0(0x08)
	char pad_9D8[0x8]; // 0x9d8(0x08)
	struct UAnimMovementStateMachine* MovementStateMachine; // 0x9e0(0x08)
	bool bLastFirstPerson; // 0x9e8(0x01)
	char pad_9E9[0x3]; // 0x9e9(0x03)
	float LastActorYaw; // 0x9ec(0x04)
	float LastTimeFired; // 0x9f0(0x04)
	int32_t UpdateRateLimitingDisable3PRefCount; // 0x9f4(0x04)
	bool bCachedEnableUpdateRateOptimizations; // 0x9f8(0x01)
	char pad_9F9[0x3]; // 0x9f9(0x03)
	int32_t FaceLayerDisableRefCount; // 0x9fc(0x04)
	int32_t CharacterIsFiringRefCount; // 0xa00(0x04)
	char pad_A04[0x4]; // 0xa04(0x04)
	struct UNetworkedRandomNumberGeneratorComponent* NetworkedRandomNumberGeneratorComponent; // 0xa08(0x08)
	float ADSKickBackDistance; // 0xa10(0x04)
	char pad_A14[0xc]; // 0xa14(0x0c)
	struct FTransform ADSIdleRefTransform; // 0xa20(0x30)
	bool bEnteredClientRelevancy; // 0xa50(0x01)
	bool bJustRespawned; // 0xa51(0x01)
	char pad_A52[0xce]; // 0xa52(0xce)
};

// Class ShooterGame.AnimDynamicStateInfo
// Size: 0x30 (Inherited: 0x30)
struct UAnimDynamicStateInfo : UInterface {
};

// Class ShooterGame.AnimMovementStateMachine
// Size: 0xe8 (Inherited: 0x30)
struct UAnimMovementStateMachine : UObject {
	char pad_30[0xb8]; // 0x30(0xb8)
};

// Class ShooterGame.AnimNotifyState_AnimDynamic
// Size: 0x38 (Inherited: 0x38)
struct UAnimNotifyState_AnimDynamic : UAnimNotifyState {
};

// Class ShooterGame.AnimNotifyState_BoneTransformAim
// Size: 0x50 (Inherited: 0x38)
struct UAnimNotifyState_BoneTransformAim : UAnimNotifyState {
	struct FBoneReference ConstraintBone; // 0x38(0x14)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// Class ShooterGame.AnimNotifyState_CanInterruptDeathReaction
// Size: 0x38 (Inherited: 0x38)
struct UAnimNotifyState_CanInterruptDeathReaction : UAnimNotifyState {
};

// Class ShooterGame.AnimNotifyState_CanTransition
// Size: 0x40 (Inherited: 0x38)
struct UAnimNotifyState_CanTransition : UAnimNotifyState {
	enum class EAnimMovementStateMachineState FromState; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// Class ShooterGame.AnimNotifyState_CharacterIsFiring
// Size: 0x38 (Inherited: 0x38)
struct UAnimNotifyState_CharacterIsFiring : UAnimNotifyState {
};

// Class ShooterGame.AnimNotifyState_DisableAnimUpdateRateOptimizations
// Size: 0x40 (Inherited: 0x38)
struct UAnimNotifyState_DisableAnimUpdateRateOptimizations : UAnimNotifyState {
	bool Disabled; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// Class ShooterGame.AnimNotifyState_DisableFaceLayer
// Size: 0x38 (Inherited: 0x38)
struct UAnimNotifyState_DisableFaceLayer : UAnimNotifyState {
};

// Class ShooterGame.AnimNotifyState_EquippableCharacterAltAnims
// Size: 0x38 (Inherited: 0x38)
struct UAnimNotifyState_EquippableCharacterAltAnims : UAnimNotifyState {
};

// Class ShooterGame.AnimNotifyState_IKEnabled
// Size: 0x50 (Inherited: 0x38)
struct UAnimNotifyState_IKEnabled : UAnimNotifyState {
	struct FBoneReference Bone; // 0x38(0x14)
	bool Enabled; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
};

// Class ShooterGame.AnimSlot
// Size: 0x38 (Inherited: 0x38)
struct UAnimSlot : UDataAsset {
};

// Class ShooterGame.AnimSlot1P
// Size: 0x38 (Inherited: 0x38)
struct UAnimSlot1P : UAnimSlot {
};

// Class ShooterGame.AnimSlotFace3P
// Size: 0x38 (Inherited: 0x38)
struct UAnimSlotFace3P : UAnimSlot {
};

// Class ShooterGame.AnimSlotGun1P
// Size: 0x38 (Inherited: 0x38)
struct UAnimSlotGun1P : UAnimSlot {
};

// Class ShooterGame.AnimSlotLowerBody3P
// Size: 0x38 (Inherited: 0x38)
struct UAnimSlotLowerBody3P : UAnimSlot {
};

// Class ShooterGame.AnimSlotUpperBody3P
// Size: 0x38 (Inherited: 0x38)
struct UAnimSlotUpperBody3P : UAnimSlot {
};

// Class ShooterGame.StateTransitionContext
// Size: 0x30 (Inherited: 0x30)
struct UStateTransitionContext : UObject {
};

// Class ShooterGame.AnimTriggeredStateContinueTransitionContext
// Size: 0x30 (Inherited: 0x30)
struct UAnimTriggeredStateContinueTransitionContext : UStateTransitionContext {
};

// Class ShooterGame.AnimTriggeredStateComponent
// Size: 0x388 (Inherited: 0x368)
struct UAnimTriggeredStateComponent : URespondToEventStateComponent {
	struct UAnimMontage* TriggeringAnimation; // 0x368(0x08)
	struct TArray<struct FNotifyTriggerType> NotifyTriggers; // 0x370(0x10)
	char pad_380[0x8]; // 0x380(0x08)
};

// Class ShooterGame.AntiAddictionManager
// Size: 0x110 (Inherited: 0x80)
struct UAntiAddictionManager : UInitSystem {
	struct FMulticastInlineDelegate OnAntiAddictionWarningNotification; // 0x80(0x10)
	char pad_90[0x28]; // 0x90(0x28)
	struct UAntiAddictionService* AntiAddictionService; // 0xb8(0x08)
	struct UNotificationManager* NotificationManager; // 0xc0(0x08)
	struct UConfigManager* ConfigManager; // 0xc8(0x08)
	struct URMSManager* RMSManager; // 0xd0(0x08)
	struct FText ShutdownText; // 0xd8(0x18)
	char pad_F0[0x20]; // 0xf0(0x20)
};

// Class ShooterGame.AntiAddictionService
// Size: 0xb0 (Inherited: 0x30)
struct UAntiAddictionService : UObject {
	struct URiotGamesApiClient* RiotGamesApiClient; // 0x30(0x08)
	struct UConfigManager* ConfigManager; // 0x38(0x08)
	struct FString AntiAddictionShutdownResource; // 0x40(0x10)
	struct FString AntiAddictionPlayTimeResource; // 0x50(0x10)
	struct FString AntiAddictionWarningResource; // 0x60(0x10)
	struct FString AntiAddictionDisableMatchmakingResource; // 0x70(0x10)
	struct FString AntiAddictionHopeHeartbeatResource; // 0x80(0x10)
	struct FString AntiAddictionHopeWarningResource; // 0x90(0x10)
	struct FString AntiAddictionHopeShutdownResource; // 0xa0(0x10)
};

// Class ShooterGame.AntiAddictionSessionManager
// Size: 0x38 (Inherited: 0x30)
struct UAntiAddictionSessionManager : UObject {
	struct UPlatformSessionManager* PlatformSessionManager; // 0x30(0x08)
};

// Class ShooterGame.ApplicationRepairManager
// Size: 0xa0 (Inherited: 0x80)
struct UApplicationRepairManager : UInitSystem {
	struct UApplicationRepairService* ApplicationRepairService; // 0x80(0x08)
	char pad_88[0x18]; // 0x88(0x18)
};

// Class ShooterGame.ApplicationRepairService
// Size: 0x38 (Inherited: 0x30)
struct UApplicationRepairService : UObject {
	struct URiotGamesApiClient* RiotGamesApiClient; // 0x30(0x08)
};

// Class ShooterGame.BaseProjectileEffectComponent
// Size: 0xf8 (Inherited: 0xe8)
struct UBaseProjectileEffectComponent : UActorComponent {
	char pad_E8[0x8]; // 0xe8(0x08)
	enum class EProjectileEventType TriggeringEvent; // 0xf0(0x01)
	bool bCanBeDisarmed; // 0xf1(0x01)
	char pad_F2[0x6]; // 0xf2(0x06)
};

// Class ShooterGame.ApplyBuffHitScanEffectComponent
// Size: 0x118 (Inherited: 0xf8)
struct UApplyBuffHitScanEffectComponent : UBaseProjectileEffectComponent {
	struct FEquippableStateBuffInfo BuffInfo; // 0xf8(0x20)
};

// Class ShooterGame.TimedStateComponent
// Size: 0x3a0 (Inherited: 0x368)
struct UTimedStateComponent : URespondToEventStateComponent {
	float TimerLength; // 0x368(0x04)
	char pad_36C[0x4]; // 0x36c(0x04)
	struct TArray<struct FGameplayAttribute> TimerModifingAttributes; // 0x370(0x10)
	bool bMovementSyncedTimer; // 0x380(0x01)
	char pad_381[0x1f]; // 0x381(0x1f)
};

// Class ShooterGame.ApplyBuffStateComponent
// Size: 0x3b0 (Inherited: 0x3a0)
struct UApplyBuffStateComponent : UTimedStateComponent {
	struct UAresGameplayBuff* BuffClass; // 0x3a0(0x08)
	float BuffLevel; // 0x3a8(0x04)
	bool bRemoveBuffOnStateEnd; // 0x3ac(0x01)
	char pad_3AD[0x3]; // 0x3ad(0x03)
};

// Class ShooterGame.ApplyBuffToTargetsStateComponent
// Size: 0x2d8 (Inherited: 0x2c8)
struct UApplyBuffToTargetsStateComponent : UScriptStateComponent {
	struct UAresGameplayBuff* BuffClass; // 0x2c8(0x08)
	float BuffLevel; // 0x2d0(0x04)
	char pad_2D4[0x4]; // 0x2d4(0x04)
};

// Class ShooterGame.ApplyBuffWhileOverlappingComponent
// Size: 0x108 (Inherited: 0xe8)
struct UApplyBuffWhileOverlappingComponent : UActorComponent {
	struct UAresGameplayBuff* BuffClass; // 0xe8(0x08)
	float BuffLevel; // 0xf0(0x04)
	enum class EApplyBuffTarget ApplyBuffTarget; // 0xf4(0x01)
	char pad_F5[0xb]; // 0xf5(0x0b)
	struct AActor* OtherActor; // 0x100(0x08)
};

// Class ShooterGame.ApplyContinuousForceModuleToTargetStateComponent
// Size: 0x2e8 (Inherited: 0x2c8)
struct UApplyContinuousForceModuleToTargetStateComponent : UScriptStateComponent {
	struct UForceModule* ForceModule; // 0x2c8(0x08)
	float Duration; // 0x2d0(0x04)
	char pad_2D4[0x4]; // 0x2d4(0x04)
	struct UForceModuleManagerComponent* TargetForceManager; // 0x2d8(0x08)
	struct FForceModuleHandle ModuleHandle; // 0x2e0(0x08)
};

// Class ShooterGame.ApplyForceModuleStateComponent
// Size: 0x3c0 (Inherited: 0x3a0)
struct UApplyForceModuleStateComponent : UTimedStateComponent {
	struct UForceModule* Module; // 0x3a0(0x08)
	struct AActor* SourceActor; // 0x3a8(0x08)
	char pad_3B0[0x8]; // 0x3b0(0x08)
	struct UForceModuleManagerComponent* TargetForceManager; // 0x3b8(0x08)
};

// Class ShooterGame.ApplyForceToTargetsStateComponent
// Size: 0x2d8 (Inherited: 0x2c8)
struct UApplyForceToTargetsStateComponent : UScriptStateComponent {
	struct UForceModule* ForceModule; // 0x2c8(0x08)
	float Duration; // 0x2d0(0x04)
	char pad_2D4[0x4]; // 0x2d4(0x04)
};

// Class ShooterGame.ArchiveUIData
// Size: 0xa8 (Inherited: 0x90)
struct UArchiveUIData : UBaseContentUIData {
	struct FText Description; // 0x90(0x18)
};

// Class ShooterGame.ArchiveDataAsset
// Size: 0x90 (Inherited: 0x50)
struct UArchiveDataAsset : UAresBasePrimaryDataAsset {
	struct TSoftClassPtr<UObject> UIData; // 0x50(0x30)
	struct TArray<struct TSoftClassPtr<UObject>> AccordContracts; // 0x80(0x10)
};

// Class ShooterGame.AresAbilitySystemComponent
// Size: 0x1540 (Inherited: 0x1340)
struct UAresAbilitySystemComponent : UAbilitySystemComponent {
	char pad_1340[0x58]; // 0x1340(0x58)
	struct TArray<struct FGameplayAttribute> TrackedAttributes; // 0x1398(0x10)
	struct TMap<struct FGameplayAttribute, float> AttributeChangedTimeMap; // 0x13a8(0x50)
	struct TMap<struct FGameplayAttribute, struct FAttributeValueChangeDelegateList> AttributeChangedEvents; // 0x13f8(0x50)
	struct UAresAttributeSet* CachedAttributeSet; // 0x1448(0x08)
	struct TArray<struct FGameplayTag> TrackedTags; // 0x1450(0x10)
	struct TMap<struct FGameplayTag, float> TagChangedTimeMap; // 0x1460(0x50)
	struct TMap<struct FGameplayTag, struct FTagValueChangeDelegateList> TagChangedEvents; // 0x14b0(0x50)
	struct TArray<struct FDeferredTagChangedEntry> DeferredTagChangedEventsToRemove; // 0x1500(0x10)
	struct FTagValueChangeDelegateList AnyTagChangedEvents; // 0x1510(0x18)
	struct TArray<struct FDelegate> DeferredAnyTagChangedEvents; // 0x1528(0x10)
	char pad_1538[0x8]; // 0x1538(0x08)
};

// Class ShooterGame.AresTouchWidget
// Size: 0x960 (Inherited: 0x2c8)
struct UAresTouchWidget : UUserWidget {
	char pad_2C8[0x8]; // 0x2c8(0x08)
	uint32_t SwipeOptions; // 0x2d0(0x04)
	char pad_2D4[0x4]; // 0x2d4(0x04)
	struct FMulticastInlineDelegate OnSwipe; // 0x2d8(0x10)
	struct FAresTouchHoldGestureProperties HoldGestureProperties; // 0x2e8(0x0c)
	bool bUseDoubleTap; // 0x2f4(0x01)
	char pad_2F5[0x3]; // 0x2f5(0x03)
	struct FAresTouchDoubleTapGestureProperties DoubleTapGestureProperties; // 0x2f8(0x14)
	bool bVisibilityCustomizable; // 0x30c(0x01)
	char pad_30D[0x3]; // 0x30d(0x03)
	struct FMulticastInlineDelegate OnSelectStateChanged; // 0x310(0x10)
	struct FMulticastInlineDelegate OnWidgetMoved; // 0x320(0x10)
	struct FMulticastInlineDelegate OnWidgetEditPressed; // 0x330(0x10)
	struct FMulticastInlineDelegate OnWidgetEditReleased; // 0x340(0x10)
	struct FMulticastInlineDelegate OnWidgetScaleChanged; // 0x350(0x10)
	struct FMulticastInlineDelegate OnWidgetOpacityChanged; // 0x360(0x10)
	struct UAresTouchBounds* TouchBounds; // 0x370(0x08)
	struct UImage* EditOutline; // 0x378(0x08)
	struct UScaleBox* UserDefinedScaleBox; // 0x380(0x08)
	bool bIsDirty; // 0x388(0x01)
	bool bHiddenByGameFeatureToggle; // 0x389(0x01)
	char ForwardingInputChannel; // 0x38a(0x01)
	char ReceivingForwardedInputChannel; // 0x38b(0x01)
	bool bCheckBoundsForForwardedTouchScreenPresses; // 0x38c(0x01)
	bool bActivateTouchOnTouchEnter; // 0x38d(0x01)
	bool bReleaseOnTouchLeave; // 0x38e(0x01)
	char pad_38F[0x9]; // 0x38f(0x09)
	struct FLinearColor EditModeDisabledColor; // 0x398(0x10)
	struct TWeakObjectPtr<struct UAresTouchScreen> ParentTouchScreen; // 0x3a8(0x08)
	struct UAresTouchComponent* TouchComponent; // 0x3b0(0x08)
	char pad_3B8[0x228]; // 0x3b8(0x228)
	bool bOverrideUserDefinedVisibility; // 0x5e0(0x01)
	enum class EWidgetVisibilityState InternalVisibilityState; // 0x5e1(0x01)
	enum class EWidgetEnabledState InternalEnabledState; // 0x5e2(0x01)
	char pad_5E3[0x5d]; // 0x5e3(0x5d)
	bool ForceVisible; // 0x640(0x01)
	char pad_641[0x7]; // 0x641(0x07)
	struct UAresTouchHoldGesture* HoldGesture; // 0x648(0x08)
	struct UAresTouchDoubleTapGesture* DoubleTapGesture; // 0x650(0x08)
	bool bRefreshOnTouchModeChanged; // 0x658(0x01)
	bool bSelectedForEdit; // 0x659(0x01)
	enum class EAresTouchWidgetMode EditTouchMode; // 0x65a(0x01)
	enum class EAresTouchTrackingMode TouchTrackingMode; // 0x65b(0x01)
	char pad_65C[0x4]; // 0x65c(0x04)
	struct FAresUIPropertyMap TouchWidgetDefaultProperties; // 0x660(0x2d0)
	struct UAresUIPropertyRegistry* TouchWidgetProperties; // 0x930(0x08)
	char pad_938[0x28]; // 0x938(0x28)
};

// Class ShooterGame.AresActionButton
// Size: 0xa10 (Inherited: 0x960)
struct UAresActionButton : UAresTouchWidget {
	struct FMulticastInlineDelegate OnEngage; // 0x960(0x10)
	struct FMulticastInlineDelegate OnDisengage; // 0x970(0x10)
	struct FMulticastInlineDelegate OnClick; // 0x980(0x10)
	struct FMulticastInlineDelegate OnButtonPressed; // 0x990(0x10)
	struct FMulticastInlineDelegate OnButtonReleased; // 0x9a0(0x10)
	struct FMulticastInlineDelegate OnButtonEntered; // 0x9b0(0x10)
	struct FMulticastInlineDelegate OnButtonExited; // 0x9c0(0x10)
	struct FMulticastInlineDelegate OnButtonMoved; // 0x9d0(0x10)
	struct FMulticastInlineDelegate OnButtonReset; // 0x9e0(0x10)
	bool bEngaged; // 0x9f0(0x01)
	char pad_9F1[0x3]; // 0x9f1(0x03)
	struct FName ActionMappingName; // 0x9f4(0x0c)
	bool bFireOnRelease; // 0xa00(0x01)
	enum class EActionButtonActivationMode ActivationMode; // 0xa01(0x01)
	enum class EActionButtonStateTransitionMethod StateTransitionMethod; // 0xa02(0x01)
	char pad_A03[0xd]; // 0xa03(0x0d)
};

// Class ShooterGame.AresActorSoundPool
// Size: 0x3e0 (Inherited: 0x3d0)
struct AAresActorSoundPool : AActor {
	struct TArray<struct UAresAudioComponent*> RecycledAudioComponents; // 0x3d0(0x10)
};

// Class ShooterGame.AresAimToolingTracker
// Size: 0xf8 (Inherited: 0xf8)
struct UAresAimToolingTracker : UPMAimToolingTracker {
};

// Class ShooterGame.AresAimToolingTuningAsset
// Size: 0x198 (Inherited: 0x38)
struct UAresAimToolingTuningAsset : UDataAsset {
	bool bAimToolingModule; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	float AimToolingTargetManagementOuterRadius; // 0x3c(0x04)
	float AimToolingTargetManagementMinDistance; // 0x40(0x04)
	float AimToolingTargetManagementMaxDistance; // 0x44(0x04)
	float AimToolingTargetManagementPreviousTargetDecay; // 0x48(0x04)
	float AimToolingMoveErrorMax; // 0x4c(0x04)
	float AimToolingMoveErrorExponent; // 0x50(0x04)
	bool bAimToolingBending; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
	float AimToolingBendingInnerRadiusCm; // 0x58(0x04)
	float AimToolingBendingOuterRadiusCm; // 0x5c(0x04)
	float AimToolingBendingMaxAngleDegs; // 0x60(0x04)
	float AimToolingBendingExponent; // 0x64(0x04)
	float AimToolingBendingMovePenaltyScale; // 0x68(0x04)
	bool bAimToolingPullToCenter; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
	struct UCurveFloat* PullToCenterRadialTowardCurve; // 0x70(0x08)
	struct UCurveFloat* PullToCenterRadialAwayCurve; // 0x78(0x08)
	struct UCurveFloat* PullToCenterTangentialTowardCurve; // 0x80(0x08)
	struct UCurveFloat* PullToCenterTangentialAwayCurve; // 0x88(0x08)
	struct UCurveFloat* PullToCenterWorldDistFromTargetCurve; // 0x90(0x08)
	struct UCurveFloat* PullToCenterScreenDistFromTargetCurve; // 0x98(0x08)
	struct UCurveFloat* PullToCenterStickDeflectionCurve; // 0xa0(0x08)
	float AimToolingPullToCenterRadialTowardExponent; // 0xa8(0x04)
	float AimToolingPullToCenterRadialTowardScale; // 0xac(0x04)
	float AimToolingPullToCenterRadialAwayExponent; // 0xb0(0x04)
	float AimToolingPullToCenterRadialAwayScale; // 0xb4(0x04)
	float AimToolingPullToCenterTangentialTowardExponent; // 0xb8(0x04)
	float AimToolingPullToCenterTangentialTowardScale; // 0xbc(0x04)
	float AimToolingPullToCenterTangentialAwayExponent; // 0xc0(0x04)
	float AimToolingPullToCenterTangentialAwayScale; // 0xc4(0x04)
	float AimToolingPullToCenterMovePenaltyScale; // 0xc8(0x04)
	float AimToolingPullToCenterRecoilEfficacyScale; // 0xcc(0x04)
	bool bAimToolingTargetFriction; // 0xd0(0x01)
	char pad_D1[0x7]; // 0xd1(0x07)
	struct UCurveFloat* TargetFrictionOverTargetPctCurve; // 0xd8(0x08)
	struct UCurveFloat* TargetFrictionWorldDistFromTargetCurve; // 0xe0(0x08)
	struct UCurveFloat* TargetFrictionScreenDistFromTargetCurve; // 0xe8(0x08)
	struct UCurveFloat* TargetFrictionStickDeflectionCurve; // 0xf0(0x08)
	bool bAimToolingShotRooting; // 0xf8(0x01)
	char pad_F9[0x3]; // 0xf9(0x03)
	float AimToolingShotRootingDeadzone; // 0xfc(0x04)
	float AimToolingShotRootingDuration; // 0x100(0x04)
	float AimToolingShotRootingFalloffSeconds; // 0x104(0x04)
	float AimToolingShotRootingFalloffExponent; // 0x108(0x04)
	bool bAimToolingOverTargetAcceleration; // 0x10c(0x01)
	char pad_10D[0x3]; // 0x10d(0x03)
	float AimToolingOverTargetAccelerationFlatScale; // 0x110(0x04)
	float AimToolingOverTargetAccelerationScaleFloor; // 0x114(0x04)
	float AimToolingOverTargetAccelerationExponent; // 0x118(0x04)
	bool bAimToolingAimAccelerationDelay; // 0x11c(0x01)
	char pad_11D[0x3]; // 0x11d(0x03)
	struct UCurveFloat* AimAccelerationScaleCurve; // 0x120(0x08)
	float AimToolingAimAccelerationDelayScaleDecayRate; // 0x128(0x04)
	float AimToolingAimAccelerationDelayMinOverTargetPct; // 0x12c(0x04)
	bool bAimToolingDeceleration; // 0x130(0x01)
	char pad_131[0x3]; // 0x131(0x03)
	float AimToolingDecelerationTime; // 0x134(0x04)
	float AimToolingDecelerationAverageWindow; // 0x138(0x04)
	float AimToolingDecelerationExponent; // 0x13c(0x04)
	float AimToolingDecelerationHalfAngle; // 0x140(0x04)
	float AimToolingDecelerationMaxShift; // 0x144(0x04)
	float AimToolingDecelerationStartThreshold; // 0x148(0x04)
	bool bAimToolingStrafeAssist; // 0x14c(0x01)
	char pad_14D[0x3]; // 0x14d(0x03)
	struct UCurveFloat* StrafeAssistOverTargetPctCurve; // 0x150(0x08)
	struct UCurveFloat* StrafeAssistWorldDistFromTargetCurve; // 0x158(0x08)
	struct UCurveFloat* StrafeAssistScreenDistFromTargetCurve; // 0x160(0x08)
	struct UCurveFloat* StrafeAssistPlayerSpeedCurve; // 0x168(0x08)
	bool bAimToolingFrameOfReference; // 0x170(0x01)
	char pad_171[0x7]; // 0x171(0x07)
	struct UCurveFloat* FrameOfReferenceWorldDistFromTargetCurve; // 0x178(0x08)
	struct UCurveFloat* FrameOfReferenceScreenDistFromTargetCurve; // 0x180(0x08)
	struct UCurveFloat* FrameOfReferenceStickDeflectionCurve; // 0x188(0x08)
	struct UCurveFloat* FrameOfReferenceOverTargetPctCurve; // 0x190(0x08)
};

// Class ShooterGame.AresAimToolingTuningComponent
// Size: 0x118 (Inherited: 0xe8)
struct UAresAimToolingTuningComponent : UActorComponent {
	int32_t CurrentTuningMode; // 0xe8(0x04)
	char pad_EC[0x4]; // 0xec(0x04)
	struct TArray<struct FString> TuningModeAssetPaths; // 0xf0(0x10)
	struct UAresAimToolingTuningAsset* CurrentTuningAsset; // 0x100(0x08)
	char pad_108[0x10]; // 0x108(0x10)
};

// Class ShooterGame.AresAIPerceptionComponent
// Size: 0x1d8 (Inherited: 0x1d0)
struct UAresAIPerceptionComponent : UAIPerceptionComponent {
	float ReactionTime; // 0x1d0(0x04)
	char pad_1D4[0x4]; // 0x1d4(0x04)
};

// Class ShooterGame.AresAIPerceptionSystem
// Size: 0x148 (Inherited: 0x148)
struct UAresAIPerceptionSystem : UAIPerceptionSystem {
};

// Class ShooterGame.AresAISystem
// Size: 0x158 (Inherited: 0x158)
struct UAresAISystem : UAISystem {
};

// Class ShooterGame.GamepadTuningDataAsset
// Size: 0x80 (Inherited: 0x38)
struct UGamepadTuningDataAsset : UDataAsset {
	float AnalogRoundness; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct TArray<struct UCurveFloat*> AimCurves; // 0x40(0x10)
	struct TArray<struct TSoftClassPtr<UObject>> TriggerSwapEquippables; // 0x50(0x10)
	float WeaponSwapTapHoldThreshold; // 0x60(0x04)
	float DropItemsTapHoldThreshold; // 0x64(0x04)
	float ReloadShopTapHoldThreshold; // 0x68(0x04)
	float UseTapHoldThreshold; // 0x6c(0x04)
	float MapScoreboardTapHoldThreshold; // 0x70(0x04)
	float QuickAbilityMaxHoldTime; // 0x74(0x04)
	float UltInputSeparationTime; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
};

// Class ShooterGame.AresAssetManager
// Size: 0x4b8 (Inherited: 0x460)
struct UAresAssetManager : UAssetManager {
	char pad_460[0x58]; // 0x460(0x58)
};

// Class ShooterGame.AresAttachmentSocket
// Size: 0x40 (Inherited: 0x30)
struct UAresAttachmentSocket : UObject {
	struct FName SocketName; // 0x30(0x0c)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class ShooterGame.GameplayModMagnitudeCalculationLevelAsCurve
// Size: 0x50 (Inherited: 0x48)
struct UGameplayModMagnitudeCalculationLevelAsCurve : UGameplayModMagnitudeCalculation {
	struct UCurveFloat* AttributeLevelCurve; // 0x48(0x08)
};

// Class ShooterGame.AresGameplayModMagnitudeCalculation
// Size: 0x48 (Inherited: 0x48)
struct UAresGameplayModMagnitudeCalculation : UGameplayModMagnitudeCalculation {
};

// Class ShooterGame.AresAttributeSet
// Size: 0x758 (Inherited: 0x38)
struct UAresAttributeSet : UAttributeSet {
	struct FGameplayBooleanAttributeData AllowFiringWhileUsing; // 0x38(0x10)
	struct FGameplayAttributeData Blinded; // 0x48(0x10)
	struct FGameplayAttributeData BonusDamage; // 0x58(0x10)
	struct FGameplayBooleanAttributeData CanSeeOthersHealth; // 0x68(0x10)
	struct FGameplayAttributeData DamageReduction; // 0x78(0x10)
	struct FGameplayAttributeData DefensiveDetectionDuration; // 0x88(0x10)
	struct FGameplayAttributeData DescendingGravityModifier; // 0x98(0x10)
	struct FGameplayAttributeData DetectionDelay; // 0xa8(0x10)
	struct FGameplayBooleanAttributeData DetectionDisabled; // 0xb8(0x10)
	struct FGameplayAttributeData EquippableMovementModifier; // 0xc8(0x10)
	struct FGameplayAttributeData HealingEffectiveness; // 0xd8(0x10)
	struct FGameplayAttributeData ShieldRestoreEffectiveness; // 0xe8(0x10)
	struct FGameplayAttributeData FiringErrorModifier; // 0xf8(0x10)
	struct FGameplayAttributeData FiringRateModifier; // 0x108(0x10)
	struct FGameplayAttributeData StabilityMovementModifier; // 0x118(0x10)
	struct FGameplayAttributeData GravityModifier; // 0x128(0x10)
	struct FGameplayAttributeData FootstepVolumeReduction; // 0x138(0x10)
	struct FGameplayBooleanAttributeData ForceCrouch; // 0x148(0x10)
	struct FGameplayBooleanAttributeData Frozen; // 0x158(0x10)
	struct FGameplayBooleanAttributeData HeavyWeaponsDisabled; // 0x168(0x10)
	struct FGameplayBooleanAttributeData Hide1P; // 0x178(0x10)
	struct FGameplayBooleanAttributeData HideCrosshair; // 0x188(0x10)
	struct FGameplayBooleanAttributeData HudVisibleToAll; // 0x198(0x10)
	struct FGameplayBooleanAttributeData HudVisibleToInstigator; // 0x1a8(0x10)
	struct FGameplayBooleanAttributeData InDanger; // 0x1b8(0x10)
	struct FGameplayBooleanAttributeData Intangible; // 0x1c8(0x10)
	struct FGameplayBooleanAttributeData invisible; // 0x1d8(0x10)
	struct FGameplayBooleanAttributeData InvisibleEquippables; // 0x1e8(0x10)
	struct FGameplayBooleanAttributeData InvisibleToEnemies; // 0x1f8(0x10)
	struct FGameplayBooleanAttributeData InvisibleToOwner; // 0x208(0x10)
	struct FGameplayBooleanAttributeData Invulnerable; // 0x218(0x10)
	struct FGameplayAttributeData JumpForceModifier; // 0x228(0x10)
	struct FGameplayAttributeData JumpMovementSlow; // 0x238(0x10)
	struct FGameplayBooleanAttributeData MinimapBlinded; // 0x248(0x10)
	struct FGameplayAttributeData MinimumAboveMaxSpeedDecayRateReduction; // 0x258(0x10)
	struct FGameplayAttributeData FallDamageReduction; // 0x268(0x10)
	struct FGameplayBooleanAttributeData LockMovement; // 0x278(0x10)
	struct FGameplayAttributeData MagazineBonus; // 0x288(0x10)
	struct FGameplayBooleanAttributeData MapVisibleToAll; // 0x298(0x10)
	struct FGameplayAttributeData MaxHealthModifier; // 0x2a8(0x10)
	struct FGameplayAttributeData MaxShieldModifier; // 0x2b8(0x10)
	struct FGameplayAttributeData MaxTurnRate; // 0x2c8(0x10)
	struct FGameplayAttributeData MinError; // 0x2d8(0x10)
	struct FGameplayAttributeData MinimapDetectionDelay; // 0x2e8(0x10)
	struct FGameplayBooleanAttributeData MinimapDisabled; // 0x2f8(0x10)
	struct FGameplayBooleanAttributeData MinimapInvisible; // 0x308(0x10)
	struct FGameplayAttributeData MinimapViewDistance; // 0x318(0x10)
	struct FGameplayAttributeData MaxVisionDistance; // 0x328(0x10)
	struct FGameplayAttributeData MoneyKillRewardModifier; // 0x338(0x10)
	struct FGameplayAttributeData MovementBonus; // 0x348(0x10)
	struct FGameplayAttributeData MovementBonusCrouch; // 0x358(0x10)
	struct FGameplayAttributeData MovementBonusFlying; // 0x368(0x10)
	struct FGameplayAttributeData MovementBonusJump; // 0x378(0x10)
	struct FGameplayAttributeData MovementBonusRun; // 0x388(0x10)
	struct FGameplayAttributeData MovementBonusWalk; // 0x398(0x10)
	struct FGameplayAttributeData MovementErrorModifier; // 0x3a8(0x10)
	struct FGameplayAttributeData MovementSlow; // 0x3b8(0x10)
	struct FGameplayAttributeData OffensiveDetectionDuration; // 0x3c8(0x10)
	struct FGameplayAttributeData PickupAmmoBonus; // 0x3d8(0x10)
	struct FGameplayBooleanAttributeData PreventAbilities; // 0x3e8(0x10)
	struct FGameplayBooleanAttributeData PreventCrouch; // 0x3f8(0x10)
	struct FGameplayBooleanAttributeData PreventDroppingEquippables; // 0x408(0x10)
	struct FGameplayBooleanAttributeData PreventJump; // 0x418(0x10)
	struct FGameplayBooleanAttributeData PreventFiring; // 0x428(0x10)
	struct FGameplayBooleanAttributeData PreventMeleeAttacking; // 0x438(0x10)
	struct FGameplayBooleanAttributeData PreventMovementInput; // 0x448(0x10)
	struct FGameplayBooleanAttributeData PreventReloading; // 0x458(0x10)
	struct FGameplayBooleanAttributeData PreventSwitchingEquippables; // 0x468(0x10)
	struct FGameplayBooleanAttributeData PreventUseCancelling; // 0x478(0x10)
	struct FGameplayBooleanAttributeData PreventUsing; // 0x488(0x10)
	struct FGameplayBooleanAttributeData PreventPickup; // 0x498(0x10)
	struct FGameplayBooleanAttributeData PrimarySlotDisabled; // 0x4a8(0x10)
	struct FGameplayAttributeData ReduceAbilityMovementPenalty; // 0x4b8(0x10)
	struct FGameplayAttributeData ReduceTaggingMovementPenalty; // 0x4c8(0x10)
	struct FGameplayAttributeData ReloadTimeModifier; // 0x4d8(0x10)
	struct FGameplayAttributeData SpreadRecoveryModifier; // 0x4e8(0x10)
	struct FGameplayBooleanAttributeData Stealthed; // 0x4f8(0x10)
	struct FGameplayAttributeData RecoilModifier; // 0x508(0x10)
	struct FGameplayBooleanAttributeData ThirdPerson; // 0x518(0x10)
	struct FGameplayAttributeData TurnRatePenalty; // 0x528(0x10)
	struct FGameplayAttributeData UltimatePointsDeathModifier; // 0x538(0x10)
	struct FGameplayAttributeData UltimatePointsDefuseModifier; // 0x548(0x10)
	struct FGameplayAttributeData UltimatePointsKillModifier; // 0x558(0x10)
	struct FGameplayAttributeData UltimatePointsPickUpModifier; // 0x568(0x10)
	struct FGameplayAttributeData UltimatePointsPlantModifier; // 0x578(0x10)
	struct FGameplayAttributeData UsingTimeModifier; // 0x588(0x10)
	struct FGameplayAttributeData WallPenetrationDistanceModifier; // 0x598(0x10)
	struct FGameplayAttributeData WeaponDrawTimeModifier; // 0x5a8(0x10)
	struct FGameplayBooleanAttributeData WeaponsDisabled; // 0x5b8(0x10)
	struct FGameplayBooleanAttributeData WeaponsLowered; // 0x5c8(0x10)
	struct FGameplayBooleanAttributeData Disarmed; // 0x5d8(0x10)
	struct FGameplayBooleanAttributeData GrenadeDisabled; // 0x5e8(0x10)
	struct FGameplayBooleanAttributeData QDisabled; // 0x5f8(0x10)
	struct FGameplayBooleanAttributeData EDisabled; // 0x608(0x10)
	struct FGameplayBooleanAttributeData UltimateDisabled; // 0x618(0x10)
	struct FGameplayBooleanAttributeData ZoomDisabled; // 0x628(0x10)
	struct FGameplayBooleanAttributeData EquipmentDisabled; // 0x638(0x10)
	struct FGameplayAttributeData TemporaryDamage; // 0x648(0x10)
	struct FGameplayAttributeData IncomingDamageShieldPenetrationModifier; // 0x658(0x10)
	struct FGameplayBooleanAttributeData PreventDeathFromDamage; // 0x668(0x10)
	struct FGameplayBooleanAttributeData BlindImmune; // 0x678(0x10)
	struct FGameplayBooleanAttributeData PreventUsingAbilities; // 0x688(0x10)
	struct FGameplayBooleanAttributeData PreventUsingAscenders; // 0x698(0x10)
	struct FGameplayAttributeData OverrideEquippableBaseMovement; // 0x6a8(0x10)
	struct FGameplayBooleanAttributeData DisableRegionalDamageMultipliers; // 0x6b8(0x10)
	struct FGameplayBooleanAttributeData DisableIncomingDamageCombatTracking; // 0x6c8(0x10)
	struct FGameplayBooleanAttributeData HealsFromAllyFlames; // 0x6d8(0x10)
	struct FGameplayAttributeData Marked; // 0x6e8(0x10)
	struct FGameplayBooleanAttributeData Suppressed; // 0x6f8(0x10)
	struct FGameplayBooleanAttributeData PreventDowned; // 0x708(0x10)
	struct FGameplayBooleanAttributeData PreventPlanting; // 0x718(0x10)
	struct FGameplayBooleanAttributeData PreventDefusing; // 0x728(0x10)
	struct FGameplayBooleanAttributeData PreventFollowing; // 0x738(0x10)
	float Healing; // 0x748(0x04)
	float Damage; // 0x74c(0x04)
	float Shield; // 0x750(0x04)
	char pad_754[0x4]; // 0x754(0x04)
};

// Class ShooterGame.AresAudioBankLoader
// Size: 0x50 (Inherited: 0x30)
struct UAresAudioBankLoader : UObject {
	struct TArray<struct FAresAudioBank> AudioBanks; // 0x30(0x10)
	struct TArray<struct UAkAudioEvent*> ReferencedAudioEvents; // 0x40(0x10)
};

// Class ShooterGame.AresAudioBlueprintLibrary
// Size: 0x30 (Inherited: 0x30)
struct UAresAudioBlueprintLibrary : UBlueprintFunctionLibrary {
};

// Class ShooterGame.AresAudioComponent
// Size: 0x560 (Inherited: 0x470)
struct UAresAudioComponent : UAkComponent {
	bool bEnableDopplerRTPC; // 0x470(0x01)
	bool bEnableOcclusion; // 0x471(0x01)
	bool bSimpleOcclusion; // 0x472(0x01)
	bool bContinuousOcclusion; // 0x473(0x01)
	float OcclusionUpdateInterval; // 0x474(0x04)
	struct TArray<struct AActor*> OcclusionIgnoredActors; // 0x478(0x10)
	char pad_488[0x11]; // 0x488(0x11)
	bool bAllowActorRecycling; // 0x499(0x01)
	char pad_49A[0xc6]; // 0x49a(0xc6)
};

// Class ShooterGame.AresAudioComponentManagerComponent
// Size: 0x140 (Inherited: 0xe8)
struct UAresAudioComponentManagerComponent : UActorComponent {
	char pad_E8[0x8]; // 0xe8(0x08)
	struct TMap<struct UObject*, struct FAudioComponentPool> AudioComponentPools; // 0xf0(0x50)
};

// Class ShooterGame.AresAudioSettings
// Size: 0xa8 (Inherited: 0x48)
struct UAresAudioSettings : UDeveloperSettings {
	float BasicOcclusion; // 0x48(0x04)
	float HeavyOcclusion; // 0x4c(0x04)
	float SoundBlockerOcclusion; // 0x50(0x04)
	float NoOcclusionPathOcclusion; // 0x54(0x04)
	struct FSoftObjectPath HeavyOcclusionMaterial; // 0x58(0x20)
	struct FSoftObjectPath SoundBlockerMaterial; // 0x78(0x20)
	float InterpolationTimeMs; // 0x98(0x04)
	float TracePadding; // 0x9c(0x04)
	enum class ECollisionChannel DirectLineToSoundCollision; // 0xa0(0x01)
	enum class ECollisionChannel DetectBlockersCollision; // 0xa1(0x01)
	char pad_A2[0x6]; // 0xa2(0x06)
};

// Class ShooterGame.AutocompleteSuggestionBase
// Size: 0x2f8 (Inherited: 0x2c8)
struct UAutocompleteSuggestionBase : UUserWidget {
	struct FString Suggestion; // 0x2c8(0x10)
	struct FMulticastInlineDelegate OnClick; // 0x2d8(0x10)
	struct FMulticastInlineDelegate OnHover; // 0x2e8(0x10)
};

// Class ShooterGame.AutocompleteProvider
// Size: 0x30 (Inherited: 0x30)
struct UAutocompleteProvider : UInterface {
};

// Class ShooterGame.AresAutocompleteTextBox
// Size: 0x328 (Inherited: 0x2c8)
struct UAresAutocompleteTextBox : UUserWidget {
	struct UEditableTextBox* RawTextBox; // 0x2c8(0x08)
	int32_t MaxSuggestions; // 0x2d0(0x04)
	bool ShouldSplitInputOnSpace; // 0x2d4(0x01)
	char pad_2D5[0x3]; // 0x2d5(0x03)
	struct FString LastToken; // 0x2d8(0x10)
	bool bAutoFill; // 0x2e8(0x01)
	char pad_2E9[0x7]; // 0x2e9(0x07)
	struct UAutocompleteSuggestionBase* CurrentSuggestionWidgetClass; // 0x2f0(0x08)
	struct TArray<struct FString> CurrentSuggestions; // 0x2f8(0x10)
	bool bApplyingSuggestion; // 0x308(0x01)
	char pad_309[0x7]; // 0x309(0x07)
	struct TArray<struct TScriptInterface<IAutocompleteProvider>> Providers; // 0x310(0x10)
	struct UEmojiMapping* EmojiMapping; // 0x320(0x08)
};

// Class ShooterGame.AresBaseGameInstance
// Size: 0x40 (Inherited: 0x30)
struct UAresBaseGameInstance : UObject {
	struct UTelemetryManager* TelemetryManagerInstance; // 0x30(0x08)
	struct UTelemetrySampler* TelemetrySamplerInstance; // 0x38(0x08)
};

// Class ShooterGame.ShooterAIController
// Size: 0x518 (Inherited: 0x4f0)
struct AShooterAIController : AAIController {
	struct URoundPersistenceComponent* Persistence; // 0x4f0(0x08)
	bool bTurretAiming; // 0x4f8(0x01)
	char pad_4F9[0xf]; // 0x4f9(0x0f)
	struct FName ShooterCharacterFocalPointBone; // 0x508(0x0c)
	char pad_514[0x4]; // 0x514(0x04)
};

// Class ShooterGame.AresBotController
// Size: 0x538 (Inherited: 0x518)
struct AAresBotController : AShooterAIController {
	bool bAutoSetClass; // 0x518(0x01)
	bool bRandomizeShootingSkillMultiplier; // 0x519(0x01)
	char pad_51A[0x2]; // 0x51a(0x02)
	float MinShootingSkillMultiplier; // 0x51c(0x04)
	float MaxShootingSkillMultiplier; // 0x520(0x04)
	struct FName ShootingSkillMultiplierKeyName; // 0x524(0x0c)
	bool bCanPickupBombEquippable; // 0x530(0x01)
	char pad_531[0x7]; // 0x531(0x07)
};

// Class ShooterGame.AresCalloutRegion
// Size: 0x410 (Inherited: 0x3d0)
struct AAresCalloutRegion : AActor {
	struct FText RegionName; // 0x3d0(0x18)
	enum class ECalloutSuperRegion SuperRegion; // 0x3e8(0x01)
	char pad_3E9[0x3]; // 0x3e9(0x03)
	int32_t Priority; // 0x3ec(0x04)
	struct TArray<struct UAresCalloutSubregionComponent*> SubRegions; // 0x3f0(0x10)
	struct UTextRenderComponent* EditorNameText; // 0x400(0x08)
	char pad_408[0x8]; // 0x408(0x08)
};

// Class ShooterGame.AresCalloutSubregionComponent
// Size: 0x600 (Inherited: 0x600)
struct UAresCalloutSubregionComponent : UStaticMeshComponent {
};

// Class ShooterGame.CalloutRegionTrackingComponent
// Size: 0x110 (Inherited: 0xe8)
struct UCalloutRegionTrackingComponent : UActorComponent {
	struct FMulticastInlineDelegate OnCalloutRegionChanged; // 0xe8(0x10)
	struct TArray<struct AAresCalloutRegion*> OverlappingRegions; // 0xf8(0x10)
	struct AAresCalloutRegion* CurrentRegion; // 0x108(0x08)
};

// Class ShooterGame.AresCalloutVolume
// Size: 0x410 (Inherited: 0x3d0)
struct AAresCalloutVolume : AActor {
	struct UStaticMeshComponent* VolumeMesh; // 0x3d0(0x08)
	struct UBoxComponent* OverlapBox; // 0x3d8(0x08)
	struct FString CalloutRegion; // 0x3e0(0x10)
	struct FString CalloutSubRegion; // 0x3f0(0x10)
	char pad_400[0x10]; // 0x400(0x10)
};

// Class ShooterGame.AresCeremony
// Size: 0x3d0 (Inherited: 0x3d0)
struct AAresCeremony : AInfo {
};

// Class ShooterGame.AresCeremonyComponent
// Size: 0x138 (Inherited: 0xe8)
struct UAresCeremonyComponent : UActorComponent {
	struct TArray<struct AAresCeremony*> RegisteredCeremonies; // 0xe8(0x10)
	struct TArray<struct AAresCeremony*> PrioritySortedCeremonies; // 0xf8(0x10)
	struct TArray<struct FAresCeremonyTriggerEvent> CeremonyTriggerEvents; // 0x108(0x10)
	char pad_118[0x20]; // 0x118(0x20)
};

// Class ShooterGame.CharacterAbilityUIData
// Size: 0xa8 (Inherited: 0x90)
struct UCharacterAbilityUIData : UBaseContentUIData {
	struct FText Description; // 0x90(0x18)
};

// Class ShooterGame.CharacterRoleUIData
// Size: 0xa8 (Inherited: 0x90)
struct UCharacterRoleUIData : UBaseContentUIData {
	struct FText Description; // 0x90(0x18)
};

// Class ShooterGame.CharacterRoleDataAsset
// Size: 0x80 (Inherited: 0x50)
struct UCharacterRoleDataAsset : UAresBasePrimaryDataAsset {
	struct TSoftClassPtr<UObject> UIData; // 0x50(0x30)
};

// Class ShooterGame.CharacterUIData
// Size: 0x198 (Inherited: 0x90)
struct UCharacterUIData : UBaseContentUIData {
	struct FText Description; // 0x90(0x18)
	struct UTexture* DisplayIconSmall; // 0xa8(0x08)
	struct UTexture* KillfeedPortrait; // 0xb0(0x08)
	struct UTexture* TopHUDPortrait; // 0xb8(0x08)
	struct FWidgetTransform PortraitRenderTransform; // 0xc0(0x1c)
	char pad_DC[0x4]; // 0xdc(0x04)
	struct TMap<enum class ECharacterAbilitySlot, struct UCharacterAbilityUIData*> Abilities; // 0xe0(0x50)
	struct TArray<struct FText> CharacterTags; // 0x130(0x10)
	struct FName WwiseStateName; // 0x140(0x0c)
	char pad_14C[0x4]; // 0x14c(0x04)
	struct UAkAudioEvent* PickMeVOEvent; // 0x150(0x08)
	struct FLinearColor BackgroundGradientColor1; // 0x158(0x10)
	struct FLinearColor BackgroundGradientColor2; // 0x168(0x10)
	struct FLinearColor BackgroundGradientColor3; // 0x178(0x10)
	struct FLinearColor BackgroundGradientColor4; // 0x188(0x10)
};

// Class ShooterGame.CharacterDataAsset
// Size: 0x198 (Inherited: 0x50)
struct UCharacterDataAsset : UAresBasePrimaryDataAsset {
	struct TSoftClassPtr<UObject> Character; // 0x50(0x30)
	struct TSoftClassPtr<UObject> UIData; // 0x80(0x30)
	struct TSoftClassPtr<UObject> Role; // 0xb0(0x30)
	struct TSoftObjectPtr<UTexture2D> FullPortrait; // 0xe0(0x30)
	struct TSoftObjectPtr<UTexture2D> CharacterBackground; // 0x110(0x30)
	bool FullPortraitRightFacing; // 0x140(0x01)
	char pad_141[0x7]; // 0x141(0x07)
	struct TSoftClassPtr<UObject> CharacterSelectFXC; // 0x148(0x30)
	struct FName DeveloperName; // 0x178(0x0c)
	struct FName ShippingName; // 0x184(0x0c)
	bool bIsPlayableCharacter; // 0x190(0x01)
	bool bAvailableForTest; // 0x191(0x01)
	char pad_192[0x6]; // 0x192(0x06)
};

// Class ShooterGame.AresTouchPad
// Size: 0x9f0 (Inherited: 0x960)
struct UAresTouchPad : UAresTouchWidget {
	struct FMulticastInlineDelegate OnPadPressed; // 0x960(0x10)
	struct FMulticastInlineDelegate OnPadReleased; // 0x970(0x10)
	struct FMulticastInlineDelegate OnPadMoved; // 0x980(0x10)
	struct FMulticastInlineDelegate OnPadIndexPressed; // 0x990(0x10)
	struct FMulticastInlineDelegate OnPadIndexReleased; // 0x9a0(0x10)
	struct FMulticastInlineDelegate OnPadIndexMoved; // 0x9b0(0x10)
	struct FMulticastInlineDelegate OnPadXLocationChanged; // 0x9c0(0x10)
	struct FMulticastInlineDelegate OnPadYLocationChanged; // 0x9d0(0x10)
	struct TWeakObjectPtr<struct UAresTouchTrackPadComponent> TouchPadComponent; // 0x9e0(0x08)
	int32_t MaxTouchesAllowed; // 0x9e8(0x04)
	char pad_9EC[0x4]; // 0x9ec(0x04)
};

// Class ShooterGame.AresCharacterAimingTouchPad
// Size: 0xa08 (Inherited: 0x9f0)
struct UAresCharacterAimingTouchPad : UAresTouchPad {
	char pad_9F0[0x8]; // 0x9f0(0x08)
	struct TArray<struct UAresHudElement*> DebugHudElementClasses; // 0x9f8(0x10)
};

// Class ShooterGame.AresCharacterHUDMobile
// Size: 0x370 (Inherited: 0x2c8)
struct UAresCharacterHUDMobile : UUserWidget {
	struct TMap<struct FName, struct UWidgetAnimation*> AnimationMap; // 0x2c8(0x50)
	struct TMap<struct FName, struct UWidget*> SlotNameToWidgetInstance; // 0x318(0x50)
	struct UAresTouchScreen* ParentTouchScreen; // 0x368(0x08)
};

// Class ShooterGame.AresCheatAutoCompletePopulator
// Size: 0x50 (Inherited: 0x30)
struct UAresCheatAutoCompletePopulator : UObject {
	struct FSoftObjectPath DevOnlyGunNamesToEquippableDataAssetsDataTable; // 0x30(0x20)
};

// Class ShooterGame.BasePlayerController
// Size: 0x738 (Inherited: 0x738)
struct ABasePlayerController : APlayerController {
};

// Class ShooterGame.AresPlayerController
// Size: 0x988 (Inherited: 0x738)
struct AAresPlayerController : ABasePlayerController {
	char pad_738[0x10]; // 0x738(0x10)
	struct FMulticastInlineDelegate OnScreenTransitionUpdated; // 0x748(0x10)
	struct FMulticastInlineDelegate OnScoreboardVisibleUpdated; // 0x758(0x10)
	struct FMulticastInlineDelegate OnAresPlayerStateChanged; // 0x768(0x10)
	char pad_778[0x80]; // 0x778(0x80)
	struct FMulticastInlineDelegate OnPlayerViewTargetModeChanged; // 0x7f8(0x10)
	struct FMulticastInlineDelegate OnPlayerViewTargetChanged; // 0x808(0x10)
	enum class EAnalogPlayerState PreviousAnalogPlayerState; // 0x818(0x01)
	char LastKnownTargetID; // 0x819(0x01)
	char pad_81A[0x6]; // 0x81a(0x06)
	struct FMulticastInlineDelegate OnInputModeChanged; // 0x820(0x10)
	char pad_830[0x18]; // 0x830(0x18)
	struct UAresUIManager* UIManager; // 0x848(0x08)
	struct UAresUIDirector* UIDirector; // 0x850(0x08)
	bool bCreateUIInstancesFromGlobals; // 0x858(0x01)
	char pad_859[0x7]; // 0x859(0x07)
	struct UShooterUICoordinator* UICoordinator; // 0x860(0x08)
	struct UAresMinimapManager* MinimapManager; // 0x868(0x08)
	char pad_870[0x8]; // 0x870(0x08)
	struct AShooterCharacter* CachedShooterCharacter; // 0x878(0x08)
	struct AShooterCamera* CachedShooterCamera; // 0x880(0x08)
	struct UScreenTransitionComponent* ScreenTransitionComponent; // 0x888(0x08)
	struct UViewTargetComponent* ViewTargetComponent; // 0x890(0x08)
	struct UGamepadInputComponent* GamepadInputComponent; // 0x898(0x08)
	struct USpectateInOrderActionComponent* SpectateInOrderActionComponent; // 0x8a0(0x08)
	struct USpectateSpecificActionComponent* SpectateSpecificActionComponent; // 0x8a8(0x08)
	struct UShooterCharacterMinimapComponent* MapSpectateKeybindComponentClass; // 0x8b0(0x08)
	struct FRateLimiter SpectateRequestRateLimiter; // 0x8b8(0x30)
	char pad_8E8[0x28]; // 0x8e8(0x28)
	struct FString MatchID; // 0x910(0x10)
	char pad_920[0x8]; // 0x920(0x08)
	struct UPMAimToolingComponent* AimToolingComponent; // 0x928(0x08)
	struct UPMMovementToolingComponent* MovementToolingComponent; // 0x930(0x08)
	char pad_938[0x38]; // 0x938(0x38)
	struct URemoteClientMovementComponent* RemoteClientMovementComponent; // 0x970(0x08)
	char pad_978[0x10]; // 0x978(0x10)
};

// Class ShooterGame.AresCheatManagerBase
// Size: 0x80 (Inherited: 0x80)
struct UAresCheatManagerBase : UCheatManager {
};

// Class ShooterGame.AresCheatManager
// Size: 0xf8 (Inherited: 0x80)
struct UAresCheatManager : UAresCheatManagerBase {
	struct UMaterial* GreenScreenMaterial; // 0x80(0x08)
	struct FSoftObjectPath GreenScreenMaterialName; // 0x88(0x20)
	struct TMap<struct UStaticMeshComponent*, struct FStaticMeshMaterialList> StaticMeshToOriginalMaterialsMap; // 0xa8(0x50)
};

// Class ShooterGame.AresClientEvents
// Size: 0x68 (Inherited: 0x30)
struct UAresClientEvents : UObject {
	struct FMulticastInlineDelegate OnBugCommandDelegate; // 0x30(0x10)
	struct FMulticastInlineDelegate OnPlatformUnhealthy; // 0x40(0x10)
	struct FMulticastInlineDelegate OnInitScreenComplete; // 0x50(0x10)
	char pad_60[0x8]; // 0x60(0x08)
};

// Class ShooterGame.AresClientGameInstance
// Size: 0x578 (Inherited: 0x40)
struct UAresClientGameInstance : UAresBaseGameInstance {
	char pad_40[0x18]; // 0x40(0x18)
	struct FString ErrorMessage; // 0x58(0x10)
	struct FMulticastInlineDelegate ClientGameInstanceInitStatusChanged; // 0x68(0x10)
	enum class EAresClientGameInstanceInitStatus InitStatus; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
	struct FMulticastInlineDelegate OnPatchContentUpToDate; // 0x80(0x10)
	struct ULatencyService* LatencyService; // 0x90(0x08)
	struct FMulticastInlineDelegate OnQuitGameInstance; // 0x98(0x10)
	struct FMulticastInlineDelegate OnRequestDestroyWindow; // 0xa8(0x10)
	bool bDidPlayIntroCinematic; // 0xb8(0x01)
	char pad_B9[0x7]; // 0xb9(0x07)
	struct UConfigManager* ConfigManager; // 0xc0(0x08)
	struct URSOManager* RSOManager; // 0xc8(0x08)
	struct UPlatformSessionManager* SessionManager; // 0xd0(0x08)
	struct URMSManager* RMSManager; // 0xd8(0x08)
	struct UPersonalizationManagerV2* PersonalizationManagerV2; // 0xe0(0x08)
	struct UPartyManager* PartyManager; // 0xe8(0x08)
	struct UPlayerReportManager* PlayerReportManager; // 0xf0(0x08)
	struct UGlobalAudioManager* GlobalAudioManager; // 0xf8(0x08)
	int32_t PlaytimeWidgetZOrder; // 0x100(0x04)
	char pad_104[0x4]; // 0x104(0x04)
	struct UCrossWorldUserWidget* PlaytimeManagerWidget; // 0x108(0x08)
	struct TSoftClassPtr<UObject> GlobalAudioManagerAssetClass; // 0x110(0x30)
	struct TSoftClassPtr<UObject> PlaytimeManagerWidgetAssetClass; // 0x140(0x30)
	struct TSoftClassPtr<UObject> LeaveMatchConfirmationClass; // 0x170(0x30)
	struct UAresSettingsManager* AresSettingsManagerClass; // 0x1a0(0x08)
	struct UActionTraitsManager* ActionTraitsManagerClass; // 0x1a8(0x08)
	struct UUserWidget* LeaveMatchConfirmationWidget; // 0x1b0(0x08)
	struct UClientTelemetryPersistence* TelemetryPersistence; // 0x1b8(0x08)
	struct UPlatformInitializerV2* PlatformInitializer; // 0x1c0(0x08)
	struct URiotGamesApiClient* RiotGamesApiClient; // 0x1c8(0x08)
	struct UAresWidgetRegistry* WidgetRegistry; // 0x1d0(0x08)
	struct UAresGameInstance* MyGameInstance; // 0x1d8(0x08)
	struct UContentIndexManager* ContentIndexManager; // 0x1e0(0x08)
	struct UInventoryInitManager* InventoryInitManager; // 0x1e8(0x08)
	struct UAntiAddictionManager* AntiAddictionManager; // 0x1f0(0x08)
	struct UAntiAddictionSessionManager* AntiAddictionSessionManager; // 0x1f8(0x08)
	struct URNetVoiceManager* VoiceManager; // 0x200(0x08)
	struct UChatFriendsMetadataManager* ChatFriendsMetadataManager; // 0x208(0x08)
	struct UPresenceManager* PresenceManager; // 0x210(0x08)
	struct UPresenceUpdater* PresenceUpdater; // 0x218(0x08)
	struct UTextChatManagerV2* TextChatManagerV2; // 0x220(0x08)
	struct UMutedPatternsManager* MutedPatternsManager; // 0x228(0x08)
	struct UThreadedChatManager* ThreadedChatManager; // 0x230(0x08)
	struct UFriendsManager* FriendsManager; // 0x238(0x08)
	struct UDisplayNameManager* DisplayNameManager; // 0x240(0x08)
	struct UPlatformInitSettingsManager* PlatformInitSettingsManager; // 0x248(0x08)
	struct URiotProductManager* RiotProductManager; // 0x250(0x08)
	struct UAresSettingsManager* AresSettingsManager; // 0x258(0x08)
	struct URoamingSettingsManager* RoamingSettingsManager; // 0x260(0x08)
	struct UCustomGameManager* CustomGameManager; // 0x268(0x08)
	struct UCoreGameManager* CoreGameManager; // 0x270(0x08)
	struct UVoiceRoomManager* VoiceRoomManager; // 0x278(0x08)
	struct UMatchDetailsManager* MatchDetailsManager; // 0x280(0x08)
	struct UMMRManager* MMRManager; // 0x288(0x08)
	struct UContentManager* ContentManager; // 0x290(0x08)
	struct UGameFlowStateManager* GameFlowStateManager; // 0x298(0x08)
	struct UGameFlowPredictionManager* GameFlowPredictionManager; // 0x2a0(0x08)
	struct UServiceTickerManager* ServiceTickerManager; // 0x2a8(0x08)
	struct UMatchHistoryManager* MatchHistoryManager; // 0x2b0(0x08)
	struct UMatchHistoryViewController* MatchHistoryViewController; // 0x2b8(0x08)
	struct UTravelManager* TravelManager; // 0x2c0(0x08)
	struct UPreloadManager* PreloadManager; // 0x2c8(0x08)
	struct UPlayerFeedbackToolPluginManager* PlayerFeedbackToolPluginManager; // 0x2d0(0x08)
	struct UPartyModel* PartyModel; // 0x2d8(0x08)
	struct UPlatformPlayerManager* PlatformPlayerManager; // 0x2e0(0x08)
	struct UPartyViewController* PartyViewController; // 0x2e8(0x08)
	struct USocialViewControllerV3* SocialViewController; // 0x2f0(0x08)
	struct UPatchNotesManager* PatchNotesManager; // 0x2f8(0x08)
	struct UAresWatermarkManager* WatermarkManager; // 0x300(0x08)
	struct UInventoryManager* InventoryManager; // 0x308(0x08)
	struct UPlayerListingManager* PlayerListingManager; // 0x310(0x08)
	struct UWhisperChatManager* WhisperChatManager; // 0x318(0x08)
	struct UNotificationManager* NotificationManager; // 0x320(0x08)
	struct UDebugNotificationEmitter* DebugNotificationEmitter; // 0x328(0x08)
	struct UPartyNotificationManager* PartyNotificationManager; // 0x330(0x08)
	struct UFriendNotificationManager* FriendNotificationManager; // 0x338(0x08)
	struct UPlayerReportNotificationManager* PlayerReportNotificationManager; // 0x340(0x08)
	struct UVoiceModel* VoiceModel; // 0x348(0x08)
	struct UVoicePreferencesManager* VoicePreferencesManager; // 0x350(0x08)
	struct UVoiceViewController* VoiceViewController; // 0x358(0x08)
	struct UMatchmakingManager* MatchmakingManager; // 0x360(0x08)
	struct UPregameManager* PregameManager; // 0x368(0x08)
	struct UContractsManager* ContractsManager; // 0x370(0x08)
	struct UContractDefinitionsManager* ContractDefinitionsManager; // 0x378(0x08)
	struct UContractsViewController* ContractsViewController; // 0x380(0x08)
	struct UCrosshairManager* CrosshairManager; // 0x388(0x08)
	struct URewardGrantModelFactory* RewardGrantModelFactory; // 0x390(0x08)
	struct UVanguardManager* VanguardManager; // 0x398(0x08)
	struct UDropInLoadingManager* DropInLoadingManager; // 0x3a0(0x08)
	struct UChatSessionManager* ChatSessionManager; // 0x3a8(0x08)
	struct UPurchaseManager* PurchaseManager; // 0x3b0(0x08)
	struct UStoreManager* StoreManager; // 0x3b8(0x08)
	struct UStoreUITelemetryManager* StoreUITelemetryManager; // 0x3c0(0x08)
	struct UStoreViewControllerV2* StoreViewController; // 0x3c8(0x08)
	struct UPlayerFeedbackToolViewController* PlayerFeedbackToolViewController; // 0x3d0(0x08)
	struct UAresClientEvents* AresClientEvents; // 0x3d8(0x08)
	struct UCompetitiveTierUpdater* CompetitiveTierUpdater; // 0x3e0(0x08)
	struct UPlayerIdentityUpdater* PlayerIdentityUpdater; // 0x3e8(0x08)
	struct UProvisioningErrorNotificationManager* ProvisioningErrorNotificationManager; // 0x3f0(0x08)
	struct ULegalInfoManager* LegalInfoManager; // 0x3f8(0x08)
	struct UMapLoadModel* MapLoadModel; // 0x400(0x08)
	struct UMenuStackManager* MenuStackManager; // 0x408(0x08)
	struct UModalManager* ModalManager; // 0x410(0x08)
	struct UPlayerAliasManager* PlayerAliasManager; // 0x418(0x08)
	struct UPaymentsManager* PaymentsManager; // 0x420(0x08)
	struct UPingManager* PingManager; // 0x428(0x08)
	struct UOnlineIdentityManager* OnlineIdentityManager; // 0x430(0x08)
	struct UPlayerSettingsTelemetry* PlayerSettingsTelemetry; // 0x438(0x08)
	struct UUITelemetryManager* UITelemetryManager; // 0x440(0x08)
	struct UActionTraitsManager* ActionTraitsManager; // 0x448(0x08)
	struct UActionBindingsManager* ActionBindingsManager; // 0x450(0x08)
	struct UPlayerFacingPerfManager* PlayerFacingPerfManager; // 0x458(0x08)
	struct UApplicationRepairManager* ApplicationRepairManager; // 0x460(0x08)
	struct UArsenalViewController* ArsenalViewController; // 0x468(0x08)
	struct UPlayerAffinityManager* PlayerAffinityManager; // 0x470(0x08)
	struct UPatchAvailabilityManager* PatchAvailabilityManager; // 0x478(0x08)
	struct UPatchManager* PatchManager; // 0x480(0x08)
	struct URiotClientConfigManager* RiotClientConfigManager; // 0x488(0x08)
	struct UNPELoader* NPELoader; // 0x490(0x08)
	struct UTransitionModelManager* TransitionModelManager; // 0x498(0x08)
	struct UTutorialManager* TutorialManager; // 0x4a0(0x08)
	struct ULoginQueueManager* LoginQueueManager; // 0x4a8(0x08)
	struct URiotClientHeartbeatManager* RiotClientHeartbeatManager; // 0x4b0(0x08)
	struct ULocalePreferenceManager* LocalePreferenceManager; // 0x4b8(0x08)
	struct UVNGManager* VNGManager; // 0x4c0(0x08)
	struct UMassRewardsManager* MassRewardsManager; // 0x4c8(0x08)
	struct URestrictionsManager* RestrictionsManager; // 0x4d0(0x08)
	struct UAccountXPManager* AccountXPManager; // 0x4d8(0x08)
	struct UReporterFeedbackManager* ReporterFeedbackManager; // 0x4e0(0x08)
	struct URiotWarningManager* RiotWarningManager; // 0x4e8(0x08)
	struct URosterManager* RosterManager; // 0x4f0(0x08)
	struct URosterViewController* RosterViewController; // 0x4f8(0x08)
	struct UTournamentsManager* TournamentsManager; // 0x500(0x08)
	struct UPremierManager* PremierManager; // 0x508(0x08)
	struct UPremierRosterViewController* PremierRosterViewController; // 0x510(0x08)
	struct UMainMenuTelemetryManager* MainMenuTelemetryManager; // 0x518(0x08)
	struct UHovercardCacheManager* HovercardCacheManager; // 0x520(0x08)
	struct UEULAManager* EULAManager; // 0x528(0x08)
	struct UAVSManager* AVSManager; // 0x530(0x08)
	struct UDailyTicketManager* DailyTicketManager; // 0x538(0x08)
	struct UJuiceScreenViewController* JuiceScreenViewController; // 0x540(0x08)
	struct UFavoritesManager* FavoritesManager; // 0x548(0x08)
	struct UContentFilterViewController* ContentFilterViewController; // 0x550(0x08)
	struct UContentFilterUITelemetryManager* ContentFilterUITelemetryManager; // 0x558(0x08)
	bool RiotLoggedIn; // 0x560(0x01)
	bool bPatchFiles; // 0x561(0x01)
	bool bNoRiotClient; // 0x562(0x01)
	bool bPendingLogoutOnExit; // 0x563(0x01)
	bool UserPatchConfirmed; // 0x564(0x01)
	char pad_565[0x3]; // 0x565(0x03)
	struct UUserInfoNotificationManager* UserInfoNotificationManager; // 0x568(0x08)
	char pad_570[0x8]; // 0x570(0x08)
};

// Class ShooterGame.AresClientGameInstance_NativePlatform
// Size: 0x5e0 (Inherited: 0x578)
struct UAresClientGameInstance_NativePlatform : UAresClientGameInstance {
	struct UAresGameInstance* GameInstance; // 0x578(0x08)
	struct UNativePlatformFriendsManager* NativePlatformFriendsManager; // 0x580(0x08)
	char pad_588[0x58]; // 0x588(0x58)
};

// Class ShooterGame.AresClientGameInstance_Touch
// Size: 0x5f8 (Inherited: 0x578)
struct UAresClientGameInstance_Touch : UAresClientGameInstance {
	struct FString TouchAimToolsTuningComponentClass; // 0x578(0x10)
	struct FMulticastInlineDelegate OnConnectionInfoUpdatedDelegate; // 0x588(0x10)
	struct FMulticastInlineDelegate OnThermalStateChangedDelegate; // 0x598(0x10)
	char pad_5A8[0x8]; // 0x5a8(0x08)
	struct UWidgetLayoutManager* WidgetLayoutManager; // 0x5b0(0x08)
	struct UAresTouchManager* AresTouchManager; // 0x5b8(0x08)
	struct UPushNotificationsManager* PushNotificationsManager; // 0x5c0(0x08)
	struct UMobileOverlayViewController* MobileOverlayViewController; // 0x5c8(0x08)
	struct UTextChatPanelViewController* TextChatPanelViewController; // 0x5d0(0x08)
	struct TArray<struct UObject*> PersistentBlueprintObjects; // 0x5d8(0x10)
	char pad_5E8[0x10]; // 0x5e8(0x10)
};

// Class ShooterGame.AresComboBox
// Size: 0xf20 (Inherited: 0xf08)
struct UAresComboBox : UComboBoxString {
	struct FDelegate OnGenerateButtonContentWidgetEvent; // 0xf08(0x14)
	char pad_F1C[0x4]; // 0xf1c(0x04)
};

// Class ShooterGame.AresContextMenuActionBaseWidget
// Size: 0x2f0 (Inherited: 0x2c8)
struct UAresContextMenuActionBaseWidget : UUserWidget {
	char pad_2C8[0x18]; // 0x2c8(0x18)
	struct FMulticastInlineDelegate OnActionTriggered; // 0x2e0(0x10)
};

// Class ShooterGame.AresContextMenuBaseWidget
// Size: 0x2e0 (Inherited: 0x2c8)
struct UAresContextMenuBaseWidget : UUserWidget {
	struct UAresContextMenuActionBaseWidget* ActionWidgetClass; // 0x2c8(0x08)
	struct FMulticastInlineDelegate OnAnyActionTriggered; // 0x2d0(0x10)
};

// Class ShooterGame.AresMenuAnchor
// Size: 0x1d8 (Inherited: 0x1b8)
struct UAresMenuAnchor : UMenuAnchor {
	struct FVector2D MenuPosition; // 0x1b8(0x08)
	struct FMargin ActionPadding; // 0x1c0(0x10)
	bool AnchorOnMouse; // 0x1d0(0x01)
	char pad_1D1[0x7]; // 0x1d1(0x07)
};

// Class ShooterGame.EffectContainer
// Size: 0x530 (Inherited: 0x3d0)
struct AEffectContainer : AActor {
	char pad_3D0[0x10]; // 0x3d0(0x10)
	struct UFXCTypePool* Pool; // 0x3e0(0x08)
	struct FEffectID EffectID; // 0x3e8(0x20)
	struct FEffectData EffectData; // 0x408(0x58)
	struct FMulticastInlineDelegate OnStartEffect; // 0x460(0x10)
	struct FMulticastInlineDelegate OnUpdateEffectPerspective; // 0x470(0x10)
	struct FMulticastInlineDelegate OnEffectDataUpdated; // 0x480(0x10)
	struct FMulticastInlineDelegate OnStopEffect; // 0x490(0x10)
	struct FMulticastInlineDelegate OnResetEffect; // 0x4a0(0x10)
	enum class EEffectAttachType AttachType; // 0x4b0(0x01)
	bool bObeyOwnerHidden; // 0x4b1(0x01)
	enum class EMovementSyncType MovementSyncType; // 0x4b2(0x01)
	bool bPureEffect; // 0x4b3(0x01)
	enum class ESpawnEffectType SpawnType; // 0x4b4(0x01)
	bool bCosmeticEffect; // 0x4b5(0x01)
	bool bForceOneShotEffect; // 0x4b6(0x01)
	char pad_4B7[0x1]; // 0x4b7(0x01)
	float ReplayEffectOffsetTime; // 0x4b8(0x04)
	char pad_4BC[0x1]; // 0x4bc(0x01)
	bool bCurrentPerspectiveIsFirstPerson; // 0x4bd(0x01)
	char pad_4BE[0x2]; // 0x4be(0x02)
	float EffectTailTime; // 0x4c0(0x04)
	char pad_4C4[0x54]; // 0x4c4(0x54)
	struct AEffectContainer* PureEffectInstance; // 0x518(0x08)
	struct UEffectManagerComponent* OwningManager; // 0x520(0x08)
	struct AActor* OriginalTarget; // 0x528(0x08)
};

// Class ShooterGame.AresTracerInterface
// Size: 0x620 (Inherited: 0x530)
struct AAresTracerInterface : AEffectContainer {
	struct FVector AdjustedStartLocation; // 0x530(0x0c)
	struct FVector BeamDirectionNormalized; // 0x53c(0x0c)
	struct FName TracerBeamIntensityParameterName; // 0x548(0x0c)
	char pad_554[0x4]; // 0x554(0x04)
	struct UParticleSystemComponent* BeamComponent; // 0x558(0x08)
	struct TArray<int32_t> BeamEmitterIndices; // 0x560(0x10)
	float InitialSpeed; // 0x570(0x04)
	float ImpactDistance; // 0x574(0x04)
	float AdjustForwardDistance; // 0x578(0x04)
	float PostImpactLife; // 0x57c(0x04)
	bool bPlayImpactForHitCharacters; // 0x580(0x01)
	bool bCollapsed; // 0x581(0x01)
	bool bAutoDisableCollisionOnImpact; // 0x582(0x01)
	char pad_583[0x1]; // 0x583(0x01)
	struct FHitResult EndHitResult; // 0x584(0x94)
	char pad_618[0x8]; // 0x618(0x08)
};

// Class ShooterGame.AresContrailTracer
// Size: 0x620 (Inherited: 0x620)
struct AAresContrailTracer : AAresTracerInterface {
	float LastTickTime; // 0x618(0x04)
};

// Class ShooterGame.AresPlatformDataAsset
// Size: 0x40 (Inherited: 0x38)
struct UAresPlatformDataAsset : UPrimaryDataAsset {
	uint32_t Platforms; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class ShooterGame.CoreGlobalsDataAsset
// Size: 0x58 (Inherited: 0x40)
struct UCoreGlobalsDataAsset : UAresPlatformDataAsset {
	struct UAresClientGameInstance* GameInstanceClass; // 0x40(0x08)
	struct UCurveFloat* ClientFramerateInstabilityThresholdCurve; // 0x48(0x08)
	struct UCurveFloat* ClientFramerateInstabilityCriticalThresholdCurve; // 0x50(0x08)
};

// Class ShooterGame.AresCustomizationPackInterface
// Size: 0x30 (Inherited: 0x30)
struct UAresCustomizationPackInterface : UInterface {
};

// Class ShooterGame.DebugInformation
// Size: 0x30 (Inherited: 0x30)
struct UDebugInformation : UInterface {
};

// Class ShooterGame.AresDelegates
// Size: 0x30 (Inherited: 0x30)
struct UAresDelegates : UObject {
};

// Class ShooterGame.AresDetachedTracer
// Size: 0x630 (Inherited: 0x620)
struct AAresDetachedTracer : AAresTracerInterface {
	float BeamLength; // 0x618(0x04)
	float LastTickTime; // 0x61c(0x04)
	bool bImpacted; // 0x620(0x01)
	float EndDistance; // 0x624(0x04)
	char pad_62D[0x3]; // 0x62d(0x03)
};

// Class ShooterGame.AresUIScreen
// Size: 0x78 (Inherited: 0x30)
struct UAresUIScreen : UObject {
	char pad_30[0x18]; // 0x30(0x18)
	enum class EUIChannel Channel; // 0x48(0x01)
	bool bWidgetsCreated; // 0x49(0x01)
	char pad_4A[0x2]; // 0x4a(0x02)
	int32_t ViewportZOrder; // 0x4c(0x04)
	char pad_50[0x20]; // 0x50(0x20)
	bool bCreateWidgetDefaultOverlayContainer; // 0x70(0x01)
	enum class EAresScreenVibility Visibility; // 0x71(0x01)
	char pad_72[0x6]; // 0x72(0x06)
};

// Class ShooterGame.AresDeveloperMenuScreen
// Size: 0x78 (Inherited: 0x78)
struct UAresDeveloperMenuScreen : UAresUIScreen {
};

// Class ShooterGame.AresDeveloperSettings
// Size: 0x30 (Inherited: 0x30)
struct UAresDeveloperSettings : UObject {
};

// Class ShooterGame.GameObject
// Size: 0x400 (Inherited: 0x3d0)
struct AGameObject : AActor {
	struct UMeshComponent* Mesh; // 0x3d0(0x08)
	struct URoundPersistenceComponent* Persistence; // 0x3d8(0x08)
	bool Invulnerable; // 0x3e0(0x01)
	bool bIgnoreFriendlyFireModifiers; // 0x3e1(0x01)
	bool bPlayImpactEffects; // 0x3e2(0x01)
	char pad_3E3[0x1]; // 0x3e3(0x01)
	float PostDeathLifespan; // 0x3e4(0x04)
	enum class EAresTeamTargeting CanBeTeleportedFilter; // 0x3e8(0x01)
	char pad_3E9[0x7]; // 0x3e9(0x07)
	struct UDamageableComponent* DamageHandler; // 0x3f0(0x08)
	struct UChildDamageSectionComponent* HealthSection; // 0x3f8(0x08)
};

// Class ShooterGame.AresDoor
// Size: 0x420 (Inherited: 0x400)
struct AAresDoor : AGameObject {
	bool bResetOnRound; // 0x400(0x01)
	enum class EAresInitialDoorState InitialDoorState; // 0x401(0x01)
	char pad_402[0x2]; // 0x402(0x02)
	float DoorSpeed; // 0x404(0x04)
	float DoorOpenTime; // 0x408(0x04)
	float DoorCloseTime; // 0x40c(0x04)
	float LocalDoorPos; // 0x410(0x04)
	float PreviousLocalDoorPos; // 0x414(0x04)
	struct FAresDoorStatus DoorStatus; // 0x418(0x02)
	char pad_41A[0x6]; // 0x41a(0x06)
};

// Class ShooterGame.AresDPICustomScalingRule
// Size: 0x40 (Inherited: 0x30)
struct UAresDPICustomScalingRule : UDPICustomScalingRule {
	int32_t CustomReferenceScreenDensity; // 0x30(0x04)
	char pad_34[0xc]; // 0x34(0x0c)
};

// Class ShooterGame.Projectile
// Size: 0x4d0 (Inherited: 0x3d0)
struct AProjectile : AActor {
	char pad_3D0[0x8]; // 0x3d0(0x08)
	struct FMulticastInlineDelegate OnTeleported; // 0x3d8(0x10)
	bool bIsDisarmed; // 0x3e8(0x01)
	char pad_3E9[0x7]; // 0x3e9(0x07)
	struct FMulticastInlineDelegate OnDisarmed; // 0x3f0(0x10)
	struct FMulticastInlineDelegate OnEntranceHitEvent; // 0x400(0x10)
	struct FMulticastInlineDelegate OnExitHitEvent; // 0x410(0x10)
	struct FMulticastInlineDelegate OnStopEvent; // 0x420(0x10)
	char pad_430[0x18]; // 0x430(0x18)
	struct FMulticastInlineDelegate OnMaximumRangeReachedEvent; // 0x448(0x10)
	bool bShouldAlwaysCollideWithAllies; // 0x458(0x01)
	bool bIgnoreFriendlyFireModifiers; // 0x459(0x01)
	bool bSimulation; // 0x45a(0x01)
	bool bIsReusable; // 0x45b(0x01)
	bool bUseProjectilePooling; // 0x45c(0x01)
	bool bIsCleanedUpForReuse; // 0x45d(0x01)
	bool bIsBeingReused; // 0x45e(0x01)
	char pad_45F[0x1]; // 0x45f(0x01)
	float InitializedForUseTimestamp; // 0x460(0x04)
	float SpeedScale; // 0x464(0x04)
	float DefaultDestroyDelay; // 0x468(0x04)
	enum class EProjectileSimulation ProjectileSimulationRule; // 0x46c(0x01)
	enum class EProjectileStopAction ProjectileStopAction; // 0x46d(0x01)
	char pad_46E[0x2]; // 0x46e(0x02)
	float DestroyDelay; // 0x470(0x04)
	char pad_474[0xc]; // 0x474(0x0c)
	struct USceneComponent* CollisionComponent; // 0x480(0x08)
	int32_t CreationRandomSeed; // 0x488(0x04)
	enum class EProjectilePerspective Perspective; // 0x48c(0x01)
	char pad_48D[0x3]; // 0x48d(0x03)
	struct FTransform CreationTransform; // 0x490(0x30)
	struct TWeakObjectPtr<struct AOwnerExclusivePlayerInfo> InstigatorPlayerInfo; // 0x4c0(0x08)
	char pad_4C8[0x8]; // 0x4c8(0x08)
};

// Class ShooterGame.AresDroppedEquippable
// Size: 0x4e0 (Inherited: 0x4d0)
struct AAresDroppedEquippable : AProjectile {
	struct AAresEquippable* MyEquippable; // 0x4c8(0x08)
	struct AShooterCharacter* LastOwner; // 0x4d0(0x08)
};

// Class ShooterGame.AresEditControls
// Size: 0x318 (Inherited: 0x2c8)
struct UAresEditControls : UUserWidget {
	struct TMap<struct UObject*, struct FEditControlsWidgetList> CustomWidgetPool; // 0x2c8(0x50)
};

// Class ShooterGame.AresEjectable
// Size: 0x520 (Inherited: 0x3d0)
struct AAresEjectable : AActor {
	enum class EEjectableType EjectableType; // 0x3d0(0x01)
	char pad_3D1[0x3]; // 0x3d1(0x03)
	float MaxSpawnDistance; // 0x3d4(0x04)
	bool bUseSocketVelocityIn1P; // 0x3d8(0x01)
	bool bUseSocketRotationalVelocityIn1P; // 0x3d9(0x01)
	char pad_3DA[0x2]; // 0x3da(0x02)
	float RotationalVelocityAxisSnapAmount; // 0x3dc(0x04)
	int32_t NumBounces; // 0x3e0(0x04)
	char pad_3E4[0x4]; // 0x3e4(0x04)
	struct UProjectileMovementComponent* ProjectileMovementComponent; // 0x3e8(0x08)
	struct UBoxComponent* CollisionComponent; // 0x3f0(0x08)
	float RandomMinEjectSpeed; // 0x3f8(0x04)
	float RandomMaxEjectSpeed; // 0x3fc(0x04)
	struct FVector RandomVelocityConeDirection; // 0x400(0x0c)
	float RandomVelocityConeAngleHorizontal; // 0x40c(0x04)
	float RandomVelocityConeAngleVertical; // 0x410(0x04)
	float RandomVelocitySpread; // 0x414(0x04)
	float RotationalRandomness; // 0x418(0x04)
	int32_t MaxBounces; // 0x41c(0x04)
	float PostProjectileStopIdleTime; // 0x420(0x04)
	float FadeOutTime; // 0x424(0x04)
	struct UAkAudioEvent* BounceEvent; // 0x428(0x08)
	float MinBounceSpeedToPlaySound[0x22]; // 0x430(0x88)
	bool bStopPreviousBounceSound; // 0x4b8(0x01)
	char pad_4B9[0x3]; // 0x4b9(0x03)
	struct FName NumBouncesParameterName; // 0x4bc(0x0c)
	struct FName BounceSpeedParameterName; // 0x4c8(0x0c)
	char pad_4D4[0x4]; // 0x4d4(0x04)
	struct TArray<struct FVector> RestNormals; // 0x4d8(0x10)
	bool bAlignToSurfaceOnFirstBounce; // 0x4e8(0x01)
	bool bAlignToSurfaceOnStop; // 0x4e9(0x01)
	char pad_4EA[0x6]; // 0x4ea(0x06)
	struct UAresAudioComponent* PreviousBounceSoundComponent; // 0x4f0(0x08)
	struct UAresEjectablePool* EjectablePool; // 0x4f8(0x08)
	struct UMaterialInterface* CurrentOverrideMaterial1P; // 0x500(0x08)
	struct UMaterialInterface* CurrentOverrideMaterial3P; // 0x508(0x08)
	struct UStaticMesh* CurrentOverrideMesh1P; // 0x510(0x08)
	struct UStaticMesh* CurrentOverrideMesh3P; // 0x518(0x08)
};

// Class ShooterGame.AresEjectablePool
// Size: 0x78 (Inherited: 0x30)
struct UAresEjectablePool : UObject {
	char pad_30[0x18]; // 0x30(0x18)
	struct TArray<struct AAresEjectable*> FreeEjectables; // 0x48(0x10)
	struct UMaterialInterface* CurrentOverrideMaterial1P; // 0x58(0x08)
	struct UMaterialInterface* CurrentOverrideMaterial3P; // 0x60(0x08)
	struct UStaticMesh* CurrentOverrideMesh1P; // 0x68(0x08)
	struct UStaticMesh* CurrentOverrideMesh3P; // 0x70(0x08)
};

// Class ShooterGame.AresItem
// Size: 0x440 (Inherited: 0x3d0)
struct AAresItem : AActor {
	int32_t MaximumAmount; // 0x3d0(0x04)
	char pad_3D4[0x4]; // 0x3d4(0x04)
	struct FMulticastInlineDelegate AuthItemOnSetOwner; // 0x3d8(0x10)
	struct FMulticastInlineDelegate ItemOnSetOwner; // 0x3e8(0x10)
	struct URoundPersistenceComponent* Persistence; // 0x3f8(0x08)
	struct UReplicationSleepComponent* ReplicationSleepComponent; // 0x400(0x08)
	enum class EAresItemSlot EquippableSlot; // 0x408(0x01)
	bool bShouldShowInStore; // 0x409(0x01)
	char pad_40A[0x6]; // 0x40a(0x06)
	struct AShooterCharacter* MyPawn; // 0x410(0x08)
	enum class EEquippableInInventory InInventory; // 0x418(0x01)
	char pad_419[0x7]; // 0x419(0x07)
	struct FString AuthOriginalOwnerId; // 0x420(0x10)
	struct TWeakObjectPtr<struct UAresBasePrimaryDataAsset> CachedDataAsset; // 0x430(0x08)
	struct TWeakObjectPtr<struct UBaseContentUIData> CachedUIData; // 0x438(0x08)
};

// Class ShooterGame.AresEquippable
// Size: 0xed0 (Inherited: 0x440)
struct AAresEquippable : AAresItem {
	char pad_440[0x10]; // 0x440(0x10)
	enum class EEquippableTickState EquippableTickState; // 0x450(0x01)
	char pad_451[0xa7]; // 0x451(0xa7)
	struct UTexture* ObjectiveIcon; // 0x4f8(0x08)
	bool bUsingCharacterAlternateAnims; // 0x500(0x01)
	char pad_501[0x7]; // 0x501(0x07)
	struct TMap<struct UAnimSlot1P*, struct TSoftObjectPtr<UAnimationAsset>> CharacterAnims1P; // 0x508(0x50)
	struct TMap<struct UAnimSlot1P*, struct TSoftObjectPtr<UAnimationAsset>> CharacterAnimsAltmode1P; // 0x558(0x50)
	struct TMap<struct UAnimSlot1P*, struct TSoftObjectPtr<UAnimationAsset>> CharacterAnimsAltmode1POverride; // 0x5a8(0x50)
	struct TMap<struct UAnimSlot1P*, struct TSoftObjectPtr<UAnimationAsset>> CharacterAnims1POverride; // 0x5f8(0x50)
	struct TMap<struct UAnimSlotGun1P*, struct TSoftObjectPtr<UAnimationAsset>> GunAnims1POverride; // 0x648(0x50)
	struct TMap<struct UAnimSlotGun1P*, struct TSoftObjectPtr<UAnimationAsset>> CosmeticGunAnims1POverride; // 0x698(0x50)
	struct TMap<struct UAnimSlotGun1P*, struct TSoftObjectPtr<UAnimationAsset>> CosmeticGunAnimsAltmode1POverride; // 0x6e8(0x50)
	struct TMap<struct UAnimSlotLowerBody3P*, struct UAnimationAsset*> CharacterAnimsLowerBody3POverride; // 0x738(0x50)
	struct TMap<struct UAnimSlotUpperBody3P*, struct UAnimationAsset*> CharacterAnimsUpperBody3POverride; // 0x788(0x50)
	struct TMap<struct UAnimSlotGun1P*, struct TSoftObjectPtr<UAnimationAsset>> GunAnims1P; // 0x7d8(0x50)
	struct TMap<struct UAnimSlotUpperBody3P*, struct UAnimationAsset*> CharacterAnimsUpperBody3P; // 0x828(0x50)
	struct TMap<struct UAnimSlotUpperBody3P*, struct UAnimationAsset*> CharacterAnimsAltModeUpperBody3P; // 0x878(0x50)
	struct TMap<struct UAnimSlotLowerBody3P*, struct UAnimationAsset*> CharacterAnimsLowerBody3P; // 0x8c8(0x50)
	struct TMap<struct UAnimSlotLowerBody3P*, struct UAnimationAsset*> CharacterAnimsAltModeLowerBody3P; // 0x918(0x50)
	struct TMap<struct UAnimSlotFace3P*, struct UAnimationAsset*> CharacterAnimsFace3P; // 0x968(0x50)
	struct TMap<struct UAnimSlotFace3P*, struct UAnimationAsset*> CharacterAnimsAltModeFace3P; // 0x9b8(0x50)
	bool LeftHandIKEnabled; // 0xa08(0x01)
	bool RightHandIKEnabled; // 0xa09(0x01)
	bool AltModeLeftHandIKEnabled; // 0xa0a(0x01)
	bool AltModeRightHandIKEnabled; // 0xa0b(0x01)
	float InaccuracyAnimationMultiplier; // 0xa0c(0x04)
	float AimOffsetDisableOnEquip; // 0xa10(0x04)
	float PrimaryAimSpring1PStiffness; // 0xa14(0x04)
	float PrimaryAimSpring1PDampening; // 0xa18(0x04)
	float SecondaryAimSpring1PStiffness; // 0xa1c(0x04)
	float SecondaryAimSpring1PDampening; // 0xa20(0x04)
	char pad_A24[0x4]; // 0xa24(0x04)
	struct UAkAudioEvent* PickupSoundEvent; // 0xa28(0x08)
	struct FMulticastInlineDelegate OnRejectedInput; // 0xa30(0x10)
	struct FEquippableAimToolingModifiers AimToolingModifiers; // 0xa40(0x08)
	struct TMap<struct UAnimSlot1P*, struct FAsyncLoadedEquippableCharacterAnim> CachedCharacterAnimationAssetMap; // 0xa48(0x50)
	struct TMap<struct UAnimSlotGun1P*, struct FAsyncLoadedEquippableGunAnim> CachedGunAnimationAssetMap; // 0xa98(0x50)
	struct TWeakObjectPtr<struct AShooterCharacter> AttributeOwner; // 0xae8(0x08)
	struct FMulticastInlineDelegate OnItemEquipped; // 0xaf0(0x10)
	struct FMulticastInlineDelegate OnItemUnequipped; // 0xb00(0x10)
	char pad_B10[0x18]; // 0xb10(0x18)
	float EquipQueueTime; // 0xb28(0x04)
	bool bCanBeAutoEquipped; // 0xb2c(0x01)
	bool bCanBeAutoEquippedWithoutResources; // 0xb2d(0x01)
	bool bCanBeEquippedOutsideGameplay; // 0xb2e(0x01)
	char pad_B2F[0x1]; // 0xb2f(0x01)
	struct FMulticastInlineDelegate EquippableOnSetOwner; // 0xb30(0x10)
	enum class EEquippableSuppressionBehavior SuppressionBehavior; // 0xb40(0x01)
	enum class EEquippableEquipBehavior EquipBehavior; // 0xb41(0x01)
	bool OverrideHolstering; // 0xb42(0x01)
	char pad_B43[0x5]; // 0xb43(0x05)
	struct FMulticastInlineDelegate OnMeshVisibilityUpdated; // 0xb48(0x10)
	struct TArray<struct FString> PostInitErrors; // 0xb58(0x10)
	struct TMap<struct TSoftClassPtr<UObject>, struct AEffectContainer*> EffectOverrides; // 0xb68(0x50)
	struct UZoomManagerComponent* ZoomManager; // 0xbb8(0x08)
	char pad_BC0[0x1]; // 0xbc0(0x01)
	bool bAutoEquip; // 0xbc1(0x01)
	bool bAutoPickup; // 0xbc2(0x01)
	char pad_BC3[0x1]; // 0xbc3(0x01)
	float AutoPickupDistance; // 0xbc4(0x04)
	float PreventPickupDuration; // 0xbc8(0x04)
	float ScaleOnGround; // 0xbcc(0x04)
	struct UAkAudioEvent* FootstepEvent; // 0xbd0(0x08)
	struct UAkAudioEvent* JumpEvent; // 0xbd8(0x08)
	struct UAkAudioEvent* LandEvent; // 0xbe0(0x08)
	struct UCooldownComponent* CooldownComponent; // 0xbe8(0x08)
	struct FMulticastInlineDelegate OnDisabledInputRequested; // 0xbf0(0x10)
	struct FMulticastInlineDelegate OnEquippableDisabled; // 0xc00(0x10)
	bool bDestroyWhenDropped; // 0xc10(0x01)
	char pad_C11[0x7]; // 0xc11(0x07)
	struct FMulticastInlineDelegate OnDropped; // 0xc18(0x10)
	struct FMulticastInlineDelegate OnFiringVFXStateUpdated; // 0xc28(0x10)
	struct FMulticastInlineDelegate OnEquippableVFXStateChanged; // 0xc38(0x10)
	struct FMulticastInlineDelegate OnEquippableZoomVFXStateChanged; // 0xc48(0x10)
	bool bInPersistentData; // 0xc58(0x01)
	bool bCanActivateWhenSlotDisabled; // 0xc59(0x01)
	bool bHideFirstPersonWhileZoomed; // 0xc5a(0x01)
	enum class EZoomInHideOption ZoomInHideOption; // 0xc5b(0x01)
	enum class EZoomOutShowOption ZoomOutShowOption; // 0xc5c(0x01)
	char pad_C5D[0x3]; // 0xc5d(0x03)
	float ZoomedMovementRatio; // 0xc60(0x04)
	float AlwaysTurnRatio; // 0xc64(0x04)
	float AlwaysMovementRatio; // 0xc68(0x04)
	struct FName EquippableAttachPoint1P; // 0xc6c(0x0c)
	struct FName EquippableAttachPoint3P; // 0xc78(0x0c)
	char pad_C84[0x4]; // 0xc84(0x04)
	struct USceneComponent* MySceneRoot; // 0xc88(0x08)
	struct USceneComponent* MyRoot3P; // 0xc90(0x08)
	struct USkeletalMeshComponent* Mesh1P; // 0xc98(0x08)
	struct UAresOutlineComponent* OutlineComponent1P; // 0xca0(0x08)
	struct USkeletalMeshComponent* Mesh3P; // 0xca8(0x08)
	struct UAresOutlineComponent* OutlineComponent3P; // 0xcb0(0x08)
	struct UEquippableStateMachineComponent* EquippableStateMachine; // 0xcb8(0x08)
	enum class EAresEquippableState CurrentEquippableVFXState; // 0xcc0(0x01)
	char pad_CC1[0x7]; // 0xcc1(0x07)
	struct UEquippableFogOfWarComponent* EquippableFogOfWar; // 0xcc8(0x08)
	struct UCycleZoomState* EquippableCycleZoomState; // 0xcd0(0x08)
	struct TArray<struct UEquippableStateMachineComponent*> EquippableStateMachines; // 0xcd8(0x10)
	struct TArray<struct USkeletalMeshComponent*> Meshes; // 0xce8(0x10)
	struct FName InventoryAttachPoint; // 0xcf8(0x0c)
	bool bCanBeDropped; // 0xd04(0x01)
	bool bDropOnDeath; // 0xd05(0x01)
	enum class EAresDropOnDeath DropOnDeathNew; // 0xd06(0x01)
	char pad_D07[0x1]; // 0xd07(0x01)
	struct FRotator DropOnDeathScatterMin; // 0xd08(0x0c)
	struct FRotator DropOnDeathScatterMax; // 0xd14(0x0c)
	bool bOnlyAlliesCanPickup; // 0xd20(0x01)
	enum class EUsablePriority PickupPriority; // 0xd21(0x01)
	char pad_D22[0x2]; // 0xd22(0x02)
	float PickupScoringBonus; // 0xd24(0x04)
	struct FName MuzzlePointSocketName; // 0xd28(0x0c)
	char pad_D34[0x44]; // 0xd34(0x44)
	struct UKillBannerData* SkinKillBannerData; // 0xd78(0x08)
	struct UTexture* InventoryIcon; // 0xd80(0x08)
	struct UEquippableSkinDataAsset* SkinDataAsset; // 0xd88(0x08)
	struct UEquippableSkinLevelDataAsset* SkinLevelDataAsset; // 0xd90(0x08)
	struct TArray<struct UEquippableAttachmentDataAsset*> AttachmentDataAssets; // 0xd98(0x10)
	struct UEquippableSkinChromaDataAsset* ChromaDataAsset; // 0xda8(0x08)
	struct UEquippableCharmDataAsset* CharmDataAsset; // 0xdb0(0x08)
	struct UEquippableCharmLevelDataAsset* CharmLevelDataAsset; // 0xdb8(0x08)
	struct FGuid SkinDataAssetId; // 0xdc0(0x10)
	struct FGuid SkinLevelDataAssetId; // 0xdd0(0x10)
	struct FGuid CharmDataAssetId; // 0xde0(0x10)
	struct FGuid CharmLevelDataAssetId; // 0xdf0(0x10)
	struct TArray<struct FGuid> AttachmentDataAssetIds; // 0xe00(0x10)
	struct FGuid ChromaDataAssetId; // 0xe10(0x10)
	struct AShooterCharacter* PreventPickupCharacter; // 0xe20(0x08)
	int32_t CosmeticRandomSeed; // 0xe28(0x04)
	char pad_E2C[0xc]; // 0xe2c(0x0c)
	bool bInitialCooldownOnRoundStart; // 0xe38(0x01)
	bool bAuthIsGhostEquipped; // 0xe39(0x01)
	char pad_E3A[0x6]; // 0xe3a(0x06)
	struct TSet<enum class EAresEquippableInput> UnequippedInputs; // 0xe40(0x50)
	int32_t MaxCharges; // 0xe90(0x04)
	int32_t ChargesGainedEachRefresh; // 0xe94(0x04)
	float AuthHitRegistrationSubTickMovementTimestamp; // 0xe98(0x04)
	float AuthServerSnapshottedMovementTimestamp; // 0xe9c(0x04)
	bool bCanAddToStorageSlot; // 0xea0(0x01)
	char pad_EA1[0x7]; // 0xea1(0x07)
	struct TArray<struct TWeakObjectPtr<struct UObject>> HolsterBlockingObjects; // 0xea8(0x10)
	struct AShooterCharacter* LastFiringCharacter; // 0xeb8(0x08)
	bool bIsForced1PTextureStreamingEnabled; // 0xec0(0x01)
	char pad_EC1[0xf]; // 0xec1(0x0f)
};

// Class ShooterGame.AresEquippableAnimInstance
// Size: 0x520 (Inherited: 0x300)
struct UAresEquippableAnimInstance : UAnimInstance {
	struct FAnimationStateParams AnimationStateParams; // 0x300(0x1d0)
	struct FAnimationAssetsGun1P CosmeticAnimationAssetsGun1P; // 0x4d0(0x48)
	char pad_518[0x8]; // 0x518(0x08)
};

// Class ShooterGame.AresEquippableDataTracker
// Size: 0xf0 (Inherited: 0xe8)
struct UAresEquippableDataTracker : UActorComponent {
	struct AAresPlayerStateBase* OriginalBuyer; // 0xe8(0x08)
};

// Class ShooterGame.AresEquippableGlobals
// Size: 0x140 (Inherited: 0x30)
struct UAresEquippableGlobals : UObject {
	struct AAresDroppedEquippable* DroppedEquippable; // 0x30(0x08)
	struct AAresOnGroundEquippable* OnGroundEquippable; // 0x38(0x08)
	struct AAresEquippableSlot* EquippableSlots[0x10]; // 0x40(0x80)
	struct UAnimNotify* InterruptFrameAnimNotifyClass; // 0xc0(0x08)
	struct FSoftObjectPath DevOnlyPurchasableOverrideDataTable; // 0xc8(0x20)
	struct TMap<struct UAresPurchasable*, struct UAresPurchasable*> PurchasableOverrideMap; // 0xe8(0x50)
	char pad_138[0x8]; // 0x138(0x08)
};

// Class ShooterGame.AresEquippableSlot
// Size: 0x3e0 (Inherited: 0x3d0)
struct AAresEquippableSlot : AInfo {
	int32_t MaximumAmount; // 0x3d0(0x04)
	enum class EAresEquippableSlotViewType bViewType; // 0x3d4(0x01)
	enum class EAresItemSlot SlotType; // 0x3d5(0x01)
	char pad_3D6[0x2]; // 0x3d6(0x02)
	int32_t SortPriority; // 0x3d8(0x04)
	bool bCanReplaceItems; // 0x3dc(0x01)
	bool bCanRepurchaseSameItem; // 0x3dd(0x01)
	char pad_3DE[0x2]; // 0x3de(0x02)
};

// Class ShooterGame.FireCustomizationWeaponDataList
// Size: 0x48 (Inherited: 0x38)
struct UFireCustomizationWeaponDataList : UDataAsset {
	struct TArray<struct FFireButtonWeaponCustomizationSettingData> WeaponUIData; // 0x38(0x10)
};

// Class ShooterGame.AresFireButtonCustomization
// Size: 0x2c8 (Inherited: 0x2c8)
struct UAresFireButtonCustomization : UUserWidget {
};

// Class ShooterGame.AresFireButtonCustomizationWeaponGrid
// Size: 0x2e0 (Inherited: 0x2c8)
struct UAresFireButtonCustomizationWeaponGrid : UUserWidget {
	struct FString WeaponUIDataAssetPath; // 0x2c8(0x10)
	struct UFireCustomizationWeaponDataList* WeaponUIDataAsset; // 0x2d8(0x08)
};

// Class ShooterGame.FrontendUIGlobalsDataAsset
// Size: 0x228 (Inherited: 0x40)
struct UFrontendUIGlobalsDataAsset : UAresPlatformDataAsset {
	struct TSoftClassPtr<UObject> MainMenuAsset; // 0x40(0x30)
	struct TSoftClassPtr<UObject> MainMenuViewControllerAsset; // 0x70(0x30)
	struct TMap<enum class EAresMainMenuTopNavigationState, struct TSoftClassPtr<UObject>> MainMenuStateWidgets; // 0xa0(0x50)
	struct TSoftClassPtr<UObject> PregameAsset; // 0xf0(0x30)
	struct TSoftClassPtr<UObject> WelcomeAsset; // 0x120(0x30)
	struct TSoftObjectPtr<UTexture2D> MainMenuDefaultBackgroundArt; // 0x150(0x30)
	struct TMap<enum class EAresMainMenuTopNavigationState, struct TSoftObjectPtr<UTexture2D>> MainMenuBackgroundArtOverride; // 0x180(0x50)
	struct TMap<enum class EAresMainMenuTopNavigationState, struct FMediaSourceParams> MainMenuBackgroundVideoOverride; // 0x1d0(0x50)
	bool bUsingUpdatedNavBar; // 0x220(0x01)
	char pad_221[0x7]; // 0x221(0x07)
};

// Class ShooterGame.AresFrontendUIGlobalsBlueprintFunctionLibrary
// Size: 0x30 (Inherited: 0x30)
struct UAresFrontendUIGlobalsBlueprintFunctionLibrary : UBlueprintFunctionLibrary {
};

// Class ShooterGame.AresGameAutomation
// Size: 0x3e0 (Inherited: 0x3d0)
struct AAresGameAutomation : AActor {
	bool bStartTestInGameplayPhase; // 0x3d0(0x01)
	bool bStartWithPausedTimer; // 0x3d1(0x01)
	bool bWaitUntilAllPlayersLoadedAutomation; // 0x3d2(0x01)
	char pad_3D3[0x1]; // 0x3d3(0x01)
	float ReadyToTestDelay; // 0x3d4(0x04)
	bool bReadyToTest; // 0x3d8(0x01)
	char pad_3D9[0x3]; // 0x3d9(0x03)
	float ReadyToTestDuration; // 0x3dc(0x04)
};

// Class ShooterGame.AresGameEngine
// Size: 0x1030 (Inherited: 0xfe0)
struct UAresGameEngine : UGameEngine {
	struct TMap<struct FString, struct FString> AssetFoldersToCategories; // 0xfe0(0x50)
};

// Class ShooterGame.AresGameEventLog
// Size: 0x118 (Inherited: 0xe8)
struct UAresGameEventLog : UActorComponent {
	char pad_E8[0x8]; // 0xe8(0x08)
	struct UWorld* TheWorld; // 0xf0(0x08)
	char pad_F8[0x8]; // 0xf8(0x08)
	struct UTelemetrySampler* TelemetrySampler; // 0x100(0x08)
	struct UTelemetryManager* TelemetryManager; // 0x108(0x08)
	bool bEventPostEnabled; // 0x110(0x01)
	char pad_111[0x7]; // 0x111(0x07)
};

// Class ShooterGame.AresGameInstance
// Size: 0x2b0 (Inherited: 0x280)
struct UAresGameInstance : UPlatformGameInstance {
	struct UAresServerGameInstance* ServerGameInstanceClass; // 0x280(0x08)
	struct UAresClientGameInstance* ClientGameInstance; // 0x288(0x08)
	struct UAresServerGameInstance* ServerGameInstance; // 0x290(0x08)
	struct UContentIndex* ContentIndexInstance; // 0x298(0x08)
	struct UAresTestLogic* RunningTestLogic; // 0x2a0(0x08)
	char pad_2A8[0x8]; // 0x2a8(0x08)
};

// Class ShooterGame.GameModeDataAsset
// Size: 0x218 (Inherited: 0x50)
struct UGameModeDataAsset : UAresBasePrimaryDataAsset {
	struct FString DisplayName; // 0x50(0x10)
	struct TArray<enum class EAresTeamRole> TeamRoles; // 0x60(0x10)
	bool bHidesMinimap; // 0x70(0x01)
	bool bAllowsTeamVoice; // 0x71(0x01)
	bool bAllowsMatchTimeouts; // 0x72(0x01)
	enum class EEconomyTypes EconomyType; // 0x73(0x01)
	char pad_74[0x4]; // 0x74(0x04)
	struct TSoftClassPtr<UObject> GameMode; // 0x78(0x30)
	struct TSoftClassPtr<UObject> UIData; // 0xa8(0x30)
	struct TMap<enum class EGameFeatureToggleName, bool> GameFeatureToggleOverrides; // 0xd8(0x50)
	struct TMap<enum class EGameFeatureFloatConfigName, float> GameFeatureFloatOverrides; // 0x128(0x50)
	struct TMap<enum class EGameRuleBoolName, bool> GameRuleBoolOverrides; // 0x178(0x50)
	struct TSet<enum class EGameRuleBoolName> PlayerSettableGameRuleBools; // 0x1c8(0x50)
};

// Class ShooterGame.GameModeUIData
// Size: 0xc8 (Inherited: 0x90)
struct UGameModeUIData : UBaseContentUIData {
	struct FGameModeMatchDetailsConfig GameModeMatchDetailsConfig; // 0x90(0x18)
	struct FText Duration; // 0xa8(0x18)
	struct UCharacterSelectScreen* CharacterSelectOverride; // 0xc0(0x08)
};

// Class ShooterGame.AresGameplayBuff
// Size: 0x900 (Inherited: 0x8b8)
struct UAresGameplayBuff : UGameplayEffect {
	struct FEmbeddedEffectInfo BuffEffect; // 0x8b8(0x30)
	enum class EBuffEffectContext ContextObject; // 0x8e8(0x01)
	char pad_8E9[0x7]; // 0x8e9(0x07)
	struct UDamageType* DamageType; // 0x8f0(0x08)
	enum class EAresTeamTargeting TeamTargeting; // 0x8f8(0x01)
	char pad_8F9[0x7]; // 0x8f9(0x07)
};

// Class ShooterGame.AresGameStateBase
// Size: 0x5a8 (Inherited: 0x458)
struct AAresGameStateBase : AGameState {
	char pad_458[0x68]; // 0x458(0x68)
	struct APostProcessVolume* GlobalPostProcessVolume; // 0x4c0(0x08)
	struct TArray<struct APawn*> PlayerClassesInGame; // 0x4c8(0x10)
	struct TArray<struct UCharacterUIData*> PlayerUIDataInGame; // 0x4d8(0x10)
	struct TArray<struct FGuid> DesiredBotCharacters; // 0x4e8(0x10)
	bool bBotDesiredCharactersReady; // 0x4f8(0x01)
	char pad_4F9[0x7]; // 0x4f9(0x07)
	struct AAresGameAutomation* AresGameAutomation; // 0x500(0x08)
	char pad_508[0x20]; // 0x508(0x20)
	bool bShouldPerformanceInstabilityTrackingBeEnabled; // 0x528(0x01)
	char pad_529[0x7]; // 0x529(0x07)
	struct TArray<struct FNetworkLoadedClass> LoadedClasses; // 0x530(0x10)
	struct TMap<struct FName, uint32_t> ThrottledEvents; // 0x540(0x50)
	char pad_590[0x18]; // 0x590(0x18)
};

// Class ShooterGame.AresGameViewportClient
// Size: 0x388 (Inherited: 0x380)
struct UAresGameViewportClient : UGameViewportClient {
	struct UWorld* ActiveWorldOverride; // 0x380(0x08)
};

// Class ShooterGame.AresGauntletControllerBase
// Size: 0x60 (Inherited: 0x38)
struct UAresGauntletControllerBase : UGauntletTestController {
	char pad_38[0x28]; // 0x38(0x28)
};

// Class ShooterGame.AresGauntletTestResultsManager
// Size: 0x80 (Inherited: 0x30)
struct UAresGauntletTestResultsManager : UObject {
	char pad_30[0x50]; // 0x30(0x50)
};

// Class ShooterGame.AresGlobalTransition
// Size: 0x428 (Inherited: 0x400)
struct AAresGlobalTransition : AGameObject {
	struct UMaterialInterface* ReplaceMaterial; // 0x400(0x08)
	struct FName ExcludeTag; // 0x408(0x0c)
	char pad_414[0x4]; // 0x414(0x04)
	struct TArray<struct FStaticActorMaterialMapping> SavedMapping; // 0x418(0x10)
};

// Class ShooterGame.AresHitReactions
// Size: 0x48 (Inherited: 0x30)
struct UAresHitReactions : UObject {
	struct TArray<struct FAresHitReactionEntry> HitReactions; // 0x30(0x10)
	enum class EDirectionFilter DirectionFilter; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// Class ShooterGame.AresHudElement
// Size: 0x58 (Inherited: 0x30)
struct UAresHudElement : UObject {
	struct UCanvas* Canvas; // 0x30(0x08)
	bool bPixelAlignmentEnabled; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	float GlobalAlpha; // 0x3c(0x04)
	struct FAresHudElementRectangle ElementRectangle; // 0x40(0x14)
	bool bElementEnabled; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
};

// Class ShooterGame.HUDGlobalsDataAsset
// Size: 0x2c0 (Inherited: 0x40)
struct UHUDGlobalsDataAsset : UAresPlatformDataAsset {
	struct TArray<struct TSoftClassPtr<UObject>> OptionsScreenAssets; // 0x40(0x10)
	struct TSoftClassPtr<UObject> InformationalScreenAsset; // 0x50(0x30)
	struct FAresUMGElementAsset ShopScreenAsset; // 0x80(0xb0)
	struct TSoftClassPtr<UObject> MegamapAsset; // 0x130(0x30)
	struct TSoftClassPtr<UObject> ShootingRangeMissionAsset; // 0x160(0x30)
	struct TSoftClassPtr<UObject> MissionSettingsScreenCoordinatorAsset; // 0x190(0x30)
	struct TSoftObjectPtr<UMaterialInterface> CircularMinimapMaterialAsset; // 0x1c0(0x30)
	struct TSoftObjectPtr<UMaterialInterface> CircularMinimapFogMaterialAsset; // 0x1f0(0x30)
	struct TSoftObjectPtr<UMaterialInterface> CircularMinimapVisionMaterialAsset; // 0x220(0x30)
	struct TSoftObjectPtr<UMaterialInterface> CircularMinimapObserverVisionMaterialAsset; // 0x250(0x30)
	struct TSoftObjectPtr<UMaterialInterface> CircularMinimapIconMaterialAsset; // 0x280(0x30)
	struct TArray<struct FAresUMGElementAsset> HUDElementAssets; // 0x2b0(0x10)
};

// Class ShooterGame.AresHUDListener
// Size: 0xf0 (Inherited: 0xe8)
struct UAresHUDListener : UActorComponent {
	char pad_E8[0x8]; // 0xe8(0x08)
};

// Class ShooterGame.AresIconButton
// Size: 0xa18 (Inherited: 0xa10)
struct UAresIconButton : UAresActionButton {
	enum class EAresIconButtonSize ButtonSize; // 0xa10(0x01)
	enum class EAresIconButtonState ButtonState; // 0xa11(0x01)
	char pad_A12[0x6]; // 0xa12(0x06)
};

// Class ShooterGame.AresWidgetPropertyComponent
// Size: 0x2d0 (Inherited: 0x2c8)
struct UAresWidgetPropertyComponent : UUserWidget {
	char pad_2C8[0x8]; // 0x2c8(0x08)
};

// Class ShooterGame.AresTouchWidgetComponent
// Size: 0x338 (Inherited: 0x2d0)
struct UAresTouchWidgetComponent : UAresWidgetPropertyComponent {
	char pad_2D0[0x8]; // 0x2d0(0x08)
	bool bHandlesEnabledStateChange; // 0x2d8(0x01)
	bool bHandlesSelectedForEditChange; // 0x2d9(0x01)
	enum class EWidgetEnabledState EnabledState; // 0x2da(0x01)
	bool bSelectedForEdit; // 0x2db(0x01)
	char pad_2DC[0x4]; // 0x2dc(0x04)
	struct TSoftObjectPtr<UAresTouchWidget> ParentTouchWidgetSoftPtr; // 0x2e0(0x30)
	char pad_310[0x28]; // 0x310(0x28)
};

// Class ShooterGame.AresIconButtonComponent
// Size: 0x368 (Inherited: 0x338)
struct UAresIconButtonComponent : UAresTouchWidgetComponent {
	bool bHandlesButtonStateChanged; // 0x338(0x01)
	bool bHandlesCrossedOutChanged; // 0x339(0x01)
	bool bOnlyVisibleWhenCrossedOut; // 0x33a(0x01)
	enum class EAresIconButtonState ButtonState; // 0x33b(0x01)
	bool bCrossedOut; // 0x33c(0x01)
	char pad_33D[0x2b]; // 0x33d(0x2b)
};

// Class ShooterGame.AresIconButtonStyleAsset
// Size: 0x60 (Inherited: 0x38)
struct UAresIconButtonStyleAsset : UDataAsset {
	struct FAresIconButtonStyle ButtonStyle; // 0x38(0x24)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// Class ShooterGame.ImpactEffectInstance
// Size: 0x168 (Inherited: 0x30)
struct UImpactEffectInstance : UObject {
	struct AAresImpactEffect* PureInstance; // 0x30(0x08)
	bool bIsAlive; // 0x38(0x01)
	bool bInitialized; // 0x39(0x01)
	char pad_3A[0x2]; // 0x3a(0x02)
	float StartTime; // 0x3c(0x04)
	float MinLifespan; // 0x40(0x04)
	bool bVisibleOnStart; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	struct FHitResult HitResult; // 0x48(0x94)
	char pad_DC[0x4]; // 0xdc(0x04)
	struct UParticleSystemComponent* ParticleSystemComponent; // 0xe0(0x08)
	struct UParticleSystem* ParticleSystem; // 0xe8(0x08)
	struct FRotator ParticleRotation; // 0xf0(0x0c)
	float ParticleScale; // 0xfc(0x04)
	struct UObject* EffectContext; // 0x100(0x08)
	struct FImpactEffectAudioInfo AudioInfo; // 0x108(0x18)
	struct FImpactEffectDecalInfo DecalInfo; // 0x120(0x48)
};

// Class ShooterGame.ImpactEffectStaticMeshInstance
// Size: 0x170 (Inherited: 0x168)
struct UImpactEffectStaticMeshInstance : UImpactEffectInstance {
	struct UStaticMeshComponent* StaticMeshComponent; // 0x168(0x08)
};

// Class ShooterGame.AresImpactEffectComponent
// Size: 0x290 (Inherited: 0x290)
struct UAresImpactEffectComponent : USceneComponent {
};

// Class ShooterGame.AresImpactEffect
// Size: 0x670 (Inherited: 0x530)
struct AAresImpactEffect : AEffectContainer {
	struct UImpactEffectInstance* InstanceClass; // 0x530(0x08)
	struct TMap<enum class EAresSurfaceType, struct FAresHitImpactParticle> ImpactParticleMap; // 0x538(0x50)
	struct TMap<enum class EAresSurfaceType, struct FDecalData> ImpactDecalMap; // 0x588(0x50)
	struct FClassInclusionExclusionFilter ValidHitActorClassFilter; // 0x5d8(0x50)
	struct AShooterCharacter* CharacterClass; // 0x628(0x08)
	struct UPhysicalMaterial* FleshPhysicalMaterial; // 0x630(0x08)
	struct UAkAudioEvent* ImpactEffectAudioEvent; // 0x638(0x08)
	float MaxImpactEffectAudioDistance; // 0x640(0x04)
	struct FName AudioExclusionTag; // 0x644(0x0c)
	struct TArray<struct UAresImpactEffectComponent*> ImpactEffectComponents; // 0x650(0x10)
	char pad_660[0x10]; // 0x660(0x10)
};

// Class ShooterGame.ImpactEffectRemap
// Size: 0x88 (Inherited: 0x38)
struct UImpactEffectRemap : UDataAsset {
	struct TMap<struct AEffectContainer*, struct AAresImpactEffect*> ClassRemaps; // 0x38(0x50)
};

// Class ShooterGame.AresInitGauntletController
// Size: 0x68 (Inherited: 0x60)
struct UAresInitGauntletController : UAresGauntletControllerBase {
	char pad_60[0x8]; // 0x60(0x08)
};

// Class ShooterGame.AresInputComponent
// Size: 0x16d0 (Inherited: 0x180)
struct UAresInputComponent : UInputComponent {
	struct AShooterCharacter* ShooterCharacterOwner; // 0x180(0x08)
	struct FAresInputStream CurrentFrameInputStream; // 0x188(0x438)
	struct FAresInputStream RawSubFrameKeyInputStream; // 0x5c0(0x438)
	struct FAresInputStream OrderedSubFrameInputStream; // 0x9f8(0x438)
	struct FAresInputStream UnusedSubFrameInputs; // 0xe30(0x438)
	struct TArray<float> SubFrameMousePositionXDeltas; // 0x1268(0x10)
	struct TArray<float> SubFrameMousePositionYDeltas; // 0x1278(0x10)
	struct FAresInputStream AccumulatedInputStream; // 0x1288(0x438)
	char pad_16C0[0x10]; // 0x16c0(0x10)
};

// Class ShooterGame.AresInputMotionComponent
// Size: 0x120 (Inherited: 0xe8)
struct UAresInputMotionComponent : UActorComponent {
	char pad_E8[0x30]; // 0xe8(0x30)
	enum class EAresBoolSettingName GyroEnableSetting; // 0x118(0x01)
	char pad_119[0x7]; // 0x119(0x07)
};

// Class ShooterGame.AresInputMotionAimingComponent
// Size: 0x190 (Inherited: 0x120)
struct UAresInputMotionAimingComponent : UAresInputMotionComponent {
	float GyroAimSensitivityScalarX; // 0x120(0x04)
	float GyroAimSensitivityScalarY; // 0x124(0x04)
	struct FName WalkAction; // 0x128(0x0c)
	char pad_134[0x5c]; // 0x134(0x5c)
};

// Class ShooterGame.AresInputDebugHistory
// Size: 0x4e0 (Inherited: 0x30)
struct UAresInputDebugHistory : UObject {
	char pad_30[0x4b0]; // 0x30(0x4b0)
};

// Class ShooterGame.AresInputStateComponent
// Size: 0xb08 (Inherited: 0xe8)
struct UAresInputStateComponent : UActorComponent {
	char pad_E8[0x18]; // 0xe8(0x18)
	struct FMulticastInlineDelegate OnInputStateChanged; // 0x100(0x10)
	char pad_110[0x28]; // 0x110(0x28)
	bool bInputAimVectorIsValid; // 0x138(0x01)
	char pad_139[0x1f]; // 0x139(0x1f)
	struct AShooterCharacter* ShooterCharacterOwner; // 0x158(0x08)
	char pad_160[0xa0]; // 0x160(0xa0)
	struct FVector_NetQuantizeNormal CurrentInputAimVector; // 0x200(0x0c)
	char pad_20C[0x4]; // 0x20c(0x04)
	struct AAresEquippable* CurrentEquippableTarget; // 0x210(0x08)
	struct AAresEquippable* LastClientPredictedEquippable; // 0x218(0x08)
	int32_t ClientAcknowledgedCorrectionIndex; // 0x220(0x04)
	enum class EAresInputState CurrentEquippableInputStates[0xf]; // 0x224(0x0f)
	enum class EAresInputState CurrentActivationInputStates[0x10]; // 0x233(0x10)
	enum class EAresInputState CurrentMovementInputStates; // 0x243(0x01)
	enum class EAresInputState CurrentInteractableUseStates[0x2]; // 0x244(0x02)
	char pad_246[0x2]; // 0x246(0x02)
	float LastStartInteractableUseInputTime[0x2]; // 0x248(0x08)
	float ViewRotationAbsPitchLimitDegrees; // 0x250(0x04)
	char pad_254[0x1c]; // 0x254(0x1c)
	struct FAresInputStream InputStreamPendingLocalProcessing; // 0x270(0x438)
	struct FAresInputStream InputStreamPendingSerialize; // 0x6a8(0x438)
	char pad_AE0[0x10]; // 0xae0(0x10)
	struct UAresInputDebugHistory* DebugHistory; // 0xaf0(0x08)
	char pad_AF8[0x10]; // 0xaf8(0x10)
};

// Class ShooterGame.AresInventory
// Size: 0x300 (Inherited: 0xe8)
struct UAresInventory : UActorComponent {
	char pad_E8[0x8]; // 0xe8(0x08)
	struct FVector DropOffset; // 0xf0(0x0c)
	char pad_FC[0x4]; // 0xfc(0x04)
	struct FMulticastInlineDelegate AuthOnInventoryTransaction; // 0x100(0x10)
	struct FMulticastInlineDelegate OnEquippableEquipped; // 0x110(0x10)
	struct FMulticastInlineDelegate OnEquippableUnequipped; // 0x120(0x10)
	struct FMulticastInlineDelegate OnEquippableChanged; // 0x130(0x10)
	struct FMulticastInlineDelegate OnEquippableRestrictionError; // 0x140(0x10)
	struct FMulticastInlineDelegate OnItemsChanged; // 0x150(0x10)
	struct FMulticastInlineDelegate OnAuthTryPickup; // 0x160(0x10)
	char pad_170[0x18]; // 0x170(0x18)
	struct UItemSlot* ItemSlots[0x10]; // 0x188(0x80)
	struct TArray<struct AAresItem*> ItemsTrashedThisRound; // 0x208(0x10)
	struct TArray<struct AAresEquippable*> LastEquippables; // 0x218(0x10)
	enum class EAresItemSlot LatestDesiredEquippableSlot; // 0x228(0x01)
	char pad_229[0x7]; // 0x229(0x07)
	struct AAresEquippable* DesiredEquippable; // 0x230(0x08)
	struct AAresEquippable* CurrentEquippable; // 0x238(0x08)
	bool bInitialEquippableChanged; // 0x240(0x01)
	char pad_241[0x17]; // 0x241(0x17)
	struct FPendingEquippableChange EquippableChange; // 0x258(0x18)
	struct TArray<struct FPendingEquippableChange> PendingEquippableChanges; // 0x270(0x10)
	float DesiredEquippableStartTime; // 0x280(0x04)
	float LastCycleEquippableTimestamp; // 0x284(0x04)
	struct TArray<struct USlotModifierComponent*> SlotModifiers; // 0x288(0x10)
	struct AShooterCharacter* ShooterCharacterOwner; // 0x298(0x08)
	int32_t OwningClientCurrentCorrectionIndex; // 0x2a0(0x04)
	enum class EServerCorrectionState AuthCorrectionState; // 0x2a4(0x01)
	char pad_2A5[0x3]; // 0x2a5(0x03)
	float DisagreementTimeStamp; // 0x2a8(0x04)
	float LastPendingReplicationWarning; // 0x2ac(0x04)
	float DisagreementGracePeriodDuration; // 0x2b0(0x04)
	bool bInitialServerCorrectionSent; // 0x2b4(0x01)
	bool bInitialServerCorrectionProcessed; // 0x2b5(0x01)
	char pad_2B6[0x2]; // 0x2b6(0x02)
	float bNeedsEquipWeaponAfterRespawn; // 0x2b8(0x04)
	bool bIsReplacingEquippableWithPickup; // 0x2bc(0x01)
	char pad_2BD[0xb]; // 0x2bd(0x0b)
	struct FInventoryServerCorrectRepVariables AuthServerCorrectRepVariables; // 0x2c8(0x10)
	struct TArray<struct FEquipDebugRecord> EquipDebugRecordHistory; // 0x2d8(0x10)
	struct TArray<struct AAresItem*> DroppedItems; // 0x2e8(0x10)
	enum class EAresItemSlot CycleEquippableSlotOverride; // 0x2f8(0x01)
	bool bIsSuppressible; // 0x2f9(0x01)
	enum class EEquipSpeed SuppressedUnequipSpeed; // 0x2fa(0x01)
	enum class EStorageClashBehavior StorageClashBehavior; // 0x2fb(0x01)
	char pad_2FC[0x4]; // 0x2fc(0x04)
};

// Class ShooterGame.AresJoinGameGauntletControllerBase
// Size: 0x130 (Inherited: 0x60)
struct UAresJoinGameGauntletControllerBase : UAresGauntletControllerBase {
	struct UMemoryPerfStatsReport* MemoryReportStatsReport; // 0x60(0x08)
	char pad_68[0xc8]; // 0x68(0xc8)
};

// Class ShooterGame.AresJoinGameGauntletController
// Size: 0x130 (Inherited: 0x130)
struct UAresJoinGameGauntletController : UAresJoinGameGauntletControllerBase {
};

// Class ShooterGame.AresListView
// Size: 0x6f0 (Inherited: 0x148)
struct UAresListView : UTableViewBase {
	float ItemHeight; // 0x148(0x04)
	char pad_14C[0x4]; // 0x14c(0x04)
	struct TArray<struct UObject*> Items; // 0x150(0x10)
	enum class ESelectionMode SelectionMode; // 0x160(0x01)
	char pad_161[0x3]; // 0x161(0x03)
	struct FDelegate OnGenerateRowEvent; // 0x164(0x14)
	struct FScrollBarStyle WidgetBarStyle; // 0x178(0x518)
	enum class ESlateVisibility ScrollBarVisibility; // 0x690(0x01)
	char pad_691[0x3]; // 0x691(0x03)
	struct FVector2D ScrollbarThickness; // 0x694(0x08)
	bool AlwaysShowScrollbar; // 0x69c(0x01)
	char pad_69D[0x3]; // 0x69d(0x03)
	struct FVector2D HeaderSpacerSize; // 0x6a0(0x08)
	struct FVector2D FooterSpacerSize; // 0x6a8(0x08)
	char pad_6B0[0x40]; // 0x6b0(0x40)
};

// Class ShooterGame.AresLocalizationBlueprintLibrary
// Size: 0x30 (Inherited: 0x30)
struct UAresLocalizationBlueprintLibrary : UBlueprintFunctionLibrary {
};

// Class ShooterGame.AresManifestExportInterface
// Size: 0x30 (Inherited: 0x30)
struct UAresManifestExportInterface : UInterface {
};

// Class ShooterGame.MapUIData
// Size: 0xc0 (Inherited: 0x90)
struct UMapUIData : UBaseContentUIData {
	float XScalarToAdd; // 0x90(0x04)
	float XMultiplier; // 0x94(0x04)
	float YScalarToAdd; // 0x98(0x04)
	float YMultiplier; // 0x9c(0x04)
	struct UTexture* ListViewIcon; // 0xa0(0x08)
	struct FText Coordinates; // 0xa8(0x18)
};

// Class ShooterGame.MapDataAsset
// Size: 0xc0 (Inherited: 0x50)
struct UMapDataAsset : UAresBasePrimaryDataAsset {
	struct FString MapURL; // 0x50(0x10)
	struct TSoftClassPtr<UObject> UIData; // 0x60(0x30)
	struct TSoftObjectPtr<UTexture2D> LevelSplashScreen; // 0x90(0x30)
};

// Class ShooterGame.AresMarker
// Size: 0x3d8 (Inherited: 0x3d0)
struct AAresMarker : AActor {
	enum class EAresTeam Team; // 0x3d0(0x01)
	char pad_3D1[0x7]; // 0x3d1(0x07)
};

// Class ShooterGame.AresMenuTouchWidget
// Size: 0x960 (Inherited: 0x960)
struct UAresMenuTouchWidget : UAresTouchWidget {
};

// Class ShooterGame.AresMinimapCamera
// Size: 0x3f0 (Inherited: 0x3e8)
struct AAresMinimapCamera : ASceneCapture2D {
	bool bOnlyCaptureActorsWithMinimapShowTag; // 0x3e8(0x01)
	char pad_3E9[0x3]; // 0x3e9(0x03)
	int32_t DefaultRenderClearMethod; // 0x3ec(0x04)
};

// Class ShooterGame.AresMinimapComponent
// Size: 0x500 (Inherited: 0x290)
struct UAresMinimapComponent : USceneComponent {
	bool bUpdateWidgetEveryUpdate; // 0x290(0x01)
	bool bUpdateComponentEveryUpdate; // 0x291(0x01)
	bool bForceUpdateNextTick; // 0x292(0x01)
	enum class EAresMinimapPositionSource PositionSource; // 0x293(0x01)
	enum class EAresMinimapRotationSource RotationSource; // 0x294(0x01)
	char pad_295[0x3]; // 0x295(0x03)
	struct FVector WidgetLocation; // 0x298(0x0c)
	float Rotation; // 0x2a4(0x04)
	bool bPositioningPresetOverrides; // 0x2a8(0x01)
	bool bMoves; // 0x2a9(0x01)
	bool bRotates; // 0x2aa(0x01)
	enum class EAresMinimapPositionSpace PositionSpace; // 0x2ab(0x01)
	enum class EAresMinimapRotationSpace RotationSpace; // 0x2ac(0x01)
	bool bDriveWidgetSizing; // 0x2ad(0x01)
	char pad_2AE[0x2]; // 0x2ae(0x02)
	struct FVector WidgetSize; // 0x2b0(0x0c)
	enum class EAresMinimapSizeSpace SizeSpace; // 0x2bc(0x01)
	bool bDriveWidgetAttributes; // 0x2bd(0x01)
	enum class EAresMinimapLayer Layer; // 0x2be(0x01)
	char pad_2BF[0x1]; // 0x2bf(0x01)
	struct FVector2D Alignment; // 0x2c0(0x08)
	bool bDrawOffMap; // 0x2c8(0x01)
	char pad_2C9[0x3]; // 0x2c9(0x03)
	struct FVector EdgeSize; // 0x2cc(0x0c)
	enum class EAresMinimapSizeSpace EdgeSizeSpace; // 0x2d8(0x01)
	enum class EAresMinimapRotationSpace EdgeRotationSpace; // 0x2d9(0x01)
	bool bDriveWidgetAppearance; // 0x2da(0x01)
	char pad_2DB[0x1]; // 0x2db(0x01)
	struct FLinearColor WidgetColor; // 0x2dc(0x10)
	char pad_2EC[0x4]; // 0x2ec(0x04)
	struct FSlateBrush WidgetBrush; // 0x2f0(0x90)
	struct FLinearColor WidgetBrushTint; // 0x380(0x10)
	bool bUsingMaskingMaterial; // 0x390(0x01)
	char pad_391[0x7]; // 0x391(0x07)
	struct TArray<enum class EAresMapIdentifier> RegisterOnMaps; // 0x398(0x10)
	struct TMap<struct UAresMinimapPanel*, struct UUserWidget*> Widgets; // 0x3a8(0x50)
	struct TMap<struct UUserWidget*, bool> VisibilityMap; // 0x3f8(0x50)
	struct UUserWidget* WidgetClass; // 0x448(0x08)
	struct UUserWidget* EdgeWidgetClass; // 0x450(0x08)
	char pad_458[0x10]; // 0x458(0x10)
	bool bProblematic; // 0x468(0x01)
	char pad_469[0x7]; // 0x469(0x07)
	struct TMap<struct UUserWidget*, struct FRecycledWidgetArray> RecycledWidgets; // 0x470(0x50)
	struct UAresMinimapManager* MinimapManager; // 0x4c0(0x08)
	char pad_4C8[0x38]; // 0x4c8(0x38)
};

// Class ShooterGame.AresMinimapManager
// Size: 0x390 (Inherited: 0xe8)
struct UAresMinimapManager : UActorComponent {
	struct FMulticastInlineDelegate WorldToMinimapUpdated; // 0xe8(0x10)
	char pad_F8[0x40]; // 0xf8(0x40)
	struct TSet<struct UAresMinimapComponent*> MinimapComponents; // 0x138(0x50)
	struct TSet<struct UAresMinimapComponent*> ActiveMinimapComponents; // 0x188(0x50)
	struct TSet<struct UAresMinimapComponent*> RecentlyUpdatedMinimapComponents; // 0x1d8(0x50)
	char pad_228[0xb8]; // 0x228(0xb8)
	struct TSet<struct UAresMinimapComponent*> ProblematicMinimapComponents; // 0x2e0(0x50)
	char pad_330[0x10]; // 0x330(0x10)
	struct AAresMinimapCamera* MinimapCamera; // 0x340(0x08)
	char pad_348[0x8]; // 0x348(0x08)
	struct FMatrix WorldToMinimap; // 0x350(0x40)
};

// Class ShooterGame.AresMinimapPanel
// Size: 0x370 (Inherited: 0x160)
struct UAresMinimapPanel : UPanelWidget {
	char pad_160[0x3]; // 0x160(0x03)
	bool bRotateMinimap; // 0x163(0x01)
	float FixedMinimapRotation; // 0x164(0x04)
	bool bKeepPlayerCentered; // 0x168(0x01)
	char pad_169[0x3]; // 0x169(0x03)
	float Zoom; // 0x16c(0x04)
	enum class EAresMapIdentifier MapIdentifier; // 0x170(0x01)
	char pad_171[0x7]; // 0x171(0x07)
	struct AAresPlayerController* Controller; // 0x178(0x08)
	struct FMatrix WorldToMinimap; // 0x180(0x40)
	struct FMatrix MinimapToWidget; // 0x1c0(0x40)
	struct FMatrix WidgetToMinimap; // 0x200(0x40)
	struct FMatrix MinimapToWorld; // 0x240(0x40)
	struct FMatrix WidgetToWorld; // 0x280(0x40)
	struct FVector2D MinimapCenter; // 0x2c0(0x08)
	struct FVector2D MinimapTransformOffset; // 0x2c8(0x08)
	float MinimapRotation; // 0x2d0(0x04)
	int32_t VisibleLayers; // 0x2d4(0x04)
	bool bDrawEdgeWidgets; // 0x2d8(0x01)
	char pad_2D9[0x7]; // 0x2d9(0x07)
	struct TMap<struct UAresMinimapComponent*, struct UUserWidget*> ComponentWidgetMap; // 0x2e0(0x50)
	struct FMulticastInlineDelegate OnMinimapWidgetAdded; // 0x330(0x10)
	struct FMulticastInlineDelegate OnMinimapWidgetRemoved; // 0x340(0x10)
	char pad_350[0x10]; // 0x350(0x10)
	struct UTexture2D* MinimapTexture; // 0x360(0x08)
	char pad_368[0x8]; // 0x368(0x08)
};

// Class ShooterGame.AresMinimapPanelSlot
// Size: 0xa8 (Inherited: 0x40)
struct UAresMinimapPanelSlot : UPanelSlot {
	enum class EAresMinimapLayer Layer; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	struct FVector Position; // 0x44(0x0c)
	enum class EAresMinimapPositionSpace PositionSpace; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	struct FVector Size; // 0x54(0x0c)
	enum class EAresMinimapSizeSpace SizeSpace; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	struct FVector Aim; // 0x64(0x0c)
	float Rotation; // 0x70(0x04)
	enum class EAresMinimapRotationSpace RotationSpace; // 0x74(0x01)
	char pad_75[0x3]; // 0x75(0x03)
	struct FVector2D Alignment; // 0x78(0x08)
	bool bDrawOffMap; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
	struct UWidget* EdgeWidget; // 0x88(0x08)
	struct FVector EdgeSize; // 0x90(0x0c)
	enum class EAresMinimapSizeSpace EdgeSizeSpace; // 0x9c(0x01)
	enum class EAresMinimapRotationSpace EdgeRotationSpace; // 0x9d(0x01)
	char pad_9E[0xa]; // 0x9e(0x0a)
};

// Class ShooterGame.AresMinimapWidget
// Size: 0x2e0 (Inherited: 0x2c8)
struct UAresMinimapWidget : UUserWidget {
	struct UImage* MinimapIcon; // 0x2c8(0x08)
	bool bMinimapDebug; // 0x2d0(0x01)
	char pad_2D1[0x7]; // 0x2d1(0x07)
	struct UAresMinimapComponent* MinimapComponent; // 0x2d8(0x08)
};

// Class ShooterGame.MissionDataAsset
// Size: 0x130 (Inherited: 0x50)
struct UMissionDataAsset : UAresBasePrimaryDataAsset {
	enum class EAresMissionType Type; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct TArray<enum class EAresMissionTag> Tags; // 0x58(0x10)
	struct FDateTime ExpirationDate; // 0x68(0x08)
	struct FDateTime ActivationDate; // 0x70(0x08)
	int32_t XPGrant; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
	struct TSoftClassPtr<UObject> Mission; // 0x80(0x30)
	struct TMap<struct TSoftClassPtr<UObject>, int32_t> Objectives; // 0xb0(0x50)
	struct TSoftClassPtr<UObject> UIData; // 0x100(0x30)
};

// Class ShooterGame.AccordMissionDataAsset
// Size: 0x190 (Inherited: 0x130)
struct UAccordMissionDataAsset : UMissionDataAsset {
	struct TSoftClassPtr<UObject> AccordAgent; // 0x130(0x30)
	struct TSoftClassPtr<UObject> AccordContract; // 0x160(0x30)
};

// Class ShooterGame.MissionUIData
// Size: 0xa8 (Inherited: 0x90)
struct UMissionUIData : UBaseContentUIData {
	struct FText Title; // 0x90(0x18)
};

// Class ShooterGame.ObjectiveUIData
// Size: 0xa8 (Inherited: 0x90)
struct UObjectiveUIData : UBaseContentUIData {
	struct FText Directive; // 0x90(0x18)
};

// Class ShooterGame.ObjectiveDataAsset
// Size: 0xb0 (Inherited: 0x50)
struct UObjectiveDataAsset : UAresBasePrimaryDataAsset {
	struct TSoftClassPtr<UObject> ObjectiveComponent; // 0x50(0x30)
	struct TSoftClassPtr<UObject> UIData; // 0x80(0x30)
};

// Class ShooterGame.AresMovementToolingTuningAsset
// Size: 0x60 (Inherited: 0x38)
struct UAresMovementToolingTuningAsset : UDataAsset {
	bool bMovementToolingModule; // 0x38(0x01)
	bool bMovementToolingShotRooting; // 0x39(0x01)
	char pad_3A[0x2]; // 0x3a(0x02)
	float MovementToolingShotRootingDeadzone; // 0x3c(0x04)
	float MovementToolingShotRootingDuration; // 0x40(0x04)
	float MovementToolingShotRootingFalloffSeconds; // 0x44(0x04)
	float MovementToolingShotRootingFalloffExponent; // 0x48(0x04)
	bool bMovementToolingFastStrafing; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	float MovementToolingFastStrafingStickDeltaThreshold; // 0x50(0x04)
	float MovementToolingFastStrafingApplyYAxisOverride; // 0x54(0x04)
	bool bMovementToolingFastRelease; // 0x58(0x01)
	bool bMovementToolingAngularDeadzones; // 0x59(0x01)
	bool bMovementToolingRadialDeadzones; // 0x5a(0x01)
	char pad_5B[0x5]; // 0x5b(0x05)
};

// Class ShooterGame.AresMovementToolingTuningComponent
// Size: 0x118 (Inherited: 0xe8)
struct UAresMovementToolingTuningComponent : UActorComponent {
	int32_t CurrentTuningMode; // 0xe8(0x04)
	char pad_EC[0x4]; // 0xec(0x04)
	struct TArray<struct FString> TuningModeAssetPaths; // 0xf0(0x10)
	struct UAresMovementToolingTuningAsset* CurrentTuningAsset; // 0x100(0x08)
	char pad_108[0x10]; // 0x108(0x10)
};

// Class ShooterGame.AresNetConnection
// Size: 0x1c28 (Inherited: 0x1bd0)
struct UAresNetConnection : UIpConnection {
	char pad_1BD0[0x58]; // 0x1bd0(0x58)
};

// Class ShooterGame.AresNetDriver
// Size: 0xaa8 (Inherited: 0x850)
struct UAresNetDriver : UIpNetDriver {
	char pad_850[0x30]; // 0x850(0x30)
	float SoftDisconnectTimeout; // 0x880(0x04)
	char pad_884[0x54]; // 0x884(0x54)
	struct FNetworkDegradationSettings SimulatedNetworkDegradation; // 0x8d8(0x3c)
	bool bWasSimulatingBurstLossLastFrame; // 0x914(0x01)
	char pad_915[0x3]; // 0x915(0x03)
	struct TSet<struct FString> PlayersExperiencingBurstLoss; // 0x918(0x50)
	char pad_968[0x140]; // 0x968(0x140)
};

// Class ShooterGame.AresNetworkingGlobals
// Size: 0x48 (Inherited: 0x30)
struct UAresNetworkingGlobals : UObject {
	float TimeBetweenUnreliablePingUpdates; // 0x30(0x04)
	float UnreliablePingAckGiveupTime; // 0x34(0x04)
	int32_t NumUnreliablePingSamples; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct UValueDisagreementTimer* DefaultValueDisagreementTimerClass; // 0x40(0x08)
};

// Class ShooterGame.AresOnGroundEquippable
// Size: 0x418 (Inherited: 0x400)
struct AAresOnGroundEquippable : AGameObject {
	struct USphereComponent* Collision; // 0x400(0x08)
	struct AAresEquippable* MyEquippable; // 0x408(0x08)
	struct AShooterCharacter* LastOwner; // 0x410(0x08)
};

// Class ShooterGame.AresOutlineComponent
// Size: 0x2c0 (Inherited: 0x290)
struct UAresOutlineComponent : USceneComponent {
	struct AAresPlayerStateBase* LastLocalPlayerState; // 0x290(0x08)
	struct AShooterCharacter* ShooterCharacterOwner; // 0x298(0x08)
	char pad_2A0[0x10]; // 0x2a0(0x10)
	enum class EAresOutlineMode AllyOutline; // 0x2b0(0x01)
	enum class EAresOutlineMode EnemyOutline; // 0x2b1(0x01)
	enum class EAresOutlineMode NeutralOutline; // 0x2b2(0x01)
	enum class EAresOutlineMode DeadAllyOutline; // 0x2b3(0x01)
	enum class EAresOutlineMode DeadEnemyOutline; // 0x2b4(0x01)
	char pad_2B5[0x3]; // 0x2b5(0x03)
	float DeathFadeDuration; // 0x2b8(0x04)
	bool bAffectChildren; // 0x2bc(0x01)
	char pad_2BD[0x3]; // 0x2bd(0x03)
};

// Class ShooterGame.ParticleModuleTeamColor
// Size: 0xe8 (Inherited: 0x38)
struct UParticleModuleTeamColor : UParticleModuleCustomColor {
	struct FName MaterialParameter; // 0x38(0x0c)
	struct FLinearColor BaseColor; // 0x44(0x10)
	struct FLinearColor DefaultEnemyColor; // 0x54(0x10)
	struct FLinearColor TritanopiaEnemyColor; // 0x64(0x10)
	struct FLinearColor DeuteranopiaEnemyColor; // 0x74(0x10)
	struct FLinearColor ProtanopiaEnemyColor; // 0x84(0x10)
	struct FLinearColor DefenderColor; // 0x94(0x10)
	struct FLinearColor ExampleCustomColor; // 0xa4(0x10)
	struct FVector MinInputCustomColor; // 0xb4(0x0c)
	struct FVector MaxInputCustomColor; // 0xc0(0x0c)
	struct FVector MinOutputCustomColor; // 0xcc(0x0c)
	struct FVector MaxOutputCustomColor; // 0xd8(0x0c)
	char pad_E4[0x4]; // 0xe4(0x04)
};

// Class ShooterGame.ParticleModuleOutlineMode
// Size: 0x40 (Inherited: 0x38)
struct UParticleModuleOutlineMode : UParticleModuleCustomOutline {
	enum class EAresOutlineMode AllyOutline; // 0x38(0x01)
	enum class EAresOutlineMode EnemyOutline; // 0x39(0x01)
	enum class EAresOutlineMode NeutralOutline; // 0x3a(0x01)
	char pad_3B[0x5]; // 0x3b(0x05)
};

// Class ShooterGame.AresPeakMemoryUsageGauntletController
// Size: 0x130 (Inherited: 0x130)
struct UAresPeakMemoryUsageGauntletController : UAresJoinGameGauntletControllerBase {
};

// Class ShooterGame.PlatformSpecializedUIGlobalsDataAsset
// Size: 0x98 (Inherited: 0x40)
struct UPlatformSpecializedUIGlobalsDataAsset : UAresPlatformDataAsset {
	int32_t Priority; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct TMap<enum class EAresPlatformWidgetFamily, struct TSoftObjectPtr<UPlatformSpecializedWidgetFamily>> PlatformSpecializedWidgetFamilies; // 0x48(0x50)
};

// Class ShooterGame.PlatformSpecializedWidgetFamily
// Size: 0xd8 (Inherited: 0x38)
struct UPlatformSpecializedWidgetFamily : UDataAsset {
	struct TMap<struct FName, struct TSoftClassPtr<UObject>> WidgetBlueprints; // 0x38(0x50)
	struct TMap<struct FName, struct UUserWidget*> CachedWidgetBlueprints; // 0x88(0x50)
};

// Class ShooterGame.PlatformSpecializedUIBlueprintFunctionLibrary
// Size: 0x30 (Inherited: 0x30)
struct UPlatformSpecializedUIBlueprintFunctionLibrary : UBlueprintFunctionLibrary {
};

// Class ShooterGame.AresPlatformBlueprintFunctionLibrary
// Size: 0x30 (Inherited: 0x30)
struct UAresPlatformBlueprintFunctionLibrary : UBlueprintFunctionLibrary {
};

// Class ShooterGame.AresPlayerAutomation
// Size: 0x3e8 (Inherited: 0x3d0)
struct AAresPlayerAutomation : AActor {
	struct AAresPlayerStateBase* PlayerState; // 0x3d0(0x08)
	char pad_3D8[0x8]; // 0x3d8(0x08)
	bool bReadyToTestFired; // 0x3e0(0x01)
	bool bIsComplete; // 0x3e1(0x01)
	bool bWaitForGameAutomation; // 0x3e2(0x01)
	bool bWaitForShooterCharacter; // 0x3e3(0x01)
	char pad_3E4[0x4]; // 0x3e4(0x04)
};

// Class ShooterGame.OwnerExclusivePlayerInfo
// Size: 0x5e8 (Inherited: 0x3d0)
struct AOwnerExclusivePlayerInfo : AInfo {
	struct FMulticastInlineDelegate OnAuthLoadoutFinalized; // 0x3d0(0x10)
	struct FMulticastInlineDelegate OnRequestFulfilled; // 0x3e0(0x10)
	struct FMulticastInlineDelegate OnRequestRefunded; // 0x3f0(0x10)
	struct FRoundPersistentDataDefinition RoundPersistentData; // 0x400(0x10)
	struct FMulticastInlineDelegate OnPreviousRoundRewardsFinalized; // 0x410(0x10)
	char pad_420[0x10]; // 0x420(0x10)
	struct FMulticastInlineDelegate OnAuthLoadoutReset; // 0x430(0x10)
	struct AController* AresController; // 0x440(0x08)
	struct TArray<float> CurrentResources; // 0x448(0x10)
	int32_t NumDeathStreak; // 0x458(0x04)
	int32_t StartOfRoundMoneyCache; // 0x45c(0x04)
	int32_t StartOfRoundLoadoutValueCache; // 0x460(0x04)
	char pad_464[0x4]; // 0x464(0x04)
	struct TArray<struct FAresTrackedReward> TrackedRewards; // 0x468(0x10)
	int32_t EndOfRoundBeforeRewardsMoney; // 0x478(0x04)
	bool bLoadoutFinalized; // 0x47c(0x01)
	char pad_47D[0x3]; // 0x47d(0x03)
	struct UCombatReportComponent* CombatReportComponentType; // 0x480(0x08)
	struct UCombatReportComponent* CombatReportComponent; // 0x488(0x08)
	struct UKillStreakComponent* KillStreakComponent; // 0x490(0x08)
	struct UPlayerTimelineDebugComponent* PlayerTimelineDebugComponent; // 0x498(0x08)
	struct UPlayerPurchaseablesComponent* PlayerPurchaseablesComponent; // 0x4a0(0x08)
	struct TArray<struct FAresPlayerRoundInfo> RoundInfos; // 0x4a8(0x10)
	enum class EPlayerDebugFlags DebugFlags; // 0x4b8(0x01)
	char pad_4B9[0x7]; // 0x4b9(0x07)
	struct UPersonalizationComponent* PersonalizationComponent; // 0x4c0(0x08)
	struct USprayLoadoutComponent* SprayLoadoutComponent; // 0x4c8(0x08)
	struct TArray<struct FObfuscatedPlayerInformation> AllPlayersObfuscatedPlayerInformation; // 0x4d0(0x10)
	char pad_4E0[0x108]; // 0x4e0(0x108)
};

// Class ShooterGame.AresPlayerInput
// Size: 0x410 (Inherited: 0x3e0)
struct UAresPlayerInput : UPlayerInput {
	char pad_3E0[0x30]; // 0x3e0(0x30)
};

// Class ShooterGame.AresPlayerStateBase
// Size: 0x670 (Inherited: 0x4d8)
struct AAresPlayerStateBase : APlayerState {
	char pad_4D8[0x104]; // 0x4d8(0x104)
	enum class EConnectionStatus ConnectionStatus; // 0x5dc(0x01)
	bool bHasEverConnected; // 0x5dd(0x01)
	char pad_5DE[0x2]; // 0x5de(0x02)
	struct FMulticastInlineDelegate OnPlayersSpectatingUpdated; // 0x5e0(0x10)
	struct FMulticastInlineDelegate ConnectionStatusChangedDelegate; // 0x5f0(0x10)
	char pad_600[0x8]; // 0x600(0x08)
	bool bPendingDisassociate; // 0x608(0x01)
	char pad_609[0x3]; // 0x609(0x03)
	int32_t CompetitiveTier; // 0x60c(0x04)
	struct FAresPlatformParticipantInfo PlatformParticipantInfo; // 0x610(0x10)
	struct UPlatformPlayer* PlatformPlayer; // 0x620(0x08)
	struct UBaseTeamComponent* TeamComponent; // 0x628(0x08)
	struct AAresPlayerStateBase* SpectatedPlayer; // 0x630(0x08)
	struct AAresPlayerAutomation* PlayerAutomation; // 0x638(0x08)
	bool bHasEverBegunConnecting; // 0x640(0x01)
	char pad_641[0xf]; // 0x641(0x0f)
	struct FString AuthMegapacketGameName; // 0x650(0x10)
	struct FString AuthMegapacketTagLine; // 0x660(0x10)
};

// Class ShooterGame.DamageResponse
// Size: 0xc0 (Inherited: 0x30)
struct UDamageResponse : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct AActor* DamagedActor; // 0x38(0x08)
	struct FNetworkedDamageResponseData DamageResponseData; // 0x40(0x80)
};

// Class ShooterGame.AresPointDamageResponse
// Size: 0x1a8 (Inherited: 0xc0)
struct UAresPointDamageResponse : UDamageResponse {
	char pad_C0[0x18]; // 0xc0(0x18)
	struct FNetworkedPointDamageResponseData PointDamageResponseData; // 0xd8(0xd0)
};

// Class ShooterGame.AresPurchasable
// Size: 0x98 (Inherited: 0x30)
struct UAresPurchasable : UObject {
	struct UTexture* NewShopImage; // 0x30(0x08)
	enum class EAresCostType CostType; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	int32_t Cost; // 0x3c(0x04)
	enum class EAresPurchasableType PurchasableType; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct TArray<struct UAresPurchasable*> PrerequisitePurchasables; // 0x48(0x10)
	struct FName ShopCategory; // 0x58(0x0c)
	struct FName ShopSubcategory; // 0x64(0x0c)
	struct FText ShopCategoryText; // 0x70(0x18)
	struct FShopGridPosition ShopGridPosition; // 0x88(0x08)
	bool bCostCountsTowardsLoadout; // 0x90(0x01)
	bool bCanBeTrashed; // 0x91(0x01)
	char pad_92[0x6]; // 0x92(0x06)
};

// Class ShooterGame.AresPurchasableEquippable
// Size: 0xa8 (Inherited: 0x98)
struct UAresPurchasableEquippable : UAresPurchasable {
	char pad_98[0x1]; // 0x98(0x01)
	bool bCanAddToStorageSlot; // 0x99(0x01)
	char pad_9A[0x6]; // 0x9a(0x06)
	struct AAresItem* EquippableClass; // 0xa0(0x08)
};

// Class ShooterGame.AresPurchasableAdvancement
// Size: 0xb0 (Inherited: 0xa8)
struct UAresPurchasableAdvancement : UAresPurchasableEquippable {
	int32_t ExperiencePurchased; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
};

// Class ShooterGame.AresPurchasableCharge
// Size: 0xb0 (Inherited: 0xa8)
struct UAresPurchasableCharge : UAresPurchasableEquippable {
	int32_t ChargesAdded; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
};

// Class ShooterGame.AresPurchasableEnergy
// Size: 0xa8 (Inherited: 0xa8)
struct UAresPurchasableEnergy : UAresPurchasableEquippable {
};

// Class ShooterGame.AresPurchasablePackage
// Size: 0x3e8 (Inherited: 0x3d0)
struct AAresPurchasablePackage : AInfo {
	struct AAresEquippable* AssociatedEquipable; // 0x3d0(0x08)
	struct UMaterialInterface* Material; // 0x3d8(0x08)
	struct USkeletalMesh* SkeletalMesh; // 0x3e0(0x08)
};

// Class ShooterGame.AresPurchasableRank
// Size: 0xb8 (Inherited: 0xa8)
struct UAresPurchasableRank : UAresPurchasableEquippable {
	struct TArray<int32_t> RankCost; // 0xa8(0x10)
};

// Class ShooterGame.AresPurchasableUlt
// Size: 0xa8 (Inherited: 0xa8)
struct UAresPurchasableUlt : UAresPurchasableEquippable {
};

// Class ShooterGame.AresRadialDamageResponse
// Size: 0x1c0 (Inherited: 0xc0)
struct UAresRadialDamageResponse : UDamageResponse {
	char pad_C0[0x8]; // 0xc0(0x08)
	struct FNetworkedRadialDamageResponseData RadialDamageResponseData; // 0xc8(0xf8)
};

// Class ShooterGame.AresRepairModeGameInstance
// Size: 0x1e0 (Inherited: 0x1b0)
struct UAresRepairModeGameInstance : UGameInstance {
	struct UAresClientEvents* AresClientEvents; // 0x1b0(0x08)
	struct URiotGamesApiClient* RiotGamesApiClient; // 0x1b8(0x08)
	struct UPlatformInitSettingsManager* PlatformInitSettingsManager; // 0x1c0(0x08)
	struct URiotProductManager* RiotProductManager; // 0x1c8(0x08)
	struct UApplicationRepairManager* ApplicationRepairManager; // 0x1d0(0x08)
	struct UPlatformInitializerV2* PlatformInitializer; // 0x1d8(0x08)
};

// Class ShooterGame.AresRespawnManager
// Size: 0x3d0 (Inherited: 0x3d0)
struct AAresRespawnManager : AInfo {
};

// Class ShooterGame.AresScrollBox
// Size: 0x930 (Inherited: 0x928)
struct UAresScrollBox : UScrollBox {
	bool InvertScrolling; // 0x928(0x01)
	char pad_929[0x7]; // 0x929(0x07)
};

// Class ShooterGame.AresServerGameInstance
// Size: 0x50 (Inherited: 0x40)
struct UAresServerGameInstance : UAresBaseGameInstance {
	struct UReflectedPlayerSettingsManager* ReflectedPlayerSettingsManagerClass; // 0x40(0x08)
	struct UReflectedPlayerSettingsManager* ReflectedPlayerSettingsManager; // 0x48(0x08)
};

// Class ShooterGame.AresSettingsManager
// Size: 0x438 (Inherited: 0x30)
struct UAresSettingsManager : UObject {
	struct FMulticastInlineDelegate OnSettingsInitialized; // 0x30(0x10)
	struct FDelegate OnAnyFloatSettingChangedEvent; // 0x40(0x14)
	struct FDelegate OnAnyIntSettingChangedEvent; // 0x54(0x14)
	struct FDelegate OnAnyBoolSettingChangedEvent; // 0x68(0x14)
	struct FDelegate OnAnyStringSettingChangedEvent; // 0x7c(0x14)
	struct TMap<struct FName, struct FAresFloatSetting> FloatSettings; // 0x90(0x50)
	struct TMap<struct FName, struct FAresIntSetting> IntSettings; // 0xe0(0x50)
	struct TMap<struct FName, struct FAresBoolSetting> BoolSettings; // 0x130(0x50)
	struct TMap<struct FName, struct FAresStringSetting> StringSettings; // 0x180(0x50)
	struct TMap<struct FName, struct FAresVoidSetting> VoidSettings; // 0x1d0(0x50)
	struct TMap<struct FName, struct FFloatSettingChangedDelegateList> FloatSettingChangedEvents; // 0x220(0x50)
	struct TMap<struct FName, struct FIntSettingChangedDelegateList> IntSettingChangedEvents; // 0x270(0x50)
	struct TMap<struct FName, struct FBoolSettingChangedDelegateList> BoolSettingChangedEvents; // 0x2c0(0x50)
	struct TMap<struct FName, struct FStringSettingChangedDelegateList> StringSettingChangedEvents; // 0x310(0x50)
	struct TArray<enum class EAresFloatSettingName> ReflectedFloatSettings; // 0x360(0x10)
	struct TArray<enum class EAresIntSettingName> ReflectedIntSettings; // 0x370(0x10)
	struct TArray<enum class EAresBoolSettingName> ReflectedBoolSettings; // 0x380(0x10)
	struct TMap<enum class EAresStringSettingName, struct TScriptInterface<IAresStringListSettingModel>> StringListSettingModels; // 0x390(0x50)
	struct UAresSettingsOverrides* SharedSettingOverrides; // 0x3e0(0x08)
	struct UAresSettingsOverrides* PlatformSettingOverrides; // 0x3e8(0x08)
	struct TArray<struct TSoftClassPtr<UObject>> GamepadSettingOverrides; // 0x3f0(0x10)
	char pad_400[0x8]; // 0x400(0x08)
	struct UNativePlatformSaveSystem* NativePlatformSaveSystem; // 0x408(0x08)
	struct FMulticastInlineDelegate OnAresCrosshairSettingsChanged; // 0x410(0x10)
	struct FCrosshairProfileData CachedCrosshairProfileData; // 0x420(0x18)
};

// Class ShooterGame.AresSettingTypes
// Size: 0x30 (Inherited: 0x30)
struct UAresSettingTypes : UObject {
};

// Class ShooterGame.AresSettingsOverrides
// Size: 0x170 (Inherited: 0x30)
struct UAresSettingsOverrides : UObject {
	struct TMap<enum class EAresFloatSettingName, struct FAresFloatSetting> FloatSettingsOverrides; // 0x30(0x50)
	struct TMap<enum class EAresIntSettingName, struct FAresIntSetting> IntSettingsOverrides; // 0x80(0x50)
	struct TMap<enum class EAresBoolSettingName, bool> BoolSettingsOverrides; // 0xd0(0x50)
	struct TMap<enum class EAresStringSettingName, struct FString> StringSettingsOverrides; // 0x120(0x50)
};

// Class ShooterGame.AresSettingsPresetsDataAsset
// Size: 0x48 (Inherited: 0x38)
struct UAresSettingsPresetsDataAsset : UDataAsset {
	struct TArray<struct FAresSettingsPresetsOption> PresetOptions; // 0x38(0x10)
};

// Class ShooterGame.AresSkinCatalog
// Size: 0x460 (Inherited: 0x3d0)
struct AAresSkinCatalog : AInfo {
	struct TSoftClassPtr<UObject> GunSkinComponentBase; // 0x3d0(0x30)
	struct TSoftClassPtr<UObject> GunSkinChromaComponentBase; // 0x400(0x30)
	struct TSoftClassPtr<UObject> MeleeSkinComponentBase; // 0x430(0x30)
};

// Class ShooterGame.AresSlashCommands
// Size: 0x30 (Inherited: 0x30)
struct UAresSlashCommands : UObject {
};

// Class ShooterGame.AresSlateGlobals
// Size: 0x300 (Inherited: 0x30)
struct UAresSlateGlobals : UObject {
	struct FSlateBrush RedBrush; // 0x30(0x90)
	struct FSlateBrush GreenBrush; // 0xc0(0x90)
	struct FSlateBrush BlueBrush; // 0x150(0x90)
	struct FSlateBrush BlackBrush; // 0x1e0(0x90)
	struct FSlateBrush WhiteBrush; // 0x270(0x90)
};

// Class ShooterGame.AresSoundHandler
// Size: 0x430 (Inherited: 0x3d0)
struct AAresSoundHandler : AActor {
	struct UAresAudioComponent* Reusable2DAudioComponent; // 0x3d0(0x08)
	struct UAresAudioComponent* TemporaryReusableAudioComponent; // 0x3d8(0x08)
	char pad_3E0[0x50]; // 0x3e0(0x50)
};

// Class ShooterGame.AresSoundActor
// Size: 0x430 (Inherited: 0x430)
struct AAresSoundActor : AAresSoundHandler {
};

// Class ShooterGame.AresSpray
// Size: 0x488 (Inherited: 0x3d0)
struct AAresSpray : AActor {
	struct TSet<struct TSoftClassPtr<UObject>> Sockets; // 0x3d0(0x50)
	struct TArray<struct AEffectContainer*> SprayEffects; // 0x420(0x10)
	struct FEffectData CommonSprayEffectData; // 0x430(0x58)
};

// Class ShooterGame.AresStore
// Size: 0xb0 (Inherited: 0x30)
struct UAresStore : UObject {
	struct TArray<struct TSoftClassPtr<UObject>> PurchasableAssets; // 0x30(0x10)
	struct FSoftObjectPath PurchasableAssetsDevOnlyDataTable; // 0x40(0x20)
	float SellbackPercent; // 0x60(0x04)
	uint32_t ArmorSellPriceRoundingValue; // 0x64(0x04)
	struct FPurchasableList CachedPurchasables; // 0x68(0x10)
	struct FPurchasableList CachedCombinedPurchasables; // 0x78(0x10)
	char pad_88[0x28]; // 0x88(0x28)
};

// Class ShooterGame.AresStringListSettingModel
// Size: 0x30 (Inherited: 0x30)
struct UAresStringListSettingModel : UInterface {
};

// Class ShooterGame.AresTestGlobals
// Size: 0x40 (Inherited: 0x30)
struct UAresTestGlobals : UObject {
	struct TArray<struct FBlueprintAutomatedTest> BlueprintAutomatedTests; // 0x30(0x10)
};

// Class ShooterGame.TestGlobalsDataAsset
// Size: 0x78 (Inherited: 0x38)
struct UTestGlobalsDataAsset : UPrimaryDataAsset {
	struct TSoftClassPtr<UObject> AresTestGlobals; // 0x38(0x30)
	struct TArray<struct TSoftClassPtr<UObject>> BlueprintsToIncludeInRemoting; // 0x68(0x10)
};

// Class ShooterGame.AresTestLogic
// Size: 0xd0 (Inherited: 0x30)
struct UAresTestLogic : UObject {
	char pad_30[0x18]; // 0x30(0x18)
	bool bReadyToTest; // 0x48(0x01)
	enum class EGameFlowStateType CurrentGameFlowStateType; // 0x49(0x01)
	char pad_4A[0x6]; // 0x4a(0x06)
	struct FString CurrentMatchID; // 0x50(0x10)
	char pad_60[0x18]; // 0x60(0x18)
	struct TArray<struct FAresAutomationEvent> Events; // 0x78(0x10)
	struct TArray<struct FString> Logs; // 0x88(0x10)
	struct FString FailureReason; // 0x98(0x10)
	enum class EAresTestAutomationStatus Status; // 0xa8(0x01)
	char ClientId; // 0xa9(0x01)
	bool bIsServer; // 0xaa(0x01)
	bool bCrashOnVoteFail; // 0xab(0x01)
	char pad_AC[0x4]; // 0xac(0x04)
	struct FString TestCategory; // 0xb0(0x10)
	char pad_C0[0x10]; // 0xc0(0x10)
};

// Class ShooterGame.AresTextBlock
// Size: 0x388 (Inherited: 0x310)
struct UAresTextBlock : UTextBlock {
	bool bOverride_FontStyle; // 0x310(0x01)
	char pad_311[0x7]; // 0x311(0x07)
	struct UFontStyleDataAsset* FontStyle; // 0x318(0x08)
	struct FAresFontStyle FontStyleOverride; // 0x320(0x68)
};

// Class ShooterGame.AresTextRenderComponent
// Size: 0x5a0 (Inherited: 0x5a0)
struct UAresTextRenderComponent : UTextRenderComponent {
};

// Class ShooterGame.AresTouchAnimationComponent
// Size: 0x48 (Inherited: 0x30)
struct UAresTouchAnimationComponent : UObject {
	struct FTimerHandle RenderTickTimer; // 0x30(0x08)
	char pad_38[0x10]; // 0x38(0x10)
};

// Class ShooterGame.AresTouchBounds
// Size: 0x160 (Inherited: 0x148)
struct UAresTouchBounds : UWidget {
	enum class EAresTouchBoundsShape BoundsShape; // 0x148(0x01)
	char pad_149[0x17]; // 0x149(0x17)
};

// Class ShooterGame.AresTouchComponent
// Size: 0x140 (Inherited: 0x30)
struct UAresTouchComponent : UObject {
	char pad_30[0x40]; // 0x30(0x40)
	struct FMulticastInlineDelegate OnTouchPress; // 0x70(0x10)
	struct FMulticastInlineDelegate OnTouchMove; // 0x80(0x10)
	struct FMulticastInlineDelegate OnTouchRelease; // 0x90(0x10)
	struct FMulticastInlineDelegate OnTouchEnter; // 0xa0(0x10)
	struct FMulticastInlineDelegate OnTouchExit; // 0xb0(0x10)
	char pad_C0[0x30]; // 0xc0(0x30)
	struct TSet<struct TWeakObjectPtr<struct UAresTouchGesture>> Gestures; // 0xf0(0x50)
};

// Class ShooterGame.AresTouchButtonComponent
// Size: 0x1a0 (Inherited: 0x140)
struct UAresTouchButtonComponent : UAresTouchComponent {
	struct FMulticastInlineDelegate OnTouchPressed; // 0x140(0x10)
	struct FMulticastInlineDelegate OnTouchReleased; // 0x150(0x10)
	struct FMulticastInlineDelegate OnTouchEntered; // 0x160(0x10)
	struct FMulticastInlineDelegate OnTouchExited; // 0x170(0x10)
	struct FMulticastInlineDelegate OnTouchMoved; // 0x180(0x10)
	struct FMulticastInlineDelegate OnTouchReset; // 0x190(0x10)
};

// Class ShooterGame.AresTouchBoundsDebugWidget
// Size: 0x2e0 (Inherited: 0x2c8)
struct UAresTouchBoundsDebugWidget : UUserWidget {
	char pad_2C8[0x18]; // 0x2c8(0x18)
};

// Class ShooterGame.AresTouchJoystickDebugWidget
// Size: 0x2f8 (Inherited: 0x2e0)
struct UAresTouchJoystickDebugWidget : UAresTouchBoundsDebugWidget {
	char pad_2E0[0x18]; // 0x2e0(0x18)
};

// Class ShooterGame.AresTouchTrackPadDebugWidget
// Size: 0x2f8 (Inherited: 0x2e0)
struct UAresTouchTrackPadDebugWidget : UAresTouchBoundsDebugWidget {
	char pad_2E0[0x18]; // 0x2e0(0x18)
};

// Class ShooterGame.AresTouchSwipeDebugWidget
// Size: 0x300 (Inherited: 0x2e0)
struct UAresTouchSwipeDebugWidget : UAresTouchBoundsDebugWidget {
	char pad_2E0[0x20]; // 0x2e0(0x20)
};

// Class ShooterGame.AresTouchDoubleTapFilter
// Size: 0x70 (Inherited: 0x30)
struct UAresTouchDoubleTapFilter : UObject {
	struct FMulticastInlineDelegate OnDoubleTap; // 0x30(0x10)
	struct FMulticastInlineDelegate OnDoubleTapAtLocation; // 0x40(0x10)
	char pad_50[0x20]; // 0x50(0x20)
};

// Class ShooterGame.AresTouchGesture
// Size: 0x30 (Inherited: 0x30)
struct UAresTouchGesture : UObject {
};

// Class ShooterGame.AresTouchDoubleTapGesture
// Size: 0x1d0 (Inherited: 0x30)
struct UAresTouchDoubleTapGesture : UAresTouchGesture {
	struct FMulticastInlineDelegate OnDoubleTapStart; // 0x30(0x10)
	struct FMulticastInlineDelegate OnDoubleTapHoldStart; // 0x40(0x10)
	struct FMulticastInlineDelegate OnDoubleTapHoldChargeInterrupted; // 0x50(0x10)
	struct FMulticastInlineDelegate OnDoubleTapEnd; // 0x60(0x10)
	float MaxTimeBetweenTaps; // 0x70(0x04)
	float MaxDistanceBetweenTapsInInches; // 0x74(0x04)
	struct FAresTouchHoldGestureProperties InitialHoldProperties; // 0x78(0x0c)
	char pad_84[0x4]; // 0x84(0x04)
	struct UAresTouchHoldGesture* HoldGesture; // 0x88(0x08)
	char pad_90[0x140]; // 0x90(0x140)
};

// Class ShooterGame.AresTouchGesturesBase
// Size: 0x960 (Inherited: 0x960)
struct UAresTouchGesturesBase : UAresTouchWidget {
};

// Class ShooterGame.AresTouchHoldGesture
// Size: 0xc0 (Inherited: 0x30)
struct UAresTouchHoldGesture : UAresTouchGesture {
	struct FMulticastInlineDelegate OnHoldStart; // 0x30(0x10)
	struct FMulticastInlineDelegate OnHoldEnd; // 0x40(0x10)
	struct FMulticastInlineDelegate OnHoldChargeInterrupted; // 0x50(0x10)
	float MinimumTimeToHold; // 0x60(0x04)
	float MaximumMoveDistanceInInches; // 0x64(0x04)
	char MaxTouchesTracked; // 0x68(0x01)
	bool bRestartChargeOnInterrupt; // 0x69(0x01)
	char pad_6A[0x56]; // 0x6a(0x56)
};

// Class ShooterGame.AresTouchJoystick
// Size: 0x9d8 (Inherited: 0x960)
struct UAresTouchJoystick : UAresTouchWidget {
	struct FMulticastInlineDelegate OnJoystickPressed; // 0x960(0x10)
	struct FMulticastInlineDelegate OnThumbstickLocationChanged; // 0x970(0x10)
	struct FMulticastInlineDelegate OnJoystickPressLocationNormalized; // 0x980(0x10)
	struct FMulticastInlineDelegate OnJoystickReleased; // 0x990(0x10)
	struct FMulticastInlineDelegate OnJoystickIndexPressed; // 0x9a0(0x10)
	struct FMulticastInlineDelegate OnJoystickIndexMoved; // 0x9b0(0x10)
	struct FMulticastInlineDelegate OnJoystickIndexReleased; // 0x9c0(0x10)
	struct TWeakObjectPtr<struct UAresTouchJoystickComponent> TouchJoystickComponent; // 0x9d0(0x08)
};

// Class ShooterGame.AresTouchJoystickComponent
// Size: 0x270 (Inherited: 0x140)
struct UAresTouchJoystickComponent : UAresTouchComponent {
	float JoystickSize; // 0x140(0x04)
	float RecenteringSpeed; // 0x144(0x04)
	float DeadZoneThreshold; // 0x148(0x04)
	float SprintZoneMinDistance; // 0x14c(0x04)
	float SprintZoneMaxAngle; // 0x150(0x04)
	bool bAbsoluteMode; // 0x154(0x01)
	char pad_155[0x3]; // 0x155(0x03)
	float DPIScaleDownFactor; // 0x158(0x04)
	struct FVector2D JoystickLocation; // 0x15c(0x08)
	char pad_164[0x4]; // 0x164(0x04)
	struct UWidget* VisualJoystick; // 0x168(0x08)
	struct FMulticastInlineDelegate OnXAxisChanged; // 0x170(0x10)
	struct FMulticastInlineDelegate OnYAxisChanged; // 0x180(0x10)
	struct FMulticastInlineDelegate OnAxesChanged; // 0x190(0x10)
	struct FMulticastInlineDelegate OnJoystickPressed; // 0x1a0(0x10)
	struct FMulticastInlineDelegate OnJoystickReleased; // 0x1b0(0x10)
	struct FMulticastInlineDelegate OnThumbstickLocation; // 0x1c0(0x10)
	struct FMulticastInlineDelegate OnThumbstickAbsoluteLocation; // 0x1d0(0x10)
	struct FMulticastInlineDelegate OnPressLocationNormalized; // 0x1e0(0x10)
	struct FMulticastInlineDelegate OnThumbstickNeutral; // 0x1f0(0x10)
	struct FMulticastInlineDelegate OnEnterSprintZone; // 0x200(0x10)
	struct FMulticastInlineDelegate OnExitSprintZone; // 0x210(0x10)
	char pad_220[0x50]; // 0x220(0x50)
};

// Class ShooterGame.AresTouchLongPressFilter
// Size: 0x80 (Inherited: 0x30)
struct UAresTouchLongPressFilter : UObject {
	struct FMulticastInlineDelegate OnLongPress; // 0x30(0x10)
	struct FMulticastInlineDelegate OnLongPressCancelled; // 0x40(0x10)
	float MinimumTimeToHold; // 0x50(0x04)
	float MaximumMoveDistanceInInches; // 0x54(0x04)
	bool bMovementCancelsLongPressTimer; // 0x58(0x01)
	char pad_59[0x27]; // 0x59(0x27)
};

// Class ShooterGame.AresTouchWidgetIndicatorInterface
// Size: 0x30 (Inherited: 0x30)
struct UAresTouchWidgetIndicatorInterface : UInterface {
};

// Class ShooterGame.AresTouchManager
// Size: 0x170 (Inherited: 0x80)
struct UAresTouchManager : UInitSystem {
	struct FMulticastInlineDelegate OnTouchModeChanged; // 0x80(0x10)
	struct FMulticastInlineDelegate OnTouchPressed; // 0x90(0x10)
	struct FMulticastInlineDelegate OnTouchReleased; // 0xa0(0x10)
	struct FMulticastInlineDelegate OnTouchMoved; // 0xb0(0x10)
	struct FMulticastInlineDelegate OnForwardedTouchPressed; // 0xc0(0x10)
	struct FMulticastInlineDelegate OnForwardedTouchReleased; // 0xd0(0x10)
	struct FMulticastInlineDelegate OnForwardedTouchMoved; // 0xe0(0x10)
	enum class EAresTouchMode TouchMode; // 0xf0(0x01)
	char pad_F1[0x27]; // 0xf1(0x27)
	struct UUserWidget* TouchIndicatorClass; // 0x118(0x08)
	struct TMap<enum class ETouchIndex, struct UUserWidget*> TouchIndicatorMap; // 0x120(0x50)
};

// Class ShooterGame.AresTouchScreenChildInterface
// Size: 0x30 (Inherited: 0x30)
struct UAresTouchScreenChildInterface : UInterface {
};

// Class ShooterGame.AresTouchScreen
// Size: 0x2f8 (Inherited: 0x2d8)
struct UAresTouchScreen : UCoordinatedHUDElement {
	struct TArray<struct UAresTouchWidgetWrapper*> ChildWrapperWidgets; // 0x2d8(0x10)
	double TouchSwipeAverageSpeed; // 0x2e8(0x08)
	double TouchSwipeTimeToMaintainInSeconds; // 0x2f0(0x08)
};

// Class ShooterGame.AresTouchSettingsNormalizationInterface
// Size: 0x30 (Inherited: 0x30)
struct UAresTouchSettingsNormalizationInterface : UInterface {
};

// Class ShooterGame.AresTouchSettingsList
// Size: 0x2c8 (Inherited: 0x2c8)
struct UAresTouchSettingsList : UUserWidget {
};

// Class ShooterGame.AresTouchSwipeComponent
// Size: 0x190 (Inherited: 0x140)
struct UAresTouchSwipeComponent : UAresTouchComponent {
	struct FMulticastInlineDelegate OnSwipeGesture; // 0x140(0x10)
	struct FMulticastInlineDelegate OnSwipeDirection; // 0x150(0x10)
	float ConstraintAngle; // 0x160(0x04)
	float ConstraintRange; // 0x164(0x04)
	float SwipeRadius; // 0x168(0x04)
	char pad_16C[0x24]; // 0x16c(0x24)
};

// Class ShooterGame.AresTouchTrackPadComponent
// Size: 0x2b8 (Inherited: 0x140)
struct UAresTouchTrackPadComponent : UAresTouchComponent {
	struct UCurveFloat* AimingDeltaXScalingCurve; // 0x140(0x08)
	struct UCurveFloat* AimingDeltaYScalingCurve; // 0x148(0x08)
	struct UCurveFloat* AimingDeltaXScalingCurveADS; // 0x150(0x08)
	struct UCurveFloat* AimingDeltaYScalingCurveADS; // 0x158(0x08)
	struct UCurveFloat* AimingDeltaXScalingCurveSniper; // 0x160(0x08)
	struct UCurveFloat* AimingDeltaYScalingCurveSniper; // 0x168(0x08)
	float ScreenDensityInputAdjustment; // 0x170(0x04)
	bool bContinuesFilteringAfterRelease; // 0x174(0x01)
	char pad_175[0x3]; // 0x175(0x03)
	struct FMulticastInlineDelegate OnDeltaXChanged; // 0x178(0x10)
	struct FMulticastInlineDelegate OnDeltaYChanged; // 0x188(0x10)
	struct FMulticastInlineDelegate OnPressed; // 0x198(0x10)
	struct FMulticastInlineDelegate OnReleased; // 0x1a8(0x10)
	struct FMulticastInlineDelegate OnMoved; // 0x1b8(0x10)
	struct TArray<struct UCurveFloat*> AccelerationCurvesX; // 0x1c8(0x10)
	struct TArray<struct UCurveFloat*> AccelerationCurvesY; // 0x1d8(0x10)
	struct FMulticastInlineDelegate OnMinCutOffChanged; // 0x1e8(0x10)
	struct FMulticastInlineDelegate OnDeltaCutOffChanged; // 0x1f8(0x10)
	struct FMulticastInlineDelegate OnCutOffSlopeChanged; // 0x208(0x10)
	bool bSupportsTrackballMode; // 0x218(0x01)
	char pad_219[0x7]; // 0x219(0x07)
	struct UCurveFloat* TrackballDecelerationCurve; // 0x220(0x08)
	float TrackballVerticalAngleClearZone; // 0x228(0x04)
	bool bTrackballModeXAxis; // 0x22c(0x01)
	bool bTrackballModeYAxis; // 0x22d(0x01)
	char pad_22E[0x2]; // 0x22e(0x02)
	float TrackballTimeActive; // 0x230(0x04)
	struct FVector2D TrackballVelocityDirection; // 0x234(0x08)
	float TrackballVelocityMagnitude; // 0x23c(0x04)
	struct FVector2D TrackballVelocityMagnitudeVector; // 0x240(0x08)
	struct FVector2D TrackballPhysicalMagnitudeVector; // 0x248(0x08)
	struct FVector2D TrackballInitialDirection; // 0x250(0x08)
	float TimeSinceAccelerationStart; // 0x258(0x04)
	char pad_25C[0x5c]; // 0x25c(0x5c)
};

// Class ShooterGame.AresTouchWheelSegment
// Size: 0x60 (Inherited: 0x30)
struct UAresTouchWheelSegment : UObject {
	struct FText SegmentText; // 0x30(0x18)
	struct UTexture2D* SegmentIconTexture; // 0x48(0x08)
	struct TArray<struct UAresTouchWheelSegment*> SegmentSuboptions; // 0x50(0x10)
};

// Class ShooterGame.AresTouchWheelMenu
// Size: 0x9d8 (Inherited: 0x960)
struct UAresTouchWheelMenu : UAresTouchWidget {
	struct TWeakObjectPtr<struct UAresTouchWheelMenuComponent> TouchWheelComponent; // 0x960(0x08)
	float TouchMoveScale; // 0x968(0x04)
	float SelectionDeadzoneThreshold; // 0x96c(0x04)
	float SelectionInputBufferWidth; // 0x970(0x04)
	float SegmentWidth; // 0x974(0x04)
	float SelectionConfirmDelay; // 0x978(0x04)
	float SwitchSuboptionsDelay; // 0x97c(0x04)
	float ResetSuboptionsOnNoSelectionDelay; // 0x980(0x04)
	bool bDisableResetSuboptionsOnNoSelection; // 0x984(0x01)
	bool bCanTapToSelectSegments; // 0x985(0x01)
	char pad_986[0x2]; // 0x986(0x02)
	float StaticSectionSize; // 0x988(0x04)
	char pad_98C[0x4]; // 0x98c(0x04)
	struct UDataTable* SegmentDataTable; // 0x990(0x08)
	struct TArray<struct UAresTouchWheelSegment*> StaticSegmentData; // 0x998(0x10)
	struct TArray<struct UAresTouchWheelSegment*> DynamicSegmentData; // 0x9a8(0x10)
	int32_t SelectionIndex; // 0x9b8(0x04)
	int32_t SuboptionsParentIndex; // 0x9bc(0x04)
	char pad_9C0[0x18]; // 0x9c0(0x18)
};

// Class ShooterGame.AresTouchWheelMenuComponent
// Size: 0x250 (Inherited: 0x140)
struct UAresTouchWheelMenuComponent : UAresTouchComponent {
	struct FMulticastInlineDelegate OnWheelPressed; // 0x140(0x10)
	struct FMulticastInlineDelegate OnWheelReleased; // 0x150(0x10)
	struct FMulticastInlineDelegate OnWheelLocation; // 0x160(0x10)
	struct FMulticastInlineDelegate OnInDeadzoneChanged; // 0x170(0x10)
	struct FMulticastInlineDelegate OnWheelSelectionChanged; // 0x180(0x10)
	struct FMulticastInlineDelegate OnWheelTapPress; // 0x190(0x10)
	struct FMulticastInlineDelegate OnWheelTapBoundsChange; // 0x1a0(0x10)
	struct FMulticastInlineDelegate OnWheelTapRelease; // 0x1b0(0x10)
	struct UWidget* VisualWheelMenu; // 0x1c0(0x08)
	char pad_1C8[0x88]; // 0x1c8(0x88)
};

// Class ShooterGame.AresTouchWidgetComponentInterface
// Size: 0x30 (Inherited: 0x30)
struct UAresTouchWidgetComponentInterface : UInterface {
};

// Class ShooterGame.AresTouchWidgetCTAInterface
// Size: 0x30 (Inherited: 0x30)
struct UAresTouchWidgetCTAInterface : UInterface {
};

// Class ShooterGame.AresTouchWidgetWrapper
// Size: 0x970 (Inherited: 0x960)
struct UAresTouchWidgetWrapper : UAresTouchWidget {
	struct UCoordinatedHUDModel* HUDModel; // 0x960(0x08)
	struct UCoordinatedShooterUIModel* ShooterUIModel; // 0x968(0x08)
};

// Class ShooterGame.AresTracer
// Size: 0x630 (Inherited: 0x620)
struct AAresTracer : AAresTracerInterface {
	float BeamLength; // 0x618(0x04)
	float LastTickTime; // 0x61c(0x04)
	bool bImpacted; // 0x620(0x01)
	float EndDistance; // 0x624(0x04)
	char pad_62D[0x3]; // 0x62d(0x03)
};

// Class ShooterGame.AresTrailComponent
// Size: 0x128 (Inherited: 0xe8)
struct UAresTrailComponent : UActorComponent {
	struct UParticleSystem* TrailBeamParticleTemplate; // 0xe8(0x08)
	struct FLinearColor TrailColor; // 0xf0(0x10)
	float MinimumSegmentLength; // 0x100(0x04)
	float TrailFadeTime; // 0x104(0x04)
	enum class ETrailDrawRule DrawRule; // 0x108(0x01)
	bool bDrawInLoS; // 0x109(0x01)
	char pad_10A[0x2]; // 0x10a(0x02)
	float MaxTrailDistance; // 0x10c(0x04)
	char pad_110[0x18]; // 0x110(0x18)
};

// Class ShooterGame.AresUIDirector
// Size: 0x58 (Inherited: 0x30)
struct UAresUIDirector : UObject {
	char pad_30[0x18]; // 0x30(0x18)
	bool bUIStarted; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct UAresUIManager* UIManager; // 0x50(0x08)
};

// Class ShooterGame.UIGlobalsDataAsset
// Size: 0x148 (Inherited: 0x40)
struct UUIGlobalsDataAsset : UAresPlatformDataAsset {
	struct UCurveFloat* DPICurve; // 0x40(0x08)
	struct UAresUIDirector* UIDirector; // 0x48(0x08)
	struct UAresUIManager* UIManager; // 0x50(0x08)
	struct UAresDeveloperMenuScreen* DeveloperMenuScreen; // 0x58(0x08)
	struct TSoftClassPtr<UObject> SettingsScreenAsset; // 0x60(0x30)
	struct TSoftClassPtr<UObject> ExitGameScreenAsset; // 0x90(0x30)
	struct TArray<struct FAresUserWidgetAsset> AdditionalUserWidgets; // 0xc0(0x10)
	struct TArray<struct FAresGenericAsset> AdditionalAssets; // 0xd0(0x10)
	struct FAresFontStyle AresFontStyle; // 0xe0(0x68)
};

// Class ShooterGame.AresUIManager
// Size: 0x70 (Inherited: 0x30)
struct UAresUIManager : UObject {
	char pad_30[0x18]; // 0x30(0x18)
	enum class EUIFocus OldFocus; // 0x48(0x01)
	enum class EUIMouseMode OldMouseMode; // 0x49(0x01)
	char pad_4A[0x6]; // 0x4a(0x06)
	struct UAresUIScreen* Channels[0x3]; // 0x50(0x18)
	struct UShooterUICoordinator* UICoordinator; // 0x68(0x08)
};

// Class ShooterGame.AresUIPropertyRegistry
// Size: 0x5d0 (Inherited: 0x30)
struct UAresUIPropertyRegistry : UObject {
	char pad_30[0x5a0]; // 0x30(0x5a0)
};

// Class ShooterGame.AresUniversalButtonWidget
// Size: 0x320 (Inherited: 0x2c8)
struct UAresUniversalButtonWidget : UUserWidget {
	struct FMulticastInlineDelegate OnClicked; // 0x2c8(0x10)
	struct FMulticastInlineDelegate OnButtonPressed; // 0x2d8(0x10)
	struct FMulticastInlineDelegate OnButtonReleased; // 0x2e8(0x10)
	struct FMulticastInlineDelegate OnButtonEntered; // 0x2f8(0x10)
	struct FMulticastInlineDelegate OnButtonExited; // 0x308(0x10)
	bool bEnabled; // 0x318(0x01)
	char pad_319[0x7]; // 0x319(0x07)
};

// Class ShooterGame.AresVisionConesWidget
// Size: 0x340 (Inherited: 0x2c8)
struct UAresVisionConesWidget : UUserWidget {
	struct UMaterialInterface* Material; // 0x2c8(0x08)
	struct UMaterialInterface* ObserverMaterial; // 0x2d0(0x08)
	struct UMaterialInstanceDynamic* MaterialInstance; // 0x2d8(0x08)
	char pad_2E0[0x60]; // 0x2e0(0x60)
};

// Class ShooterGame.AresWallPenetration
// Size: 0x48 (Inherited: 0x30)
struct UAresWallPenetration : UObject {
	float EnergyReductionMultiplier; // 0x30(0x04)
	bool bParticipatesInAirDropoff; // 0x34(0x01)
	bool bShowsRicochet; // 0x35(0x01)
	char pad_36[0x2]; // 0x36(0x02)
	struct FString DebugWallPenetrationTypeName; // 0x38(0x10)
};

// Class ShooterGame.AresWallPenetrationGlobals
// Size: 0x830 (Inherited: 0x30)
struct UAresWallPenetrationGlobals : UObject {
	bool bShowWallPenHitConfirms; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct TSoftClassPtr<UObject> WallPenetrationType[0x22]; // 0x38(0x660)
	struct UAresWallPenetration* WallPenetrationTypeCDOCached[0x22]; // 0x698(0x110)
	struct FRuntimeFloatCurve GlobalPenetrationCurve; // 0x7a8(0x88)
};

// Class ShooterGame.AresWatermarkManager
// Size: 0xe8 (Inherited: 0x80)
struct UAresWatermarkManager : UInitSystem {
	struct URSOManager* RSOManager; // 0x80(0x08)
	struct UConfigManager* ConfigManager; // 0x88(0x08)
	struct UMaterialInstanceDynamic* MaterialInstance; // 0x90(0x08)
	struct UMaterialInstanceDynamic* UIMaterialInstance; // 0x98(0x08)
	struct UCanvasRenderTarget2D* CanvasRenderTarget; // 0xa0(0x08)
	struct FString WatermarkString; // 0xa8(0x10)
	bool bWatermarkEnabled; // 0xb8(0x01)
	char pad_B9[0x3]; // 0xb9(0x03)
	float MinOpacity; // 0xbc(0x04)
	float MaxOpacity; // 0xc0(0x04)
	float MinUIOpacity; // 0xc4(0x04)
	float MaxUIOpacity; // 0xc8(0x04)
	float TilingFactor; // 0xcc(0x04)
	bool bInitialized; // 0xd0(0x01)
	char pad_D1[0x17]; // 0xd1(0x17)
};

// Class ShooterGame.AresWeaponAttachmentComponent
// Size: 0x118 (Inherited: 0xe8)
struct UAresWeaponAttachmentComponent : UActorComponent {
	char pad_E8[0x8]; // 0xe8(0x08)
	int32_t AttachmentCost; // 0xf0(0x04)
	char pad_F4[0x4]; // 0xf4(0x04)
	struct TArray<struct UMeshComponent*> AddedMeshes; // 0xf8(0x10)
	struct UAresBasePrimaryDataAsset* DataAsset; // 0x108(0x08)
	struct UBaseInventoryModel* UIModel; // 0x110(0x08)
};

// Class ShooterGame.AresWeaponSkinInterface
// Size: 0x30 (Inherited: 0x30)
struct UAresWeaponSkinInterface : UInterface {
};

// Class ShooterGame.AresWidgetComponent
// Size: 0x880 (Inherited: 0x6b0)
struct UAresWidgetComponent : UWidgetComponent {
	enum class EAresWidgetPlayerVisibility PlayerVisibility; // 0x6b0(0x01)
	bool bAliveOnly; // 0x6b1(0x01)
	char pad_6B2[0x2]; // 0x6b2(0x02)
	struct FNormalizedScreenDistanceCheck VisibleScreenDistanceCheck; // 0x6b4(0x08)
	char pad_6BC[0x4]; // 0x6bc(0x04)
	struct FRuntimeFloatCurve OpacityWorldDistanceCurve; // 0x6c0(0x88)
	struct FRuntimeFloatCurve OpacityScreenDistanceCurve; // 0x748(0x88)
	struct FRuntimeFloatCurve ScaleDistanceCurve; // 0x7d0(0x88)
	char pad_858[0xb]; // 0x858(0x0b)
	bool bAllowTeamComponentCachingOptimization; // 0x863(0x01)
	char pad_864[0x4]; // 0x864(0x04)
	struct UBaseTeamComponent* CachedOwnerTeamComponent; // 0x868(0x08)
	struct UBaseTeamComponent* CachedLocalPlayerControllerTeamComponent; // 0x870(0x08)
	char pad_878[0x8]; // 0x878(0x08)
};

// Class ShooterGame.AresWidgetOwningCharacterInterface
// Size: 0x30 (Inherited: 0x30)
struct UAresWidgetOwningCharacterInterface : UInterface {
};

// Class ShooterGame.AresWidgetRegistry
// Size: 0x90 (Inherited: 0x30)
struct UAresWidgetRegistry : UObject {
	struct TMap<struct UUserWidget*, struct TSoftObjectPtr<UUserWidget>> WidgetLookup; // 0x30(0x50)
	struct FName WorldContextHandle; // 0x80(0x0c)
	char pad_8C[0x4]; // 0x8c(0x04)
};

// Class ShooterGame.AresWidgetSwitcher
// Size: 0x188 (Inherited: 0x178)
struct UAresWidgetSwitcher : UWidgetSwitcher {
	char pad_178[0x10]; // 0x178(0x10)
};

// Class ShooterGame.AresWorldSettings
// Size: 0x6b8 (Inherited: 0x598)
struct AAresWorldSettings : AWorldSettings {
	bool bDrawMinimapForThisLevel; // 0x598(0x01)
	char pad_599[0x7]; // 0x599(0x07)
	struct UTexture2D* MinimapOverlay; // 0x5a0(0x08)
	struct UTexture2D* MegamapOverlay; // 0x5a8(0x08)
	struct UTexture2D* MinimapVisionOverlay; // 0x5b0(0x08)
	struct UTexture2D* MinimapDangerZoneOverlay; // 0x5b8(0x08)
	struct UTexture2D* MinimapDangerZoneLUT; // 0x5c0(0x08)
	struct UDataTable* MinimapVisionOccluders; // 0x5c8(0x08)
	float DefaultMinimapRotation; // 0x5d0(0x04)
	float DefaultTeamMinimapRotation; // 0x5d4(0x04)
	float OtherTeamMinimapRotation; // 0x5d8(0x04)
	char pad_5DC[0x4]; // 0x5dc(0x04)
	struct TArray<struct FVisionOccluderGroup> VisionOccluderGroups; // 0x5e0(0x10)
	bool bOverlayOverridesMinimap; // 0x5f0(0x01)
	bool bProceduralOverlayOverridesMinimap; // 0x5f1(0x01)
	char pad_5F2[0x6]; // 0x5f2(0x06)
	struct TMap<struct FString, struct FCalloutRegion> CalloutRegions; // 0x5f8(0x50)
	bool bDeathCamEnabledOnMap; // 0x648(0x01)
	char pad_649[0x7]; // 0x649(0x07)
	struct TArray<struct FGameModeSpecificSublevelsByKey> GameModeSpecificSublevelsByKey; // 0x650(0x10)
	struct TArray<struct TSoftObjectPtr<UWorld>> ClientOnlySublevels; // 0x660(0x10)
	struct FMulticastInlineDelegate OnVisionOccludersGenerated; // 0x670(0x10)
	struct FMaterialParamCollectionOverrides MaterialParamCollectionOverrides; // 0x680(0x10)
	struct URPCManager* RPCManager; // 0x690(0x08)
	struct UGameFeatureTogglesComponent* GameFeatureTogglesComponent; // 0x698(0x08)
	struct AShooterHUD* LocalShooterHUD; // 0x6a0(0x08)
	struct TArray<struct FDelegate> OnShooterHUDCreatedCallbacks; // 0x6a8(0x10)
};

// Class ShooterGame.ArmorUIData
// Size: 0xa8 (Inherited: 0x90)
struct UArmorUIData : UBaseContentUIData {
	struct FText Description; // 0x90(0x18)
};

// Class ShooterGame.ArmorDataAsset
// Size: 0xb0 (Inherited: 0x50)
struct UArmorDataAsset : UAresBasePrimaryDataAsset {
	struct TSoftClassPtr<UObject> item; // 0x50(0x30)
	struct TSoftClassPtr<UObject> UIData; // 0x80(0x30)
};

// Class ShooterGame.OrderedListModelBase
// Size: 0x48 (Inherited: 0x30)
struct UOrderedListModelBase : UObject {
	char pad_30[0x18]; // 0x30(0x18)
};

// Class ShooterGame.ArrayListModel
// Size: 0x68 (Inherited: 0x48)
struct UArrayListModel : UOrderedListModelBase {
	struct TArray<struct FWildcard> Items; // 0x48(0x10)
	char pad_58[0x10]; // 0x58(0x10)
};

// Class ShooterGame.ArsenalViewController
// Size: 0xb0 (Inherited: 0x80)
struct UArsenalViewController : UInitSystem {
	struct UArsenalViewModel* ViewModel; // 0x80(0x08)
	struct UInventoryManager* InventoryManager; // 0x88(0x08)
	struct UPersonalizationManagerV2* PersonalizationManager; // 0x90(0x08)
	struct TArray<struct UEquippableInventoryModel*> GunModels; // 0x98(0x10)
	struct UConfigManager* ConfigManager; // 0xa8(0x08)
};

// Class ShooterGame.ArsenalViewModel
// Size: 0xb0 (Inherited: 0x30)
struct UArsenalViewModel : UObject {
	struct FMulticastInlineDelegate OnGunModelsChanged; // 0x30(0x10)
	struct FMulticastInlineDelegate OnEquippedPlayerCardChanged; // 0x40(0x10)
	struct FMulticastInlineDelegate OnEquippedPlayerTitleChanged; // 0x50(0x10)
	struct FMulticastInlineDelegate OnEquippedLevelBorderChanged; // 0x60(0x10)
	struct FMulticastInlineDelegate OnSkinUpgradesDisabledChanged; // 0x70(0x10)
	struct TArray<struct UEquippableInventoryModel*> GunModels; // 0x80(0x10)
	struct UPlayerCardInventoryModel* EquippedPlayerCard; // 0x90(0x08)
	struct UPlayerTitleInventoryModel* EquippedPlayerTitle; // 0x98(0x08)
	struct ULevelBorderInventoryModel* EquippedLevelBorder; // 0xa0(0x08)
	bool bAreSkinUpgradesDisabled; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
};

// Class ShooterGame.AssistTrackingComponent
// Size: 0x238 (Inherited: 0xe8)
struct UAssistTrackingComponent : UActorComponent {
	char pad_E8[0x8]; // 0xe8(0x08)
	float DamageRequiredForAssist; // 0xf0(0x04)
	char pad_F4[0x4]; // 0xf4(0x04)
	struct TArray<struct FGameplayTag> BuffAssistTags; // 0xf8(0x10)
	struct TArray<struct FGameplayTag> DebuffAssistTags; // 0x108(0x10)
	struct TArray<struct FDamagingAssistThreshold> DamagingAssistThresholds; // 0x118(0x10)
	struct FSoftObjectPath DevOnlyAssistDefinitionDataTable; // 0x128(0x20)
	struct TMap<struct FGameplayTag, enum class EAresAssistType> AssistDefinitions; // 0x148(0x50)
	struct TMap<struct AShooterPlayerState*, float> DamageTracking; // 0x198(0x50)
	struct TMap<struct AShooterPlayerState*, struct FDamageTrackingEntry> TimedDamageTracking; // 0x1e8(0x50)
};

// Class ShooterGame.DamageSectionComponent
// Size: 0x148 (Inherited: 0xe8)
struct UDamageSectionComponent : UActorComponent {
	char pad_E8[0x8]; // 0xe8(0x08)
	struct FMulticastInlineDelegate AuthOnSectionDamaged; // 0xf0(0x10)
	struct FMulticastInlineDelegate AuthOnSectionDestroyed; // 0x100(0x10)
	struct FMulticastInlineDelegate AuthOnSectionHealed; // 0x110(0x10)
	struct UDamageableComponent* DamageOwner; // 0x120(0x08)
	enum class DamageSectionType Type; // 0x128(0x01)
	bool bCanBeDestroyed; // 0x129(0x01)
	char pad_12A[0x2]; // 0x12a(0x02)
	uint32_t Priority; // 0x12c(0x04)
	bool bAlive; // 0x130(0x01)
	char pad_131[0x3]; // 0x131(0x03)
	float Life; // 0x134(0x04)
	float MaximumLife; // 0x138(0x04)
	float DamageScale; // 0x13c(0x04)
	bool bAllowDamagePenetration; // 0x140(0x01)
	bool bCanBeHealed; // 0x141(0x01)
	char pad_142[0x6]; // 0x142(0x06)
};

// Class ShooterGame.AttachedDamageSectionComponent
// Size: 0x150 (Inherited: 0x148)
struct UAttachedDamageSectionComponent : UDamageSectionComponent {
	struct UDamageableComponent* LastKnownDamageOwner; // 0x148(0x08)
};

// Class ShooterGame.AttachmentControllerComponent
// Size: 0x2c0 (Inherited: 0x290)
struct UAttachmentControllerComponent : USceneComponent {
	struct TArray<struct USceneComponent*> ManagedAttachments; // 0x288(0x10)
	bool bShowInFirstPerson; // 0x298(0x01)
	struct FAttachmentSettings FirstPersonSettings; // 0x29c(0x0c)
	bool bShowInThirdPerson; // 0x2a8(0x01)
	struct FAttachmentSettings ThirdPersonSettings; // 0x2ac(0x0c)
	char pad_2BA[0x6]; // 0x2ba(0x06)
};

// Class ShooterGame.AudioOccluderMaterial
// Size: 0x118 (Inherited: 0x88)
struct UAudioOccluderMaterial : UPhysicalMaterial {
	enum class EAudioOcclusionOperation OcclusionOperation; // 0x88(0x01)
	enum class EAudioOcclusionType OcclusionType; // 0x89(0x01)
	char pad_8A[0x2]; // 0x8a(0x02)
	float FixedOcclusionAmount; // 0x8c(0x04)
	struct FRuntimeFloatCurve DistanceToOcclusionCurve; // 0x90(0x88)
};

// Class ShooterGame.AudioVisualizationDispatcherComponent
// Size: 0xf8 (Inherited: 0xe8)
struct UAudioVisualizationDispatcherComponent : UActorComponent {
	struct FMulticastInlineDelegate HandleAudioVisualization; // 0xe8(0x10)
};

// Class ShooterGame.AudioVisualizerWidget
// Size: 0x2c8 (Inherited: 0x2c8)
struct UAudioVisualizerWidget : UUserWidget {
};

// Class ShooterGame.CountdownTimerComponent
// Size: 0x108 (Inherited: 0xe8)
struct UCountdownTimerComponent : UActorComponent {
	float AuthTime; // 0xe8(0x04)
	float AuthInitTime; // 0xec(0x04)
	struct FTimerState AuthTimerState; // 0xf0(0x01)
	char pad_F1[0x3]; // 0xf1(0x03)
	float ClientPredictedTime; // 0xf4(0x04)
	float ClientInitTime; // 0xf8(0x04)
	struct FTimerState ClientTimerState; // 0xfc(0x01)
	char pad_FD[0x3]; // 0xfd(0x03)
	float AllowedClientPredictionTimeDrift; // 0x100(0x04)
	char pad_104[0x4]; // 0x104(0x04)
};

// Class ShooterGame.AutoCountdownTimerComponent
// Size: 0x108 (Inherited: 0x108)
struct UAutoCountdownTimerComponent : UCountdownTimerComponent {
};

// Class ShooterGame.AutoEquipTransitionContext
// Size: 0x38 (Inherited: 0x30)
struct UAutoEquipTransitionContext : UStateTransitionContext {
	enum class EEquipSpeed AutoEquipSpeed; // 0x30(0x01)
	enum class EEquipSource EquipSource; // 0x31(0x01)
	char pad_32[0x6]; // 0x32(0x06)
};

// Class ShooterGame.AutomationHelpers
// Size: 0x30 (Inherited: 0x30)
struct UAutomationHelpers : UObject {
};

// Class ShooterGame.AutomationTestProgressModelWatcher
// Size: 0x80 (Inherited: 0x30)
struct UAutomationTestProgressModelWatcher : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct TScriptInterface<IProgressModel> ObservedObject; // 0x38(0x10)
	char pad_48[0x38]; // 0x48(0x38)
};

// Class ShooterGame.AutomationTestAnimationConductorNodeWatcher
// Size: 0x98 (Inherited: 0x80)
struct UAutomationTestAnimationConductorNodeWatcher : UAutomationTestProgressModelWatcher {
	char pad_80[0x18]; // 0x80(0x18)
};

// Class ShooterGame.DebugListModelWatcherBase
// Size: 0x48 (Inherited: 0x30)
struct UDebugListModelWatcherBase : UObject {
	struct TScriptInterface<IOrderedListModel> ListModel; // 0x30(0x10)
	char pad_40[0x8]; // 0x40(0x08)
};

// Class ShooterGame.AutomationTestDebugListModelWatcher
// Size: 0x70 (Inherited: 0x48)
struct UAutomationTestDebugListModelWatcher : UDebugListModelWatcherBase {
	char pad_48[0x28]; // 0x48(0x28)
};

// Class ShooterGame.AutoResetAnimationConductorNode
// Size: 0xd8 (Inherited: 0xa8)
struct UAutoResetAnimationConductorNode : UAnimationConductorNodeBase {
	struct TScriptInterface<IAnimationConductorNode> ChildNode; // 0xa8(0x10)
	struct FAnimationConductorNodeSignalCondition ChildNodeSettings; // 0xb8(0x14)
	char pad_CC[0xc]; // 0xcc(0x0c)
};

// Class ShooterGame.AVSManager
// Size: 0x108 (Inherited: 0x80)
struct UAVSManager : UInitSystem {
	struct FMulticastInlineDelegate OnAVSStatusChanged; // 0x80(0x10)
	struct UConfigManager* ConfigManager; // 0x90(0x08)
	struct URSOManager* RSOManager; // 0x98(0x08)
	struct URMSManager* RMSManager; // 0xa0(0x08)
	struct UAVSService* AVSService; // 0xa8(0x08)
	struct TMap<struct FString, struct FAVSResponseCallback> ActiveRequests; // 0xb0(0x50)
	char pad_100[0x8]; // 0x100(0x08)
};

// Class ShooterGame.AVSScreenV1
// Size: 0x2d0 (Inherited: 0x2c8)
struct UAVSScreenV1 : UUserWidget {
	struct UAVSViewController* AVSViewController; // 0x2c8(0x08)
};

// Class ShooterGame.AVSService
// Size: 0x38 (Inherited: 0x30)
struct UAVSService : UObject {
	struct UConfigManager* ConfigManager; // 0x30(0x08)
};

// Class ShooterGame.AVSViewController
// Size: 0x48 (Inherited: 0x30)
struct UAVSViewController : UObject {
	struct FMulticastInlineDelegate OnVerificationStatusChanged; // 0x30(0x10)
	struct UAVSManager* AVSManager; // 0x40(0x08)
};

// Class ShooterGame.BaseConcussComponent
// Size: 0xf0 (Inherited: 0xe8)
struct UBaseConcussComponent : UActorComponent {
	bool ConcussActive; // 0xe8(0x01)
	char pad_E9[0x7]; // 0xe9(0x07)
};

// Class ShooterGame.BaseCrosshairHudElement
// Size: 0x178 (Inherited: 0x58)
struct UBaseCrosshairHudElement : UAresHudElement {
	char pad_58[0x4]; // 0x58(0x04)
	float MinAngleBetweenCrosshairPoints; // 0x5c(0x04)
	bool bApplyAngleOvershootInterpolation; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	float OvershootPercentOfTimeToNextShot; // 0x64(0x04)
	float OvershootMaxTimeSeconds; // 0x68(0x04)
	float OvershootPercentOfAngle; // 0x6c(0x04)
	float MinOvershootAngle; // 0x70(0x04)
	float FallbackPercentOfTimeToNextShot; // 0x74(0x04)
	float FallbackMaxTimeSeconds; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
	struct FAresHitConfirmTuning HitConfirmTuning; // 0x80(0x58)
	struct FAresHitConfirmTuning KillConfirmTuning; // 0xd8(0x58)
	char pad_130[0x18]; // 0x130(0x18)
	struct TArray<struct FCrosshairShape> NewSystem_CrosshairShapes; // 0x148(0x10)
	char pad_158[0x20]; // 0x158(0x20)
};

// Class ShooterGame.BaseGameStateComponent
// Size: 0x170 (Inherited: 0xf8)
struct UBaseGameStateComponent : UStateComponent {
	bool bControlsGameModePhase; // 0xf8(0x01)
	enum class EAresGamePhase GamePhase; // 0xf9(0x01)
	bool bShouldPerformanceInstabilityTrackingBeEnabledInThisState; // 0xfa(0x01)
	char pad_FB[0x5]; // 0xfb(0x05)
	struct FQueuedStateTransition QueuedStateTransition; // 0x100(0x38)
	struct FMulticastInlineDelegate OnStateEnter; // 0x138(0x10)
	struct FMulticastInlineDelegate OnStateExit; // 0x148(0x10)
	struct FMulticastInlineDelegate OnStateTick; // 0x158(0x10)
	struct UGameStateHUDConfig* DefaultHUDConfig; // 0x168(0x08)
};

// Class ShooterGame.BaseHitScanEffectComponent
// Size: 0xe8 (Inherited: 0xe8)
struct UBaseHitScanEffectComponent : UActorComponent {
};

// Class ShooterGame.BaseMainMenuPlayerController
// Size: 0x770 (Inherited: 0x738)
struct ABaseMainMenuPlayerController : ABasePlayerController {
	struct UPlayerUIAutomationBase* UIAutomation; // 0x738(0x08)
	struct FMulticastInlineDelegate OnMainMenuViewControllerInitCompleted; // 0x740(0x10)
	struct UMainMenuParentWidget* MainMenuParentWidget; // 0x750(0x08)
	struct UMainMenuViewModel* ViewModel; // 0x758(0x08)
	struct UMainMenuViewController* ViewController; // 0x760(0x08)
	char pad_768[0x8]; // 0x768(0x08)
};

// Class ShooterGame.BasePerformanceMonitoringComponent
// Size: 0x118 (Inherited: 0xe8)
struct UBasePerformanceMonitoringComponent : UActorComponent {
	struct UMetricInstabilityTrackingDetails* LocalFrameRateInstability; // 0xe8(0x08)
	char pad_F0[0x28]; // 0xf0(0x28)
};

// Class ShooterGame.BasePlayerStateTelemetryComponent
// Size: 0x100 (Inherited: 0xe8)
struct UBasePlayerStateTelemetryComponent : UActorComponent {
	struct UTelemetrySampler* TelemetrySampler; // 0xe8(0x08)
	struct UTelemetryManager* TelemetryManager; // 0xf0(0x08)
	char pad_F8[0x8]; // 0xf8(0x08)
};

// Class ShooterGame.GameModifierComponent
// Size: 0x158 (Inherited: 0xe8)
struct UGameModifierComponent : UActorComponent {
	struct FMulticastInlineDelegate OnGameModifierAllowedChanged; // 0xe8(0x10)
	int32_t AllowedRoleConditions; // 0xf8(0x04)
	int32_t AllowedUseConditions; // 0xfc(0x04)
	struct TSoftClassPtr<UObject> DisplayWidgetClass; // 0x100(0x30)
	struct FText ModifierName; // 0x130(0x18)
	bool bIsUniquePerPlayer; // 0x148(0x01)
	bool bIsAvailableToObservers; // 0x149(0x01)
	char pad_14A[0xe]; // 0x14a(0x0e)
};

// Class ShooterGame.BaseScoreboardModifier
// Size: 0x158 (Inherited: 0x158)
struct UBaseScoreboardModifier : UGameModifierComponent {
};

// Class ShooterGame.BaseSettingsWidget
// Size: 0x2c8 (Inherited: 0x2c8)
struct UBaseSettingsWidget : UDesignableUserWidget {
};

// Class ShooterGame.BaseSettingsWidgetGamepad
// Size: 0x2e0 (Inherited: 0x2c8)
struct UBaseSettingsWidgetGamepad : UBaseSettingsWidget {
	struct FMulticastInlineDelegate OnNavigation; // 0x2c8(0x10)
	struct UWidget* NavigationWidget; // 0x2d8(0x08)
};

// Class ShooterGame.BaseSpawnBarrier
// Size: 0x400 (Inherited: 0x400)
struct ABaseSpawnBarrier : AGameObject {
};

// Class ShooterGame.BaseTeamComponent
// Size: 0xf8 (Inherited: 0xe8)
struct UBaseTeamComponent : UActorComponent {
	struct FMulticastInlineDelegate OnTeamChanged; // 0xe8(0x10)
};

// Class ShooterGame.BasicCombatStatsComponent
// Size: 0x100 (Inherited: 0xe8)
struct UBasicCombatStatsComponent : UActorComponent {
	char pad_E8[0x8]; // 0xe8(0x08)
	int32_t AggregateKills; // 0xf0(0x04)
	int32_t AggregateDeaths; // 0xf4(0x04)
	int32_t AggregateAssists; // 0xf8(0x04)
	char pad_FC[0x4]; // 0xfc(0x04)
};

// Class ShooterGame.BehaviorScoreTracker
// Size: 0x450 (Inherited: 0x3d0)
struct ABehaviorScoreTracker : AInfo {
	char pad_3D0[0x70]; // 0x3d0(0x70)
	struct FString FactorName; // 0x440(0x10)
};

// Class ShooterGame.BehaviorScoreTrackerManagerComponent
// Size: 0x150 (Inherited: 0xe8)
struct UBehaviorScoreTrackerManagerComponent : UActorComponent {
	struct TArray<struct ABehaviorScoreTracker*> ActiveTrackerClasses; // 0xe8(0x10)
	char pad_F8[0x58]; // 0xf8(0x58)
};

// Class ShooterGame.ProjectileCollisionResponseComponent
// Size: 0xf8 (Inherited: 0xe8)
struct UProjectileCollisionResponseComponent : UActorComponent {
	char pad_E8[0x8]; // 0xe8(0x08)
	int32_t Priority; // 0xf0(0x04)
	char pad_F4[0x4]; // 0xf4(0x04)
};

// Class ShooterGame.BlueprintProjectileCollisionComponent
// Size: 0x108 (Inherited: 0xf8)
struct UBlueprintProjectileCollisionComponent : UProjectileCollisionResponseComponent {
	char pad_F8[0x10]; // 0xf8(0x10)
};

// Class ShooterGame.BlueprintResourceComponent
// Size: 0x138 (Inherited: 0x138)
struct UBlueprintResourceComponent : UAbilityResourceComponent {
};

// Class ShooterGame.BombMinimapComponent
// Size: 0x580 (Inherited: 0x500)
struct UBombMinimapComponent : UAresMinimapComponent {
	struct UUserWidget* MissingWidgetClass; // 0x4f8(0x08)
	bool bNeedsBombUpdate; // 0x500(0x01)
	float LastSeen; // 0x504(0x04)
	bool bIsEnemy; // 0x508(0x01)
	bool bOnGround; // 0x509(0x01)
	char pad_50F[0x1]; // 0x50f(0x01)
	struct UVisibilityComponent* VisibilityComponent; // 0x510(0x08)
	struct UUserWidget* OriginalWidgetClass; // 0x518(0x08)
	struct TSet<struct UShooterCharacterMinimapComponent*> HoldingBombComponents; // 0x520(0x50)
	bool bBeingDestroyed; // 0x570(0x01)
	bool bInFogOfWar; // 0x571(0x01)
	bool bLocalObserver; // 0x572(0x01)
	char pad_573[0xd]; // 0x573(0x0d)
};

// Class ShooterGame.BombTeamComponent
// Size: 0x100 (Inherited: 0xf8)
struct UBombTeamComponent : UBaseTeamComponent {
	enum class EAresTeam Team; // 0xf8(0x01)
	char pad_F9[0x7]; // 0xf9(0x07)
};

// Class ShooterGame.ListEntrySlotConfigurerFactoryBase
// Size: 0x38 (Inherited: 0x30)
struct UListEntrySlotConfigurerFactoryBase : UObject {
	char pad_30[0x8]; // 0x30(0x08)
};

// Class ShooterGame.ListEntrySlotConfigurerBase
// Size: 0x50 (Inherited: 0x38)
struct UListEntrySlotConfigurerBase : UListEntrySlotConfigurerFactoryBase {
	char pad_38[0x18]; // 0x38(0x18)
};

// Class ShooterGame.BoxSlotConfigurer
// Size: 0x70 (Inherited: 0x50)
struct UBoxSlotConfigurer : UListEntrySlotConfigurerBase {
	struct FMargin Padding; // 0x50(0x10)
	struct FSlateChildSize Size; // 0x60(0x08)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x68(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x69(0x01)
	char pad_6A[0x6]; // 0x6a(0x06)
};

// Class ShooterGame.BTTask_FollowCustomPath
// Size: 0xb8 (Inherited: 0x78)
struct UBTTask_FollowCustomPath : UBTTaskNode {
	float ReachedNodeAcceptDistXY; // 0x78(0x04)
	float ReachedNodeAcceptDistZ; // 0x7c(0x04)
	enum class ECustomPathFollowStartBehavior StartBehavior; // 0x80(0x01)
	enum class ECustomPathFollowMoveType MoveType; // 0x81(0x01)
	char pad_82[0x6]; // 0x82(0x06)
	struct FBlackboardKeySelector CustomPath; // 0x88(0x30)
};

// Class ShooterGame.BulletWhizByComponent
// Size: 0x120 (Inherited: 0xf8)
struct UBulletWhizByComponent : UBaseProjectileEffectComponent {
	struct UAkAudioEvent* WhizByAudioEvent; // 0xf8(0x08)
	struct FAresWhizBySoundTuning WhizByTuning; // 0x100(0x14)
	struct FName StartBoneName; // 0x114(0x0c)
};

// Class ShooterGame.CanDisarmComponent
// Size: 0xe8 (Inherited: 0xe8)
struct UCanDisarmComponent : UActorComponent {
};

// Class ShooterGame.CapConstants
// Size: 0x30 (Inherited: 0x30)
struct UCapConstants : UObject {
};

// Class ShooterGame.CausedDamageListener
// Size: 0x30 (Inherited: 0x30)
struct UCausedDamageListener : UInterface {
};

// Class ShooterGame.CellularPatch
// Size: 0x6b0 (Inherited: 0x3d0)
struct ACellularPatch : AActor {
	struct URoundPersistenceComponent* Persistence; // 0x3d0(0x08)
	struct USceneComponent* SceneRoot; // 0x3d8(0x08)
	struct UBoxComponent* BoxOverlap; // 0x3e0(0x08)
	float CellSize; // 0x3e8(0x04)
	bool bAxisAligned; // 0x3ec(0x01)
	char pad_3ED[0x3]; // 0x3ed(0x03)
	int32_t MaxNumberOfCells; // 0x3f0(0x04)
	char pad_3F4[0x4]; // 0x3f4(0x04)
	float StepUp; // 0x3f8(0x04)
	float StepDown; // 0x3fc(0x04)
	float InitialFloorSearchRadius; // 0x400(0x04)
	enum class ECollisionChannel CollisionChannel; // 0x404(0x01)
	char pad_405[0x3]; // 0x405(0x03)
	struct FName IgnoreObjectsWithTag; // 0x408(0x0c)
	enum class EPatchType PatchType; // 0x414(0x01)
	bool bDilateHeights; // 0x415(0x01)
	char pad_416[0x2]; // 0x416(0x02)
	int32_t MinimumValidVolume; // 0x418(0x04)
	bool bExtendIntoWalls; // 0x41c(0x01)
	bool bReportSpawnFailure; // 0x41d(0x01)
	bool bTrackPatchOverlaps; // 0x41e(0x01)
	char pad_41F[0x1]; // 0x41f(0x01)
	float PatchOverlapExtent; // 0x420(0x04)
	char pad_424[0x4]; // 0x424(0x04)
	struct FClassInclusionExclusionFilter OverlapFilter; // 0x428(0x50)
	char pad_478[0x8]; // 0x478(0x08)
	struct TArray<struct AActor*> OverlappingActors; // 0x480(0x10)
	struct TMap<struct FIntPoint, struct FPatchNode> NodeMap; // 0x490(0x50)
	struct FVector ForwardVector; // 0x4e0(0x0c)
	struct FVector RightVector; // 0x4ec(0x0c)
	char pad_4F8[0x8]; // 0x4f8(0x08)
	struct FTransform GridTransform; // 0x500(0x30)
	struct FNodeGrid NodeGrid; // 0x530(0x38)
	float OverlapHeight; // 0x568(0x04)
	char pad_56C[0x144]; // 0x56c(0x144)
};

// Class ShooterGame.CeremonyUIData
// Size: 0x90 (Inherited: 0x90)
struct UCeremonyUIData : UBaseContentUIData {
};

// Class ShooterGame.CeremonyDataAsset
// Size: 0x80 (Inherited: 0x50)
struct UCeremonyDataAsset : UAresBasePrimaryDataAsset {
	struct TSoftClassPtr<UObject> UIData; // 0x50(0x30)
};

// Class ShooterGame.CharacterAbilityWidget
// Size: 0x358 (Inherited: 0x338)
struct UCharacterAbilityWidget : UAresTouchWidgetComponent {
	struct AShooterCharacter* OwningCharacter; // 0x338(0x08)
	struct AAresEquippable* Equippable; // 0x340(0x08)
	char pad_348[0x10]; // 0x348(0x10)
};

// Class ShooterGame.CharacterAdvancementComponent
// Size: 0xf0 (Inherited: 0xe8)
struct UCharacterAdvancementComponent : UActorComponent {
	int32_t MaxEnergyForAbilities; // 0xe8(0x04)
	int32_t MaxExperience; // 0xec(0x04)
};

// Class ShooterGame.CharacterHudComponent
// Size: 0x100 (Inherited: 0xe8)
struct UCharacterHudComponent : UActorComponent {
	char pad_E8[0x10]; // 0xe8(0x10)
	bool bDisplayInHud; // 0xf8(0x01)
	char pad_F9[0x3]; // 0xf9(0x03)
	uint32_t DisplayPriority; // 0xfc(0x04)
};

// Class ShooterGame.CharacterHudManagerComponent
// Size: 0xf8 (Inherited: 0xe8)
struct UCharacterHudManagerComponent : UActorComponent {
	struct TArray<struct UCharacterHudComponent*> RegisteredComponents; // 0xe8(0x10)
};

// Class ShooterGame.AresCharacterHUDUIDataAsset
// Size: 0x88 (Inherited: 0x38)
struct UAresCharacterHUDUIDataAsset : UDataAsset {
	struct TMap<struct TSoftClassPtr<UObject>, struct FCharacterHUDUIDataStruct> HUDData; // 0x38(0x50)
};

// Class ShooterGame.CharacterSelectScreen
// Size: 0x2c8 (Inherited: 0x2c8)
struct UCharacterSelectScreen : UDesignableUserWidget {
};

// Class ShooterGame.CharacterShopResponseComponent
// Size: 0xe8 (Inherited: 0xe8)
struct UCharacterShopResponseComponent : UActorComponent {
};

// Class ShooterGame.CharacterSprayComponent
// Size: 0xf0 (Inherited: 0xe8)
struct UCharacterSprayComponent : UActorComponent {
	float MaxSprayDistance; // 0xe8(0x04)
	char pad_EC[0x4]; // 0xec(0x04)
};

// Class ShooterGame.ChatFriendsMetadataManager
// Size: 0x128 (Inherited: 0x80)
struct UChatFriendsMetadataManager : UInitSystem {
	struct FMulticastInlineDelegate OnChatFriendsMetadataUpdated; // 0x80(0x10)
	bool bInitialized; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
	struct UChatFriendsMetadataService* ChatFriendsMetadataService; // 0x98(0x08)
	struct UChatSessionManager* ChatSessionManager; // 0xa0(0x08)
	char pad_A8[0x30]; // 0xa8(0x30)
	struct TMap<struct FString, struct FChatFriendMetadata> FriendMetadataByPuuid; // 0xd8(0x50)
};

// Class ShooterGame.ChatFriendsMetadataService
// Size: 0x38 (Inherited: 0x30)
struct UChatFriendsMetadataService : UObject {
	struct URiotGamesApiClient* RiotGamesApiClient; // 0x30(0x08)
};

// Class ShooterGame.ChatSessionManager
// Size: 0x178 (Inherited: 0x80)
struct UChatSessionManager : UInitSystem {
	struct FMulticastInlineDelegate OnChatSessionConnected; // 0x80(0x10)
	struct FMulticastInlineDelegate OnChatSessionDisconnected; // 0x90(0x10)
	struct FMulticastInlineDelegate OnChatSessionLoaded; // 0xa0(0x10)
	char pad_B0[0x20]; // 0xb0(0x20)
	struct UChatSessionService* ChatSessionService; // 0xd0(0x08)
	char pad_D8[0xa0]; // 0xd8(0xa0)
};

// Class ShooterGame.ChatSessionService
// Size: 0x38 (Inherited: 0x30)
struct UChatSessionService : UObject {
	struct URiotGamesApiClient* RiotGamesApiClient; // 0x30(0x08)
};

// Class ShooterGame.ChatUtils
// Size: 0x30 (Inherited: 0x30)
struct UChatUtils : UObject {
};

// Class ShooterGame.ResourceInteractionStateComponent
// Size: 0x2d0 (Inherited: 0x2c8)
struct UResourceInteractionStateComponent : UScriptStateComponent {
	struct UResourceComponent* ExplicitResourceComponent; // 0x2c8(0x08)
};

// Class ShooterGame.CheckResourcesStateComponent
// Size: 0x2e0 (Inherited: 0x2d0)
struct UCheckResourcesStateComponent : UResourceInteractionStateComponent {
	bool bReportErrorOnFailure; // 0x2d0(0x01)
	char pad_2D1[0x7]; // 0x2d1(0x07)
	struct UScriptStateComponent* FailState; // 0x2d8(0x08)
};

// Class ShooterGame.ChildDamageSectionComponent
// Size: 0x148 (Inherited: 0x148)
struct UChildDamageSectionComponent : UDamageSectionComponent {
};

// Class ShooterGame.ChildRegionDamageSectionComponent
// Size: 0x158 (Inherited: 0x148)
struct UChildRegionDamageSectionComponent : UChildDamageSectionComponent {
	struct TArray<struct UPrimitiveComponent*> DamageRegions; // 0x148(0x10)
};

// Class ShooterGame.ChromaBase
// Size: 0x150 (Inherited: 0x118)
struct UChromaBase : UAresWeaponAttachmentComponent {
	struct FBaseUIData UIData; // 0x118(0x38)
};

// Class ShooterGame.ChromaMatConstants
// Size: 0x230 (Inherited: 0x150)
struct UChromaMatConstants : UChromaBase {
	bool bOverrideAlbedo; // 0x150(0x01)
	char pad_151[0x7]; // 0x151(0x07)
	struct TSoftClassPtr<UObject> Albedo; // 0x158(0x30)
	bool bOverrideMask; // 0x188(0x01)
	char pad_189[0x7]; // 0x189(0x07)
	struct TSoftClassPtr<UObject> Mask; // 0x190(0x30)
	bool bOverrideMRAS; // 0x1c0(0x01)
	char pad_1C1[0x7]; // 0x1c1(0x07)
	struct TSoftClassPtr<UObject> MRAS; // 0x1c8(0x30)
	bool bOverrideNormal; // 0x1f8(0x01)
	char pad_1F9[0x7]; // 0x1f9(0x07)
	struct TSoftClassPtr<UObject> Normal; // 0x200(0x30)
};

// Class ShooterGame.ChromaMatOverride
// Size: 0x160 (Inherited: 0x150)
struct UChromaMatOverride : UChromaBase {
	struct TArray<struct UMaterialInterface*> OverrideMaterials; // 0x150(0x10)
};

// Class ShooterGame.ChromaSkinOverride
// Size: 0x150 (Inherited: 0x150)
struct UChromaSkinOverride : UChromaBase {
};

// Class ShooterGame.CinematicCameraMarker
// Size: 0xa00 (Inherited: 0xa00)
struct ACinematicCameraMarker : ACameraActor {
};

// Class ShooterGame.CinematicsDebugComponent
// Size: 0x108 (Inherited: 0xe8)
struct UCinematicsDebugComponent : UActorComponent {
	struct TArray<struct FCinematicCameraDebugData> DebugClientCinematicCameras; // 0xe8(0x10)
	struct TArray<struct FCinematicCameraDebugData> DebugServerCinematicCameras; // 0xf8(0x10)
};

// Class ShooterGame.CinematicsManagerComponent
// Size: 0x180 (Inherited: 0xe8)
struct UCinematicsManagerComponent : UActorComponent {
	char pad_E8[0x10]; // 0xe8(0x10)
	float DefaultViewBoxSize; // 0xf8(0x04)
	float LookAheadTime; // 0xfc(0x04)
	float FieldOfViewDegreesMax; // 0x100(0x04)
	char pad_104[0x4]; // 0x104(0x04)
	struct TArray<struct FCinematicCameraData> CinematicCameras; // 0x108(0x10)
	char pad_118[0x68]; // 0x118(0x68)
};

// Class ShooterGame.CircleCrosshairHudElement
// Size: 0x180 (Inherited: 0x178)
struct UCircleCrosshairHudElement : UBaseCrosshairHudElement {
	struct UTexture* CrosshairImage; // 0x178(0x08)
};

// Class ShooterGame.ClientPerformanceMonitoringComponent
// Size: 0x1a0 (Inherited: 0x118)
struct UClientPerformanceMonitoringComponent : UBasePerformanceMonitoringComponent {
	struct FMulticastInlineDelegate OnWipeAllInstabilityData; // 0x118(0x10)
	struct FMulticastInlineDelegate OnDeveloperItemRegistered; // 0x128(0x10)
	struct FMulticastInlineDelegate OnDeveloperItemUnregistered; // 0x138(0x10)
	struct FMulticastInlineDelegate OnPopulateDeveloperItems; // 0x148(0x10)
	struct FMulticastInlineDelegate OnClearDeveloperItems; // 0x158(0x10)
	struct UMetricInstabilityTrackingDetails* ServerFramerateInstability; // 0x168(0x08)
	struct UMetricInstabilityTrackingDetails* AveragePing; // 0x170(0x08)
	struct UNetworkOutageInstabilityTrackingDetails* ServerResponsiveness; // 0x178(0x08)
	struct URemoteClientPredictionTrackingDetails* RemoteClientPredicition; // 0x180(0x08)
	struct UMetricInstabilityTrackingDetails* ClientLogInstability; // 0x188(0x08)
	struct UMetricInstabilityTrackingDetails* ServerLogInstability; // 0x190(0x08)
	char pad_198[0x8]; // 0x198(0x08)
};

// Class ShooterGame.ClientPerRoundTelemetryComponent
// Size: 0x1b8 (Inherited: 0xe8)
struct UClientPerRoundTelemetryComponent : UActorComponent {
	char pad_E8[0xd0]; // 0xe8(0xd0)
};

// Class ShooterGame.ClientPlayerStateTelemetryComponent
// Size: 0x290 (Inherited: 0x100)
struct UClientPlayerStateTelemetryComponent : UBasePlayerStateTelemetryComponent {
	char pad_100[0x190]; // 0x100(0x190)
};

// Class ShooterGame.ClientTelemetryPersistence
// Size: 0x68 (Inherited: 0x30)
struct UClientTelemetryPersistence : UObject {
	char pad_30[0x38]; // 0x30(0x38)
};

// Class ShooterGame.CloudMesh
// Size: 0x7e0 (Inherited: 0x5f0)
struct UCloudMesh : UProceduralMeshComponent {
	char pad_5F0[0x8]; // 0x5f0(0x08)
	float CloudBottomOffset; // 0x5f8(0x04)
	float MinDistanceFromCenterClamp; // 0x5fc(0x04)
	float ClientPercentTimePerTick; // 0x600(0x04)
	float ClientMaxTimePerTick; // 0x604(0x04)
	float ServerPerStepTime; // 0x608(0x04)
	float ClientTargetEdgeLength; // 0x60c(0x04)
	float ServerTargetEdgeLength; // 0x610(0x04)
	int32_t ClientNumSmoothingSteps; // 0x614(0x04)
	bool bClientGenerateCollision; // 0x618(0x01)
	char pad_619[0x3]; // 0x619(0x03)
	int32_t ServerNumSmoothingSteps; // 0x61c(0x04)
	bool bServerGenerateCollision; // 0x620(0x01)
	char pad_621[0x3]; // 0x621(0x03)
	int32_t ClientNumMeshes; // 0x624(0x04)
	char pad_628[0x1a0]; // 0x628(0x1a0)
	struct FMulticastInlineDelegate OnCloudMeshGenerated; // 0x7c8(0x10)
	bool bForceFinish; // 0x7d8(0x01)
	char pad_7D9[0x7]; // 0x7d9(0x07)
};

// Class ShooterGame.CoachDebugComponent
// Size: 0x148 (Inherited: 0xe8)
struct UCoachDebugComponent : UActorComponent {
	char pad_E8[0x50]; // 0xe8(0x50)
	struct FName LastCoachTeamName; // 0x138(0x0c)
	char pad_144[0x4]; // 0x144(0x04)
};

// Class ShooterGame.ColorPickerWidget
// Size: 0x2c8 (Inherited: 0x2c8)
struct UColorPickerWidget : UBaseSettingsWidget {
};

// Class ShooterGame.CombatReportTrackingConfigComponent
// Size: 0xf8 (Inherited: 0xe8)
struct UCombatReportTrackingConfigComponent : UActorComponent {
	bool bTrackParticipantkHits; // 0xe8(0x01)
	bool bTrackParticipantDamage; // 0xe9(0x01)
	bool bTrackInteractionHits; // 0xea(0x01)
	bool bTrackInteractionDamage; // 0xeb(0x01)
	bool bTrackDamagedRegionally; // 0xec(0x01)
	bool bTrackArmorBreaks; // 0xed(0x01)
	char pad_EE[0x2]; // 0xee(0x02)
	struct UCombatReportDamagedDisplayConfig* DamagedDisplayConfig; // 0xf0(0x08)
};

// Class ShooterGame.CombatReportComponent
// Size: 0x118 (Inherited: 0xe8)
struct UCombatReportComponent : UActorComponent {
	char pad_E8[0x20]; // 0xe8(0x20)
	struct TArray<struct FRoundReports> Rounds; // 0x108(0x10)
};

// Class ShooterGame.CombatReportDamagedDisplayConfig
// Size: 0x48 (Inherited: 0x30)
struct UCombatReportDamagedDisplayConfig : UObject {
	struct FTextureWrapper DamagedIcon; // 0x30(0x08)
	struct FLinearColor DamagedIconTint; // 0x38(0x10)
};

// Class ShooterGame.CombatReportContentWidget
// Size: 0x2e8 (Inherited: 0x2c8)
struct UCombatReportContentWidget : UUserWidget {
	struct UUserWidget* AbilityCastsReportWidget; // 0x2c8(0x08)
	struct UOverlay* ColumnNamesOverlay; // 0x2d0(0x08)
	struct UVerticalBox* InteractionListBox; // 0x2d8(0x08)
	struct UUserWidget* KilledByWidget; // 0x2e0(0x08)
};

// Class ShooterGame.CombatReportHUDElementBase
// Size: 0x2d0 (Inherited: 0x2c8)
struct UCombatReportHUDElementBase : UUserWidget {
	struct UCombatReportContentWidget* CombatReportContentWidget; // 0x2c8(0x08)
};

// Class ShooterGame.CombatTracker
// Size: 0x30 (Inherited: 0x30)
struct UCombatTracker : UInterface {
};

// Class ShooterGame.CommsUtils
// Size: 0x30 (Inherited: 0x30)
struct UCommsUtils : UObject {
};

// Class ShooterGame.CompetitiveSeasonDataAsset
// Size: 0x230 (Inherited: 0x50)
struct UCompetitiveSeasonDataAsset : UAresBasePrimaryDataAsset {
	struct TSoftClassPtr<UObject> UIData; // 0x50(0x30)
	struct TSoftClassPtr<UObject> Season; // 0x80(0x30)
	struct TArray<struct UEditableReward*> IronRewards; // 0xb0(0x10)
	struct TArray<struct UEditableReward*> BronzeRewards; // 0xc0(0x10)
	struct TArray<struct UEditableReward*> SilverRewards; // 0xd0(0x10)
	struct TArray<struct UEditableReward*> GoldRewards; // 0xe0(0x10)
	struct TArray<struct UEditableReward*> PlatinumRewards; // 0xf0(0x10)
	struct TArray<struct UEditableReward*> DiamondRewards; // 0x100(0x10)
	struct TArray<struct UEditableReward*> AscendantRewards; // 0x110(0x10)
	struct TArray<struct UEditableReward*> ImmortalRewards; // 0x120(0x10)
	struct TArray<struct UEditableReward*> RadiantRewards; // 0x130(0x10)
	struct TArray<struct FActRankBorderInstance> Borders; // 0x140(0x10)
	struct FDateTime StartTime; // 0x150(0x08)
	struct FDateTime EndTime; // 0x158(0x08)
	struct UDataTable* CompetitiveTierDataTable; // 0x160(0x08)
	struct FCompetitiveSeasonConfig Config; // 0x168(0x78)
	struct TMap<struct TSoftClassPtr<UObject>, struct FCompetitiveSeasonArchives> Archives; // 0x1e0(0x50)
};

// Class ShooterGame.CompetitiveSeasonUIData
// Size: 0x90 (Inherited: 0x90)
struct UCompetitiveSeasonUIData : UBaseContentUIData {
};

// Class ShooterGame.CompetitiveTierUpdater
// Size: 0x40 (Inherited: 0x30)
struct UCompetitiveTierUpdater : UObject {
	struct UPartyManager* PartyManager; // 0x30(0x08)
	struct UMMRManager* MMRManager; // 0x38(0x08)
};

// Class ShooterGame.ConcatenatedListModel
// Size: 0x60 (Inherited: 0x48)
struct UConcatenatedListModel : UOrderedListModelBase {
	struct TArray<struct FConcatenatedListModel_Entry> ListModels; // 0x48(0x10)
	char pad_58[0x8]; // 0x58(0x08)
};

// Class ShooterGame.ConditionalLoopAnimationConductorNode
// Size: 0xd0 (Inherited: 0xa8)
struct UConditionalLoopAnimationConductorNode : UAnimationConductorNodeBase {
	struct TScriptInterface<IAnimationConductorNode> ChildNode; // 0xa8(0x10)
	char pad_B8[0x18]; // 0xb8(0x18)
};

// Class ShooterGame.ConfigManager
// Size: 0x208 (Inherited: 0x80)
struct UConfigManager : UInitSystem {
	char pad_80[0x18]; // 0x80(0x18)
	struct FMulticastInlineDelegate OnAnyConfigUpdated; // 0x98(0x10)
	char pad_A8[0x8]; // 0xa8(0x08)
	struct FString ConfigEnvironment; // 0xb0(0x10)
	struct FString ServiceEndpoint; // 0xc0(0x10)
	struct TMap<struct FName, struct FString> Configuration; // 0xd0(0x50)
	struct TMap<struct FName, struct FString> CheatConfiguration; // 0x120(0x50)
	char pad_170[0x50]; // 0x170(0x50)
	struct FDateTime LastAttempt; // 0x1c0(0x08)
	struct UConfigService* ConfigService; // 0x1c8(0x08)
	struct UPlatformInitSettingsManager* PlatformInitSettingsManager; // 0x1d0(0x08)
	struct URSOManager* RSOManager; // 0x1d8(0x08)
	struct URiotClientConfigManager* RiotClientConfigManager; // 0x1e0(0x08)
	struct UPlayerAffinityManager* PlayerAffinityManager; // 0x1e8(0x08)
	char pad_1F0[0x18]; // 0x1f0(0x18)
};

// Class ShooterGame.ConfigService
// Size: 0x58 (Inherited: 0x30)
struct UConfigService : UObject {
	struct FString ConfigEndpoint; // 0x30(0x10)
	struct FString PlatformEnvironment; // 0x40(0x10)
	char pad_50[0x8]; // 0x50(0x08)
};

// Class ShooterGame.ConfigurationComponent
// Size: 0x108 (Inherited: 0xe8)
struct UConfigurationComponent : UActorComponent {
	struct TArray<struct FSkinParam> Params; // 0xe8(0x10)
	struct TArray<struct TSoftClassPtr<UObject>> AttachmentsToAdd; // 0xf8(0x10)
};

// Class ShooterGame.ConnectionFogOfWarDebugComponent
// Size: 0x158 (Inherited: 0xe8)
struct UConnectionFogOfWarDebugComponent : UActorComponent {
	struct TArray<struct FFoWDatabaseEntry> Database; // 0xe8(0x10)
	char pad_F8[0x60]; // 0xf8(0x60)
};

// Class ShooterGame.ConsumeResourcesStateComponent
// Size: 0x2f0 (Inherited: 0x2d0)
struct UConsumeResourcesStateComponent : UResourceInteractionStateComponent {
	struct UStateComponent* FailState; // 0x2d0(0x08)
	bool bShouldReportAbilityCast; // 0x2d8(0x01)
	char pad_2D9[0x7]; // 0x2d9(0x07)
	struct FMulticastInlineDelegate OnAbilityUsed; // 0x2e0(0x10)
};

// Class ShooterGame.ContentFilter
// Size: 0x88 (Inherited: 0x30)
struct UContentFilter : UObject {
	bool bIsMultiValued; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FText Name; // 0x38(0x18)
	struct UTexture* Icon; // 0x50(0x08)
	struct FName ConfigFlagKey; // 0x58(0x0c)
	bool ConfigFlagDefaultValue; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
	struct FString TelemetryName; // 0x68(0x10)
	struct TArray<struct UBaseContentFilterCriterion*> Criteria; // 0x78(0x10)
};

// Class ShooterGame.BaseContentFilterCriterion
// Size: 0x78 (Inherited: 0x30)
struct UBaseContentFilterCriterion : UObject {
	struct FText Name; // 0x30(0x18)
	struct UTexture* Icon; // 0x48(0x08)
	struct FMulticastInlineDelegate OnCriterionEnabled; // 0x50(0x10)
	struct FMulticastInlineDelegate OnCriterionChanged; // 0x60(0x10)
	bool bEnabled; // 0x70(0x01)
	bool bEnabledTransient; // 0x71(0x01)
	bool bHasTransientState; // 0x72(0x01)
	char pad_73[0x5]; // 0x73(0x05)
};

// Class ShooterGame.ContentFilterFavoriteCriterion
// Size: 0x78 (Inherited: 0x78)
struct UContentFilterFavoriteCriterion : UBaseContentFilterCriterion {
};

// Class ShooterGame.ContentFilterNonFavoriteCriterion
// Size: 0x78 (Inherited: 0x78)
struct UContentFilterNonFavoriteCriterion : UBaseContentFilterCriterion {
};

// Class ShooterGame.SelectTierCriterion
// Size: 0x78 (Inherited: 0x78)
struct USelectTierCriterion : UBaseContentFilterCriterion {
};

// Class ShooterGame.DeluxeTierCriterion
// Size: 0x78 (Inherited: 0x78)
struct UDeluxeTierCriterion : UBaseContentFilterCriterion {
};

// Class ShooterGame.PremiumTierCriterion
// Size: 0x78 (Inherited: 0x78)
struct UPremiumTierCriterion : UBaseContentFilterCriterion {
};

// Class ShooterGame.UltraTierCriterion
// Size: 0x78 (Inherited: 0x78)
struct UUltraTierCriterion : UBaseContentFilterCriterion {
};

// Class ShooterGame.ExclusiveTierCriterion
// Size: 0x78 (Inherited: 0x78)
struct UExclusiveTierCriterion : UBaseContentFilterCriterion {
};

// Class ShooterGame.OwnedCriterion
// Size: 0x78 (Inherited: 0x78)
struct UOwnedCriterion : UBaseContentFilterCriterion {
};

// Class ShooterGame.NotOwnedCriterion
// Size: 0x78 (Inherited: 0x78)
struct UNotOwnedCriterion : UBaseContentFilterCriterion {
};

// Class ShooterGame.ContentFilterDialog
// Size: 0x2c8 (Inherited: 0x2c8)
struct UContentFilterDialog : UUserWidget {
};

// Class ShooterGame.ContentFilterUITelemetryManager
// Size: 0x60 (Inherited: 0x30)
struct UContentFilterUITelemetryManager : UObject {
	char pad_30[0x10]; // 0x30(0x10)
	struct URSOManager* RSOManager; // 0x40(0x08)
	struct UPlatformSessionManager* SessionManager; // 0x48(0x08)
	struct UTelemetryManager* TelemetryManager; // 0x50(0x08)
	struct UConfigManager* ConfigManager; // 0x58(0x08)
};

// Class ShooterGame.ContentFilterViewController
// Size: 0x88 (Inherited: 0x30)
struct UContentFilterViewController : UObject {
	struct TMap<struct FString, struct UContentFilterViewModel*> ModelsById; // 0x30(0x50)
	struct UConfigManager* ConfigManager; // 0x80(0x08)
};

// Class ShooterGame.ContentFilterViewModel
// Size: 0x58 (Inherited: 0x30)
struct UContentFilterViewModel : UObject {
	char pad_30[0x10]; // 0x30(0x10)
	struct TArray<struct UContentFilter*> Filters; // 0x40(0x10)
	bool bIsNew; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// Class ShooterGame.ContentFilterWidget
// Size: 0x2c8 (Inherited: 0x2c8)
struct UContentFilterWidget : UUserWidget {
};

// Class ShooterGame.BaseHandle
// Size: 0x48 (Inherited: 0x30)
struct UBaseHandle : UObject {
	struct UAresBasePrimaryDataAsset* BaseDataAsset; // 0x30(0x08)
	struct UBaseContentUIData* BaseUIData; // 0x38(0x08)
	struct UBaseInventoryModel* BaseInventoryModel; // 0x40(0x08)
};

// Class ShooterGame.EquippableSkinChromaHandle
// Size: 0x70 (Inherited: 0x48)
struct UEquippableSkinChromaHandle : UBaseHandle {
	struct UEquippableSkinChromaDataAsset* DataAsset; // 0x48(0x08)
	struct UEquippableSkinChromaUIData* UIData; // 0x50(0x08)
	struct UEquippableSkinChromaInventoryModel* InventoryModel; // 0x58(0x08)
	struct USidegradeModel* SidegradeModel; // 0x60(0x08)
	struct UStreamedVideoDataAsset* StreamedVideo; // 0x68(0x08)
};

// Class ShooterGame.EquippableSkinLevelHandle
// Size: 0x68 (Inherited: 0x48)
struct UEquippableSkinLevelHandle : UBaseHandle {
	struct UEquippableSkinLevelDataAsset* DataAsset; // 0x48(0x08)
	struct UEquippableSkinLevelUIData* UIData; // 0x50(0x08)
	struct UEquippableSkinLevelInventoryModel* InventoryModel; // 0x58(0x08)
	struct UStreamedVideoDataAsset* StreamedVideo; // 0x60(0x08)
};

// Class ShooterGame.EquippableSkinHandle
// Size: 0x128 (Inherited: 0x48)
struct UEquippableSkinHandle : UBaseHandle {
	struct UEquippableSkinDataAsset* DataAsset; // 0x48(0x08)
	struct UEquippableSkinUIData* UIData; // 0x50(0x08)
	struct UEquippableSkinInventoryModel* InventoryModel; // 0x58(0x08)
	struct UEquippableSkinChromaHandle* EquippedChroma; // 0x60(0x08)
	struct UEquippableSkinChromaHandle* DefaultChroma; // 0x68(0x08)
	struct TMap<struct UEquippableSkinChromaDataAsset*, struct UEquippableSkinChromaHandle*> Chromas; // 0x70(0x50)
	struct TMap<struct UEquippableSkinLevelDataAsset*, struct UEquippableSkinLevelHandle*> Levels; // 0xc0(0x50)
	struct UThemeHandle* Theme; // 0x110(0x08)
	struct UContentTierHandle* ContentTier; // 0x118(0x08)
	struct UTexture2D* Wallpaper; // 0x120(0x08)
};

// Class ShooterGame.ThemeHandle
// Size: 0xa8 (Inherited: 0x48)
struct UThemeHandle : UBaseHandle {
	struct UThemeDataAsset* DataAsset; // 0x48(0x08)
	struct UThemeUIData* UIData; // 0x50(0x08)
	struct TMap<struct UEquippableSkinDataAsset*, struct UEquippableSkinHandle*> Skins; // 0x58(0x50)
};

// Class ShooterGame.EquippableAttachmentHandle
// Size: 0x58 (Inherited: 0x48)
struct UEquippableAttachmentHandle : UBaseHandle {
	struct UEquippableAttachmentUIData* UIData; // 0x48(0x08)
	struct UEquippableAttachmentInventoryModel* InventoryModel; // 0x50(0x08)
};

// Class ShooterGame.EquippableHandle
// Size: 0x110 (Inherited: 0x48)
struct UEquippableHandle : UBaseHandle {
	struct UEquippableDataAsset* DataAsset; // 0x48(0x08)
	struct UEquippableUIData* UIData; // 0x50(0x08)
	struct UEquippableInventoryModel* InventoryModel; // 0x58(0x08)
	struct TMap<struct UEquippableAttachmentDataAsset*, struct UEquippableAttachmentHandle*> Attachments; // 0x60(0x50)
	struct TMap<struct UEquippableSkinDataAsset*, struct UEquippableSkinHandle*> Skins; // 0xb0(0x50)
	struct UEquippableSkinHandle* EquippedSkin; // 0x100(0x08)
	struct UEquippableCharmInstanceHandle* EquippedCharmInstance; // 0x108(0x08)
};

// Class ShooterGame.SprayLevelHandle
// Size: 0x68 (Inherited: 0x48)
struct USprayLevelHandle : UBaseHandle {
	struct USprayLevelDataAsset* DataAsset; // 0x48(0x08)
	struct USprayLevelUIData* UIData; // 0x50(0x08)
	struct USprayLevelInventoryModel* InventoryModel; // 0x58(0x08)
	struct AAresSpray* SprayActor; // 0x60(0x08)
};

// Class ShooterGame.SprayHandle
// Size: 0xb0 (Inherited: 0x48)
struct USprayHandle : UBaseHandle {
	struct USprayDataAsset* DataAsset; // 0x48(0x08)
	struct USprayUIData* UIData; // 0x50(0x08)
	struct USprayInventoryModel* InventoryModel; // 0x58(0x08)
	struct TMap<struct USprayLevelDataAsset*, struct USprayLevelHandle*> Levels; // 0x60(0x50)
};

// Class ShooterGame.SprayEquipSlotHandle
// Size: 0x68 (Inherited: 0x48)
struct USprayEquipSlotHandle : UBaseHandle {
	struct USprayEquipSlotDataAsset* DataAsset; // 0x48(0x08)
	struct USprayEquipSlotUIData* UIData; // 0x50(0x08)
	struct USprayEquipSlotInventoryModel* InventoryModel; // 0x58(0x08)
	struct USprayHandle* EquippedSpray; // 0x60(0x08)
};

// Class ShooterGame.CharacterRoleHandle
// Size: 0x50 (Inherited: 0x48)
struct UCharacterRoleHandle : UBaseHandle {
	struct UCharacterRoleUIData* UIData; // 0x48(0x08)
};

// Class ShooterGame.CharacterHandle
// Size: 0x80 (Inherited: 0x48)
struct UCharacterHandle : UBaseHandle {
	struct UCharacterDataAsset* DataAsset; // 0x48(0x08)
	struct UCharacterUIData* UIData; // 0x50(0x08)
	struct UCharacterRoleHandle* Role; // 0x58(0x08)
	struct UContractV2Handle* Contract; // 0x60(0x08)
	struct UTexture2D* FullPortrait; // 0x68(0x08)
	struct UTexture2D* CharacterBackground; // 0x70(0x08)
	struct UCharacterInventoryModel* InventoryModel; // 0x78(0x08)
};

// Class ShooterGame.CurrencyHandle
// Size: 0x60 (Inherited: 0x48)
struct UCurrencyHandle : UBaseHandle {
	struct UCurrencyDataAsset* DataAsset; // 0x48(0x08)
	struct UCurrencyUIData* UIData; // 0x50(0x08)
	struct UCurrencyInventoryModel* InventoryModel; // 0x58(0x08)
};

// Class ShooterGame.JuiceBoxHandle
// Size: 0x60 (Inherited: 0x48)
struct UJuiceBoxHandle : UBaseHandle {
	struct UJuiceBoxDataAsset* DataAsset; // 0x48(0x08)
	struct UJuiceBoxUIData* UIData; // 0x50(0x08)
	struct UJuiceBoxInventoryModel* InventoryModel; // 0x58(0x08)
};

// Class ShooterGame.MapHandle
// Size: 0x58 (Inherited: 0x48)
struct UMapHandle : UBaseHandle {
	struct UMapDataAsset* DataAsset; // 0x48(0x08)
	struct UMapUIData* UIData; // 0x50(0x08)
};

// Class ShooterGame.GameModeHandle
// Size: 0x58 (Inherited: 0x48)
struct UGameModeHandle : UBaseHandle {
	struct UGameModeDataAsset* DataAsset; // 0x48(0x08)
	struct UGameModeUIData* UIData; // 0x50(0x08)
};

// Class ShooterGame.MatchmakingQueueHandle
// Size: 0x58 (Inherited: 0x48)
struct UMatchmakingQueueHandle : UBaseHandle {
	struct UMatchmakingQueueDataAsset* DataAsset; // 0x48(0x08)
	struct UMatchmakingQueueUIData* UIData; // 0x50(0x08)
};

// Class ShooterGame.EquippableCharmHandle
// Size: 0xb0 (Inherited: 0x48)
struct UEquippableCharmHandle : UBaseHandle {
	struct UEquippableCharmDataAsset* DataAsset; // 0x48(0x08)
	struct UEquippableCharmUIData* UIData; // 0x50(0x08)
	struct UEquippableCharmInventoryModel* InventoryModel; // 0x58(0x08)
	struct TMap<struct UEquippableCharmLevelDataAsset*, struct UEquippableCharmLevelHandle*> Levels; // 0x60(0x50)
};

// Class ShooterGame.EquippableCharmLevelHandle
// Size: 0x60 (Inherited: 0x48)
struct UEquippableCharmLevelHandle : UBaseHandle {
	struct UEquippableCharmLevelDataAsset* DataAsset; // 0x48(0x08)
	struct UEquippableCharmLevelUIData* UIData; // 0x50(0x08)
	struct UEquippableCharmLevelInventoryModel* InventoryModel; // 0x58(0x08)
};

// Class ShooterGame.EquippableCharmInstanceHandle
// Size: 0x70 (Inherited: 0x48)
struct UEquippableCharmInstanceHandle : UBaseHandle {
	struct FGuid InstanceId; // 0x48(0x10)
	struct UEquippableCharmInstanceInventoryModel* InventoryModel; // 0x58(0x08)
	struct UEquippableCharmHandle* CharmHandle; // 0x60(0x08)
	struct UEquippableCharmLevelHandle* CurrentLevelHandle; // 0x68(0x08)
};

// Class ShooterGame.PlayerCardHandle
// Size: 0x90 (Inherited: 0x48)
struct UPlayerCardHandle : UBaseHandle {
	struct UPlayerCardDataAsset* DataAsset; // 0x48(0x08)
	struct UPlayerCardUIData* UIData; // 0x50(0x08)
	struct UPlayerCardInventoryModel* InventoryModel; // 0x58(0x08)
	struct UTexture2D* LargeArt; // 0x60(0x08)
	struct UTexture2D* WideArt; // 0x68(0x08)
	struct UTexture2D* SmallArt; // 0x70(0x08)
	struct UMaterial* LargeMaterial; // 0x78(0x08)
	struct UMaterial* WideMaterial; // 0x80(0x08)
	struct UMaterial* SmallMaterial; // 0x88(0x08)
};

// Class ShooterGame.StorefrontItemHandle
// Size: 0x58 (Inherited: 0x48)
struct UStorefrontItemHandle : UBaseHandle {
	struct UStorefrontItemDataAsset* DataAsset; // 0x48(0x08)
	struct UStorefrontItemUIData* UIData; // 0x50(0x08)
};

// Class ShooterGame.ObjectiveHandle
// Size: 0x58 (Inherited: 0x48)
struct UObjectiveHandle : UBaseHandle {
	struct UObjectiveDataAsset* DataAsset; // 0x48(0x08)
	struct UObjectiveUIData* UIData; // 0x50(0x08)
};

// Class ShooterGame.MissionHandle
// Size: 0xa8 (Inherited: 0x48)
struct UMissionHandle : UBaseHandle {
	struct UMissionDataAsset* DataAsset; // 0x48(0x08)
	struct UMissionUIData* UIData; // 0x50(0x08)
	struct TMap<struct UObjectiveDataAsset*, struct UObjectiveHandle*> Objectives; // 0x58(0x50)
};

// Class ShooterGame.ArmorHandle
// Size: 0x58 (Inherited: 0x48)
struct UArmorHandle : UBaseHandle {
	struct UArmorDataAsset* DataAsset; // 0x48(0x08)
	struct UArmorUIData* UIData; // 0x50(0x08)
};

// Class ShooterGame.PlayerTitleHandle
// Size: 0x60 (Inherited: 0x48)
struct UPlayerTitleHandle : UBaseHandle {
	struct UPlayerTitleDataAsset* DataAsset; // 0x48(0x08)
	struct UPlayerTitleUIData* UIData; // 0x50(0x08)
	struct UPlayerTitleInventoryModel* InventoryModel; // 0x58(0x08)
};

// Class ShooterGame.ContractV2Handle
// Size: 0x58 (Inherited: 0x48)
struct UContractV2Handle : UBaseHandle {
	struct UContractDataAssetV2* DataAsset; // 0x48(0x08)
	struct UContractUIData* UIData; // 0x50(0x08)
};

// Class ShooterGame.ContentTierHandle
// Size: 0x58 (Inherited: 0x48)
struct UContentTierHandle : UBaseHandle {
	struct UContentTierDataAsset* DataAsset; // 0x48(0x08)
	struct UContentTierUIData* UIData; // 0x50(0x08)
};

// Class ShooterGame.ActRankBorderHandle
// Size: 0x58 (Inherited: 0x48)
struct UActRankBorderHandle : UBaseHandle {
	struct UActRankBorderDataAsset* DataAsset; // 0x48(0x08)
	struct UActRankBorderUIData* UIData; // 0x50(0x08)
};

// Class ShooterGame.SubscriptionHandle
// Size: 0x58 (Inherited: 0x48)
struct USubscriptionHandle : UBaseHandle {
	struct USubscriptionDataAsset* DataAsset; // 0x48(0x08)
	struct USubscriptionUIData* UIData; // 0x50(0x08)
};

// Class ShooterGame.SeasonHandle
// Size: 0x60 (Inherited: 0x48)
struct USeasonHandle : UBaseHandle {
	struct USeasonDataAsset* DataAsset; // 0x48(0x08)
	struct USeasonHandle* ParentSeasonHandle; // 0x50(0x08)
	struct USeasonUIData* UIData; // 0x58(0x08)
};

// Class ShooterGame.CompetitiveSeasonHandle
// Size: 0xb0 (Inherited: 0x48)
struct UCompetitiveSeasonHandle : UBaseHandle {
	struct UCompetitiveSeasonDataAsset* DataAsset; // 0x48(0x08)
	struct USeasonDataAsset* Season; // 0x50(0x08)
	struct UCompetitiveSeasonUIData* UIData; // 0x58(0x08)
	struct TMap<struct UActRankBorderDataAsset*, struct UActRankBorderHandle*> Borders; // 0x60(0x50)
};

// Class ShooterGame.PremierSeasonHandle
// Size: 0x68 (Inherited: 0x48)
struct UPremierSeasonHandle : UBaseHandle {
	struct UPremierSeasonDataAsset* DataAsset; // 0x48(0x08)
	struct UCompetitiveSeasonDataAsset* CompetitiveSeason; // 0x50(0x08)
	struct USeasonDataAsset* Season; // 0x58(0x08)
	struct UPremierSeasonUIData* UIData; // 0x60(0x08)
};

// Class ShooterGame.LevelBorderHandle
// Size: 0x60 (Inherited: 0x48)
struct ULevelBorderHandle : UBaseHandle {
	struct ULevelBorderDataAsset* DataAsset; // 0x48(0x08)
	struct ULevelBorderUIData* UIData; // 0x50(0x08)
	struct ULevelBorderInventoryModel* InventoryModel; // 0x58(0x08)
};

// Class ShooterGame.EventHandle
// Size: 0x60 (Inherited: 0x48)
struct UEventHandle : UBaseHandle {
	struct UEventDataAsset* DataAsset; // 0x48(0x08)
	struct UEventUIData* UIData; // 0x50(0x08)
	struct UEventModel* EventModel; // 0x58(0x08)
};

// Class ShooterGame.TournamentsTeamIconHandle
// Size: 0x58 (Inherited: 0x48)
struct UTournamentsTeamIconHandle : UBaseHandle {
	struct UTournamentsTeamIconDataAsset* DataAsset; // 0x48(0x08)
	struct UTournamentsTeamIconUIData* UIData; // 0x50(0x08)
};

// Class ShooterGame.MassRewardsCeremonyHandle
// Size: 0x58 (Inherited: 0x48)
struct UMassRewardsCeremonyHandle : UBaseHandle {
	struct UMassRewardsCeremonyDataAsset* DataAsset; // 0x48(0x08)
	struct UMassRewardsCeremonyUIData* UIData; // 0x50(0x08)
};

// Class ShooterGame.ContentIndex
// Size: 0xf10 (Inherited: 0xe8)
struct UContentIndex : UActorComponent {
	bool bContentInitialized; // 0xe8(0x01)
	char pad_E9[0x7]; // 0xe9(0x07)
	struct TMap<struct FGuid, struct FEquippableData> Equippables; // 0xf0(0x50)
	struct TMap<struct FGuid, struct FEquippableSkinData> ServiceIdToEquippableSkin; // 0x140(0x50)
	struct TMap<struct FGuid, struct FEquippableSkinLevelData> ServiceIdToEquippableSkinLevel; // 0x190(0x50)
	struct TMap<struct FGuid, struct FEquippableAttachmentData> ServiceIdToEquippableAttachment; // 0x1e0(0x50)
	struct TMap<struct FGuid, struct FEquippableSkinChromaData> ServiceIdToEquippableSkinChroma; // 0x230(0x50)
	struct TMap<struct FGuid, struct FThemeData> ServiceIdToTheme; // 0x280(0x50)
	struct TMap<struct FGuid, struct FSocketData> ServiceIdToSocket; // 0x2d0(0x50)
	struct TMap<struct FGuid, struct FCharacterData> ServiceIdToCharacter; // 0x320(0x50)
	struct TMap<struct FGuid, struct FCharacterRoleData> ServiceIdToCharacterRole; // 0x370(0x50)
	struct TMap<struct FGuid, struct FSprayData> ServiceIdToSpray; // 0x3c0(0x50)
	struct TMap<struct FGuid, struct FSprayLevelData> ServiceIdToSprayLevel; // 0x410(0x50)
	struct TMap<struct FGuid, struct FSprayEquipSlotData> ServiceIdToSprayEquipSlot; // 0x460(0x50)
	struct TMap<struct FGuid, struct FMapData> ServiceIdToMap; // 0x4b0(0x50)
	struct TMap<struct FGuid, struct FGameModeData> ServiceIdToGameMode; // 0x500(0x50)
	struct TMap<struct TSoftClassPtr<UObject>, struct FGameModeData> ShooterGameModeToGameModeData; // 0x550(0x50)
	struct TMap<struct FGuid, struct FEquippableCharmData> ServiceIdToEquippableCharm; // 0x5a0(0x50)
	struct TMap<struct FGuid, struct FEquippableCharmLevelData> ServiceIdToEquippableCharmLevel; // 0x5f0(0x50)
	struct TMap<struct FName, struct FGuid> CharacterDeveloperNameToServiceId; // 0x640(0x50)
	struct TMap<struct FName, struct FGuid> CharacterShippingNameToServiceId; // 0x690(0x50)
	struct TMap<struct FGuid, struct FCurrencyData> ServiceIdToCurrency; // 0x6e0(0x50)
	struct TMap<struct FGuid, struct FJuiceBoxData> ServiceIdToJuiceBox; // 0x730(0x50)
	struct TMap<struct FGuid, struct FPlayerCardData> ServiceIdToPlayerCard; // 0x780(0x50)
	struct TMap<struct FGuid, struct FMissionData> ServiceIdToMission; // 0x7d0(0x50)
	struct TMap<struct TSoftClassPtr<UObject>, struct FMissionData> MissionActorToMission; // 0x820(0x50)
	struct TMap<struct FGuid, struct FObjectiveData> ServiceIdToObjective; // 0x870(0x50)
	struct TMap<struct TSoftClassPtr<UObject>, struct FObjectiveData> ObjectiveComponentToObjective; // 0x8c0(0x50)
	struct TMap<struct FGuid, struct FStorefrontItemData> ServiceIdToStorefrontItem; // 0x910(0x50)
	struct TMap<struct FGuid, struct FArmorData> ServiceIdToArmor; // 0x960(0x50)
	struct TMap<struct FGuid, struct FPlayerTitleData> ServiceIdToPlayerTitle; // 0x9b0(0x50)
	struct TMap<struct FGuid, struct FContractV2Data> ServiceIdToContractV2; // 0xa00(0x50)
	struct TMap<struct FGuid, struct FContentTierData> ServiceIdToContentTier; // 0xa50(0x50)
	struct TMap<struct FGuid, struct FSeasonData> ServiceIdToSeason; // 0xaa0(0x50)
	struct TMap<struct FGuid, struct FCompetitiveSeasonData> ServiceIdToCompetitiveSeason; // 0xaf0(0x50)
	struct TMap<struct FGuid, struct FPremierSeasonData> ServiceIdToPremierSeason; // 0xb40(0x50)
	struct TMap<struct FGuid, struct FActRankBorderData> ServiceIdToActRankBorder; // 0xb90(0x50)
	struct TArray<struct ULevelBorderDataAsset*> LevelToBorder; // 0xbe0(0x10)
	struct TMap<struct FGuid, struct FStreamedVideoData> ServiceIdToStreamedVideo; // 0xbf0(0x50)
	struct TMap<struct FGuid, struct FMatchmakingQueueData> ServiceIdToMatchmakingQueue; // 0xc40(0x50)
	struct TMap<struct FString, struct FMatchmakingQueueData> QueueIdToMatchmakingQueue; // 0xc90(0x50)
	struct TMap<struct FGuid, struct FLevelBorderData> ServiceIdToLevelBorder; // 0xce0(0x50)
	struct TMap<struct FGuid, struct FAresEventData> ServiceIdToEvent; // 0xd30(0x50)
	struct TMap<struct FGuid, struct FTournamentsTeamIconData> ServiceIdToTournamentsTeamIcon; // 0xd80(0x50)
	struct TMap<struct FGuid, struct FMassRewardsCeremonyData> ServiceIdToMassRewardsCeremony; // 0xdd0(0x50)
	struct TMap<struct FGuid, struct FSubscriptionData> ServiceIdToSubscription; // 0xe20(0x50)
	struct TMap<struct FGuid, struct FArchiveData> ServiceIdToArchive; // 0xe70(0x50)
	struct TMap<struct FGuid, struct USubscriptionDataAsset*> EntitlementTypeIDToSubscription; // 0xec0(0x50)
};

// Class ShooterGame.ContentIndexManager
// Size: 0x88 (Inherited: 0x80)
struct UContentIndexManager : UInitSystem {
	struct UContentIndex* ContentIndex; // 0x80(0x08)
};

// Class ShooterGame.ContentItemsView
// Size: 0x2e0 (Inherited: 0x2c8)
struct UContentItemsView : UDesignableUserWidget {
	struct UUserWidget* EntryWidgetClass; // 0x2c8(0x08)
	struct UMutableEntryTileView* MutableEntryTileView; // 0x2d0(0x08)
	struct UOverlay* ItemsViewOverlay; // 0x2d8(0x08)
};

// Class ShooterGame.ContentLibrary
// Size: 0x30 (Inherited: 0x30)
struct UContentLibrary : UBlueprintFunctionLibrary {
};

// Class ShooterGame.ContentManager
// Size: 0x298 (Inherited: 0x80)
struct UContentManager : UInitSystem {
	struct FMulticastInlineDelegate ContentUpdatedCallback; // 0x80(0x10)
	char pad_90[0x38]; // 0x90(0x38)
	struct URSOManager* RSOManager; // 0xc8(0x08)
	struct UContentService* ContentService; // 0xd0(0x08)
	struct UConfigManager* ConfigManager; // 0xd8(0x08)
	struct UContentIndex* ContentIndex; // 0xe0(0x08)
	struct UPlatformSessionManager* PlatformSessionManager; // 0xe8(0x08)
	char pad_F0[0x90]; // 0xf0(0x90)
	struct TMap<enum class EAresSeasonType, struct USeasonDataAsset*> ActiveSeasons; // 0x180(0x50)
	struct TMap<struct USeasonDataAsset*, struct FDateTime> SeasonEndTimes; // 0x1d0(0x50)
	struct TSet<struct UEventDataAsset*> ActiveEvents; // 0x220(0x50)
	char pad_270[0x28]; // 0x270(0x28)
};

// Class ShooterGame.ContentService
// Size: 0x38 (Inherited: 0x30)
struct UContentService : UObject {
	struct UConfigManager* ConfigManager; // 0x30(0x08)
};

// Class ShooterGame.ContentTierUIData
// Size: 0xd0 (Inherited: 0x90)
struct UContentTierUIData : UBaseContentUIData {
	struct FSlateColor HighlightColor; // 0x90(0x28)
	struct FText DisplayNameAbbreviatedAllCaps; // 0xb8(0x18)
};

// Class ShooterGame.ContentTierDataAsset
// Size: 0x90 (Inherited: 0x50)
struct UContentTierDataAsset : UAresBasePrimaryDataAsset {
	struct TSoftClassPtr<UObject> UIData; // 0x50(0x30)
	int32_t TierRank; // 0x80(0x04)
	int32_t JuiceValue; // 0x84(0x04)
	int32_t JuiceCost; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
};

// Class ShooterGame.ContractUIData
// Size: 0x90 (Inherited: 0x90)
struct UContractUIData : UBaseContentUIData {
};

// Class ShooterGame.ContractDataAssetV2Content
// Size: 0x30 (Inherited: 0x30)
struct UContractDataAssetV2Content : UObject {
};

// Class ShooterGame.ContractDataAssetV2ContentNPE
// Size: 0x40 (Inherited: 0x30)
struct UContractDataAssetV2ContentNPE : UContractDataAssetV2Content {
	struct TArray<struct FContractDataAssetV2SpecialChapter> Chapters; // 0x30(0x10)
};

// Class ShooterGame.ContractDataAssetV2ContentCharacter
// Size: 0x70 (Inherited: 0x30)
struct UContractDataAssetV2ContentCharacter : UContractDataAssetV2Content {
	struct TSoftClassPtr<UObject> RelatedCharacter; // 0x30(0x30)
	struct TArray<struct FContractDataAssetV2SpecialChapter> Chapters; // 0x60(0x10)
};

// Class ShooterGame.ContractDataAssetV2ContentBattlepass
// Size: 0x88 (Inherited: 0x30)
struct UContractDataAssetV2ContentBattlepass : UContractDataAssetV2Content {
	struct TSoftClassPtr<UObject> Season; // 0x30(0x30)
	struct FGuid PremiumRewardScheduleID; // 0x60(0x10)
	uint64_t PremiumVPCost; // 0x70(0x08)
	struct TArray<struct FContractDataAssetV2StoryChapter> Chapters; // 0x78(0x10)
};

// Class ShooterGame.ContractDataAssetV2ContentEventPass
// Size: 0x70 (Inherited: 0x30)
struct UContractDataAssetV2ContentEventPass : UContractDataAssetV2Content {
	struct TSoftClassPtr<UObject> Event; // 0x30(0x30)
	struct TArray<struct FContractDataAssetV2EventChapter> Chapters; // 0x60(0x10)
};

// Class ShooterGame.ContractDataAssetV2ContentAccord
// Size: 0x40 (Inherited: 0x30)
struct UContractDataAssetV2ContentAccord : UContractDataAssetV2Content {
	struct TArray<uint32_t> MedalThresholds; // 0x30(0x10)
};

// Class ShooterGame.ContractDataAssetV2
// Size: 0xd0 (Inherited: 0x50)
struct UContractDataAssetV2 : UAresBasePrimaryDataAsset {
	struct TSoftClassPtr<UObject> UIData; // 0x50(0x30)
	bool bShipIt; // 0x80(0x01)
	char pad_81[0x3]; // 0x81(0x03)
	struct FGuid FreeRewardScheduleID; // 0x84(0x10)
	char pad_94[0x4]; // 0x94(0x04)
	struct UContractDataAssetV2Content* Content; // 0x98(0x08)
	struct TSoftClassPtr<UObject> EOGWidget; // 0xa0(0x30)
};

// Class ShooterGame.ContractDefinitionsManager
// Size: 0xd8 (Inherited: 0x80)
struct UContractDefinitionsManager : UInitSystem {
	bool bInitialized; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
	struct URSOManager* RSOManager; // 0x88(0x08)
	struct URewardGrantModelFactory* RewardGrantModelFactory; // 0x90(0x08)
	struct UContractDefinitionsService* ContractDefinitionsService; // 0x98(0x08)
	struct UContentIndex* ContentIndex; // 0xa0(0x08)
	struct UContractDefinitionsModel* ContractDefinitionsModel; // 0xa8(0x08)
	struct UAresClientEvents* AresClientEvents; // 0xb0(0x08)
	struct UConfigManager* ConfigManager; // 0xb8(0x08)
	char pad_C0[0x18]; // 0xc0(0x18)
};

// Class ShooterGame.ItemProgressionDefinitionLevelModel
// Size: 0x50 (Inherited: 0x30)
struct UItemProgressionDefinitionLevelModel : UObject {
	int32_t LevelNumber; // 0x30(0x04)
	struct FGuid UpgradeCurrencyID; // 0x34(0x10)
	int32_t Cost; // 0x44(0x04)
	struct URewardGrantModel* Reward; // 0x48(0x08)
};

// Class ShooterGame.SidegradeModel
// Size: 0x80 (Inherited: 0x30)
struct USidegradeModel : UObject {
	struct FGuid OptionID; // 0x30(0x10)
	struct FGuid SidegradeID; // 0x40(0x10)
	struct TArray<struct FEntitlementIdentifier> RequiredEntitlements; // 0x50(0x10)
	struct FCost Costs; // 0x60(0x10)
	struct UCurrencyDataAsset* PurchaseCurrency; // 0x70(0x08)
	struct URewardGrantModel* Reward; // 0x78(0x08)
};

// Class ShooterGame.ItemProgressionDefinitionModel
// Size: 0xa0 (Inherited: 0x30)
struct UItemProgressionDefinitionModel : UObject {
	struct FGuid ID; // 0x30(0x10)
	struct FEntitlementIdentifier item; // 0x40(0x20)
	struct FEntitlementIdentifier RequiredEntitlement; // 0x60(0x20)
	struct TArray<struct UItemProgressionDefinitionLevelModel*> Levels; // 0x80(0x10)
	struct TArray<struct USidegradeModel*> Sidegrades; // 0x90(0x10)
};

// Class ShooterGame.ContractDefinitionsModel
// Size: 0x40 (Inherited: 0x30)
struct UContractDefinitionsModel : UObject {
	struct TArray<struct UItemProgressionDefinitionModel*> ItemProgressionDefinitionsV2; // 0x30(0x10)
};

// Class ShooterGame.ContractDefinitionsService
// Size: 0x38 (Inherited: 0x30)
struct UContractDefinitionsService : UObject {
	struct UConfigManager* ConfigManager; // 0x30(0x08)
};

// Class ShooterGame.ContractsManager
// Size: 0x168 (Inherited: 0x80)
struct UContractsManager : UInitSystem {
	char pad_80[0x18]; // 0x80(0x18)
	bool bInitialized; // 0x98(0x01)
	bool bContractsPopulated; // 0x99(0x01)
	char pad_9A[0x6]; // 0x9a(0x06)
	struct URSOManager* RSOManager; // 0xa0(0x08)
	struct URMSManager* RMSManager; // 0xa8(0x08)
	struct UContentIndex* ContentIndex; // 0xb0(0x08)
	struct UContractsService* ContractsService; // 0xb8(0x08)
	struct UContractsModel* ContractsModel; // 0xc0(0x08)
	struct URewardGrantModelFactory* RewardGrantModelFactory; // 0xc8(0x08)
	struct UConfigManager* ConfigManager; // 0xd0(0x08)
	struct UAresClientEvents* AresClientEvents; // 0xd8(0x08)
	struct UStoreManager* StoreManager; // 0xe0(0x08)
	struct UPlatformSessionManager* SessionManager; // 0xe8(0x08)
	char pad_F0[0x78]; // 0xf0(0x78)
};

// Class ShooterGame.ContractModel
// Size: 0x98 (Inherited: 0x30)
struct UContractModel : UObject {
	char pad_30[0x48]; // 0x30(0x48)
	struct FGuid ContractDefinitionID; // 0x78(0x10)
	int32_t CurrentLevel; // 0x88(0x04)
	int32_t CurrentXPTowardsNextLevel; // 0x8c(0x04)
	int32_t TotalXP; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
};

// Class ShooterGame.EventModel
// Size: 0x48 (Inherited: 0x30)
struct UEventModel : UObject {
	struct UEventDataAsset* DataAsset; // 0x30(0x08)
	struct FDateTime StartTime; // 0x38(0x08)
	struct FDateTime EndTime; // 0x40(0x08)
};

// Class ShooterGame.MissionModel
// Size: 0xe0 (Inherited: 0x30)
struct UMissionModel : UObject {
	char pad_30[0x48]; // 0x30(0x48)
	struct UMissionDataAsset* DataAsset; // 0x78(0x08)
	struct TMap<struct UObjectiveDataAsset*, int32_t> Objectives; // 0x80(0x50)
	struct FDateTime ExpirationTime; // 0xd0(0x08)
	bool bIsComplete; // 0xd8(0x01)
	char pad_D9[0x7]; // 0xd9(0x07)
};

// Class ShooterGame.ObjectiveDeltaModel
// Size: 0x40 (Inherited: 0x30)
struct UObjectiveDeltaModel : UObject {
	struct UObjectiveDataAsset* Objective; // 0x30(0x08)
	int32_t ProgressBefore; // 0x38(0x04)
	int32_t ProgressAfter; // 0x3c(0x04)
};

// Class ShooterGame.MissionDeltaModel
// Size: 0x90 (Inherited: 0x30)
struct UMissionDeltaModel : UObject {
	struct FGuid MissionID; // 0x30(0x10)
	struct TMap<struct UObjectiveDataAsset*, struct UObjectiveDeltaModel*> Objectives; // 0x40(0x50)
};

// Class ShooterGame.ContractDeltaModel
// Size: 0x38 (Inherited: 0x30)
struct UContractDeltaModel : UObject {
	int32_t TotalXPBefore; // 0x30(0x04)
	int32_t TotalXPAfter; // 0x34(0x04)
};

// Class ShooterGame.ContractMatchResultsModel
// Size: 0x1c8 (Inherited: 0x30)
struct UContractMatchResultsModel : UObject {
	struct FGuid MatchID; // 0x30(0x10)
	struct TMap<struct UMissionDataAsset*, struct UMissionDeltaModel*> MissionDeltas; // 0x40(0x50)
	struct TMap<struct UContractDataAssetV2*, struct UContractDeltaModel*> ContractDeltas; // 0x90(0x50)
	bool CouldProgressMissions; // 0xe0(0x01)
	char pad_E1[0x3]; // 0xe1(0x03)
	int32_t GamePlayedXP; // 0xe4(0x04)
	int32_t GameWonXP; // 0xe8(0x04)
	int32_t RoundPlayedXP; // 0xec(0x04)
	int32_t RoundWonXP; // 0xf0(0x04)
	char pad_F4[0x4]; // 0xf4(0x04)
	struct TArray<struct FContractsXpModifier> Modifiers; // 0xf8(0x10)
	int32_t GamePlayedActPoints; // 0x108(0x04)
	int32_t GameWonActPoints; // 0x10c(0x04)
	int32_t RoundPlayedActPoints; // 0x110(0x04)
	int32_t RoundWonActPoints; // 0x114(0x04)
	struct TArray<struct FContractsXpModifier> ActPointsModifiers; // 0x118(0x10)
	struct TMap<struct FGuid, struct URewardGrantModel*> RewardGrants; // 0x128(0x50)
	struct TMap<struct UMissionDataAsset*, int32_t> MissionsXP; // 0x178(0x50)
};

// Class ShooterGame.ContractsModel
// Size: 0x130 (Inherited: 0x30)
struct UContractsModel : UObject {
	char pad_30[0xc0]; // 0x30(0xc0)
	struct TArray<struct UContractModel*> Contracts; // 0xf0(0x10)
	struct TArray<struct UMissionModel*> Missions; // 0x100(0x10)
	struct TArray<struct UContractMatchResultsModel*> MatchResults; // 0x110(0x10)
	struct UContractModel* ActiveSpecialContract; // 0x120(0x08)
	struct FDateTime WeeklyRefillTime; // 0x128(0x08)
};

// Class ShooterGame.ContractsScreen
// Size: 0x2d8 (Inherited: 0x2c8)
struct UContractsScreen : UDesignableUserWidget {
	struct UContractsViewModel* ViewModel; // 0x2c8(0x08)
	struct UContractsViewController* ViewController; // 0x2d0(0x08)
};

// Class ShooterGame.ContractsService
// Size: 0x38 (Inherited: 0x30)
struct UContractsService : UObject {
	struct UConfigManager* ConfigManager; // 0x30(0x08)
};

// Class ShooterGame.ContractsViewController
// Size: 0xc8 (Inherited: 0x80)
struct UContractsViewController : UInitSystem {
	struct UContentIndex* ContentIndex; // 0x80(0x08)
	struct UContentManager* ContentManager; // 0x88(0x08)
	struct UContractsManager* ContractsManager; // 0x90(0x08)
	struct UConfigManager* ConfigManager; // 0x98(0x08)
	struct UMapLoadModel* MapLoadModel; // 0xa0(0x08)
	struct UContractsViewModel* ViewModel; // 0xa8(0x08)
	struct UContractsModel* ContractsModel; // 0xb0(0x08)
	struct UInventoryManager* InventoryManager; // 0xb8(0x08)
	bool bInitializedViewModel; // 0xc0(0x01)
	char pad_C1[0x7]; // 0xc1(0x07)
};

// Class ShooterGame.XpModifierViewModel
// Size: 0x40 (Inherited: 0x30)
struct UXpModifierViewModel : UObject {
	enum class EXPModifier Name; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float Value; // 0x34(0x04)
	bool BaseOnly; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// Class ShooterGame.PremiumContractDetailsViewModel
// Size: 0x68 (Inherited: 0x30)
struct UPremiumContractDetailsViewModel : UObject {
	struct FGuid EntitlementTypeID; // 0x30(0x10)
	struct FGuid EntitlementItemID; // 0x40(0x10)
	struct FGuid CurrencyID; // 0x50(0x10)
	int32_t ExpectedCost; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
};

// Class ShooterGame.ContractLevelViewModel
// Size: 0x70 (Inherited: 0x30)
struct UContractLevelViewModel : UObject {
	struct FMulticastInlineDelegate OnIsCurrentLevelChanged; // 0x30(0x10)
	struct FMulticastInlineDelegate OnIsLevelCompletedChanged; // 0x40(0x10)
	int32_t LevelNumber; // 0x50(0x04)
	int32_t XPToComplete; // 0x54(0x04)
	struct URewardModel* Reward; // 0x58(0x08)
	bool bIsCurrentLevel; // 0x60(0x01)
	bool bIsLevelCompleted; // 0x61(0x01)
	bool IsPurchasable; // 0x62(0x01)
	char pad_63[0x1]; // 0x63(0x01)
	int32_t PurchaseCost; // 0x64(0x04)
	bool bIsRewardPremium; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
};

// Class ShooterGame.ContractChapterViewModel
// Size: 0x50 (Inherited: 0x30)
struct UContractChapterViewModel : UObject {
	struct URewardGrantModel* FreeChapterRewards; // 0x30(0x08)
	struct TArray<struct UContractLevelViewModel*> Levels; // 0x38(0x10)
	bool bIsEpilogue; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// Class ShooterGame.ContractViewModel
// Size: 0x130 (Inherited: 0x30)
struct UContractViewModel : UObject {
	struct FMulticastInlineDelegate OnOverallProgressChanged; // 0x30(0x10)
	struct FMulticastInlineDelegate OnCurrentLevelChanged; // 0x40(0x10)
	struct FMulticastInlineDelegate OnCurrentXPChanged; // 0x50(0x10)
	struct FMulticastInlineDelegate OnXPRequiredForNextLevelChanged; // 0x60(0x10)
	struct FMulticastInlineDelegate OnIsCompletedChanged; // 0x70(0x10)
	struct FMulticastInlineDelegate OnIsActiveChanged; // 0x80(0x10)
	struct FMulticastInlineDelegate OnIsPremiumOwnedChanged; // 0x90(0x10)
	struct TArray<struct URewardModel*> HighlightedRewards; // 0xa0(0x10)
	struct FGuid ContractDefinitionID; // 0xb0(0x10)
	struct UContractDataAssetV2* ContractDataAssetV2; // 0xc0(0x08)
	struct TArray<struct UContractChapterViewModel*> Chapters; // 0xc8(0x10)
	int32_t CurrentLevel; // 0xd8(0x04)
	int32_t CurrentXP; // 0xdc(0x04)
	enum class EContractType ContractType; // 0xe0(0x01)
	char pad_E1[0x3]; // 0xe1(0x03)
	int32_t XPRequiredForNextLevel; // 0xe4(0x04)
	float OverallProgress; // 0xe8(0x04)
	bool bIsCompleted; // 0xec(0x01)
	bool bIsActive; // 0xed(0x01)
	char pad_EE[0x2]; // 0xee(0x02)
	struct UCurrencyDataAsset* PurchaseCurrency; // 0xf0(0x08)
	bool bHasLockedCharacter; // 0xf8(0x01)
	char pad_F9[0x7]; // 0xf9(0x07)
	struct UCharacterDataAsset* RelatedCharacter; // 0x100(0x08)
	bool bIsPremiumOwned; // 0x108(0x01)
	char pad_109[0x7]; // 0x109(0x07)
	struct UPremiumContractDetailsViewModel* PremiumContractDetailsViewModel; // 0x110(0x08)
	struct UBaseInventoryModel* PremiumContractInventoryModel; // 0x118(0x08)
	char pad_120[0x10]; // 0x120(0x10)
};

// Class ShooterGame.ObjectiveViewModel
// Size: 0x50 (Inherited: 0x30)
struct UObjectiveViewModel : UObject {
	struct FMulticastInlineDelegate OnProgressChanged; // 0x30(0x10)
	struct UObjectiveDataAsset* DataAsset; // 0x40(0x08)
	int32_t Progress; // 0x48(0x04)
	int32_t ProgressToComplete; // 0x4c(0x04)
};

// Class ShooterGame.MissionViewModel
// Size: 0xb8 (Inherited: 0x30)
struct UMissionViewModel : UObject {
	struct FMulticastInlineDelegate OnIsCompleteChanged; // 0x30(0x10)
	struct FMulticastInlineDelegate OnExpirationTimeChanged; // 0x40(0x10)
	struct UMissionDataAsset* DataAsset; // 0x50(0x08)
	struct TMap<struct UObjectiveDataAsset*, struct UObjectiveViewModel*> Objectives; // 0x58(0x50)
	struct FDateTime ExpirationTime; // 0xa8(0x08)
	bool bIsComplete; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)
};

// Class ShooterGame.ObjectiveDeltaViewModel
// Size: 0x40 (Inherited: 0x30)
struct UObjectiveDeltaViewModel : UObject {
	struct UObjectiveDataAsset* DataAsset; // 0x30(0x08)
	int32_t ProgressBefore; // 0x38(0x04)
	int32_t ProgressAfter; // 0x3c(0x04)
};

// Class ShooterGame.MissionDeltaViewModel
// Size: 0x98 (Inherited: 0x30)
struct UMissionDeltaViewModel : UObject {
	struct FMulticastInlineDelegate OnIsCompleteChanged; // 0x30(0x10)
	struct UMissionDataAsset* DataAsset; // 0x40(0x08)
	struct TMap<struct UObjectiveDataAsset*, struct UObjectiveDeltaViewModel*> Objectives; // 0x48(0x50)
};

// Class ShooterGame.ContractDeltaViewModel
// Size: 0x38 (Inherited: 0x30)
struct UContractDeltaViewModel : UObject {
	int32_t TotalXPBefore; // 0x30(0x04)
	int32_t TotalXPAfter; // 0x34(0x04)
};

// Class ShooterGame.ContractMatchResultsViewModel
// Size: 0x1b0 (Inherited: 0x30)
struct UContractMatchResultsViewModel : UObject {
	struct FGuid MatchID; // 0x30(0x10)
	int32_t GamePlayedXP; // 0x40(0x04)
	int32_t GameWonXP; // 0x44(0x04)
	int32_t RoundPlayedXP; // 0x48(0x04)
	int32_t RoundWonXP; // 0x4c(0x04)
	int32_t MissionsXP; // 0x50(0x04)
	float TotalModifierValue; // 0x54(0x04)
	struct TMap<enum class EXPModifier, struct UXpModifierViewModel*> Modifiers; // 0x58(0x50)
	int32_t GamePlayedActPoints; // 0xa8(0x04)
	int32_t GameWonActPoints; // 0xac(0x04)
	int32_t RoundPlayedActPoints; // 0xb0(0x04)
	int32_t RoundWonActPoints; // 0xb4(0x04)
	struct TMap<struct FGuid, struct URewardGrantModel*> ContractRewardGrants; // 0xb8(0x50)
	struct TMap<struct UMissionDataAsset*, struct UMissionDeltaViewModel*> Missions; // 0x108(0x50)
	struct TMap<struct UContractDataAssetV2*, struct UContractDeltaViewModel*> ContractDeltas; // 0x158(0x50)
	bool CouldProgressMissions; // 0x1a8(0x01)
	char pad_1A9[0x7]; // 0x1a9(0x07)
};

// Class ShooterGame.ContractsViewModel
// Size: 0x1b8 (Inherited: 0x30)
struct UContractsViewModel : UObject {
	struct FMulticastInlineDelegate OnContractAdded; // 0x30(0x10)
	struct FMulticastInlineDelegate OnContractRemoved; // 0x40(0x10)
	struct FMulticastInlineDelegate OnMissionAdded; // 0x50(0x10)
	struct FMulticastInlineDelegate OnMissionRemoved; // 0x60(0x10)
	struct FMulticastInlineDelegate OnMatchAdded; // 0x70(0x10)
	struct FMulticastInlineDelegate OnMatchRemoved; // 0x80(0x10)
	struct FMulticastInlineDelegate OnActiveSpecialContractChanged; // 0x90(0x10)
	struct FMulticastInlineDelegate OnActiveStoryContractChanged; // 0xa0(0x10)
	struct FMulticastInlineDelegate OnEventContractActivated; // 0xb0(0x10)
	struct FMulticastInlineDelegate OnEventContractDeactivated; // 0xc0(0x10)
	struct FMulticastInlineDelegate OnWeeklyRefillTimeChanged; // 0xd0(0x10)
	struct TArray<struct UContractViewModel*> Contracts; // 0xe0(0x10)
	struct TArray<struct UMissionViewModel*> Missions; // 0xf0(0x10)
	struct FDateTime WeeklyRefillTime; // 0x100(0x08)
	struct TMap<struct FGuid, struct UContractMatchResultsViewModel*> MatchResults; // 0x108(0x50)
	struct UContractViewModel* ActiveSpecialContract; // 0x158(0x08)
	struct UContractViewModel* ActiveStoryContract; // 0x160(0x08)
	struct TSet<struct UContractViewModel*> ActiveEventContracts; // 0x168(0x50)
};

// Class ShooterGame.ContractUpgradeButton
// Size: 0x2f8 (Inherited: 0x2c8)
struct UContractUpgradeButton : UUserWidget {
	struct FMulticastInlineDelegate OnWalletChanged; // 0x2c8(0x10)
	struct FGuid ContractDefinitionID; // 0x2d8(0x10)
	enum class EContractUpgradeState UpgradeState; // 0x2e8(0x01)
	char pad_2E9[0x3]; // 0x2e9(0x03)
	int32_t UpgradeCost; // 0x2ec(0x04)
	struct UCurrencyDataAsset* PurchaseCurrencyDataAsset; // 0x2f0(0x08)
};

// Class ShooterGame.CooldownComponent
// Size: 0x108 (Inherited: 0x108)
struct UCooldownComponent : UAutoCountdownTimerComponent {
};

// Class ShooterGame.CopyCrosshairCommandComponent
// Size: 0xf8 (Inherited: 0xe8)
struct UCopyCrosshairCommandComponent : UActorComponent {
	char pad_E8[0x8]; // 0xe8(0x08)
	struct UNotificationManager* NotificationManager; // 0xf0(0x08)
};

// Class ShooterGame.CoreGameManager
// Size: 0x2f8 (Inherited: 0x80)
struct UCoreGameManager : UInitSystem {
	char pad_80[0x18]; // 0x80(0x18)
	struct FMulticastInlineDelegate OnCurrentMatchStateUpdated; // 0x98(0x10)
	struct FMulticastInlineDelegate OnCurrentMatchUpdated; // 0xa8(0x10)
	struct FMulticastInlineDelegate OnCurrentMatchTerminatedNotification; // 0xb8(0x10)
	struct FMulticastInlineDelegate OnInstallStatsUpdated; // 0xc8(0x10)
	char pad_D8[0x190]; // 0xd8(0x190)
	struct UConfigManager* ConfigManager; // 0x268(0x08)
	struct UPlatformSessionManager* SessionManager; // 0x270(0x08)
	struct URMSManager* RMSManager; // 0x278(0x08)
	struct URSOManager* RSOManager; // 0x280(0x08)
	struct UPlayerAffinityManager* PlayerAffinityManager; // 0x288(0x08)
	struct UTextChatManagerV2* TextChatManager; // 0x290(0x08)
	struct UCoreGameService* CoreGameService; // 0x298(0x08)
	struct UAresClientEvents* AresClientEvents; // 0x2a0(0x08)
	struct FInstallStats InstallStats; // 0x2a8(0x20)
	char pad_2C8[0x20]; // 0x2c8(0x20)
	bool bWasSessionConsistent; // 0x2e8(0x01)
	char pad_2E9[0xf]; // 0x2e9(0x0f)
};

// Class ShooterGame.CoreGameService
// Size: 0x38 (Inherited: 0x30)
struct UCoreGameService : UObject {
	struct UConfigManager* ConfigManager; // 0x30(0x08)
};

// Class ShooterGame.CorpseExploitationComponent
// Size: 0x120 (Inherited: 0xe8)
struct UCorpseExploitationComponent : UActorComponent {
	char pad_E8[0x8]; // 0xe8(0x08)
	struct FMulticastInlineDelegate OnBecomeExploitable; // 0xf0(0x10)
	struct FMulticastInlineDelegate OnExploited; // 0x100(0x10)
	float TimeOfDeath; // 0x110(0x04)
	bool bCanBeExploited; // 0x114(0x01)
	char pad_115[0x3]; // 0x115(0x03)
	struct UAresGameplayBuff* ExploitedCorpseDebuff; // 0x118(0x08)
};

// Class ShooterGame.CrosshairComponent
// Size: 0x110 (Inherited: 0xe8)
struct UCrosshairComponent : UActorComponent {
	struct UBaseCrosshairHudElement* crosshair; // 0xe8(0x08)
	bool bCanOverrideCrosshairWithPrimaryCustomCrosshair; // 0xf0(0x01)
	char pad_F1[0x7]; // 0xf1(0x07)
	struct UBaseCrosshairHudElement* PrimaryCustomCrosshair; // 0xf8(0x08)
	bool bOverrideCrosshairIsValid; // 0x100(0x01)
	char pad_101[0x7]; // 0x101(0x07)
	struct UBaseCrosshairHudElement* OverrideCrosshair; // 0x108(0x08)
};

// Class ShooterGame.CrosshairManager
// Size: 0x2c0 (Inherited: 0x30)
struct UCrosshairManager : UObject {
	struct FMulticastInlineDelegate OnColorUpdated; // 0x30(0x10)
	struct FMulticastInlineDelegate OnSettingsReceived; // 0x40(0x10)
	char pad_50[0x8]; // 0x50(0x08)
	struct FCrosshairSettings CrosshairSettings; // 0x58(0x130)
	struct FCrosshairSettings ColorAdjustedCrosshairSettings; // 0x188(0x130)
	bool bUseSpectatorCrosshair; // 0x2b8(0x01)
	char pad_2B9[0x7]; // 0x2b9(0x07)
};

// Class ShooterGame.CrosshairPreviewWidgetBase
// Size: 0x2e8 (Inherited: 0x2c8)
struct UCrosshairPreviewWidgetBase : UUserWidget {
	struct UBaseCrosshairHudElement* CrosshairHUDElementClass; // 0x2c8(0x08)
	uint32_t MinErrorOffset; // 0x2d0(0x04)
	uint32_t FiringErrorOffset; // 0x2d4(0x04)
	uint32_t MoveErrorOffset; // 0x2d8(0x04)
	char pad_2DC[0x4]; // 0x2dc(0x04)
	struct UBaseCrosshairHudElement* CrosshairHUDElement; // 0x2e0(0x08)
};

// Class ShooterGame.CrossWorldUserWidget
// Size: 0x2c8 (Inherited: 0x2c8)
struct UCrossWorldUserWidget : UUserWidget {
};

// Class ShooterGame.CrouchAimLowerBody3P
// Size: 0x38 (Inherited: 0x38)
struct UCrouchAimLowerBody3P : UAnimSlotLowerBody3P {
};

// Class ShooterGame.CrouchAimUpperBody3P
// Size: 0x38 (Inherited: 0x38)
struct UCrouchAimUpperBody3P : UAnimSlotUpperBody3P {
};

// Class ShooterGame.CrouchAnimSlot1P
// Size: 0x38 (Inherited: 0x38)
struct UCrouchAnimSlot1P : UAnimSlot1P {
};

// Class ShooterGame.CrouchAnimSlotGun1P
// Size: 0x38 (Inherited: 0x38)
struct UCrouchAnimSlotGun1P : UAnimSlotGun1P {
};

// Class ShooterGame.CrouchLowerBody3P
// Size: 0x38 (Inherited: 0x38)
struct UCrouchLowerBody3P : UAnimSlotLowerBody3P {
};

// Class ShooterGame.CrouchUpperBody3P
// Size: 0x38 (Inherited: 0x38)
struct UCrouchUpperBody3P : UAnimSlotUpperBody3P {
};

// Class ShooterGame.CrouchFallUpperBody3P
// Size: 0x38 (Inherited: 0x38)
struct UCrouchFallUpperBody3P : UAnimSlotUpperBody3P {
};

// Class ShooterGame.CrouchIdleAnimSlot1P
// Size: 0x38 (Inherited: 0x38)
struct UCrouchIdleAnimSlot1P : UAnimSlot1P {
};

// Class ShooterGame.CrouchIdleAnimSlotGun1P
// Size: 0x38 (Inherited: 0x38)
struct UCrouchIdleAnimSlotGun1P : UAnimSlotGun1P {
};

// Class ShooterGame.CrouchTurnLeftLowerBody3P
// Size: 0x38 (Inherited: 0x38)
struct UCrouchTurnLeftLowerBody3P : UAnimSlotLowerBody3P {
};

// Class ShooterGame.CrouchTurnRightLowerBody3P
// Size: 0x38 (Inherited: 0x38)
struct UCrouchTurnRightLowerBody3P : UAnimSlotLowerBody3P {
};

// Class ShooterGame.CrouchWalkAnimSlot1P
// Size: 0x38 (Inherited: 0x38)
struct UCrouchWalkAnimSlot1P : UAnimSlot1P {
};

// Class ShooterGame.CrouchWalkAnimSlotGun1P
// Size: 0x38 (Inherited: 0x38)
struct UCrouchWalkAnimSlotGun1P : UAnimSlotGun1P {
};

// Class ShooterGame.CrouchWalkLowerBody3P
// Size: 0x38 (Inherited: 0x38)
struct UCrouchWalkLowerBody3P : UAnimSlotLowerBody3P {
};

// Class ShooterGame.CrouchWalkUpperBody3P
// Size: 0x38 (Inherited: 0x38)
struct UCrouchWalkUpperBody3P : UAnimSlotUpperBody3P {
};

// Class ShooterGame.CueHandlerAnimationConductorNode
// Size: 0x120 (Inherited: 0xa8)
struct UCueHandlerAnimationConductorNode : UAnimationConductorNodeBase {
	struct TScriptInterface<IAnimationConductorNode> InitialNode; // 0xa8(0x10)
	struct TMap<struct FName, struct FCueHandlerAnimationConductorNode_Internal_CueData> CueMap; // 0xb8(0x50)
	struct TArray<struct FCueHandlerAnimationConductorNode_Internal_PendingNodeData> PendingNodes; // 0x108(0x10)
	char pad_118[0x8]; // 0x118(0x08)
};

// Class ShooterGame.CurrencyUIData
// Size: 0xc8 (Inherited: 0x90)
struct UCurrencyUIData : UBaseContentUIData {
	struct FText DisplayNameSingular; // 0x90(0x18)
	struct FText DisplayNameSingularAllCaps; // 0xa8(0x18)
	struct UTexture* LargeIcon; // 0xc0(0x08)
};

// Class ShooterGame.CurrencyDataAsset
// Size: 0x80 (Inherited: 0x50)
struct UCurrencyDataAsset : UAresBasePrimaryDataAsset {
	struct TSoftClassPtr<UObject> UIData; // 0x50(0x30)
};

// Class ShooterGame.CustomGameManager
// Size: 0x60 (Inherited: 0x30)
struct UCustomGameManager : UObject {
	struct FMulticastInlineDelegate OnCustomGamesUpdated; // 0x30(0x10)
	struct UPartyService* PartyService; // 0x40(0x08)
	struct UPartyManager* PartyManager; // 0x48(0x08)
	struct UConfigManager* ConfigManager; // 0x50(0x08)
	struct URSOManager* RSOManager; // 0x58(0x08)
};

// Class ShooterGame.CustomGameModel
// Size: 0x508 (Inherited: 0x30)
struct UCustomGameModel : UObject {
	struct FMulticastInlineDelegate OnMapOptionAdded; // 0x30(0x10)
	struct FMulticastInlineDelegate OnMapOptionRemoved; // 0x40(0x10)
	struct FMulticastInlineDelegate OnMapChanged; // 0x50(0x10)
	struct FMulticastInlineDelegate OnModeOptionAdded; // 0x60(0x10)
	struct FMulticastInlineDelegate OnModeOptionRemoved; // 0x70(0x10)
	struct FMulticastInlineDelegate OnModeChanged; // 0x80(0x10)
	struct FMulticastInlineDelegate OnGamePodChanged; // 0x90(0x10)
	struct FMulticastInlineDelegate OnPlayerAddedToTeamOne; // 0xa0(0x10)
	struct FMulticastInlineDelegate OnPlayerRemovedFromTeamOne; // 0xb0(0x10)
	struct FMulticastInlineDelegate OnPlayerAddedToTeamTwo; // 0xc0(0x10)
	struct FMulticastInlineDelegate OnPlayerRemovedFromTeamTwo; // 0xd0(0x10)
	struct FMulticastInlineDelegate OnPlayerAddedToTeamSpectate; // 0xe0(0x10)
	struct FMulticastInlineDelegate OnPlayerRemovedFromTeamSpectate; // 0xf0(0x10)
	struct FMulticastInlineDelegate OnPlayerAddedToTeamOneCoaches; // 0x100(0x10)
	struct FMulticastInlineDelegate OnPlayerRemovedFromTeamOneCoaches; // 0x110(0x10)
	struct FMulticastInlineDelegate OnPlayerAddedToTeamTwoCoaches; // 0x120(0x10)
	struct FMulticastInlineDelegate OnPlayerRemovedFromTeamTwoCoaches; // 0x130(0x10)
	struct FMulticastInlineDelegate OnMyTeamChanged; // 0x140(0x10)
	struct FMulticastInlineDelegate OnGamePodOverrideChanged; // 0x150(0x10)
	struct FMulticastInlineDelegate OnUseBotsChanged; // 0x160(0x10)
	struct TMap<struct FString, struct UMapDataAsset*> MapOptions_Backing; // 0x170(0x50)
	char pad_1C0[0x28]; // 0x1c0(0x28)
	struct FString Map; // 0x1e8(0x10)
	struct TMap<struct FString, struct UGameModeDataAsset*> ModeOptions_Backing; // 0x1f8(0x50)
	char pad_248[0x28]; // 0x248(0x28)
	struct FString Mode; // 0x270(0x10)
	struct FString GamePod; // 0x280(0x10)
	bool UseBots; // 0x290(0x01)
	bool AutobalanceEnabled; // 0x291(0x01)
	char pad_292[0x2]; // 0x292(0x02)
	int32_t AutobalanceMinPlayers; // 0x294(0x04)
	struct FString GamePodOverride; // 0x298(0x10)
	struct FCustomGameModel_TeamBacking Teams_Backing[0x5]; // 0x2a8(0x190)
	char pad_438[0xc8]; // 0x438(0xc8)
	enum class ECustomGameTeam MyTeam; // 0x500(0x01)
	char pad_501[0x7]; // 0x501(0x07)
};

// Class ShooterGame.CustomKillBannerHud
// Size: 0x238 (Inherited: 0xe8)
struct UCustomKillBannerHud : UActorComponent {
	struct FAresKillBannerImage KillImages[0x7]; // 0xe8(0xa8)
	struct FAresKillBannerImage HeadshotKillImages[0x7]; // 0x190(0xa8)
};

// Class ShooterGame.CustomPath
// Size: 0x428 (Inherited: 0x3d0)
struct ACustomPath : AActor {
	struct FMulticastInlineDelegate OnPointAdded; // 0x3d0(0x10)
	struct FMulticastInlineDelegate OnInitialPointsAdded; // 0x3e0(0x10)
	struct FMulticastInlineDelegate OnPointMoved; // 0x3f0(0x10)
	struct FMulticastInlineDelegate OnPathUpdated; // 0x400(0x10)
	struct TArray<struct FVector> Points; // 0x410(0x10)
	struct AActor* AttachedEndPointActor; // 0x420(0x08)
};

// Class ShooterGame.IgnoreWallPenetrationComponent
// Size: 0x138 (Inherited: 0xe8)
struct UIgnoreWallPenetrationComponent : UActorComponent {
	struct FClassInclusionExclusionFilter ProjectileFilter; // 0xe8(0x50)
};

// Class ShooterGame.CustomWallPenetrationResponseComponent
// Size: 0x138 (Inherited: 0x138)
struct UCustomWallPenetrationResponseComponent : UIgnoreWallPenetrationComponent {
};

// Class ShooterGame.CustomWidgetLayoutData
// Size: 0xf0 (Inherited: 0x30)
struct UCustomWidgetLayoutData : UObject {
	char pad_30[0xc0]; // 0x30(0xc0)
};

// Class ShooterGame.CycleModeRentryTransitionContext
// Size: 0x30 (Inherited: 0x30)
struct UCycleModeRentryTransitionContext : UStateTransitionContext {
};

// Class ShooterGame.CycleModeStateComponent
// Size: 0x2f0 (Inherited: 0x2c8)
struct UCycleModeStateComponent : UScriptStateComponent {
	struct TArray<struct FTriggerInput> CycleModeTriggerInputs; // 0x2c8(0x10)
	float QueueTime; // 0x2d8(0x04)
	float CycleCooldownTime; // 0x2dc(0x04)
	struct UModeComponent* RegisteredModeComponent; // 0x2e0(0x08)
	struct UStateComponent* ScriptReturnState; // 0x2e8(0x08)
};

// Class ShooterGame.InitialZoomLevelContext
// Size: 0x38 (Inherited: 0x30)
struct UInitialZoomLevelContext : UStateTransitionContext {
	int32_t ZoomLevel; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class ShooterGame.CycleZoomState
// Size: 0x2e8 (Inherited: 0x2c8)
struct UCycleZoomState : UScriptStateComponent {
	struct UZoomManagerComponent* ZoomManagerComponent; // 0x2c8(0x08)
	struct TArray<struct FTriggerInput> ZoomTriggerInputs; // 0x2d0(0x10)
	struct UInitialZoomLevelContext* ZoomLevelContext; // 0x2e0(0x08)
};

// Class ShooterGame.DailyTicketManager
// Size: 0x110 (Inherited: 0x80)
struct UDailyTicketManager : UInitSystem {
	struct FMulticastInlineDelegate OnDailyTicketChanged; // 0x80(0x10)
	struct FMulticastInlineDelegate OnDailyTicketRewardsRedeemed; // 0x90(0x10)
	struct FMulticastInlineDelegate OnDailyTicketRedeemedError; // 0xa0(0x10)
	struct FMulticastInlineDelegate OnDailyTicketUpdateError; // 0xb0(0x10)
	struct URSOManager* RSOManager; // 0xc0(0x08)
	struct URMSManager* RMSManager; // 0xc8(0x08)
	struct UPlatformSessionManager* PlatformSessionManager; // 0xd0(0x08)
	struct UDailyTicketService* DailyTicketService; // 0xd8(0x08)
	struct UDailyTicketModel* DailyTicketModel; // 0xe0(0x08)
	struct UConfigManager* ConfigManager; // 0xe8(0x08)
	char pad_F0[0x20]; // 0xf0(0x20)
};

// Class ShooterGame.DailyTicketRewardSlotModel
// Size: 0x48 (Inherited: 0x30)
struct UDailyTicketRewardSlotModel : UObject {
	struct FGuid ID; // 0x30(0x10)
	bool IsRedeemed; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// Class ShooterGame.DailyTicketModel
// Size: 0x90 (Inherited: 0x30)
struct UDailyTicketModel : UObject {
	struct FDateTime ResetTime; // 0x30(0x08)
	int64_t Version; // 0x38(0x08)
	struct FGuid ID; // 0x40(0x10)
	struct TArray<struct UDailyTicketRewardSlotModel*> RewardSlots; // 0x50(0x10)
	struct FTicketResourceSummary Resources; // 0x60(0x03)
	char pad_63[0x5]; // 0x63(0x05)
	struct TArray<struct FDailyTicketMatches> ProcessedMatches; // 0x68(0x10)
	bool bShowDailyLoginModal; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
	struct TArray<struct FGuid> FailedRedeemSlots; // 0x80(0x10)
};

// Class ShooterGame.DailyTicketService
// Size: 0x38 (Inherited: 0x30)
struct UDailyTicketService : UObject {
	struct UConfigManager* ConfigManager; // 0x30(0x08)
};

// Class ShooterGame.DamageableComponent
// Size: 0x200 (Inherited: 0xe8)
struct UDamageableComponent : UActorComponent {
	char pad_E8[0x10]; // 0xe8(0x10)
	struct FMulticastInlineDelegate OnDamaged; // 0xf8(0x10)
	struct FMulticastInlineDelegate OnHealed; // 0x108(0x10)
	struct FMulticastInlineDelegate OnDeath; // 0x118(0x10)
	struct FMulticastInlineDelegate OnPreDeath; // 0x128(0x10)
	struct FMulticastInlineDelegate OnRespawn; // 0x138(0x10)
	struct FMulticastInlineDelegate OnAliveStateChanged; // 0x148(0x10)
	struct FMulticastInlineDelegate OnSectionDestroyed; // 0x158(0x10)
	struct FMulticastInlineDelegate OnSectionDirtied; // 0x168(0x10)
	char pad_178[0x20]; // 0x178(0x20)
	struct TArray<struct UDamageSectionComponent*> DamageSections; // 0x198(0x10)
	bool bCanDie; // 0x1a8(0x01)
	bool bAlive; // 0x1a9(0x01)
	char CachedLifeValid[0x3]; // 0x1aa(0x03)
	char pad_1AD[0x3]; // 0x1ad(0x03)
	struct FHealthValue CachedLife[0x3]; // 0x1b0(0x18)
	char pad_1C8[0x10]; // 0x1c8(0x10)
	struct TArray<struct UDamageSectionComponent*> InitialDamageSections; // 0x1d8(0x10)
	struct TArray<struct FPendingDamageEvent> PendingDamageEvents; // 0x1e8(0x10)
	char pad_1F8[0x8]; // 0x1f8(0x08)
};

// Class ShooterGame.DamageForwardingActor
// Size: 0x3d0 (Inherited: 0x3d0)
struct ADamageForwardingActor : AActor {
};

// Class ShooterGame.DamageProjectileEffectComponent
// Size: 0x388 (Inherited: 0xf8)
struct UDamageProjectileEffectComponent : UBaseProjectileEffectComponent {
	struct FDamageTuning DamageTuning; // 0xf8(0x228)
	enum class ECauserType DamageCauser; // 0x320(0x01)
	char pad_321[0x7]; // 0x321(0x07)
	struct TSet<struct AActor*> DamagedTargets; // 0x328(0x50)
	struct TArray<struct FAresPointDamageEvent> AppliedDamageEvents; // 0x378(0x10)
};

// Class ShooterGame.DamageSource
// Size: 0x3d0 (Inherited: 0x3d0)
struct ADamageSource : AActor {
};

// Class ShooterGame.DangerZonesManager
// Size: 0xe8 (Inherited: 0xe8)
struct UDangerZonesManager : UActorComponent {
};

// Class ShooterGame.DealDamageToTargetsStateComponent
// Size: 0x2d8 (Inherited: 0x2c8)
struct UDealDamageToTargetsStateComponent : UScriptStateComponent {
	float PlayerDamage; // 0x2c8(0x04)
	float NonPlayerDamage; // 0x2cc(0x04)
	struct UDamageType* DamageType; // 0x2d0(0x08)
};

// Class ShooterGame.DebugGraphHudElement
// Size: 0x58 (Inherited: 0x58)
struct UDebugGraphHudElement : UAresHudElement {
};

// Class ShooterGame.DebugCharacterMovementHudElement
// Size: 0x2b0 (Inherited: 0x58)
struct UDebugCharacterMovementHudElement : UDebugGraphHudElement {
	char pad_58[0x10]; // 0x58(0x10)
	struct FGraphStyleParams GraphStyleParams; // 0x68(0x1a0)
	struct FText GraphTitles[0x5]; // 0x208(0x78)
	struct FVector2D SingleGraphDrawOffset; // 0x280(0x08)
	struct FVector2D AxialGraphDrawOffset; // 0x288(0x08)
	float AxialGraphScale; // 0x290(0x04)
	float VelocityDisplayAboveMaxRunSpeedPercent; // 0x294(0x04)
	float VerticalSpaceBetweenAxialGraphs; // 0x298(0x04)
	float JumpCurveMaxHeight; // 0x29c(0x04)
	struct FLinearColor ServerCorrectionCurveColor; // 0x2a0(0x10)
};

// Class ShooterGame.DebugDeathReactionActor
// Size: 0x458 (Inherited: 0x3d0)
struct ADebugDeathReactionActor : AActor {
	char pad_3D0[0x88]; // 0x3d0(0x88)
};

// Class ShooterGame.DebugInputHudElement
// Size: 0x378 (Inherited: 0x58)
struct UDebugInputHudElement : UDebugGraphHudElement {
	struct FGraphStyleParams GraphStyleParams; // 0x58(0x1a0)
	struct FVector2D GraphDrawOffset; // 0x1f8(0x08)
	float CurveTimeLength; // 0x200(0x04)
	float GraphScale; // 0x204(0x04)
	float GraphYMax; // 0x208(0x04)
	struct FFiringTimeDebugTuning FiringTimeDebugTuning; // 0x20c(0x58)
	char pad_264[0x4]; // 0x264(0x04)
	struct AShooterCharacter* PreviousCharacterToDebug; // 0x268(0x08)
	struct AAresEquippable* PreviousEquippableToDebug; // 0x270(0x08)
	char pad_278[0x100]; // 0x278(0x100)
};

// Class ShooterGame.DebugLogListModelWatcher
// Size: 0x48 (Inherited: 0x48)
struct UDebugLogListModelWatcher : UDebugListModelWatcherBase {
};

// Class ShooterGame.DebugNotificationEmitter
// Size: 0x40 (Inherited: 0x30)
struct UDebugNotificationEmitter : UObject {
	char pad_30[0x10]; // 0x30(0x10)
};

// Class ShooterGame.DebugShooterCharacterAnimInstanceHudElement
// Size: 0x1d0 (Inherited: 0x58)
struct UDebugShooterCharacterAnimInstanceHudElement : UDebugGraphHudElement {
	struct UShooterCharacterAnimInstance* AnimInstance; // 0x58(0x08)
	struct TArray<struct FDebugShooterCharacterAnimInstanceGraph> Graphs; // 0x60(0x10)
	struct TArray<struct FDebugShooterCharacterAnimInstanceGraphPage> GraphPages; // 0x70(0x10)
	struct FVector2D AccelerationDrawOffset; // 0x80(0x08)
	float AccelerationRadius; // 0x88(0x04)
	struct FLinearColor AccelerationCircleColor; // 0x8c(0x10)
	float AccelerationCircleLineThickness; // 0x9c(0x04)
	struct FLinearColor AccelerationLineColor; // 0xa0(0x10)
	float AccelerationLineThickness; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
	struct FAresHudFontParams AccelerationLabelFontParams; // 0xb8(0x70)
	struct FVector2D VelocityDrawOffset; // 0x128(0x08)
	float VelocityRadius; // 0x130(0x04)
	struct FLinearColor VelocityCircleColor; // 0x134(0x10)
	float VelocityCircleLineThickness; // 0x144(0x04)
	struct FLinearColor VelocityLineColor; // 0x148(0x10)
	float VelocityLineThickness; // 0x158(0x04)
	char pad_15C[0x4]; // 0x15c(0x04)
	struct FAresHudFontParams VelocityLabelFontParams; // 0x160(0x70)
};

// Class ShooterGame.DebugSubscriptionComponent
// Size: 0xe8 (Inherited: 0xe8)
struct UDebugSubscriptionComponent : UActorComponent {
};

// Class ShooterGame.DebugTouchInputHudElement
// Size: 0x3b8 (Inherited: 0x58)
struct UDebugTouchInputHudElement : UDebugGraphHudElement {
	struct FGraphStyleParams InputGraphStyleParams; // 0x58(0x1a0)
	struct FGraphStyleParams CameraGraphStyleParams; // 0x1f8(0x1a0)
	struct FVector2D GraphDrawOffset; // 0x398(0x08)
	float InputGraphScale; // 0x3a0(0x04)
	float CameraGraphScale; // 0x3a4(0x04)
	float InputGraphYMax; // 0x3a8(0x04)
	float CameraGraphYMax; // 0x3ac(0x04)
	float DistanceBetweenGraphs; // 0x3b0(0x04)
	char pad_3B4[0x4]; // 0x3b4(0x04)
};

// Class ShooterGame.DebugWeaponHudElement
// Size: 0x230 (Inherited: 0x58)
struct UDebugWeaponHudElement : UDebugGraphHudElement {
	struct FGraphStyleParams GraphStyleParams; // 0x58(0x1a0)
	struct FVector2D GraphDrawOffset; // 0x1f8(0x08)
	float CurveTimeLength; // 0x200(0x04)
	float GraphScales[0x3]; // 0x204(0x0c)
	float GraphYMaxes[0x3]; // 0x210(0x0c)
	float SpaceBetweenGraphs; // 0x21c(0x04)
	char pad_220[0x10]; // 0x220(0x10)
};

// Class ShooterGame.DecalManager
// Size: 0xa0 (Inherited: 0x30)
struct UDecalManager : UObject {
	struct TArray<struct FDecalEntry> DecalEntryArray; // 0x30(0x10)
	struct TArray<struct FDecalProxyEntry> ProxyEntryArray; // 0x40(0x10)
	struct TMap<struct UMaterialInterface*, struct FDecalList> PooledDecals; // 0x50(0x50)
};

// Class ShooterGame.DeferredOperation
// Size: 0x50 (Inherited: 0x30)
struct UDeferredOperation : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct FTimerHandle OperationDeferralTimerHandle; // 0x38(0x08)
	char pad_40[0x10]; // 0x40(0x10)
};

// Class ShooterGame.DelayAnimationConductorNode
// Size: 0xb8 (Inherited: 0xa8)
struct UDelayAnimationConductorNode : UAnimationConductorNodeBase {
	char pad_A8[0x10]; // 0xa8(0x10)
};

// Class ShooterGame.DelegateAnimationConductorNode
// Size: 0xe0 (Inherited: 0xa8)
struct UDelegateAnimationConductorNode : UAnimationConductorNodeBase {
	char pad_A8[0x38]; // 0xa8(0x38)
};

// Class ShooterGame.DirectionalDamageQuery
// Size: 0x30 (Inherited: 0x30)
struct UDirectionalDamageQuery : UInterface {
};

// Class ShooterGame.DisabledAnimSlot1P
// Size: 0x38 (Inherited: 0x38)
struct UDisabledAnimSlot1P : UAnimSlot1P {
};

// Class ShooterGame.DisarmedComponent
// Size: 0x140 (Inherited: 0xe8)
struct UDisarmedComponent : UActorComponent {
	struct TSoftClassPtr<UObject> DisarmedEquippableEffect; // 0xe8(0x30)
	struct AEffectContainer* LoadedDisarmedEquippableEffect; // 0x118(0x08)
	enum class EEquipSpeed DisarmedUnequipSpeed; // 0x120(0x01)
	char pad_121[0x7]; // 0x121(0x07)
	struct AShooterCharacter* CharacterOwner; // 0x128(0x08)
	struct UAresGameplayBuff* PreventSwitchingBuff; // 0x130(0x08)
	char pad_138[0x8]; // 0x138(0x08)
};

// Class ShooterGame.DisplayNameManager
// Size: 0x128 (Inherited: 0x80)
struct UDisplayNameManager : UInitSystem {
	struct UConfigManager* ConfigManager; // 0x80(0x08)
	struct URSOManager* RSOManager; // 0x88(0x08)
	struct UDisplayNameService* DisplayNameService; // 0x90(0x08)
	struct UFriendsModel* FriendsModel; // 0x98(0x08)
	struct TMap<struct FString, struct FDisplayName> CachedDisplayNames; // 0xa0(0x50)
	char pad_F0[0x38]; // 0xf0(0x38)
};

// Class ShooterGame.DisplayNameService
// Size: 0x38 (Inherited: 0x30)
struct UDisplayNameService : UObject {
	struct UConfigManager* ConfigManager; // 0x30(0x08)
};

// Class ShooterGame.DPIScaleOverrider
// Size: 0x178 (Inherited: 0x160)
struct UDPIScaleOverrider : UPanelWidget {
	float MaxDPIScaleForPhysicalScreenSize; // 0x160(0x04)
	char pad_164[0x14]; // 0x164(0x14)
};

// Class ShooterGame.DPIScaleOverriderSlot
// Size: 0x50 (Inherited: 0x40)
struct UDPIScaleOverriderSlot : UPanelSlot {
	char pad_40[0x10]; // 0x40(0x10)
};

// Class ShooterGame.DropInLoadingManager
// Size: 0x88 (Inherited: 0x80)
struct UDropInLoadingManager : UInitSystem {
	struct UPreloadManager* PreloadManager; // 0x80(0x08)
};

// Class ShooterGame.DropInManagerComponent
// Size: 0x128 (Inherited: 0xe8)
struct UDropInManagerComponent : UActorComponent {
	bool EnableDropIn; // 0xe8(0x01)
	char pad_E9[0x7]; // 0xe9(0x07)
	struct FMulticastInlineDelegate OnVacanciesOpenedForTeam; // 0xf0(0x10)
	struct FMulticastInlineDelegate OnCloseAllVacancies; // 0x100(0x10)
	struct UDropInRequestListener* DropInRequestListener; // 0x110(0x08)
	struct TArray<struct FDropInPlayerLoadingState> DropInPlayerLoadingStates; // 0x118(0x10)
};

// Class ShooterGame.DropInRequestListener
// Size: 0x90 (Inherited: 0x30)
struct UDropInRequestListener : UObject {
	char pad_30[0x60]; // 0x30(0x60)
};

// Class ShooterGame.PlayerSpawner
// Size: 0x30 (Inherited: 0x30)
struct UPlayerSpawner : UObject {
};

// Class ShooterGame.DynamicLocationPlayerSpawner
// Size: 0x48 (Inherited: 0x30)
struct UDynamicLocationPlayerSpawner : UPlayerSpawner {
	struct FVector Location; // 0x30(0x0c)
	struct FRotator Rotation; // 0x3c(0x0c)
};

// Class ShooterGame.ShooterTeamStart
// Size: 0x440 (Inherited: 0x408)
struct AShooterTeamStart : APlayerStart {
	struct UBombTeamComponent* TeamComponent; // 0x408(0x08)
	struct UTeamRoleComponent* RoleComponent; // 0x410(0x08)
	int32_t SpawnSet; // 0x418(0x04)
	char bDisabledSpawn : 1; // 0x41c(0x01)
	char pad_41C_1 : 7; // 0x41c(0x01)
	char pad_41D[0x3]; // 0x41d(0x03)
	bool bUseForInitialSpawn; // 0x420(0x01)
	char pad_421[0x7]; // 0x421(0x07)
	struct TArray<float> AdditionalSpawnRotations; // 0x428(0x10)
	enum class ESpawnRestriction SpawnRestriction; // 0x438(0x01)
	char pad_439[0x7]; // 0x439(0x07)
};

// Class ShooterGame.DynamicRespawnPoint
// Size: 0x448 (Inherited: 0x440)
struct ADynamicRespawnPoint : AShooterTeamStart {
	struct AShooterPlayerState* PlayerState; // 0x440(0x08)
};

// Class ShooterGame.EditableReward
// Size: 0x38 (Inherited: 0x30)
struct UEditableReward : UObject {
	bool bHighlighted; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// Class ShooterGame.EditableRewardCharacter
// Size: 0x68 (Inherited: 0x38)
struct UEditableRewardCharacter : UEditableReward {
	struct TSoftClassPtr<UObject> Character; // 0x38(0x30)
};

// Class ShooterGame.EditableRewardCurrency
// Size: 0x70 (Inherited: 0x38)
struct UEditableRewardCurrency : UEditableReward {
	struct TSoftClassPtr<UObject> Currency; // 0x38(0x30)
	uint64_t Amount; // 0x68(0x08)
};

// Class ShooterGame.EditableRewardEquippableCharmLevel
// Size: 0x70 (Inherited: 0x38)
struct UEditableRewardEquippableCharmLevel : UEditableReward {
	struct TSoftClassPtr<UObject> EquippableCharmLevel; // 0x38(0x30)
	uint64_t Amount; // 0x68(0x08)
};

// Class ShooterGame.EditableRewardEquippableSkinLevel
// Size: 0x68 (Inherited: 0x38)
struct UEditableRewardEquippableSkinLevel : UEditableReward {
	struct TSoftClassPtr<UObject> EquippableSkinLevel; // 0x38(0x30)
};

// Class ShooterGame.EditableRewardPlayerCard
// Size: 0x68 (Inherited: 0x38)
struct UEditableRewardPlayerCard : UEditableReward {
	struct TSoftClassPtr<UObject> PlayerCard; // 0x38(0x30)
};

// Class ShooterGame.EditableRewardPlayerTitle
// Size: 0x68 (Inherited: 0x38)
struct UEditableRewardPlayerTitle : UEditableReward {
	struct TSoftClassPtr<UObject> Title; // 0x38(0x30)
};

// Class ShooterGame.EditableRewardSpray
// Size: 0x68 (Inherited: 0x38)
struct UEditableRewardSpray : UEditableReward {
	struct TSoftClassPtr<UObject> Spray; // 0x38(0x30)
};

// Class ShooterGame.UserActionBase
// Size: 0x58 (Inherited: 0x30)
struct UUserActionBase : UObject {
	char pad_30[0x28]; // 0x30(0x28)
};

// Class ShooterGame.EditableUserActionBase
// Size: 0xa8 (Inherited: 0x58)
struct UEditableUserActionBase : UUserActionBase {
	struct FUserActionDisplayInfo ActionDisplayInfo; // 0x58(0x48)
	enum class EUserActionState ActionState; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
};

// Class ShooterGame.EditorOnlyComponent
// Size: 0xe8 (Inherited: 0xe8)
struct UEditorOnlyComponent : UActorComponent {
};

// Class ShooterGame.FXCTypePool
// Size: 0x58 (Inherited: 0x30)
struct UFXCTypePool : UObject {
	struct UObject* EffectClass; // 0x30(0x08)
	struct TArray<struct FFreePooledEffect> Effects; // 0x38(0x10)
	int32_t StartNum; // 0x48(0x04)
	int32_t MaxConcurrentEffects; // 0x4c(0x04)
	int32_t ConcurrentEffects; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
};

// Class ShooterGame.EffectComponent
// Size: 0xf8 (Inherited: 0xe8)
struct UEffectComponent : UActorComponent {
	char pad_E8[0x8]; // 0xe8(0x08)
	bool bCosmeticEffect; // 0xf0(0x01)
	char pad_F1[0x7]; // 0xf1(0x07)
};

// Class ShooterGame.EffectManagerComponent
// Size: 0x178 (Inherited: 0xe8)
struct UEffectManagerComponent : UActorComponent {
	char pad_E8[0x8]; // 0xe8(0x08)
	bool bDeferActiveEffects; // 0xf0(0x01)
	char pad_F1[0x7]; // 0xf1(0x07)
	struct TArray<struct FActiveEffectInfo> PendingEffects; // 0xf8(0x10)
	struct TArray<struct FPendingStartEffect> PendingStartEffects; // 0x108(0x10)
	struct TArray<struct FPendingStopEffect> PendingStopEffects; // 0x118(0x10)
	struct TArray<struct FActiveEffectInfo> ServerActiveEffects; // 0x128(0x10)
	struct TArray<struct FActiveEffectInfo> ClientActiveEffects; // 0x138(0x10)
	char pad_148[0x18]; // 0x148(0x18)
	struct TArray<struct FPendingReplicationEffect> EffectsPendingReplication; // 0x160(0x10)
	char pad_170[0x8]; // 0x170(0x08)
};

// Class ShooterGame.EffectPoolManagerComponent
// Size: 0x140 (Inherited: 0xe8)
struct UEffectPoolManagerComponent : UActorComponent {
	struct TMap<struct AEffectContainer*, struct UFXCTypePool*> FreePooledEffects; // 0xe8(0x50)
	char pad_138[0x8]; // 0x138(0x08)
};

// Class ShooterGame.EffectsBlueprintLibrary
// Size: 0x30 (Inherited: 0x30)
struct UEffectsBlueprintLibrary : UBlueprintFunctionLibrary {
};

// Class ShooterGame.EjectablesComponent
// Size: 0x110 (Inherited: 0xe8)
struct UEjectablesComponent : UActorComponent {
	struct TArray<struct FName> QueuedEjectableNamesToCreate; // 0xe8(0x10)
	struct TArray<struct FWeaponEjectable> Ejectables; // 0xf8(0x10)
	bool bHasPendingPrespawns; // 0x108(0x01)
	bool bHasEjectablesUsing1PSocketVelocity; // 0x109(0x01)
	bool bIsViewTarget; // 0x10a(0x01)
	bool bIsEquipped; // 0x10b(0x01)
	char pad_10C[0x4]; // 0x10c(0x04)
};

// Class ShooterGame.EmojiMapping
// Size: 0x80 (Inherited: 0x30)
struct UEmojiMapping : UObject {
	struct TMap<struct FName, struct FEmojiEntry> EmojiMap; // 0x30(0x50)
};

// Class ShooterGame.EmojiDecorator
// Size: 0x38 (Inherited: 0x38)
struct UEmojiDecorator : URichTextBlockImageDecorator {
};

// Class ShooterGame.EngagementScreenWidget
// Size: 0x2d8 (Inherited: 0x2c8)
struct UEngagementScreenWidget : UUserWidget {
	char pad_2C8[0x10]; // 0x2c8(0x10)
};

// Class ShooterGame.EnvQueryContext_QueryOwnerDirection
// Size: 0x30 (Inherited: 0x30)
struct UEnvQueryContext_QueryOwnerDirection : UEnvQueryContext {
};

// Class ShooterGame.EnvQueryContext_QueryOwnerLocation
// Size: 0x30 (Inherited: 0x30)
struct UEnvQueryContext_QueryOwnerLocation : UEnvQueryContext {
};

// Class ShooterGame.EnvQueryContext_StateContext_Direction
// Size: 0x30 (Inherited: 0x30)
struct UEnvQueryContext_StateContext_Direction : UEnvQueryContext {
};

// Class ShooterGame.EnvQueryContext_StateContext_Location
// Size: 0x30 (Inherited: 0x30)
struct UEnvQueryContext_StateContext_Location : UEnvQueryContext {
};

// Class ShooterGame.EnvQueryContext_StateOwner
// Size: 0x30 (Inherited: 0x30)
struct UEnvQueryContext_StateOwner : UEnvQueryContext {
};

// Class ShooterGame.EnvQueryTest_PawnProperties
// Size: 0x248 (Inherited: 0x238)
struct UEnvQueryTest_PawnProperties : UEnvQueryTest {
	struct UEnvQueryContext* Context; // 0x238(0x08)
	bool bAlive; // 0x240(0x01)
	enum class EAresAlliance Alliance; // 0x241(0x01)
	char pad_242[0x6]; // 0x242(0x06)
};

// Class ShooterGame.EQSStateComponent
// Size: 0x400 (Inherited: 0x3a0)
struct UEQSStateComponent : UTimedStateComponent {
	struct FMulticastInlineDelegate OnPreEQSQuery; // 0x3a0(0x10)
	struct FRotator RotationOffset; // 0x3b0(0x0c)
	char pad_3BC[0x4]; // 0x3bc(0x04)
	struct UEnvQuery* QueryTemplate; // 0x3c0(0x08)
	struct TArray<struct FAIDynamicParam> QueryConfig; // 0x3c8(0x10)
	enum class EEnvQueryRunMode RunMode; // 0x3d8(0x01)
	char pad_3D9[0x7]; // 0x3d9(0x07)
	struct UScriptStateComponent* FailState; // 0x3e0(0x08)
	char pad_3E8[0x18]; // 0x3e8(0x18)
};

// Class ShooterGame.EQSWorldQueryComponent
// Size: 0x2d0 (Inherited: 0x290)
struct UEQSWorldQueryComponent : USceneComponent {
	struct FMulticastInlineDelegate OnEQSQueryComplete; // 0x288(0x10)
	struct UEnvQuery* QueryTemplate; // 0x298(0x08)
	struct TArray<struct FAIDynamicParam> QueryConfig; // 0x2a0(0x10)
	enum class EEnvQueryRunMode RunMode; // 0x2b0(0x01)
	char pad_2B9[0x17]; // 0x2b9(0x17)
};

// Class ShooterGame.EquipmentChargeComponent
// Size: 0x168 (Inherited: 0x138)
struct UEquipmentChargeComponent : UAbilityResourceComponent {
	int32_t Cost; // 0x138(0x04)
	int32_t DesignPlaytestCost; // 0x13c(0x04)
	enum class EAresCostType CostType; // 0x140(0x01)
	bool bCanBuyCharges; // 0x141(0x01)
	char pad_142[0x2]; // 0x142(0x02)
	int32_t MaxCharges; // 0x144(0x04)
	int32_t ChargesGainedEachRefresh; // 0x148(0x04)
	int32_t MinGuaranteedCharges; // 0x14c(0x04)
	bool bRateLimitInShop; // 0x150(0x01)
	char pad_151[0x3]; // 0x151(0x03)
	int32_t RoundsWaitedForCharges; // 0x154(0x04)
	int32_t ChargesBoughtThisRound; // 0x158(0x04)
	int32_t CurrentTemporaryCharges; // 0x15c(0x04)
	int32_t TotalChargesAllowedToPurchaseThisRound; // 0x160(0x04)
	char pad_164[0x4]; // 0x164(0x04)
};

// Class ShooterGame.EquippableUIData
// Size: 0x140 (Inherited: 0x90)
struct UEquippableUIData : UBaseContentUIData {
	struct UTexture* KillStreamIcon; // 0x90(0x08)
	enum class EEquippableCategory Category; // 0x98(0x01)
	char pad_99[0x3]; // 0x99(0x03)
	struct FVector CameraPosition; // 0x9c(0x0c)
	float DefaultFOV; // 0xa8(0x04)
	float MaxFOV; // 0xac(0x04)
	float MinFOV; // 0xb0(0x04)
	struct FVector BuddyCameraPosition; // 0xb4(0x0c)
	float BuddyDefaultFOV; // 0xc0(0x04)
	float BuddyMaxFOV; // 0xc4(0x04)
	float BuddyMinFOV; // 0xc8(0x04)
	struct FVector PivotPoint; // 0xcc(0x0c)
	struct FWeaponStatUIData WeaponStats; // 0xd8(0x68)
};

// Class ShooterGame.EquippableDataAsset
// Size: 0x140 (Inherited: 0x50)
struct UEquippableDataAsset : UAresBasePrimaryDataAsset {
	struct TSoftClassPtr<UObject> Equippable; // 0x50(0x30)
	struct TSoftClassPtr<UObject> UIData; // 0x80(0x30)
	int32_t MaxAttachmentCost; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
	struct TSet<struct TSoftClassPtr<UObject>> ForcedAttachments; // 0xb8(0x50)
	struct TSoftClassPtr<UObject> DefaultSkin; // 0x108(0x30)
	uint32_t PreloadOnAppStartupPlatforms; // 0x138(0x04)
	char pad_13C[0x4]; // 0x13c(0x04)
};

// Class ShooterGame.EquippableAnimGraphComponent
// Size: 0x1c0 (Inherited: 0xe8)
struct UEquippableAnimGraphComponent : UActorComponent {
	float TimeLastFired; // 0xe8(0x04)
	float LastTimeBetweenShots; // 0xec(0x04)
	float LastShotRecoveryTime; // 0xf0(0x04)
	struct FRotator LastShotRotator; // 0xf4(0x0c)
	struct FAnimPunchTuning AnimPunchTuning; // 0x100(0x10)
	struct FAnimLeanTuning AnimLeanTuning; // 0x110(0x0c)
	struct FIdlePoseTuning IdlePoseTuning; // 0x11c(0x18)
	char pad_134[0x4]; // 0x134(0x04)
	struct FStabilityAnimTuning StabilityAnimTuning; // 0x138(0x88)
};

// Class ShooterGame.EquippableAttachmentUIData
// Size: 0x90 (Inherited: 0x90)
struct UEquippableAttachmentUIData : UBaseContentUIData {
};

// Class ShooterGame.EquippableAttachmentDataAsset
// Size: 0x120 (Inherited: 0x50)
struct UEquippableAttachmentDataAsset : UAresBasePrimaryDataAsset {
	char pad_50[0x8]; // 0x50(0x08)
	struct TSoftClassPtr<UObject> Socket; // 0x58(0x30)
	struct TSoftClassPtr<UObject> Equippable; // 0x88(0x30)
	struct TSoftClassPtr<UObject> Attachment; // 0xb8(0x30)
	struct TSoftClassPtr<UObject> UIData; // 0xe8(0x30)
	int32_t AttachmentCost; // 0x118(0x04)
	bool bIsUniversalAttachment; // 0x11c(0x01)
	char pad_11D[0x3]; // 0x11d(0x03)
};

// Class ShooterGame.SocketDataAsset
// Size: 0x80 (Inherited: 0x50)
struct USocketDataAsset : UAresBasePrimaryDataAsset {
	struct TSoftClassPtr<UObject> Socket; // 0x50(0x30)
};

// Class ShooterGame.EquippableCharmDataAsset
// Size: 0xc0 (Inherited: 0x50)
struct UEquippableCharmDataAsset : UAresBasePrimaryDataAsset {
	struct TSoftClassPtr<UObject> UIData; // 0x50(0x30)
	struct TArray<struct TSoftClassPtr<UObject>> Levels; // 0x80(0x10)
	struct TSoftClassPtr<UObject> Theme; // 0x90(0x30)
};

// Class ShooterGame.EquippableCharmUIData
// Size: 0x90 (Inherited: 0x90)
struct UEquippableCharmUIData : UBaseContentUIData {
};

// Class ShooterGame.EquippableCharmLevelDataAsset
// Size: 0xe8 (Inherited: 0x50)
struct UEquippableCharmLevelDataAsset : UAresBasePrimaryDataAsset {
	struct TSoftClassPtr<UObject> UIData; // 0x50(0x30)
	struct TSoftClassPtr<UObject> EquippableCharm; // 0x80(0x30)
	struct TSoftClassPtr<UObject> CharmAttachment; // 0xb0(0x30)
	int32_t CharmLevel; // 0xe0(0x04)
	char pad_E4[0x4]; // 0xe4(0x04)
};

// Class ShooterGame.EquippableCharmLevelUIData
// Size: 0x90 (Inherited: 0x90)
struct UEquippableCharmLevelUIData : UBaseContentUIData {
};

// Class ShooterGame.FogOfWarComponent
// Size: 0x320 (Inherited: 0xe8)
struct UFogOfWarComponent : UActorComponent {
	char pad_E8[0x70]; // 0xe8(0x70)
	bool bCanMakeActorsVisionRelevant; // 0x158(0x01)
	bool bBoundsIncludesOnlyCollidingComponents; // 0x159(0x01)
	bool bUseCachedBounds; // 0x15a(0x01)
	char pad_15B[0x1]; // 0x15b(0x01)
	float LookAheadTime; // 0x15c(0x04)
	struct AEffectContainer* DebugWallhackEffectClass; // 0x160(0x08)
	char pad_168[0x50]; // 0x168(0x50)
	bool bOwnerIsRelevantToClient; // 0x1b8(0x01)
	bool bOwnerIsHiddenForClient; // 0x1b9(0x01)
	char pad_1BA[0x56]; // 0x1ba(0x56)
	bool bReceivedNetUpdate; // 0x210(0x01)
	char pad_211[0x7]; // 0x211(0x07)
	struct TArray<struct UFogOfWarBoundsComponent*> ExtraFogOfWarBounds; // 0x218(0x10)
	char pad_228[0xa0]; // 0x228(0xa0)
	struct FEffectID DebugWallhackEffect; // 0x2c8(0x20)
	struct TArray<struct AActor*> CachedAttachedActors; // 0x2e8(0x10)
	struct TArray<struct UFogOfWarComponent*> CachedAttachedFoWComponents; // 0x2f8(0x10)
	bool bCacheNeedsRebuilding; // 0x308(0x01)
	char pad_309[0x7]; // 0x309(0x07)
	struct UFogOfWarDebugComponent* DebugComponent; // 0x310(0x08)
	struct UFogOfWarManagerComponent* ManagerComponent; // 0x318(0x08)
};

// Class ShooterGame.EquippableFogOfWarComponent
// Size: 0x320 (Inherited: 0x320)
struct UEquippableFogOfWarComponent : UFogOfWarComponent {
};

// Class ShooterGame.EquippableInputActionComponent
// Size: 0x108 (Inherited: 0xe8)
struct UEquippableInputActionComponent : UActorComponent {
	struct FName InputAction; // 0xe8(0x0c)
	char pad_F4[0x4]; // 0xf4(0x04)
	struct UInputComponent* InputComponent; // 0xf8(0x08)
	struct AShooterPlayerController* BoundController; // 0x100(0x08)
};

// Class ShooterGame.EquippableMinimapDisplayComponentDeprecated
// Size: 0x290 (Inherited: 0x290)
struct UEquippableMinimapDisplayComponentDeprecated : UMinimapDisplayComponentDeprecated {
};

// Class ShooterGame.EquippableSkinUIData
// Size: 0xb8 (Inherited: 0x90)
struct UEquippableSkinUIData : UBaseContentUIData {
	bool UseModelViewerOverrides; // 0x90(0x01)
	char pad_91[0x3]; // 0x91(0x03)
	struct FVector CameraPosition; // 0x94(0x0c)
	float DefaultFOV; // 0xa0(0x04)
	float MaxFOV; // 0xa4(0x04)
	float MinFOV; // 0xa8(0x04)
	struct FVector PivotPoint; // 0xac(0x0c)
};

// Class ShooterGame.EquippableSkinFeaturesDataAsset
// Size: 0x88 (Inherited: 0x50)
struct UEquippableSkinFeaturesDataAsset : UAresBasePrimaryDataAsset {
	enum class EModelCategory ModelCategory; // 0x50(0x01)
	enum class EFXCategory VFXCategory; // 0x51(0x01)
	enum class EFXCategory SFXCategory; // 0x52(0x01)
	enum class EAnimationCategory AnimationCategory; // 0x53(0x01)
	enum class EShaderCategory ShaderCategory; // 0x54(0x01)
	bool Finisher; // 0x55(0x01)
	bool KillBanner; // 0x56(0x01)
	enum class EMeleeCategory MeleeCategory; // 0x57(0x01)
	struct TSoftClassPtr<UObject> Skin; // 0x58(0x30)
};

// Class ShooterGame.EquippableSkinDataAsset
// Size: 0x1f0 (Inherited: 0x50)
struct UEquippableSkinDataAsset : UAresBasePrimaryDataAsset {
	char pad_50[0x8]; // 0x50(0x08)
	struct TSoftClassPtr<UObject> Equippable; // 0x58(0x30)
	struct TArray<struct TSoftClassPtr<UObject>> Levels; // 0x88(0x10)
	struct TSoftClassPtr<UObject> DefaultChroma; // 0x98(0x30)
	struct TArray<struct TSoftClassPtr<UObject>> Chromas; // 0xc8(0x10)
	struct TSoftClassPtr<UObject> UIData; // 0xd8(0x30)
	struct TMap<struct TSoftClassPtr<UObject>, struct TSoftClassPtr<UObject>> AttachmentOverrides; // 0x108(0x50)
	struct TSoftClassPtr<UObject> Theme; // 0x158(0x30)
	struct TSoftClassPtr<UObject> ContentTier; // 0x188(0x30)
	struct TSoftObjectPtr<UTexture2D> Wallpaper; // 0x1b8(0x30)
	bool UseHighestOwnedLevelNameAsDisplayName; // 0x1e8(0x01)
	char pad_1E9[0x7]; // 0x1e9(0x07)
};

// Class ShooterGame.EquippableSkinChromaUIData
// Size: 0xa8 (Inherited: 0x90)
struct UEquippableSkinChromaUIData : UBaseContentUIData {
	struct UTexture* FullRender; // 0x90(0x08)
	struct UTexture* FullRenderOverride; // 0x98(0x08)
	struct UTexture* Swatch; // 0xa0(0x08)
};

// Class ShooterGame.EquippableSkinChromaDataAsset
// Size: 0x170 (Inherited: 0x50)
struct UEquippableSkinChromaDataAsset : UAresBasePrimaryDataAsset {
	char pad_50[0x8]; // 0x50(0x08)
	struct TSoftClassPtr<UObject> EquippableSkinChroma; // 0x58(0x30)
	struct TSoftClassPtr<UObject> UIData; // 0x88(0x30)
	struct TMap<struct TSoftClassPtr<UObject>, struct TSoftClassPtr<UObject>> AttachmentOverrides; // 0xb8(0x50)
	struct TSoftClassPtr<UObject> ModelViewerFXC; // 0x108(0x30)
	struct TSoftClassPtr<UObject> StreamedVideo; // 0x138(0x30)
	bool bWhenFocusingBuddyDisableFXC; // 0x168(0x01)
	char pad_169[0x7]; // 0x169(0x07)
};

// Class ShooterGame.EquippableSkinLevelUIData
// Size: 0x98 (Inherited: 0x90)
struct UEquippableSkinLevelUIData : UBaseContentUIData {
	enum class EEquippableSkinLevelItem LevelItem; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
};

// Class ShooterGame.EquippableSkinLevelDataAsset
// Size: 0x118 (Inherited: 0x50)
struct UEquippableSkinLevelDataAsset : UAresBasePrimaryDataAsset {
	char pad_50[0x8]; // 0x50(0x08)
	struct TSoftClassPtr<UObject> SkinAttachment; // 0x58(0x30)
	struct TSoftClassPtr<UObject> UIData; // 0x88(0x30)
	struct TSoftClassPtr<UObject> ModelViewerFXC; // 0xb8(0x30)
	struct TSoftClassPtr<UObject> StreamedVideo; // 0xe8(0x30)
};

// Class ShooterGame.StateMachineComponent
// Size: 0x1e0 (Inherited: 0xe8)
struct UStateMachineComponent : UActorComponent {
	struct FMulticastInlineDelegate OnStateMachineReset; // 0xe8(0x10)
	struct FMulticastInlineDelegate OnStateAdded; // 0xf8(0x10)
	struct FMulticastInlineDelegate OnStateChanged; // 0x108(0x10)
	char pad_118[0x18]; // 0x118(0x18)
	struct TArray<struct UStateTransitionContext*> CachedTransitionContexts; // 0x130(0x10)
	struct TMap<struct UStateComponent*, struct FStateMetadata> States; // 0x140(0x50)
	struct FStateContext ClientPredictedCurrentState; // 0x190(0x18)
	struct FStateContext AuthCurrentState; // 0x1a8(0x18)
	bool bUseReplicatedStateTransitionContext; // 0x1c0(0x01)
	char pad_1C1[0x3]; // 0x1c1(0x03)
	float CurrentSubframeWorldTimeSeconds; // 0x1c4(0x04)
	struct UStateComponent* StartingState; // 0x1c8(0x08)
	struct UValueDisagreementTimer* CurrentStateDisagreementTimer; // 0x1d0(0x08)
	struct UValueDisagreementTimer* CurrentStateDisagreementTimerClassOverride; // 0x1d8(0x08)
};

// Class ShooterGame.EquippableStateMachineComponent
// Size: 0x310 (Inherited: 0x1e0)
struct UEquippableStateMachineComponent : UStateMachineComponent {
	char pad_1E0[0xa8]; // 0x1e0(0xa8)
	bool bStateMachineEnabled; // 0x288(0x01)
	char pad_289[0x7]; // 0x289(0x07)
	struct URespondToEventStateComponent* InactiveState; // 0x290(0x08)
	enum class EStateBehaviorOnDeath DeathBehavior; // 0x298(0x01)
	char pad_299[0x7]; // 0x299(0x07)
	struct UStateComponent* DeathState; // 0x2a0(0x08)
	struct UStateComponent* CurrentStateForBuffs; // 0x2a8(0x08)
	struct TArray<struct FEquippableStateBuffInfo> ActiveStateBuffs; // 0x2b0(0x10)
	char pad_2C0[0x10]; // 0x2c0(0x10)
	float InputQueueTimeDurations[0xf]; // 0x2d0(0x3c)
	bool bClientSimulationDesynced; // 0x30c(0x01)
	char pad_30D[0x3]; // 0x30d(0x03)
};

// Class ShooterGame.EquippableVisibilityComponent
// Size: 0x180 (Inherited: 0x180)
struct UEquippableVisibilityComponent : UVisibilityComponent {
};

// Class ShooterGame.EquipStateComponent
// Size: 0x2f8 (Inherited: 0x2c8)
struct UEquipStateComponent : UScriptStateComponent {
	bool bShouldGhostEquip; // 0x2c8(0x01)
	char pad_2C9[0x7]; // 0x2c9(0x07)
	struct FText EquippableName; // 0x2d0(0x18)
	bool bBlocking; // 0x2e8(0x01)
	char pad_2E9[0x7]; // 0x2e9(0x07)
	struct UStateComponent* FailStateComponent; // 0x2f0(0x08)
};

// Class ShooterGame.EULAManager
// Size: 0xe8 (Inherited: 0x80)
struct UEULAManager : UInitSystem {
	struct UConfigManager* ConfigManager; // 0x80(0x08)
	struct URSOManager* RSOManager; // 0x88(0x08)
	struct UEULAService* EULAService; // 0x90(0x08)
	char pad_98[0x50]; // 0x98(0x50)
};

// Class ShooterGame.EULAService
// Size: 0x38 (Inherited: 0x30)
struct UEULAService : UObject {
	char pad_30[0x8]; // 0x30(0x08)
};

// Class ShooterGame.EventUIData
// Size: 0xa8 (Inherited: 0x90)
struct UEventUIData : UBaseContentUIData {
	struct FText ShortDisplayName; // 0x90(0x18)
};

// Class ShooterGame.EventDataAsset
// Size: 0xc0 (Inherited: 0x50)
struct UEventDataAsset : UAresBasePrimaryDataAsset {
	struct FDateTime StartTime; // 0x50(0x08)
	struct FDateTime EndTime; // 0x58(0x08)
	struct TSoftClassPtr<UObject> UIData; // 0x60(0x30)
	struct TSoftClassPtr<UObject> BannerWidget; // 0x90(0x30)
};

// Class ShooterGame.ExitGameScreen
// Size: 0x2e0 (Inherited: 0x2e0)
struct UExitGameScreen : UAresContextMenuBaseWidget {
};

// Class ShooterGame.ExploitCorpseStateComponent
// Size: 0x2c8 (Inherited: 0x2c8)
struct UExploitCorpseStateComponent : UScriptStateComponent {
};

// Class ShooterGame.ExternalResourceComponent
// Size: 0x148 (Inherited: 0x138)
struct UExternalResourceComponent : UAbilityResourceComponent {
	enum class EAresItemSlot ExternalSlot; // 0x138(0x01)
	char pad_139[0x7]; // 0x139(0x07)
	struct UResourceComponent* CachedExternalResource; // 0x140(0x08)
};

// Class ShooterGame.ExternalUserAction
// Size: 0xb8 (Inherited: 0xa8)
struct UExternalUserAction : UEditableUserActionBase {
	struct FMulticastInlineDelegate OnTriggered; // 0xa8(0x10)
};

// Class ShooterGame.FaceAimFiringAnimSlot3P
// Size: 0x38 (Inherited: 0x38)
struct UFaceAimFiringAnimSlot3P : UAnimSlotFace3P {
};

// Class ShooterGame.FaceAimingAnimSlot3P
// Size: 0x38 (Inherited: 0x38)
struct UFaceAimingAnimSlot3P : UAnimSlotFace3P {
};

// Class ShooterGame.FaceDeadAnimSlot3P
// Size: 0x38 (Inherited: 0x38)
struct UFaceDeadAnimSlot3P : UAnimSlotFace3P {
};

// Class ShooterGame.FaceFiringAnimSlot3P
// Size: 0x38 (Inherited: 0x38)
struct UFaceFiringAnimSlot3P : UAnimSlotFace3P {
};

// Class ShooterGame.FaceHitAnimSlot3P
// Size: 0x38 (Inherited: 0x38)
struct UFaceHitAnimSlot3P : UAnimSlotFace3P {
};

// Class ShooterGame.FaceIdleAnimSlot3P
// Size: 0x38 (Inherited: 0x38)
struct UFaceIdleAnimSlot3P : UAnimSlotFace3P {
};

// Class ShooterGame.FaceMeleeAttackingAnimSlot3P
// Size: 0x38 (Inherited: 0x38)
struct UFaceMeleeAttackingAnimSlot3P : UAnimSlotFace3P {
};

// Class ShooterGame.FallLowerBody3P
// Size: 0x38 (Inherited: 0x38)
struct UFallLowerBody3P : UAnimSlotLowerBody3P {
};

// Class ShooterGame.FallUpperBody3P
// Size: 0x38 (Inherited: 0x38)
struct UFallUpperBody3P : UAnimSlotUpperBody3P {
};

// Class ShooterGame.FalloffMultiplierDamageQuery
// Size: 0x30 (Inherited: 0x30)
struct UFalloffMultiplierDamageQuery : UInterface {
};

// Class ShooterGame.FavoritesManager
// Size: 0x178 (Inherited: 0x80)
struct UFavoritesManager : UInitSystem {
	char pad_80[0x18]; // 0x80(0x18)
	struct FPlayerFavorites PersistedFavorites; // 0x98(0x60)
	struct TMap<struct FGuid, enum class EFavoritesActionType> PendingFavoritesChanges; // 0xf8(0x50)
	struct UFavoritesService* FavoritesService; // 0x148(0x08)
	struct UConfigManager* ConfigManager; // 0x150(0x08)
	char pad_158[0x8]; // 0x158(0x08)
	struct URSOManager* RSOManager; // 0x160(0x08)
	struct URMSManager* RMSManager; // 0x168(0x08)
	struct UDeferredOperation* SubmitFavoritesOperation; // 0x170(0x08)
};

// Class ShooterGame.FavoritesService
// Size: 0x38 (Inherited: 0x30)
struct UFavoritesService : UObject {
	struct UConfigManager* ConfigManager; // 0x30(0x08)
};

// Class ShooterGame.FFACombatReportComponent
// Size: 0x120 (Inherited: 0x118)
struct UFFACombatReportComponent : UCombatReportComponent {
	char pad_118[0x8]; // 0x118(0x08)
};

// Class ShooterGame.FFATeamComponent
// Size: 0xf8 (Inherited: 0xf8)
struct UFFATeamComponent : UBaseTeamComponent {
};

// Class ShooterGame.FidgetAnimSlot1P
// Size: 0x38 (Inherited: 0x38)
struct UFidgetAnimSlot1P : UAnimSlot1P {
};

// Class ShooterGame.WrapperListModel
// Size: 0x58 (Inherited: 0x48)
struct UWrapperListModel : UOrderedListModelBase {
	struct TScriptInterface<IOrderedListModel> WrappedListModel; // 0x48(0x10)
};

// Class ShooterGame.IndexedWrapperListModelBase
// Size: 0x68 (Inherited: 0x58)
struct UIndexedWrapperListModelBase : UWrapperListModel {
	char pad_58[0x10]; // 0x58(0x10)
};

// Class ShooterGame.FilteredListModelBase
// Size: 0x68 (Inherited: 0x68)
struct UFilteredListModelBase : UIndexedWrapperListModelBase {
};

// Class ShooterGame.FilteredListModel
// Size: 0x78 (Inherited: 0x68)
struct UFilteredListModel : UFilteredListModelBase {
	char pad_68[0x10]; // 0x68(0x10)
};

// Class ShooterGame.FindSpawnSpotStateComponent
// Size: 0x320 (Inherited: 0x2c8)
struct UFindSpawnSpotStateComponent : UScriptStateComponent {
	struct FVector SourceOffset; // 0x2c8(0x0c)
	struct FVector TargetOffset; // 0x2d4(0x0c)
	struct TArray<struct FFindSpawnSpotTrace> Traces; // 0x2e0(0x10)
	float TestRadius; // 0x2f0(0x04)
	bool bUsePawnTransform; // 0x2f4(0x01)
	bool bTestSpawnValid; // 0x2f5(0x01)
	bool bAdjustFinalLocation; // 0x2f6(0x01)
	enum class ECollisionChannel LoSCheckChannel; // 0x2f7(0x01)
	struct AActor* SpawnTestClass; // 0x2f8(0x08)
	struct FVector FallbackTargetOffset; // 0x300(0x0c)
	float SpawnedObjectRadius; // 0x30c(0x04)
	bool bDrawDebug; // 0x310(0x01)
	char pad_311[0x7]; // 0x311(0x07)
	struct UStateComponent* FailStateComponent; // 0x318(0x08)
};

// Class ShooterGame.SimpleProjectileMovementComponent
// Size: 0x188 (Inherited: 0x128)
struct USimpleProjectileMovementComponent : UMovementComponent {
	char pad_128[0x38]; // 0x128(0x38)
	float MaximumRange; // 0x160(0x04)
	char pad_164[0x4]; // 0x164(0x04)
	bool bMaximumRangeReachedEventTriggered; // 0x168(0x01)
	enum class ECollisionChannel TraceChannel; // 0x169(0x01)
	char pad_16A[0x6]; // 0x16a(0x06)
	struct TArray<struct AActor*> RequestedIgnoreActors; // 0x170(0x10)
	uint32_t NumCollisions; // 0x180(0x04)
	enum class EProjectileMoveState ProjectileMoveState; // 0x184(0x01)
	char pad_185[0x3]; // 0x185(0x03)
};

// Class ShooterGame.FiniteSpeedMovementComponent
// Size: 0x2d8 (Inherited: 0x188)
struct UFiniteSpeedMovementComponent : USimpleProjectileMovementComponent {
	float ProjectileSpeed; // 0x188(0x04)
	float ProjectileGravityScale; // 0x18c(0x04)
	struct FVector ImpartActorVelocityPercentVector; // 0x190(0x0c)
	float ImpartVelocityMatchingDirectionFraction; // 0x19c(0x04)
	float DownwardVelocityScale; // 0x1a0(0x04)
	bool bUseTrueVerticalVelocity; // 0x1a4(0x01)
	bool bEnableTargetUpdating; // 0x1a5(0x01)
	char pad_1A6[0x2]; // 0x1a6(0x02)
	float ServerMovementTime; // 0x1a8(0x04)
	char pad_1AC[0xb4]; // 0x1ac(0xb4)
	bool bTeleportedThisMove; // 0x260(0x01)
	bool bNewServerMovementTime; // 0x261(0x01)
	char pad_262[0x2]; // 0x262(0x02)
	float ServerTeleportTime; // 0x264(0x04)
	struct FVector LaunchVelocity; // 0x268(0x0c)
	float DefaultProjectileSpeed; // 0x274(0x04)
	float DefaultProjectileGravityScale; // 0x278(0x04)
	float InitializedForUseTimestamp; // 0x27c(0x04)
	char pad_280[0x58]; // 0x280(0x58)
};

// Class ShooterGame.FiringEffectComponent
// Size: 0x188 (Inherited: 0xf8)
struct UFiringEffectComponent : UEffectComponent {
	struct FMulticastInlineDelegate FxcOnRegisterFiringState; // 0xf8(0x10)
	struct FMulticastInlineDelegate FxcOnStartedShooting; // 0x108(0x10)
	struct FMulticastInlineDelegate FxcOnShot; // 0x118(0x10)
	struct FMulticastInlineDelegate FxcOnStoppedShooting; // 0x128(0x10)
	float BurstFireTailTimeMillseconds; // 0x138(0x04)
	bool bRemoteSimulated; // 0x13c(0x01)
	char pad_13D[0x3]; // 0x13d(0x03)
	int32_t RemoteSimulatedShotIndex; // 0x140(0x04)
	int32_t RemoteSimulatedMagazineAmmoCount; // 0x144(0x04)
	float NextShotTimeRemaining; // 0x148(0x04)
	char pad_14C[0x4]; // 0x14c(0x04)
	struct AShooterCharacter* FiringCharacter; // 0x150(0x08)
	struct FProjectileFireData FireData; // 0x158(0x30)
};

// Class ShooterGame.FiringStateTransitionContext
// Size: 0x38 (Inherited: 0x30)
struct UFiringStateTransitionContext : UStateTransitionContext {
	enum class EFiringStateTransitionContext Context; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// Class ShooterGame.FiringStateComponent
// Size: 0x4b8 (Inherited: 0x368)
struct UFiringStateComponent : URespondToEventStateComponent {
	struct FMulticastInlineDelegate OnShot; // 0x368(0x10)
	char pad_378[0x18]; // 0x378(0x18)
	struct FMulticastInlineDelegate OnStartedShooting; // 0x390(0x10)
	struct FMulticastInlineDelegate OnStoppedShooting; // 0x3a0(0x10)
	struct FMulticastInlineDelegate OnReadyToFireThisFrame; // 0x3b0(0x10)
	enum class EShellCasingEjectableBehavior ShellCasingEjectableBehavior; // 0x3c0(0x01)
	char pad_3C1[0x3]; // 0x3c1(0x03)
	int32_t ResourcesConsumedPerShot; // 0x3c4(0x04)
	float ShotAudibleRange; // 0x3c8(0x04)
	float FiringRate; // 0x3cc(0x04)
	bool bCanFireWhileZooming; // 0x3d0(0x01)
	char pad_3D1[0x7]; // 0x3d1(0x07)
	struct TArray<struct FTriggerInput> FiringTriggerInputs; // 0x3d8(0x10)
	struct AEffectContainer* FiringEffectType; // 0x3e8(0x08)
	float ErrorPower; // 0x3f0(0x04)
	int32_t ErrorRetries; // 0x3f4(0x04)
	struct FAnimPunchTuning AnimPunchTuning; // 0x3f8(0x10)
	int32_t RoundsBetweenTracers; // 0x408(0x04)
	int32_t RoundsBetweenImpacts; // 0x40c(0x04)
	struct UStabilityComponent* RegisteredStabilityComponent; // 0x410(0x08)
	struct UResourceComponent* RegisteredResourceComponent; // 0x418(0x08)
	struct UNetworkedRandomNumberGeneratorComponent* NetworkedRandomNumberGeneratorComponent; // 0x420(0x08)
	struct FFiringStateVariables FiringStateVariables; // 0x428(0x10)
	int32_t RoundsUntilNextImpact; // 0x438(0x04)
	char pad_43C[0x4]; // 0x43c(0x04)
	struct UStateComponent* ReturnState; // 0x440(0x08)
	struct AShooterCharacter* OwningCharacter; // 0x448(0x08)
	struct FNetworkedMovementTimestamp LastShotSubframeTimeStamp; // 0x450(0x10)
	struct FNetworkedMovementTimestamp NextShotSubframeTimeStamp; // 0x460(0x10)
	struct AProjectile* ReusableHitScanProjectile; // 0x470(0x08)
	struct TArray<struct UFiringEffectComponent*> ActiveFiringEffects; // 0x478(0x10)
	struct FProjectileTuning ProjectileTuning; // 0x488(0x20)
	bool bBurstFire; // 0x4a8(0x01)
	char pad_4A9[0x3]; // 0x4a9(0x03)
	struct FBurstTuning BurstTuning; // 0x4ac(0x08)
	char pad_4B4[0x4]; // 0x4b4(0x04)
};

// Class ShooterGame.FixedDurationUnequipStateComponent
// Size: 0x3a8 (Inherited: 0x3a0)
struct UFixedDurationUnequipStateComponent : UTimedStateComponent {
	enum class EEquipSpeed EquipSpeed; // 0x3a0(0x01)
	char pad_3A1[0x7]; // 0x3a1(0x07)
};

// Class ShooterGame.FixedMoveTimeStepManagerComponent
// Size: 0x100 (Inherited: 0xe8)
struct UFixedMoveTimeStepManagerComponent : UActorComponent {
	char FixedMoveTimeStepsPerSecond; // 0xe8(0x01)
	char pad_E9[0x7]; // 0xe9(0x07)
	struct TArray<struct FScheduledTimeStepChange> ScheduledTimeStepChanges; // 0xf0(0x10)
};

// Class ShooterGame.SubRangeListModelBase
// Size: 0x68 (Inherited: 0x58)
struct USubRangeListModelBase : UWrapperListModel {
	char pad_58[0x10]; // 0x58(0x10)
};

// Class ShooterGame.PagedListModelBase
// Size: 0x90 (Inherited: 0x68)
struct UPagedListModelBase : USubRangeListModelBase {
	struct FMulticastInlineDelegate OnCurrentPageNumberChanged; // 0x68(0x10)
	struct FMulticastInlineDelegate OnNumPagesChanged; // 0x78(0x10)
	char pad_88[0x8]; // 0x88(0x08)
};

// Class ShooterGame.FixedSizePagedListModel
// Size: 0x98 (Inherited: 0x90)
struct UFixedSizePagedListModel : UPagedListModelBase {
	char pad_90[0x8]; // 0x90(0x08)
};

// Class ShooterGame.FixedSlotMapToListModelBase
// Size: 0xb8 (Inherited: 0x48)
struct UFixedSlotMapToListModelBase : UOrderedListModelBase {
	struct TArray<struct FWildcard> Items; // 0x48(0x10)
	struct TMap<struct FWildcard, int32_t> KeyToIndexMap; // 0x58(0x50)
	struct TScriptInterface<IUnorderedMapModel> WrappedMapModel; // 0xa8(0x10)
};

// Class ShooterGame.FixedSlotMapToListModel
// Size: 0xc8 (Inherited: 0xb8)
struct UFixedSlotMapToListModel : UFixedSlotMapToListModelBase {
	char pad_B8[0x10]; // 0xb8(0x10)
};

// Class ShooterGame.FogOfWarBoundsComponent
// Size: 0x580 (Inherited: 0x570)
struct UFogOfWarBoundsComponent : UBoxComponent {
	bool bCountsForFogOfWarBounds; // 0x570(0x01)
	char pad_571[0xf]; // 0x571(0x0f)
};

// Class ShooterGame.FogOfWarDebugComponent
// Size: 0x100 (Inherited: 0xe8)
struct UFogOfWarDebugComponent : UActorComponent {
	char pad_E8[0x10]; // 0xe8(0x10)
	bool bWasGameplayActive; // 0xf8(0x01)
	char pad_F9[0x7]; // 0xf9(0x07)
};

// Class ShooterGame.FogOfWarManagerComponent
// Size: 0x2d0 (Inherited: 0xe8)
struct UFogOfWarManagerComponent : UActorComponent {
	float AdditionalLookAheadTime; // 0xe8(0x04)
	bool bTeamIsAlwaysRelevant; // 0xec(0x01)
	bool bUseSharedTeamRelevancy; // 0xed(0x01)
	bool bUseUmbraIfAvailable; // 0xee(0x01)
	char pad_EF[0x1]; // 0xef(0x01)
	float AlwaysRelevantDistanceSquared; // 0xf0(0x04)
	float NotRelevantCacheLifetimeInSeconds; // 0xf4(0x04)
	float PreRoundNotRelevantCacheLifetimeInSeconds; // 0xf8(0x04)
	float NoComponentCacheLifetimeInSeconds; // 0xfc(0x04)
	float TeamCacheLifetimeInSeconds; // 0x100(0x04)
	float RelevantCacheLifetimeInSeconds; // 0x104(0x04)
	int32_t CachePreallocationElements; // 0x108(0x04)
	char pad_10C[0x5c]; // 0x10c(0x5c)
	struct UUmbraPrecomputedData* UmbraData; // 0x168(0x08)
	char pad_170[0x150]; // 0x170(0x150)
	struct AShooterGameMode* OwnerGameMode; // 0x2c0(0x08)
	char pad_2C8[0x8]; // 0x2c8(0x08)
};

// Class ShooterGame.FontStyleDataAsset
// Size: 0xb0 (Inherited: 0x38)
struct UFontStyleDataAsset : UPrimaryDataAsset {
	struct FAresFontStyle AresFontStyle; // 0x38(0x68)
	struct TArray<struct UFontStyleDataAsset*> ParentFontStyles; // 0xa0(0x10)
};

// Class ShooterGame.FootstepABTestComponentBase
// Size: 0xf8 (Inherited: 0xe8)
struct UFootstepABTestComponentBase : UActorComponent {
	struct FName TestName; // 0xe8(0x0c)
	char pad_F4[0x4]; // 0xf4(0x04)
};

// Class ShooterGame.FootstepsComponent
// Size: 0x250 (Inherited: 0xe8)
struct UFootstepsComponent : UActorComponent {
	float FootstepPlayTimeBank; // 0xe8(0x04)
	float LastFootstepPlayedTime; // 0xec(0x04)
	float FootstepPlayTimeSeconds; // 0xf0(0x04)
	float FootstepBankAccumulationStartPercent; // 0xf4(0x04)
	float PercentOfRunWalkTransitionToGenerateFootstepSound; // 0xf8(0x04)
	float FootstepSpeedPercentOfWalkingToDecayTimeBank; // 0xfc(0x04)
	float FootstepTimeBankDecayRate; // 0x100(0x04)
	char pad_104[0x4]; // 0x104(0x04)
	struct TArray<struct UAkAudioEvent*> RunFootstepEvents; // 0x108(0x10)
	struct TArray<struct UAkAudioEvent*> AltRunFootstepEvents; // 0x118(0x10)
	struct AEffectContainer* RunFootstepFXC; // 0x128(0x08)
	struct UAkAudioEvent* RunFootstepEvent; // 0x130(0x08)
	struct TArray<struct UAkAudioEvent*> JumpTakeOffEvents; // 0x138(0x10)
	struct TArray<struct UAkAudioEvent*> AltJumpTakeOffEvents; // 0x148(0x10)
	struct AEffectContainer* JumpTakeOffFXC; // 0x158(0x08)
	struct UAkAudioEvent* JumpTakeOffEvent; // 0x160(0x08)
	struct TArray<struct UAkAudioEvent*> JumpLandingEvents; // 0x168(0x10)
	struct TArray<struct UAkAudioEvent*> AltJumpLandingEvents; // 0x178(0x10)
	struct AEffectContainer* JumpLandingFXC; // 0x188(0x08)
	struct UAkAudioEvent* JumpLandingEvent; // 0x190(0x08)
	bool bUsingAlternateEvents; // 0x198(0x01)
	char pad_199[0x3]; // 0x199(0x03)
	float JumpFallDistanceRequiredForLandingSound; // 0x19c(0x04)
	struct FName FootstepSoundAttachPoint; // 0x1a0(0x0c)
	float FootstepAudibleDistance; // 0x1ac(0x04)
	float AltFootstepAudibleDistance; // 0x1b0(0x04)
	float CalloutAudibleDistanceScalar; // 0x1b4(0x04)
	bool bCountSteps; // 0x1b8(0x01)
	char pad_1B9[0x3]; // 0x1b9(0x03)
	float FootstepMinTickTime; // 0x1bc(0x04)
	struct FVector FloorMovementVelocity; // 0x1c0(0x0c)
	char pad_1CC[0x14]; // 0x1cc(0x14)
	struct TMap<struct FName, struct FFootstepOverrideType> FootstepOverrides; // 0x1e0(0x50)
	float NextFootstepTimeout; // 0x230(0x04)
	char pad_234[0x4]; // 0x234(0x04)
	struct UPhysicalMaterial* FootstepSoundOverride; // 0x238(0x08)
	struct AShooterCharacter* CharacterOwner; // 0x240(0x08)
	char pad_248[0x8]; // 0x248(0x08)
};

// Class ShooterGame.ForceModule
// Size: 0x168 (Inherited: 0x30)
struct UForceModule : UObject {
	struct TArray<struct FGameplayTag> ModuleTags; // 0x30(0x10)
	char pad_40[0x8]; // 0x40(0x08)
	struct TMap<enum class EForceModuleAttribute, struct FRuntimeFloatCurve> Modifiers; // 0x48(0x50)
	float Duration; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
	struct AActor* ForceSource; // 0xa0(0x08)
	struct FVector ForceSourceLocation; // 0xa8(0x0c)
	bool bRewindForceSource; // 0xb4(0x01)
	bool bGroundingForce; // 0xb5(0x01)
	bool bDisableMovementModifiers; // 0xb6(0x01)
	char pad_B7[0x3d]; // 0xb7(0x3d)
	bool bUseIntegrator; // 0xf4(0x01)
	char pad_F5[0x3]; // 0xf5(0x03)
	int32_t MaxIterations; // 0xf8(0x04)
	float MaxTimeStep; // 0xfc(0x04)
	bool bForceStopsOnBlock; // 0x100(0x01)
	char pad_101[0x7]; // 0x101(0x07)
	struct FClassInclusionExclusionFilter BlockingActorFilter; // 0x108(0x50)
	float MinAngleToStopForce; // 0x158(0x04)
	char pad_15C[0x8]; // 0x15c(0x08)
	float OffGroundTimeModifier; // 0x164(0x04)
};

// Class ShooterGame.ForceModuleManagerComponent
// Size: 0x1a8 (Inherited: 0xe8)
struct UForceModuleManagerComponent : UActorComponent {
	char pad_E8[0x8]; // 0xe8(0x08)
	struct FMulticastInlineDelegate OnForceModulePreAdd; // 0xf0(0x10)
	struct FMulticastInlineDelegate OnForceModuleAdded; // 0x100(0x10)
	struct FMulticastInlineDelegate OnForceModuleRemoved; // 0x110(0x10)
	char pad_120[0x20]; // 0x120(0x20)
	struct TArray<struct UForceModule*> ForceModules; // 0x140(0x10)
	struct TArray<struct FForceModuleRecord> AuthActivePredictedForceModules; // 0x150(0x10)
	char pad_160[0x48]; // 0x160(0x48)
};

// Class ShooterGame.SpectateActionComponent
// Size: 0x108 (Inherited: 0xe8)
struct USpectateActionComponent : UActorComponent {
	char pad_E8[0x10]; // 0xe8(0x10)
	struct UScreenTransitionComponent* CachedTransitionComponent; // 0xf8(0x08)
	struct UViewTargetComponent* CachedViewTargetComponent; // 0x100(0x08)
};

// Class ShooterGame.FreeCamComponent
// Size: 0x150 (Inherited: 0x108)
struct UFreeCamComponent : USpectateActionComponent {
	char pad_108[0x30]; // 0x108(0x30)
	struct UGamepadInputComponent* CachedGamepadComponent; // 0x138(0x08)
	struct AObserverPawn* FreeCamPawn; // 0x140(0x08)
	bool bShouldSpectateFreeCam; // 0x148(0x01)
	char pad_149[0x7]; // 0x149(0x07)
};

// Class ShooterGame.FriendModel
// Size: 0x168 (Inherited: 0x30)
struct UFriendModel : UObject {
	struct FMulticastInlineDelegate OnConversationIDChanged; // 0x30(0x10)
	struct FMulticastInlineDelegate OnDisplayGroupChanged; // 0x40(0x10)
	struct FMulticastInlineDelegate OnGameNameChanged; // 0x50(0x10)
	struct FMulticastInlineDelegate OnTagLineChanged; // 0x60(0x10)
	struct FMulticastInlineDelegate OnGroupChanged; // 0x70(0x10)
	struct FMulticastInlineDelegate OnNoteChanged; // 0x80(0x10)
	struct FMulticastInlineDelegate OnMessageChanged; // 0x90(0x10)
	struct FMulticastInlineDelegate OnProductChanged; // 0xa0(0x10)
	struct FMulticastInlineDelegate OnSummaryChanged; // 0xb0(0x10)
	struct FString Subject; // 0xc0(0x10)
	struct FString ConversationID; // 0xd0(0x10)
	struct FString DisplayGroup; // 0xe0(0x10)
	struct FString GameName; // 0xf0(0x10)
	struct FString TagLine; // 0x100(0x10)
	struct FString Group; // 0x110(0x10)
	struct FString Name; // 0x120(0x10)
	struct FString Note; // 0x130(0x10)
	struct FString Message; // 0x140(0x10)
	enum class EPresenceProduct product; // 0x150(0x01)
	char pad_151[0x7]; // 0x151(0x07)
	struct FString Summary; // 0x158(0x10)
};

// Class ShooterGame.FriendNotificationManager
// Size: 0xa0 (Inherited: 0x80)
struct UFriendNotificationManager : UInitSystem {
	struct UFriendsManager* FriendsManager; // 0x80(0x08)
	struct UFriendsModel* FriendsModel; // 0x88(0x08)
	struct UNotificationManager* NotificationManager; // 0x90(0x08)
	char pad_98[0x8]; // 0x98(0x08)
};

// Class ShooterGame.FriendRequestModel
// Size: 0x80 (Inherited: 0x30)
struct UFriendRequestModel : UObject {
	struct FString ID; // 0x30(0x10)
	struct FString Subject; // 0x40(0x10)
	struct FString GameName; // 0x50(0x10)
	struct FString TagLine; // 0x60(0x10)
	struct FString Note; // 0x70(0x10)
};

// Class ShooterGame.FriendsManager
// Size: 0x180 (Inherited: 0x80)
struct UFriendsManager : UInitSystem {
	char pad_80[0x50]; // 0x80(0x50)
	struct FMulticastInlineDelegate OnFriendsLoaded; // 0xd0(0x10)
	struct FMulticastInlineDelegate OnRequestedPlayerNotFound; // 0xe0(0x10)
	struct FMulticastInlineDelegate OnMaximumIncomingRequests; // 0xf0(0x10)
	struct FMulticastInlineDelegate OnMaximumOutgoingRequests; // 0x100(0x10)
	struct FMulticastInlineDelegate OnYourFriendsListFull; // 0x110(0x10)
	struct FMulticastInlineDelegate OnRepeatOutboundFriendRequest; // 0x120(0x10)
	struct FMulticastInlineDelegate OnAlreadyFriends; // 0x130(0x10)
	struct UConfigManager* ConfigManager; // 0x140(0x08)
	struct UFriendsService* FriendsService; // 0x148(0x08)
	struct UFriendsModel* FriendsModel; // 0x150(0x08)
	struct UChatSessionManager* ChatSessionManager; // 0x158(0x08)
	struct UAresSettingsManager* AresSettingsManager; // 0x160(0x08)
	char pad_168[0x18]; // 0x168(0x18)
};

// Class ShooterGame.FriendsModel
// Size: 0x1a8 (Inherited: 0x30)
struct UFriendsModel : UObject {
	struct FMulticastInlineDelegate OnFriendAdded; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFriendRemoved; // 0x40(0x10)
	struct FMulticastInlineDelegate OnOutboundFriendRequestAdded; // 0x50(0x10)
	struct FMulticastInlineDelegate OnOutboundFriendRequestRemoved; // 0x60(0x10)
	struct FMulticastInlineDelegate OnInboundFriendRequestAdded; // 0x70(0x10)
	struct FMulticastInlineDelegate OnInboundFriendRequestRemoved; // 0x80(0x10)
	struct TMap<struct FString, struct UFriendModel*> Friends; // 0x90(0x50)
	struct TMap<struct FString, struct UFriendRequestModel*> OutboundFriendRequests; // 0xe0(0x50)
	struct TMap<struct FString, struct UFriendRequestModel*> InboundFriendRequests_Backing; // 0x130(0x50)
	char pad_180[0x28]; // 0x180(0x28)
};

// Class ShooterGame.FriendsService
// Size: 0x40 (Inherited: 0x30)
struct UFriendsService : UObject {
	struct URiotGamesApiClient* RiotGamesApiClient; // 0x30(0x08)
	struct UConfigManager* ConfigManager; // 0x38(0x08)
};

// Class ShooterGame.FXCPoolWarmingList
// Size: 0x40 (Inherited: 0x30)
struct UFXCPoolWarmingList : UObject {
	struct TArray<struct FFXCPoolWarmingListEntry> Entries; // 0x30(0x10)
};

// Class ShooterGame.GameDataEventForwarder
// Size: 0x40 (Inherited: 0x30)
struct UGameDataEventForwarder : UObject {
	char pad_30[0x10]; // 0x30(0x10)
};

// Class ShooterGame.GameDataBlueprintLibrary
// Size: 0x30 (Inherited: 0x30)
struct UGameDataBlueprintLibrary : UBlueprintFunctionLibrary {
};

// Class ShooterGame.GameDataExportComponent
// Size: 0x198 (Inherited: 0xe8)
struct UGameDataExportComponent : UActorComponent {
	struct UShooterGameStateDataModel* GameStateModel; // 0xe8(0x08)
	bool bCanExportGameData; // 0xf0(0x01)
	char pad_F1[0x27]; // 0xf1(0x27)
	struct UShooterGameStateDataModel* GameStateModelClass; // 0x118(0x08)
	char pad_120[0x30]; // 0x120(0x30)
	struct TArray<struct UBaseGameDataEventReceiver*> EventReceivers; // 0x150(0x10)
	char pad_160[0x10]; // 0x160(0x10)
	struct UGameDataEventForwarder* GameDataEventForwarder; // 0x170(0x08)
	struct UPlayerGameDataEventSubscriptions* PlayerGameDataEventSubscriptions; // 0x178(0x08)
	struct UObserverGameDataEventSubscriptions* ObserverGameDataEventSubscriptions; // 0x180(0x08)
	struct UModeGameDataEventSubscriptions* ModeGameDataEventSubscriptions; // 0x188(0x08)
	struct UMatchRecoveryGameDataEventSubscriptions* MatchRecoveryGameDataEventSubscriptions; // 0x190(0x08)
};

// Class ShooterGame.GameDataExporter
// Size: 0x190 (Inherited: 0x30)
struct UGameDataExporter : UObject {
	char pad_30[0x160]; // 0x30(0x160)
};

// Class ShooterGame.ShooterPlayerStateDataModel
// Size: 0xf0 (Inherited: 0x30)
struct UShooterPlayerStateDataModel : UObject {
	char pad_30[0x30]; // 0x30(0x30)
	struct UShooterTeamStateDataModel* TeamDataModel; // 0x60(0x08)
	struct AShooterPlayerState* PlayerState; // 0x68(0x08)
	struct UBaseTeamComponent* PlayerTeamComponent; // 0x70(0x08)
	struct AShooterCharacter* Character; // 0x78(0x08)
	struct UAresInventory* Inventory; // 0x80(0x08)
	struct TMap<enum class EAresItemSlot, struct AAresItem*> CachedLoadout; // 0x88(0x50)
	int32_t ModelId; // 0xd8(0x04)
	int32_t RoundCombatScore; // 0xdc(0x04)
	int32_t MatchCombatScore; // 0xe0(0x04)
	bool bIsDowned; // 0xe4(0x01)
	char pad_E5[0x3]; // 0xe5(0x03)
	float DownedTimestamp; // 0xe8(0x04)
	float DownedUnpausedTimestamp; // 0xec(0x04)
};

// Class ShooterGame.ShooterObserverStateDataModel
// Size: 0x48 (Inherited: 0x30)
struct UShooterObserverStateDataModel : UObject {
	int32_t ModelId; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct AObserverPlayerState* ObserverPlayerState; // 0x38(0x08)
	struct UShooterPlayerStateDataModel* PlayerTarget; // 0x40(0x08)
};

// Class ShooterGame.ShooterGameStateDataModel
// Size: 0x488 (Inherited: 0x30)
struct UShooterGameStateDataModel : UObject {
	char pad_30[0x288]; // 0x30(0x288)
	struct UShooterPlayerStateDataModel* PlayerModelClass; // 0x2b8(0x08)
	struct UShooterObserverStateDataModel* ObserverModelClass; // 0x2c0(0x08)
	struct UShooterTeamStateDataModel* TeamModelClass; // 0x2c8(0x08)
	struct AShooterGameState* GameState; // 0x2d0(0x08)
	struct FTimerHandle WorldSnapshottingTimer; // 0x2d8(0x08)
	struct FTimerHandle WorldConfigurationTimer; // 0x2e0(0x08)
	int32_t LastIssuedID; // 0x2e8(0x04)
	enum class EShooterGameMode GameMode; // 0x2ec(0x01)
	char pad_2ED[0x3]; // 0x2ed(0x03)
	struct TArray<struct FRoundDataModel> CompletedRounds; // 0x2f0(0x10)
	struct TMap<struct AShooterPlayerState*, struct UShooterPlayerStateDataModel*> PlayersLookup; // 0x300(0x50)
	struct TArray<struct UShooterPlayerStateDataModel*> PlayerDataModels; // 0x350(0x10)
	struct TMap<struct AObserverPlayerState*, struct UShooterObserverStateDataModel*> ObserversLookup; // 0x360(0x50)
	struct TArray<struct UShooterObserverStateDataModel*> ObserverDataModels; // 0x3b0(0x10)
	struct TMap<struct UBaseTeamComponent*, struct UShooterTeamStateDataModel*> TeamsLookup; // 0x3c0(0x50)
	struct TArray<struct UShooterTeamStateDataModel*> TeamDataModels; // 0x410(0x10)
	char pad_420[0x58]; // 0x420(0x58)
	struct TArray<struct UObject*> EventReceivers; // 0x478(0x10)
};

// Class ShooterGame.ShooterTeamStateDataModel
// Size: 0x58 (Inherited: 0x30)
struct UShooterTeamStateDataModel : UObject {
	int32_t Points; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct TArray<struct UShooterPlayerStateDataModel*> PlayersOnTeam; // 0x38(0x10)
	struct UBaseTeamComponent* TeamComponent; // 0x48(0x08)
	int32_t ModelId; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
};

// Class ShooterGame.GameFeatureTogglesComponent
// Size: 0x1668 (Inherited: 0xe8)
struct UGameFeatureTogglesComponent : UActorComponent {
	struct FMulticastInlineDelegate OnGameFeatureToggleChanged_NotifyBlueprint; // 0xe8(0x10)
	struct FMulticastInlineDelegate OnGameRuleBoolChanged_NotifyBlueprint; // 0xf8(0x10)
	struct FMulticastInlineDelegate OnGameFeatureFloatConfigChanged_NotifyBlueprint; // 0x108(0x10)
	struct FMulticastInlineDelegate OnMegapacketAppliedReplicated; // 0x118(0x10)
	struct TArray<char> GameFeatureToggleValues; // 0x128(0x10)
	struct TArray<char> GameRuleBoolValues; // 0x138(0x10)
	float GameFeatureFloatConfigValues[0x1f]; // 0x148(0x7c)
	bool bMegapacketApplied; // 0x1c4(0x01)
	char pad_1C5[0x14a3]; // 0x1c5(0x14a3)
};

// Class ShooterGame.GameFlowPredictionManager
// Size: 0x70 (Inherited: 0x30)
struct UGameFlowPredictionManager : UObject {
	char pad_30[0x30]; // 0x30(0x30)
	struct UPlatformSessionManager* SessionManager; // 0x60(0x08)
	char pad_68[0x8]; // 0x68(0x08)
};

// Class ShooterGame.GameFlowStateManager
// Size: 0x158 (Inherited: 0x80)
struct UGameFlowStateManager : UInitSystem {
	struct FMulticastInlineDelegate OnStateChanged; // 0x80(0x10)
	struct UGameFlowState* CurrentState; // 0x90(0x08)
	struct TMap<enum class EGameFlowStateType, struct UGameFlowState*> GameFlowStates; // 0x98(0x50)
	struct TArray<struct FTimerHandle> ReconcileTimerHandles; // 0xe8(0x10)
	struct UGameFlowStateDependencySet* DependencySet; // 0xf8(0x08)
	struct UAresClientEvents* AresClientEvents; // 0x100(0x08)
	struct UPartyManager* PartyManager; // 0x108(0x08)
	struct UCoreGameManager* CoreGameManager; // 0x110(0x08)
	struct UConfigManager* ConfigManager; // 0x118(0x08)
	struct UPregameManager* PregameManager; // 0x120(0x08)
	struct UPlatformSessionManager* SessionManager; // 0x128(0x08)
	struct UMapLoadModel* MapLoadModel; // 0x130(0x08)
	char pad_138[0x8]; // 0x138(0x08)
	struct UGameFlowPredictionManager* GameFlowPredictionManager; // 0x140(0x08)
	struct UGameInstance* TransitionWidgetOuter; // 0x148(0x08)
	struct UTransitionManagerWidget* TransitionManagerWidget; // 0x150(0x08)
};

// Class ShooterGame.GameFlowState
// Size: 0x88 (Inherited: 0x30)
struct UGameFlowState : UObject {
	char pad_30[0x20]; // 0x30(0x20)
	bool bRequiresValidMatchID; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct UAresClientEvents* AresClientEvents; // 0x58(0x08)
	struct UPlatformSessionManager* SessionManager; // 0x60(0x08)
	struct UConfigManager* ConfigManager; // 0x68(0x08)
	struct UGameFlowPredictionManager* GameFlowPredictionManager; // 0x70(0x08)
	struct UMapLoadModel* MapLoadModel; // 0x78(0x08)
	char pad_80[0x8]; // 0x80(0x08)
};

// Class ShooterGame.GameFlowStateDependencySet
// Size: 0x88 (Inherited: 0x30)
struct UGameFlowStateDependencySet : UObject {
	struct UAresClientEvents* AresClientEvents; // 0x30(0x08)
	struct UPartyManager* PartyManager; // 0x38(0x08)
	struct UPingManager* PingManager; // 0x40(0x08)
	struct UCoreGameManager* CoreGameManager; // 0x48(0x08)
	struct UConfigManager* ConfigManager; // 0x50(0x08)
	struct UPregameManager* PregameManager; // 0x58(0x08)
	struct UPlatformSessionManager* SessionManager; // 0x60(0x08)
	struct UMapLoadModel* MapLoadModel; // 0x68(0x08)
	char pad_70[0x8]; // 0x70(0x08)
	struct UGameFlowPredictionManager* GameFlowPredictionManager; // 0x78(0x08)
	struct UAntiAddictionManager* AntiAddictionManager; // 0x80(0x08)
};

// Class ShooterGame.GameInfoContentWidget
// Size: 0x2f8 (Inherited: 0x2c8)
struct UGameInfoContentWidget : UUserWidget {
	struct UCoordinatedHUDElement* GameInfoTimerElement; // 0x2c8(0x08)
	struct UCoordinatedHUDElement* GameInfoRoundElement; // 0x2d0(0x08)
	struct UCoordinatedHUDElement* MyTeamScoreElement; // 0x2d8(0x08)
	struct UCoordinatedHUDElement* EnemyTeamScoreElement; // 0x2e0(0x08)
	struct UCoordinatedHUDElement* AlliedTeamParticipants; // 0x2e8(0x08)
	struct UCoordinatedHUDElement* EnemyTeamParticipants; // 0x2f0(0x08)
};

// Class ShooterGame.GameModeControllerData
// Size: 0xf0 (Inherited: 0xe8)
struct UGameModeControllerData : UActorComponent {
	bool bShouldAnnounceUltimate; // 0xe8(0x01)
	char pad_E9[0x7]; // 0xe9(0x07)
};

// Class ShooterGame.GameModeReplayComponent
// Size: 0xe8 (Inherited: 0xe8)
struct UGameModeReplayComponent : UActorComponent {
};

// Class ShooterGame.GameModeStateMachineComponent
// Size: 0x1e0 (Inherited: 0x1e0)
struct UGameModeStateMachineComponent : UStateMachineComponent {
};

// Class ShooterGame.GameModifierInputComponent
// Size: 0x178 (Inherited: 0x158)
struct UGameModifierInputComponent : UGameModifierComponent {
	struct TArray<struct FText> InputBindingDisplayNames; // 0x158(0x10)
	struct TArray<struct FName> InputBindingNames; // 0x168(0x10)
};

// Class ShooterGame.GameModifierManager
// Size: 0x3d0 (Inherited: 0x3d0)
struct AGameModifierManager : AInfo {
};

// Class ShooterGame.GameModifiersMenu
// Size: 0x2f0 (Inherited: 0x2c8)
struct UGameModifiersMenu : UUserWidget {
	struct UVerticalBox* KeybindWidgetBox; // 0x2c8(0x08)
	struct UVerticalBox* MatchFlowWidgetBox; // 0x2d0(0x08)
	struct UVerticalBox* GameWidgetBox; // 0x2d8(0x08)
	struct UVerticalBox* PlayerWidgetBox; // 0x2e0(0x08)
	char pad_2E8[0x8]; // 0x2e8(0x08)
};

// Class ShooterGame.GameModifierWidget
// Size: 0x2d0 (Inherited: 0x2c8)
struct UGameModifierWidget : UDesignableUserWidget {
	char pad_2C8[0x8]; // 0x2c8(0x08)
};

// Class ShooterGame.BoolModifierBaseWidgetNative
// Size: 0x2f8 (Inherited: 0x2d0)
struct UBoolModifierBaseWidgetNative : UGameModifierWidget {
	struct UTextBlock* DisplayNameText; // 0x2d0(0x08)
	struct UButton* FalseButton; // 0x2d8(0x08)
	struct UTextBlock* FalseText; // 0x2e0(0x08)
	struct UButton* TrueButton; // 0x2e8(0x08)
	struct UTextBlock* TrueText; // 0x2f0(0x08)
};

// Class ShooterGame.TriggerModifierBaseWidgetNative
// Size: 0x2e0 (Inherited: 0x2d0)
struct UTriggerModifierBaseWidgetNative : UGameModifierWidget {
	struct UTextBlock* TextBlockNormal; // 0x2d0(0x08)
	struct UTextBlock* TextBlockHover; // 0x2d8(0x08)
};

// Class ShooterGame.DropdownModifierBaseWidgetNative
// Size: 0x2e0 (Inherited: 0x2d0)
struct UDropdownModifierBaseWidgetNative : UGameModifierWidget {
	struct UComboBoxString* ComboBox; // 0x2d0(0x08)
	struct UTextBlock* DisplayNameText; // 0x2d8(0x08)
};

// Class ShooterGame.RoundRestoreModifierBaseWidgetNative
// Size: 0x2e8 (Inherited: 0x2d0)
struct URoundRestoreModifierBaseWidgetNative : UGameModifierWidget {
	struct UButton* Button; // 0x2d0(0x08)
	struct UTextBlock* ButtonText; // 0x2d8(0x08)
	struct UComboBoxString* ComboBox; // 0x2e0(0x08)
};

// Class ShooterGame.GameObjectMinimapDisplayComponentDeprecated
// Size: 0x290 (Inherited: 0x290)
struct UGameObjectMinimapDisplayComponentDeprecated : UMinimapDisplayComponentDeprecated {
};

// Class ShooterGame.GameObjectVisibilityComponent
// Size: 0x180 (Inherited: 0x180)
struct UGameObjectVisibilityComponent : UVisibilityComponent {
};

// Class ShooterGame.GamepadBlueprintFunctionLibrary
// Size: 0x30 (Inherited: 0x30)
struct UGamepadBlueprintFunctionLibrary : UBlueprintFunctionLibrary {
};

// Class ShooterGame.GamepadInputComponent
// Size: 0x180 (Inherited: 0xe8)
struct UGamepadInputComponent : UActorComponent {
	char pad_E8[0x70]; // 0xe8(0x70)
	struct FVector2D CurAdjustedRotationRates; // 0x158(0x08)
	struct FVector2D CurLookStickVector; // 0x160(0x08)
	struct FVector2D CurWalkStickVector; // 0x168(0x08)
	struct FVector2D CurAccelDelayPercent; // 0x170(0x08)
	struct FVector2D CurAccelRampUpPercent; // 0x178(0x08)
};

// Class ShooterGame.GamepadInputIconBase
// Size: 0x2f8 (Inherited: 0x2c8)
struct UGamepadInputIconBase : UUserWidget {
	struct FMulticastInlineDelegate OnKeyChanged; // 0x2c8(0x10)
	struct FKey InternalKey; // 0x2d8(0x20)
};

// Class ShooterGame.GamepadNavigationSlider
// Size: 0x568 (Inherited: 0x568)
struct UGamepadNavigationSlider : USlider {
};

// Class ShooterGame.GamepadNavigationWidgetSwitcher
// Size: 0x1c8 (Inherited: 0x178)
struct UGamepadNavigationWidgetSwitcher : UWidgetSwitcher {
	char pad_178[0x50]; // 0x178(0x50)
};

// Class ShooterGame.GamepadOptionsScreen
// Size: 0x320 (Inherited: 0x2c8)
struct UGamepadOptionsScreen : UUserWidget {
	struct FKey RightNavigationKey; // 0x2c8(0x20)
	struct FKey LeftNavigationKey; // 0x2e8(0x20)
	char pad_308[0x18]; // 0x308(0x18)
};

// Class ShooterGame.GameplayNotificationWidget
// Size: 0x2f0 (Inherited: 0x2d8)
struct UGameplayNotificationWidget : UCoordinatedHUDElement {
	bool bIsRequired; // 0x2d8(0x01)
	char pad_2D9[0x3]; // 0x2d9(0x03)
	float WidgetPriority; // 0x2dc(0x04)
	enum class EGameplayNotificationWidgetSlot NotificationSlot; // 0x2e0(0x01)
	char pad_2E1[0x7]; // 0x2e1(0x07)
	struct UGameplayNotificationView* NotificationView; // 0x2e8(0x08)
};

// Class ShooterGame.GameplayNotificationType
// Size: 0x70 (Inherited: 0x30)
struct UGameplayNotificationType : UObject {
	enum class EGameplayNotificationDurationType DurationType; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float DisplayTime; // 0x34(0x04)
	float FadeOutDuration; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct TArray<struct UGameplayNotificationWidget*> WidgetTypes; // 0x40(0x10)
	char pad_50[0x18]; // 0x50(0x18)
	struct UCoordinatedHUDModel* HUDModel; // 0x68(0x08)
};

// Class ShooterGame.GameplayNotificationSystemComponent
// Size: 0x108 (Inherited: 0xe8)
struct UGameplayNotificationSystemComponent : UActorComponent {
	struct TArray<struct UGameplayNotificationType*> SupportedNotificationTypes; // 0xe8(0x10)
	struct TArray<struct UGameplayNotificationType*> NotificationTypes; // 0xf8(0x10)
};

// Class ShooterGame.GameplayNotificationView
// Size: 0x78 (Inherited: 0x30)
struct UGameplayNotificationView : UObject {
	char pad_30[0x18]; // 0x30(0x18)
	struct TArray<struct UGameplayNotificationWidget*> Widgets; // 0x48(0x10)
	struct UGameplayNotificationType* NotificationType; // 0x58(0x08)
	char pad_60[0x8]; // 0x60(0x08)
	struct UGameplayNotificationContainerHUDElement* Container; // 0x68(0x08)
	char pad_70[0x8]; // 0x70(0x08)
};

// Class ShooterGame.GameplayNotificationContainerHUDElement
// Size: 0x368 (Inherited: 0x2d8)
struct UGameplayNotificationContainerHUDElement : UCoordinatedHUDElement {
	struct UWidgetSwitcher* BannerSwitcher; // 0x2d8(0x08)
	struct UWidgetSwitcher* IconSwitcher; // 0x2e0(0x08)
	struct UWidgetSwitcher* RingSwitcher; // 0x2e8(0x08)
	struct UWidgetSwitcher* BackgroundSwitcher; // 0x2f0(0x08)
	struct TSoftClassPtr<UObject> PreviewNotificationType; // 0x2f8(0x30)
	struct UGameplayNotificationType* CachedPreviewNotificationType; // 0x328(0x08)
	struct UGameplayNotificationType* PreviewNotification; // 0x330(0x08)
	struct UCoordinatedHUDModel* HUDModel; // 0x338(0x08)
	struct UGameplayNotificationSystemComponent* NotificationComponent; // 0x340(0x08)
	char pad_348[0x10]; // 0x348(0x10)
	struct TArray<struct UGameplayNotificationView*> NotificationViews; // 0x358(0x10)
};

// Class ShooterGame.GameplayVote
// Size: 0x538 (Inherited: 0x3d0)
struct AGameplayVote : AInfo {
	struct UReplicationSleepComponent* ReplicationSleepComponent; // 0x3d0(0x08)
	struct FMulticastInlineDelegate OnOptionUpdated; // 0x3d8(0x10)
	struct FMulticastInlineDelegate OnParticipantsUpdated; // 0x3e8(0x10)
	struct FMulticastInlineDelegate OnCurrentStateUpdated; // 0x3f8(0x10)
	struct TArray<struct UGameplayVoteOptionComponent*> Options; // 0x408(0x10)
	struct UGameplayVoteOptionComponent* DefaultOption; // 0x418(0x08)
	struct FText Text; // 0x420(0x18)
	float VotePeriodSeconds; // 0x438(0x04)
	float ResultsPeriodSeconds; // 0x43c(0x04)
	float StartOfPhaseVoteCallingWindowSeconds; // 0x440(0x04)
	bool bExtendVoteByVoteCallingWindow; // 0x444(0x01)
	bool bExtendsPastCurrentGamePhase; // 0x445(0x01)
	enum class EVoteState CurrentState; // 0x446(0x01)
	char pad_447[0x1]; // 0x447(0x01)
	struct TArray<struct AShooterPlayerState*> Participants; // 0x448(0x10)
	bool bCanActivateAnyTime; // 0x458(0x01)
	char pad_459[0x7]; // 0x459(0x07)
	struct TArray<struct FText> SlashCommandStrings; // 0x460(0x10)
	struct FText OnStartedNotification; // 0x470(0x18)
	struct FText VoteQueuedNotification; // 0x488(0x18)
	struct FText RateLimitedNotification; // 0x4a0(0x18)
	struct FText CoachesCannotVoteNotification; // 0x4b8(0x18)
	struct FString TelemetryVoteName; // 0x4d0(0x10)
	bool bAllowCoachesToRequest; // 0x4e0(0x01)
	char pad_4E1[0x7]; // 0x4e1(0x07)
	struct TArray<struct FText> RuntimeSlashCommands; // 0x4e8(0x10)
	char pad_4F8[0x8]; // 0x4f8(0x08)
	struct TArray<struct AShooterPlayerState*> NotVotedParticipants; // 0x500(0x10)
	char pad_510[0xc]; // 0x510(0x0c)
	float TotalTimeForCurrentState; // 0x51c(0x04)
	char pad_520[0x8]; // 0x520(0x08)
	struct AShooterPlayerState* Requester; // 0x528(0x08)
	char pad_530[0x8]; // 0x530(0x08)
};

// Class ShooterGame.GameplayVoteOptionComponent
// Size: 0x140 (Inherited: 0xe8)
struct UGameplayVoteOptionComponent : UActorComponent {
	struct FMulticastInlineDelegate OnVotesChanged; // 0xe8(0x10)
	struct FText OptionName; // 0xf8(0x18)
	struct TArray<struct FText> SlashCommands; // 0x110(0x10)
	struct TArray<struct FText> RuntimeSlashCommands; // 0x120(0x10)
	char pad_130[0x1]; // 0x130(0x01)
	bool bIsDefaultOption; // 0x131(0x01)
	char pad_132[0x2]; // 0x132(0x02)
	int32_t VoteKeybindIndex; // 0x134(0x04)
	float VotesNeededRatio; // 0x138(0x04)
	int32_t Votes; // 0x13c(0x04)
};

// Class ShooterGame.GameStateHUDConfig
// Size: 0xc0 (Inherited: 0x30)
struct UGameStateHUDConfig : UObject {
	struct FHUDTimerConfig MatchTimerConfig; // 0x30(0x68)
	struct FHUDVisibilityConfig ElementVisibilityConfig; // 0x98(0x0d)
	char pad_A5[0x3]; // 0xa5(0x03)
	struct FHUDPhaseContext PhaseContext; // 0xa8(0x18)
};

// Class ShooterGame.GameStatisticsComponent
// Size: 0x118 (Inherited: 0xe8)
struct UGameStatisticsComponent : UActorComponent {
	struct FMulticastInlineDelegate OnAbilityUsed; // 0xe8(0x10)
	struct FMulticastInlineDelegate AuthOnAbilitySpawnedSubActor; // 0xf8(0x10)
	struct TArray<struct FIndividualGameStatistic> StatsToTrack; // 0x108(0x10)
};

// Class ShooterGame.NotificationAction
// Size: 0x58 (Inherited: 0x30)
struct UNotificationAction : UObject {
	struct FText Label; // 0x30(0x18)
	char pad_48[0x10]; // 0x48(0x10)
};

// Class ShooterGame.Notification
// Size: 0x58 (Inherited: 0x30)
struct UNotification : UObject {
	char pad_30[0x28]; // 0x30(0x28)
};

// Class ShooterGame.GenericNotification
// Size: 0xe8 (Inherited: 0x58)
struct UGenericNotification : UNotification {
	char pad_58[0x58]; // 0x58(0x58)
	struct UNotificationAction* ActionA; // 0xb0(0x08)
	struct UNotificationAction* ActionB; // 0xb8(0x08)
	struct UNotificationAction* DismissAction; // 0xc0(0x08)
	enum class EAresNotificationType NotificationType; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)
	struct FString AdditionalInfo; // 0xd0(0x10)
	struct UWidget* CustomBody; // 0xe0(0x08)
};

// Class ShooterGame.GetOuterWorldObject
// Size: 0x30 (Inherited: 0x30)
struct UGetOuterWorldObject : UObject {
};

// Class ShooterGame.GlideLowerBody3P
// Size: 0x38 (Inherited: 0x38)
struct UGlideLowerBody3P : UAnimSlotLowerBody3P {
};

// Class ShooterGame.GlobalAudioManager
// Size: 0xc0 (Inherited: 0x30)
struct UGlobalAudioManager : UGetOuterWorldObject {
	struct UAkComponent* PersistentEmitter; // 0x30(0x08)
	struct FString VOTestUIClassPath; // 0x38(0x10)
	char pad_48[0x30]; // 0x48(0x30)
	struct FString BombGameStateClassPath; // 0x78(0x10)
	struct TSoftClassPtr<UObject> BombGameStateClass; // 0x88(0x30)
	char pad_B8[0x8]; // 0xb8(0x08)
};

// Class ShooterGame.OrderedListSimpleWidgetContainerSlot
// Size: 0x40 (Inherited: 0x30)
struct UOrderedListSimpleWidgetContainerSlot : UVisual {
	struct UWidget* OwnerWidget; // 0x30(0x08)
	struct UUserWidget* Content; // 0x38(0x08)
};

// Class ShooterGame.GridListSlot
// Size: 0x78 (Inherited: 0x40)
struct UGridListSlot : UOrderedListSimpleWidgetContainerSlot {
	struct FMargin Padding; // 0x40(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)
	char pad_52[0x2]; // 0x52(0x02)
	int32_t Row; // 0x54(0x04)
	int32_t RowSpan; // 0x58(0x04)
	int32_t Column; // 0x5c(0x04)
	int32_t ColumnSpan; // 0x60(0x04)
	int32_t Layer; // 0x64(0x04)
	struct FVector2D Nudge; // 0x68(0x08)
	char pad_70[0x8]; // 0x70(0x08)
};

// Class ShooterGame.OrderedListSimpleWidgetContainerBase
// Size: 0x298 (Inherited: 0x148)
struct UOrderedListSimpleWidgetContainerBase : UWidget {
	char pad_148[0x10]; // 0x148(0x10)
	struct FMulticastInlineDelegate OnItemActivated; // 0x158(0x10)
	struct UUserWidget* EntryWidgetClass; // 0x168(0x08)
	struct UListEntrySlotConfigurerFactoryBase* EntrySlotConfigurerFactory; // 0x170(0x08)
	struct TScriptInterface<IOrderedListModel> ListModel; // 0x178(0x10)
	struct UUserWidget* SelectedWidget; // 0x188(0x08)
	struct FWildcard SharedListItemData; // 0x190(0x40)
	struct TArray<struct UOrderedListSimpleWidgetContainerSlot*> EntrySlots; // 0x1d0(0x10)
	struct TScriptInterface<IListEntrySlotConfigurerFactory> EntrySlotConfigurerFactoryInternal; // 0x1e0(0x10)
	struct TScriptInterface<IListEntrySlotConfigurer> EntrySlotConfigurer; // 0x1f0(0x10)
	struct TArray<struct TScriptInterface<IListEntryPerSlotConfigurer>> EntryPerSlotConfigurers; // 0x200(0x10)
	struct FUserWidgetPool EntryWidgetPool; // 0x210(0x80)
	struct UAresTouchScreen* AresTouchScreen; // 0x290(0x08)
};

// Class ShooterGame.GridPanelList
// Size: 0x2c8 (Inherited: 0x298)
struct UGridPanelList : UOrderedListSimpleWidgetContainerBase {
	struct TArray<float> ColumnFill; // 0x298(0x10)
	struct TArray<float> RowFill; // 0x2a8(0x10)
	char pad_2B8[0x10]; // 0x2b8(0x10)
};

// Class ShooterGame.GridSlotConfigurer
// Size: 0x70 (Inherited: 0x50)
struct UGridSlotConfigurer : UListEntrySlotConfigurerBase {
	struct FMargin Padding; // 0x50(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x60(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x61(0x01)
	enum class EGridAxis2D MajorAxis; // 0x62(0x01)
	char pad_63[0x1]; // 0x63(0x01)
	int32_t MaxMinorItemCount; // 0x64(0x04)
	struct FVector2D Nudge; // 0x68(0x08)
};

// Class ShooterGame.GunRequestComponent
// Size: 0x160 (Inherited: 0xe8)
struct UGunRequestComponent : UActorComponent {
	struct FMulticastInlineDelegate OnMakeGunRequest; // 0xe8(0x10)
	struct FMulticastInlineDelegate OnFulfillGunRequest; // 0xf8(0x10)
	struct FMulticastInlineDelegate OnCancelGunRequest; // 0x108(0x10)
	struct FAresGunRequest GunRequest; // 0x118(0x10)
	float FulfilledStateDuration; // 0x128(0x04)
	char pad_12C[0x4]; // 0x12c(0x04)
	struct FRateLimiter RateLimiter; // 0x130(0x30)
};

// Class ShooterGame.HasNetworkStreamInterface
// Size: 0x30 (Inherited: 0x30)
struct UHasNetworkStreamInterface : UInterface {
};

// Class ShooterGame.HeadshotDamageQuery
// Size: 0x30 (Inherited: 0x30)
struct UHeadshotDamageQuery : UInterface {
};

// Class ShooterGame.HealthResourceComponent
// Size: 0x150 (Inherited: 0x138)
struct UHealthResourceComponent : UAbilityResourceComponent {
	float HealthCost; // 0x138(0x04)
	char pad_13C[0x4]; // 0x13c(0x04)
	struct UDamageType* DamageType; // 0x140(0x08)
	bool bCanBeUsedWithoutEnoughHealth; // 0x148(0x01)
	char pad_149[0x7]; // 0x149(0x07)
};

// Class ShooterGame.HitScanMovementComponent
// Size: 0x188 (Inherited: 0x188)
struct UHitScanMovementComponent : USimpleProjectileMovementComponent {
};

// Class ShooterGame.HomingProjectileMovementComponent
// Size: 0x2e8 (Inherited: 0x2d8)
struct UHomingProjectileMovementComponent : UFiniteSpeedMovementComponent {
	float HomingTurnSpeed; // 0x2d8(0x04)
	enum class EHomingProjectileFacing Facing; // 0x2dc(0x01)
	char pad_2DD[0x3]; // 0x2dd(0x03)
	struct AActor* HomingTarget; // 0x2e0(0x08)
};

// Class ShooterGame.HorizontalBoxList
// Size: 0x2a8 (Inherited: 0x298)
struct UHorizontalBoxList : UOrderedListSimpleWidgetContainerBase {
	char pad_298[0x10]; // 0x298(0x10)
};

// Class ShooterGame.HorizontalBoxListSlot
// Size: 0x68 (Inherited: 0x40)
struct UHorizontalBoxListSlot : UOrderedListSimpleWidgetContainerSlot {
	struct FMargin Padding; // 0x40(0x10)
	struct FSlateChildSize Size; // 0x50(0x08)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x58(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x59(0x01)
	char pad_5A[0xe]; // 0x5a(0x0e)
};

// Class ShooterGame.HovercardCacheManager
// Size: 0x120 (Inherited: 0x80)
struct UHovercardCacheManager : UInitSystem {
	struct FMulticastInlineDelegate OnCacheEntry; // 0x80(0x10)
	char pad_90[0x90]; // 0x90(0x90)
};

// Class ShooterGame.HUDPlayerModel
// Size: 0x238 (Inherited: 0x30)
struct UHUDPlayerModel : UObject {
	struct FMulticastInlineDelegate PlayerStateChanged; // 0x30(0x10)
	struct FMulticastInlineDelegate NumUltimatePointsChanged; // 0x40(0x10)
	struct FMulticastInlineDelegate OnEquippableChargeInfosChanged; // 0x50(0x10)
	struct FMulticastInlineDelegate OnTeamChanged; // 0x60(0x10)
	struct FMulticastInlineDelegate OnAliveStateChanged; // 0x70(0x10)
	struct FMulticastInlineDelegate OnPlayerScoreUpdated; // 0x80(0x10)
	struct FMulticastInlineDelegate DesiredClassChanged; // 0x90(0x10)
	struct FMulticastInlineDelegate CombatReportDirtied; // 0xa0(0x10)
	struct FMulticastInlineDelegate TrackedRewardsChanged; // 0xb0(0x10)
	struct FMulticastInlineDelegate PreviousRoundRewardsFinalized; // 0xc0(0x10)
	struct FMulticastInlineDelegate SpawnedCharacterChanged; // 0xd0(0x10)
	struct FMulticastInlineDelegate OnDamaged; // 0xe0(0x10)
	struct FMulticastInlineDelegate OnHealed; // 0xf0(0x10)
	struct FMulticastInlineDelegate OnDeath; // 0x100(0x10)
	struct FMulticastInlineDelegate OnVitalityDirtied; // 0x110(0x10)
	struct FMulticastInlineDelegate OnCurrentEquippableChanged; // 0x120(0x10)
	struct FMulticastInlineDelegate OnInventoryItemsChanged; // 0x130(0x10)
	struct FMulticastInlineDelegate OnCurrentUsingComponentTimeChanged; // 0x140(0x10)
	struct FMulticastInlineDelegate OnUsableComponentsChangedSignature; // 0x150(0x10)
	struct FMulticastInlineDelegate OnMissionInfoChanged; // 0x160(0x10)
	struct FMulticastInlineDelegate OnMissionStatusChanged; // 0x170(0x10)
	struct FMulticastInlineDelegate OnObjectiveStatusChanged; // 0x180(0x10)
	struct FMulticastInlineDelegate OnCalloutRegionChanged; // 0x190(0x10)
	struct FMulticastInlineDelegate OnConnectionStatusChanged; // 0x1a0(0x10)
	struct FMulticastInlineDelegate OnAwayPenaltyStateChanged; // 0x1b0(0x10)
	struct FMulticastInlineDelegate OnAFKStatusChanged; // 0x1c0(0x10)
	struct FMulticastInlineDelegate OnPlayersSpectatingUpdated; // 0x1d0(0x10)
	struct FMulticastInlineDelegate OnSuppressRevealed; // 0x1e0(0x10)
	struct FVector SpawnedCharacterLocation; // 0x1f0(0x0c)
	struct FRotator SpawnedCharacterOrientation; // 0x1fc(0x0c)
	struct AAresPlayerStateBase* PlayerState; // 0x208(0x08)
	struct AMission* ActiveMission; // 0x210(0x08)
	struct AShooterCharacter* SpawnedCharacter; // 0x218(0x08)
	struct AAresEquippable* CurrentEquippable; // 0x220(0x08)
	float SpectatorCountUpdateRate; // 0x228(0x04)
	float LastSpectatorCountUpdate; // 0x22c(0x04)
	struct FTimerHandle SpectatorCountTimerHandle; // 0x230(0x08)
};

// Class ShooterGame.HUDSelfPlayerModel
// Size: 0x250 (Inherited: 0x238)
struct UHUDSelfPlayerModel : UHUDPlayerModel {
	struct FMulticastInlineDelegate OnCharacterTooltipRequestStateChanged; // 0x238(0x10)
	struct AOwnerExclusivePlayerInfo* PlayerInfo; // 0x248(0x08)
};

// Class ShooterGame.CoordinatedHUDModel
// Size: 0x208 (Inherited: 0x30)
struct UCoordinatedHUDModel : UObject {
	struct FMulticastInlineDelegate OnGameStateChanged; // 0x30(0x10)
	struct UHUDPlayerModel* FirstPersonModel; // 0x40(0x08)
	struct UHUDSelfPlayerModel* SelfModel; // 0x48(0x08)
	struct TArray<struct UHUDPlayerModel*> HUDPlayerModelsList; // 0x50(0x10)
	struct FMulticastInlineDelegate OnHUDPlayerModelListUpdated; // 0x60(0x10)
	struct FMulticastInlineDelegate OnTeamCompositionsChanged; // 0x70(0x10)
	struct FMulticastInlineDelegate OnViewTargetChanged; // 0x80(0x10)
	struct FMulticastInlineDelegate OnPlayerViewTargetModeChanged; // 0x90(0x10)
	struct FMulticastInlineDelegate OnCinematicModeUpdated; // 0xa0(0x10)
	struct FMulticastInlineDelegate OnGameStateHUDConfigChanged; // 0xb0(0x10)
	struct FMulticastInlineDelegate OnRoundNumebrChanged; // 0xc0(0x10)
	struct FMulticastInlineDelegate OnTeamAverageLoadoutValueUpdated; // 0xd0(0x10)
	struct FMulticastInlineDelegate OnPlayerStateListUpdated; // 0xe0(0x10)
	struct FMulticastInlineDelegate OnPointsUpdated; // 0xf0(0x10)
	struct FMulticastInlineDelegate OnRoundResultsUpdated; // 0x100(0x10)
	struct FMulticastInlineDelegate OnMatchEnd; // 0x110(0x10)
	struct FMulticastInlineDelegate OnAnyPlayerKilled; // 0x120(0x10)
	struct FMulticastInlineDelegate OnNonPlayerActorKilled; // 0x130(0x10)
	struct FMulticastInlineDelegate OnAnyPlayerResurrected; // 0x140(0x10)
	struct FMulticastInlineDelegate OnAnyPlayerTemporaryDeath; // 0x150(0x10)
	struct FMulticastInlineDelegate OnAnyPlayerRecovered; // 0x160(0x10)
	struct FMulticastInlineDelegate OnSimulatedNetworkDegradationChanged; // 0x170(0x10)
	struct FMulticastInlineDelegate OnSimulatingBurstLossChanged; // 0x180(0x10)
	struct FMulticastInlineDelegate OnSkillTestStarted; // 0x190(0x10)
	struct FMulticastInlineDelegate OnSkillTestEnded; // 0x1a0(0x10)
	struct FMulticastInlineDelegate OnMatchTimeoutStateChanged; // 0x1b0(0x10)
	struct FMulticastInlineDelegate ShowScoreboardPressed; // 0x1c0(0x10)
	struct FMulticastInlineDelegate ShowScoreboardReleased; // 0x1d0(0x10)
	struct AShooterGameState* GameState; // 0x1e0(0x08)
	struct UAresNetDriver* NetDriver; // 0x1e8(0x08)
	struct AAresPlayerController* PlayerController; // 0x1f0(0x08)
	struct TArray<struct AAresPlayerStateBase*> ListenedPlayerStates; // 0x1f8(0x10)
};

// Class ShooterGame.HUDElementCoordinator
// Size: 0x80 (Inherited: 0x30)
struct UHUDElementCoordinator : UObject {
	char pad_30[0x20]; // 0x30(0x20)
	struct AAresPlayerController* PlayerController; // 0x50(0x08)
	struct TArray<struct UCoordinatedHUDElement*> HUDElements; // 0x58(0x10)
	struct UCoordinatedHUDModel* CoordinatedHUDModel; // 0x68(0x08)
	struct UCoordinatedShooterUIModel* CoordinatedShooterUIModel; // 0x70(0x08)
	struct UCoordinatedHUDElement* InformationalHUDElement; // 0x78(0x08)
};

// Class ShooterGame.HUDVisibilityData
// Size: 0xf0 (Inherited: 0xe8)
struct UHUDVisibilityData : UActorComponent {
	bool bHideTimerWidget; // 0xe8(0x01)
	bool bHideSpectatorWidget; // 0xe9(0x01)
	char pad_EA[0x6]; // 0xea(0x06)
};

// Class ShooterGame.IdleAdditiveAnimSlot1P
// Size: 0x38 (Inherited: 0x38)
struct UIdleAdditiveAnimSlot1P : UAnimSlot1P {
};

// Class ShooterGame.IdleAimLowerBody3P
// Size: 0x38 (Inherited: 0x38)
struct UIdleAimLowerBody3P : UAnimSlotLowerBody3P {
};

// Class ShooterGame.IdleAimUpperBody3P
// Size: 0x38 (Inherited: 0x38)
struct UIdleAimUpperBody3P : UAnimSlotUpperBody3P {
};

// Class ShooterGame.IdleAnimSlotGun1P
// Size: 0x38 (Inherited: 0x38)
struct UIdleAnimSlotGun1P : UAnimSlotGun1P {
};

// Class ShooterGame.IdleLowerBody3P
// Size: 0x38 (Inherited: 0x38)
struct UIdleLowerBody3P : UAnimSlotLowerBody3P {
};

// Class ShooterGame.IdleUpperBody3P
// Size: 0x38 (Inherited: 0x38)
struct UIdleUpperBody3P : UAnimSlotUpperBody3P {
};

// Class ShooterGame.IdleBaseAnimSlot1P
// Size: 0x38 (Inherited: 0x38)
struct UIdleBaseAnimSlot1P : UAnimSlot1P {
};

// Class ShooterGame.IdleBaseUpperBody3P
// Size: 0x38 (Inherited: 0x38)
struct UIdleBaseUpperBody3P : UAnimSlotUpperBody3P {
};

// Class ShooterGame.EffectLifecycleInterface
// Size: 0x30 (Inherited: 0x30)
struct UEffectLifecycleInterface : UInterface {
};

// Class ShooterGame.IgnoreAllyWallPenetrationComponent
// Size: 0x138 (Inherited: 0x138)
struct UIgnoreAllyWallPenetrationComponent : UIgnoreWallPenetrationComponent {
};

// Class ShooterGame.IgnoreUntilSeparatedComponent
// Size: 0x110 (Inherited: 0xe8)
struct UIgnoreUntilSeparatedComponent : UActorComponent {
	struct TArray<struct AActor*> IgnoredActors; // 0xe8(0x10)
	struct TArray<struct AActor*> ClientIgnoredActors; // 0xf8(0x10)
	char pad_108[0x8]; // 0x108(0x08)
};

// Class ShooterGame.InfiniteCarouselEntry
// Size: 0x30 (Inherited: 0x30)
struct UInfiniteCarouselEntry : UInterface {
};

// Class ShooterGame.ImpactEffectManagerComponent
// Size: 0x2d0 (Inherited: 0x290)
struct UImpactEffectManagerComponent : USceneComponent {
	struct TArray<struct FImpactEffectInstancePool> InstancePools; // 0x288(0x10)
	struct TArray<struct UAresAudioComponent*> AudioComponentPool; // 0x298(0x10)
	struct TArray<struct UStaticMeshComponent*> StaticMeshComponentPool; // 0x2a8(0x10)
	struct AActor* PooledComponentActor; // 0x2b8(0x08)
	struct UImpactEffectRemap* ImpactEffectRemap; // 0x2c0(0x08)
};

// Class ShooterGame.UltPointsComponent
// Size: 0x148 (Inherited: 0x138)
struct UUltPointsComponent : UAbilityResourceComponent {
	struct AShooterCharacter* OwningCharacter; // 0x138(0x08)
	struct AShooterPlayerState* OwningPlayerState; // 0x140(0x08)
};

// Class ShooterGame.IncrementalUltPointsComponent
// Size: 0x150 (Inherited: 0x148)
struct UIncrementalUltPointsComponent : UUltPointsComponent {
	int32_t UltsPointsPerUse; // 0x148(0x04)
	char pad_14C[0x4]; // 0x14c(0x04)
};

// Class ShooterGame.IndexedSequenceAnimationConductorNodeBase
// Size: 0xa0 (Inherited: 0x70)
struct UIndexedSequenceAnimationConductorNodeBase : UNumericProgressModelBase {
	char pad_70[0x10]; // 0x70(0x10)
	int32_t CurrentIndex; // 0x80(0x04)
	char pad_84[0x1c]; // 0x84(0x1c)
};

// Class ShooterGame.InfiniteCarouselV2
// Size: 0x3f8 (Inherited: 0x2c8)
struct UInfiniteCarouselV2 : UUserWidget {
	struct FMulticastInlineDelegate OnEntryWidgetCreated; // 0x2c8(0x10)
	struct FMulticastInlineDelegate OnCurrentObjectChanged; // 0x2d8(0x10)
	struct FMulticastInlineDelegate OnCurrentIndexChanged; // 0x2e8(0x10)
	struct UUserWidget* EntryWidgetClass; // 0x2f8(0x08)
	struct UUserWidget* EntryPreviewClassOverride; // 0x300(0x08)
	int32_t MaxVisibleEntriesPerSide; // 0x308(0x04)
	int32_t EntryWidth; // 0x30c(0x04)
	int32_t EntryHeight; // 0x310(0x04)
	int32_t Margin; // 0x314(0x04)
	int32_t InnerPadding; // 0x318(0x04)
	int32_t BufferEntryCountPerSide; // 0x31c(0x04)
	int32_t DesignTimeEntryCount; // 0x320(0x04)
	struct FDelegate Filter; // 0x324(0x14)
	struct UOverlay* BindWidget; // 0x338(0x08)
	struct USizeBox* ContainerSizeBox; // 0x340(0x08)
	struct USizeBox* ResponsiveSizeBox; // 0x348(0x08)
	struct UCanvasPanel* Container; // 0x350(0x08)
	bool bDirty; // 0x358(0x01)
	char pad_359[0x7]; // 0x359(0x07)
	double CurrentIndex; // 0x360(0x08)
	float Velocity; // 0x368(0x04)
	float Acceleration; // 0x36c(0x04)
	int32_t TargetIndex; // 0x370(0x04)
	char pad_374[0x4]; // 0x374(0x04)
	struct UObject* TargetObject; // 0x378(0x08)
	struct UObject* CurrentObject; // 0x380(0x08)
	struct TArray<struct UObject*> AllObjects; // 0x388(0x10)
	struct TArray<struct UObject*> FilteredObjects; // 0x398(0x10)
	struct TMap<int32_t, struct UUserWidget*> Entries; // 0x3a8(0x50)
};

// Class ShooterGame.StaticGameFlowState
// Size: 0x90 (Inherited: 0x88)
struct UStaticGameFlowState : UGameFlowState {
	enum class EGameFlowStateType TransitionStateType; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
};

// Class ShooterGame.InGameStateV2
// Size: 0xc0 (Inherited: 0x90)
struct UInGameStateV2 : UStaticGameFlowState {
	char pad_90[0x20]; // 0x90(0x20)
	struct UCoreGameManager* CoreGameManager; // 0xb0(0x08)
	struct UAntiAddictionManager* AntiAddictionManager; // 0xb8(0x08)
};

// Class ShooterGame.RNetInitPlayerController
// Size: 0x738 (Inherited: 0x738)
struct ARNetInitPlayerController : APlayerController {
};

// Class ShooterGame.InitCheatManager
// Size: 0x80 (Inherited: 0x80)
struct UInitCheatManager : UCheatManager {
};

// Class ShooterGame.InitializationStateV2
// Size: 0x90 (Inherited: 0x90)
struct UInitializationStateV2 : UStaticGameFlowState {
};

// Class ShooterGame.InMenuGunPersonalizationComponent
// Size: 0xf0 (Inherited: 0xe8)
struct UInMenuGunPersonalizationComponent : UActorComponent {
	struct UEquippableDataAsset* EquippableToTrackDataAsset; // 0xe8(0x08)
};

// Class ShooterGame.InputMethodInterface
// Size: 0x30 (Inherited: 0x30)
struct UInputMethodInterface : UInterface {
};

// Class ShooterGame.InstabilityTrackingDetails
// Size: 0x58 (Inherited: 0x30)
struct UInstabilityTrackingDetails : UObject {
	struct FString DebugName; // 0x30(0x10)
	struct FMulticastInlineDelegate OnInstabilityStateChanged; // 0x40(0x10)
	char pad_50[0x8]; // 0x50(0x08)
};

// Class ShooterGame.MetricInstabilityTrackingDetails
// Size: 0x88 (Inherited: 0x58)
struct UMetricInstabilityTrackingDetails : UInstabilityTrackingDetails {
	float CriticalThreshold; // 0x58(0x04)
	float Threshold; // 0x5c(0x04)
	float LastFrameValue; // 0x60(0x04)
	float LastFrameAverage; // 0x64(0x04)
	float StartTime; // 0x68(0x04)
	float PersistenceDuration; // 0x6c(0x04)
	enum class EBound Bound; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
	struct UCurveFloat* ThresholdCurve; // 0x78(0x08)
	struct UCurveFloat* CriticalThresholdCurve; // 0x80(0x08)
};

// Class ShooterGame.NetworkOutageInstabilityTrackingDetails
// Size: 0x78 (Inherited: 0x58)
struct UNetworkOutageInstabilityTrackingDetails : UInstabilityTrackingDetails {
	char pad_58[0x20]; // 0x58(0x20)
};

// Class ShooterGame.RemoteClientPredictionTrackingDetails
// Size: 0x58 (Inherited: 0x58)
struct URemoteClientPredictionTrackingDetails : UInstabilityTrackingDetails {
};

// Class ShooterGame.InteractableUserComponent
// Size: 0x268 (Inherited: 0xe8)
struct UInteractableUserComponent : UInputBindingComponent {
	char pad_E8[0x8]; // 0xe8(0x08)
	float CurrentUsableScoreBias; // 0xf0(0x04)
	float NotUsableScoreBias; // 0xf4(0x04)
	float MaxUseDistance; // 0xf8(0x04)
	float UseDistanceScoreFactor; // 0xfc(0x04)
	struct FClassInclusionExclusionFilter UsableFilter; // 0x100(0x50)
	struct FMulticastInlineDelegate OnCurrentUsingComponentTimeChanged; // 0x150(0x10)
	struct FMulticastInlineDelegate OnUsableComponentsChanged; // 0x160(0x10)
	struct FMulticastInlineDelegate OnUseInteractablePressed; // 0x170(0x10)
	struct UUsableComponent* BestUsableComponent; // 0x180(0x08)
	struct UUsableComponent* BestAlternateUsableComponent; // 0x188(0x08)
	bool bLastCanUseComponentCheck; // 0x190(0x01)
	bool bLastCanUseAlternateComponentCheck; // 0x191(0x01)
	char pad_192[0x56]; // 0x192(0x56)
	struct AShooterCharacter* OwningShooterCharacter; // 0x1e8(0x08)
	char pad_1F0[0x10]; // 0x1f0(0x10)
	int32_t InteractionsActive; // 0x200(0x04)
	char pad_204[0x4]; // 0x204(0x04)
	struct FCurrentUsableInfo AuthCurrentUsingInfo; // 0x208(0x28)
	struct FCurrentUsableInfo PredictedCurrentUsingInfo; // 0x230(0x28)
	char pad_258[0x8]; // 0x258(0x08)
	struct UUsableComponent* CurrentlyActivatedContinuousUsable; // 0x260(0x08)
};

// Class ShooterGame.InventoryInitManager
// Size: 0x88 (Inherited: 0x80)
struct UInventoryInitManager : UInitSystem {
	struct UInventoryManager* InventoryManager; // 0x80(0x08)
};

// Class ShooterGame.InventoryManager
// Size: 0x780 (Inherited: 0x30)
struct UInventoryManager : UObject {
	char pad_30[0x18]; // 0x30(0x18)
	struct FMulticastInlineDelegate OnContentEquippedChanged; // 0x48(0x10)
	struct FMulticastInlineDelegate OnJuiceBoxBalanceChanged; // 0x58(0x10)
	struct FMulticastInlineDelegate OnAnyJuiceContentsStatusChanged; // 0x68(0x10)
	struct TArray<struct UBaseInventoryModel*> LastGameUnlocks; // 0x78(0x10)
	struct UBaseInventoryModel* PreviousUnlock; // 0x88(0x08)
	struct UBaseInventoryModel* NextUnlock; // 0x90(0x08)
	int32_t PreviousUnlockLevel; // 0x98(0x04)
	int32_t NextUnlockLevel; // 0x9c(0x04)
	bool DidLevelOnLastGame; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
	struct UContentIndex* ContentIndex; // 0xa8(0x08)
	struct UPersonalizationManagerV2* PersonalizationManager; // 0xb0(0x08)
	struct UContentManager* ContentManager; // 0xb8(0x08)
	struct UConfigManager* ConfigManager; // 0xc0(0x08)
	struct UStoreManager* StoreManager; // 0xc8(0x08)
	struct UAccountXPManager* AccountXPManager; // 0xd0(0x08)
	struct UFavoritesManager* FavoritesManager; // 0xd8(0x08)
	struct TArray<struct UEquippableInventoryModel*> EquippableModels; // 0xe0(0x10)
	struct TMap<struct UEquippableDataAsset*, struct UEquippableInventoryModel*> DataAssetToEquippableMap; // 0xf0(0x50)
	struct TMap<struct UEquippableSkinDataAsset*, struct UEquippableSkinInventoryModel*> DataAssetToEquippableSkinMap; // 0x140(0x50)
	struct TMap<struct UEquippableSkinLevelDataAsset*, struct UEquippableSkinLevelInventoryModel*> DataAssetToEquippableSkinLevelMap; // 0x190(0x50)
	struct TMap<struct UEquippableAttachmentDataAsset*, struct UEquippableAttachmentInventoryModel*> DataAssetToEquippableAttachmentMap; // 0x1e0(0x50)
	struct TMap<struct UEquippableSkinChromaDataAsset*, struct UEquippableSkinChromaInventoryModel*> DataAssetToEquippableSkinChromaMap; // 0x230(0x50)
	struct TArray<struct USprayInventoryModel*> SprayModels; // 0x280(0x10)
	struct TMap<struct USprayDataAsset*, struct USprayInventoryModel*> DataAssetToSprayMap; // 0x290(0x50)
	struct TMap<struct USprayLevelDataAsset*, struct USprayLevelInventoryModel*> DataAssetToSprayLevelMap; // 0x2e0(0x50)
	struct TMap<struct USprayEquipSlotDataAsset*, struct USprayEquipSlotInventoryModel*> DataAssetToSprayEquipSlotMap; // 0x330(0x50)
	struct TMap<struct UEquippableCharmDataAsset*, struct UEquippableCharmInventoryModel*> DataAssetToEquippableCharmMap; // 0x380(0x50)
	struct TMap<struct UEquippableCharmLevelDataAsset*, struct UEquippableCharmLevelInventoryModel*> DataAssetToEquippableCharmLevelMap; // 0x3d0(0x50)
	struct TMap<struct UPlayerCardDataAsset*, struct UPlayerCardInventoryModel*> DataAssetToPlayerCardMap; // 0x420(0x50)
	struct TMap<struct UPlayerTitleDataAsset*, struct UPlayerTitleInventoryModel*> DataAssetToPlayerTitleMap; // 0x470(0x50)
	struct TMap<struct UJuiceBoxDataAsset*, struct UJuiceBoxInventoryModel*> DataAssetToJuiceBoxMap; // 0x4c0(0x50)
	struct TMap<struct UCurrencyDataAsset*, struct UCurrencyInventoryModel*> DataAssetToCurrencyMap; // 0x510(0x50)
	struct TArray<struct UJuiceBoxInventoryModel*> JuiceBoxModels; // 0x560(0x10)
	struct TMap<struct ULevelBorderDataAsset*, struct ULevelBorderInventoryModel*> DataAssetToLevelBorderMap; // 0x570(0x50)
	struct TArray<struct UCharacterInventoryModel*> CharacterModels; // 0x5c0(0x10)
	struct TArray<struct UMapInventoryModel*> MapModels; // 0x5d0(0x10)
	struct TArray<struct UPremiumContractInventoryModel*> PremiumContractModels; // 0x5e0(0x10)
	struct TMap<struct UCharacterDataAsset*, struct UCharacterInventoryModel*> DataAssetToCharacterMap; // 0x5f0(0x50)
	struct TMap<struct UMapDataAsset*, struct UMapInventoryModel*> DataAssetToMapMap; // 0x640(0x50)
	struct TMap<struct UContractDataAssetV2*, struct UPremiumContractInventoryModel*> DataAssetToContractMap; // 0x690(0x50)
	struct TMap<struct FGuid, struct UEquippableCharmInstanceInventoryModel*> EquippableCharmInstanceMap; // 0x6e0(0x50)
	char pad_730[0x50]; // 0x730(0x50)
};

// Class ShooterGame.SubscriptionOwnershipModel
// Size: 0x50 (Inherited: 0x30)
struct USubscriptionOwnershipModel : UObject {
	struct FMulticastInlineDelegate OnSubscriptionStatusChanged; // 0x30(0x10)
	struct TArray<struct USubscriptionDataAsset*> OrderedSubscriptions; // 0x40(0x10)
};

// Class ShooterGame.BaseInventoryModel
// Size: 0xf8 (Inherited: 0x30)
struct UBaseInventoryModel : UObject {
	struct FMulticastInlineDelegate OnIsEnabledChanged; // 0x30(0x10)
	struct FMulticastInlineDelegate OnLoadingUIDataChanged; // 0x40(0x10)
	struct FMulticastInlineDelegate OnIsOwnedChanged; // 0x50(0x10)
	struct FMulticastInlineDelegate OnIsEquippedChanged; // 0x60(0x10)
	struct FMulticastInlineDelegate OnBalanceChanged; // 0x70(0x10)
	struct FMulticastInlineDelegate OnIsFavoritedChanged; // 0x80(0x10)
	struct FMulticastInlineDelegate OnIsUnlockedChanged; // 0x90(0x10)
	struct FMulticastInlineDelegate OnIsLoyaltyContentChanged; // 0xa0(0x10)
	struct FMulticastInlineDelegate OnIsOwnedOnlyByLoyaltyChanged; // 0xb0(0x10)
	char pad_C0[0x18]; // 0xc0(0x18)
	struct TWeakObjectPtr<struct UBaseContentUIData> BaseUIDataPtr; // 0xd8(0x08)
	bool bIsEnabled; // 0xe0(0x01)
	bool bLoadingUIData; // 0xe1(0x01)
	bool bIsOwned; // 0xe2(0x01)
	bool bIsFavorited; // 0xe3(0x01)
	bool bIsEquipped; // 0xe4(0x01)
	char pad_E5[0x3]; // 0xe5(0x03)
	int32_t iBalance; // 0xe8(0x04)
	bool bIsLoyaltyContent; // 0xec(0x01)
	bool bIsCAPF2PContent; // 0xed(0x01)
	bool bIsUnlockedByConfig; // 0xee(0x01)
	char pad_EF[0x1]; // 0xef(0x01)
	struct USubscriptionOwnershipModel* SubscriptionStatus; // 0xf0(0x08)
};

// Class ShooterGame.EquippableInventoryModel
// Size: 0x180 (Inherited: 0xf8)
struct UEquippableInventoryModel : UBaseInventoryModel {
	struct UEquippableDataAsset* EquippableDataAsset; // 0xf8(0x08)
	struct FMulticastInlineDelegate OnEquippedSkinChanged; // 0x100(0x10)
	struct FMulticastInlineDelegate OnEquippedAttachmentAdded; // 0x110(0x10)
	struct FMulticastInlineDelegate OnEquippedAttachmentRemoved; // 0x120(0x10)
	struct FMulticastInlineDelegate OnEquippedCharmChanged; // 0x130(0x10)
	struct TArray<struct UEquippableSkinInventoryModel*> PossibleSkins; // 0x140(0x10)
	struct TArray<struct UEquippableAttachmentInventoryModel*> PossibleAttachments; // 0x150(0x10)
	struct UEquippableSkinInventoryModel* EquippedSkin; // 0x160(0x08)
	struct UEquippableCharmInstanceInventoryModel* EquippedCharmInstance; // 0x168(0x08)
	struct TArray<struct UEquippableAttachmentInventoryModel*> EquippedAttachments; // 0x170(0x10)
};

// Class ShooterGame.CharacterInventoryModel
// Size: 0x100 (Inherited: 0xf8)
struct UCharacterInventoryModel : UBaseInventoryModel {
	struct UCharacterDataAsset* CharacterDataAsset; // 0xf8(0x08)
};

// Class ShooterGame.MapInventoryModel
// Size: 0x100 (Inherited: 0xf8)
struct UMapInventoryModel : UBaseInventoryModel {
	struct UMapDataAsset* MapDataAsset; // 0xf8(0x08)
};

// Class ShooterGame.EquippableSkinLevelInventoryModel
// Size: 0x108 (Inherited: 0xf8)
struct UEquippableSkinLevelInventoryModel : UBaseInventoryModel {
	struct UEquippableSkinLevelDataAsset* EquippableSkinLevelDataAsset; // 0xf8(0x08)
	struct UEquippableSkinInventoryModel* ParentSkin; // 0x100(0x08)
};

// Class ShooterGame.EquippableSkinInventoryModel
// Size: 0x150 (Inherited: 0xf8)
struct UEquippableSkinInventoryModel : UBaseInventoryModel {
	struct UEquippableSkinDataAsset* EquippableSkinDataAsset; // 0xf8(0x08)
	struct FMulticastInlineDelegate OnEquippedChromaChanged; // 0x100(0x10)
	struct UEquippableInventoryModel* ParentEquippable; // 0x110(0x08)
	struct TArray<struct UEquippableSkinChromaInventoryModel*> PossibleChromas; // 0x118(0x10)
	struct TArray<struct UEquippableSkinLevelInventoryModel*> PossibleLevels; // 0x128(0x10)
	struct FMulticastInlineDelegate OnOwnedUpgradesChanged; // 0x138(0x10)
	struct UEquippableSkinChromaInventoryModel* EquippedChroma; // 0x148(0x08)
};

// Class ShooterGame.EquippableAttachmentInventoryModel
// Size: 0x108 (Inherited: 0xf8)
struct UEquippableAttachmentInventoryModel : UBaseInventoryModel {
	struct UEquippableAttachmentDataAsset* EquippableAttachmentDataAsset; // 0xf8(0x08)
	struct UEquippableInventoryModel* ParentEquippable; // 0x100(0x08)
};

// Class ShooterGame.EquippableSkinChromaInventoryModel
// Size: 0x108 (Inherited: 0xf8)
struct UEquippableSkinChromaInventoryModel : UBaseInventoryModel {
	struct UEquippableSkinChromaDataAsset* EquippableSkinChromaDataAsset; // 0xf8(0x08)
	struct UEquippableSkinInventoryModel* ParentSkin; // 0x100(0x08)
};

// Class ShooterGame.SprayEquipSlotInventoryModel
// Size: 0x118 (Inherited: 0xf8)
struct USprayEquipSlotInventoryModel : UBaseInventoryModel {
	struct USprayEquipSlotDataAsset* SprayEquipSlotDataAsset; // 0xf8(0x08)
	struct FMulticastInlineDelegate OnEquippedSprayChanged; // 0x100(0x10)
	struct USprayInventoryModel* EquippedSpray; // 0x110(0x08)
};

// Class ShooterGame.SprayLevelInventoryModel
// Size: 0x108 (Inherited: 0xf8)
struct USprayLevelInventoryModel : UBaseInventoryModel {
	struct USprayLevelDataAsset* SprayLevelDataAsset; // 0xf8(0x08)
	struct USprayInventoryModel* ParentSpray; // 0x100(0x08)
};

// Class ShooterGame.SprayInventoryModel
// Size: 0x128 (Inherited: 0xf8)
struct USprayInventoryModel : UBaseInventoryModel {
	struct USprayDataAsset* SprayDataAsset; // 0xf8(0x08)
	struct FMulticastInlineDelegate OnSprayLevelChanged; // 0x100(0x10)
	struct TArray<struct USprayLevelInventoryModel*> PossibleLevels; // 0x110(0x10)
	struct USprayLevelInventoryModel* SprayLevel; // 0x120(0x08)
};

// Class ShooterGame.EquippableCharmInventoryModel
// Size: 0x110 (Inherited: 0xf8)
struct UEquippableCharmInventoryModel : UBaseInventoryModel {
	struct UEquippableCharmDataAsset* EquippableCharmDataAsset; // 0xf8(0x08)
	struct TArray<struct UEquippableCharmLevelInventoryModel*> LevelInventoryModels; // 0x100(0x10)
};

// Class ShooterGame.EquippableCharmLevelInventoryModel
// Size: 0x110 (Inherited: 0xf8)
struct UEquippableCharmLevelInventoryModel : UBaseInventoryModel {
	struct UEquippableCharmLevelDataAsset* EquippableCharmLevelDataAsset; // 0xf8(0x08)
	struct UEquippableCharmDataAsset* BaseCharmDataAsset; // 0x100(0x08)
	struct UEquippableCharmInventoryModel* BaseCharmInventoryModel; // 0x108(0x08)
};

// Class ShooterGame.EquippableCharmInstanceInventoryModel
// Size: 0x78 (Inherited: 0x30)
struct UEquippableCharmInstanceInventoryModel : UObject {
	struct FMulticastInlineDelegate OnLevelChanged; // 0x30(0x10)
	struct FMulticastInlineDelegate OnAssignedEquippableChanged; // 0x40(0x10)
	struct FGuid InstanceId; // 0x50(0x10)
	struct UEquippableDataAsset* AssignedEquippable; // 0x60(0x08)
	struct UEquippableCharmDataAsset* EquippableCharmDataAsset; // 0x68(0x08)
	struct UEquippableCharmLevelDataAsset* EquippableCharmLevelDataAsset; // 0x70(0x08)
};

// Class ShooterGame.PremiumContractInventoryModel
// Size: 0x108 (Inherited: 0xf8)
struct UPremiumContractInventoryModel : UBaseInventoryModel {
	struct FGuid ID; // 0xf8(0x10)
};

// Class ShooterGame.InventoryOfferModel
// Size: 0x68 (Inherited: 0x30)
struct UInventoryOfferModel : UObject {
	int32_t Price; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct TArray<struct UBaseInventoryModel*> EntitlementGrants; // 0x38(0x10)
	struct TArray<struct UBaseInventoryModel*> BonusEntitlementGrants; // 0x48(0x10)
	struct FString OfferId; // 0x58(0x10)
};

// Class ShooterGame.PlayerCardInventoryModel
// Size: 0x100 (Inherited: 0xf8)
struct UPlayerCardInventoryModel : UBaseInventoryModel {
	struct UPlayerCardDataAsset* PlayerCardDataAsset; // 0xf8(0x08)
};

// Class ShooterGame.LevelBorderInventoryModel
// Size: 0x100 (Inherited: 0xf8)
struct ULevelBorderInventoryModel : UBaseInventoryModel {
	struct ULevelBorderDataAsset* LevelBorderDataAsset; // 0xf8(0x08)
};

// Class ShooterGame.PlayerTitleInventoryModel
// Size: 0x100 (Inherited: 0xf8)
struct UPlayerTitleInventoryModel : UBaseInventoryModel {
	struct UPlayerTitleDataAsset* PlayerTitleDataAsset; // 0xf8(0x08)
};

// Class ShooterGame.JuiceBoxInventoryModel
// Size: 0x100 (Inherited: 0xf8)
struct UJuiceBoxInventoryModel : UBaseInventoryModel {
	struct UJuiceBoxDataAsset* DataAsset; // 0xf8(0x08)
};

// Class ShooterGame.CurrencyInventoryModel
// Size: 0x100 (Inherited: 0xf8)
struct UCurrencyInventoryModel : UBaseInventoryModel {
	struct UCurrencyDataAsset* DataAsset; // 0xf8(0x08)
};

// Class ShooterGame.PreloadableAsset
// Size: 0x30 (Inherited: 0x30)
struct UPreloadableAsset : UInterface {
};

// Class ShooterGame.RiotLogin
// Size: 0x30 (Inherited: 0x30)
struct URiotLogin : UInterface {
};

// Class ShooterGame.ItemSlot
// Size: 0x48 (Inherited: 0x30)
struct UItemSlot : UObject {
	enum class EAresItemSlot SlotType; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct AAresItem* Contents; // 0x38(0x08)
	struct UAresInventory* Inventory; // 0x40(0x08)
};

// Class ShooterGame.JuiceBoxUIData
// Size: 0xb8 (Inherited: 0x90)
struct UJuiceBoxUIData : UBaseContentUIData {
	bool UseModelViewerOverrides; // 0x90(0x01)
	char pad_91[0x3]; // 0x91(0x03)
	struct FVector CameraPosition; // 0x94(0x0c)
	float DefaultFOV; // 0xa0(0x04)
	float MaxFOV; // 0xa4(0x04)
	float MinFOV; // 0xa8(0x04)
	struct FVector PivotPoint; // 0xac(0x0c)
};

// Class ShooterGame.JuiceBoxDataAsset
// Size: 0xb8 (Inherited: 0x50)
struct UJuiceBoxDataAsset : UAresBasePrimaryDataAsset {
	struct TSoftClassPtr<UObject> Currency; // 0x50(0x30)
	struct TSoftClassPtr<UObject> UIData; // 0x80(0x30)
	struct AEffectContainer* Effect; // 0xb0(0x08)
};

// Class ShooterGame.JuiceBoxShopWidget
// Size: 0x2d8 (Inherited: 0x2c8)
struct UJuiceBoxShopWidget : UUserWidget {
	struct UStoreViewModelV2* StoreViewModel; // 0x2c8(0x08)
	struct UStoreViewControllerV2* StoreViewController; // 0x2d0(0x08)
};

// Class ShooterGame.JuiceScreenViewController
// Size: 0x120 (Inherited: 0x80)
struct UJuiceScreenViewController : UInitSystem {
	struct UJuiceScreenViewModel* ViewModel; // 0x80(0x08)
	struct FMulticastInlineDelegate OnJuiceContentsReloaded; // 0x88(0x10)
	struct FGuid JuiceCraftOrderID; // 0x98(0x10)
	struct FGuid JuiceCraftXID; // 0xa8(0x10)
	struct FMulticastInlineDelegate OnJuiceCraftingStateChanged; // 0xb8(0x10)
	struct FMulticastInlineDelegate OnJuiceCraftOrderSubmitted; // 0xc8(0x10)
	struct FMulticastInlineDelegate OnJuiceCraftOrderComplete; // 0xd8(0x10)
	struct FMulticastInlineDelegate OnJuiceCraftOrderFailed; // 0xe8(0x10)
	struct UConfigManager* ConfigManager; // 0xf8(0x08)
	struct UPurchaseManager* PurchaseManager; // 0x100(0x08)
	struct UStoreManager* StoreManager; // 0x108(0x08)
	struct UInventoryManager* InventoryManager; // 0x110(0x08)
	struct UContentIndex* ContentIndex; // 0x118(0x08)
};

// Class ShooterGame.JuiceContentViewModel
// Size: 0x60 (Inherited: 0x30)
struct UJuiceContentViewModel : UObject {
	enum class EJuiceContentViewModelType JuiceContentType; // 0x30(0x01)
	enum class EJuiceContentViewModelLocation Location; // 0x31(0x01)
	char pad_32[0x2]; // 0x32(0x02)
	int32_t JuiceTrayLocationIndex; // 0x34(0x04)
	struct FGuid JuiceContentID; // 0x38(0x10)
	int32_t JuiceValue; // 0x48(0x04)
	int32_t JuiceCost; // 0x4c(0x04)
	bool IsBlueprint; // 0x50(0x01)
	bool IsPlaceholder; // 0x51(0x01)
	char pad_52[0x6]; // 0x52(0x06)
	struct UBaseInventoryModel* InventoryModel; // 0x58(0x08)
};

// Class ShooterGame.FilteredJuiceContentsViewModel
// Size: 0x58 (Inherited: 0x30)
struct UFilteredJuiceContentsViewModel : UObject {
	struct FString ContentsName; // 0x30(0x10)
	struct TArray<struct UJuiceContentViewModel*> JuiceContents; // 0x40(0x10)
	enum class EJuiceFilterViewType FilterType; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// Class ShooterGame.JuiceContentReward
// Size: 0x50 (Inherited: 0x30)
struct UJuiceContentReward : UObject {
	enum class EJuiceRewardType RewardType; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct UBaseInventoryModel* RewardInventoryModel; // 0x38(0x08)
	struct FGuid RewardContentID; // 0x40(0x10)
};

// Class ShooterGame.JuiceScreenViewModel
// Size: 0x1a8 (Inherited: 0x30)
struct UJuiceScreenViewModel : UObject {
	struct FMulticastInlineDelegate OnJuiceTrayBlueprintChanged; // 0x30(0x10)
	struct FMulticastInlineDelegate OnJuiceTraySelectedRewardChanged; // 0x40(0x10)
	struct FMulticastInlineDelegate OnJuiceTrayContentsChanged; // 0x50(0x10)
	struct FMulticastInlineDelegate OnJuiceTrayMessageChanged; // 0x60(0x10)
	struct URewardGrantModelFactory* RewardGrantModelFactory; // 0x70(0x08)
	struct TMap<struct FGuid, struct UJuiceContentViewModel*> JuiceContentMapping; // 0x78(0x50)
	struct TMap<enum class EJuiceFilterViewType, struct UFilteredJuiceContentsViewModel*> FilteredViewModels; // 0xc8(0x50)
	struct TArray<struct UJuiceContentViewModel*> JuiceTrayContents; // 0x118(0x10)
	struct TMap<struct FGuid, int32_t> JuiceTrayContentCounts; // 0x128(0x50)
	struct UJuiceContentViewModel* JuiceTrayBlueprint; // 0x178(0x08)
	struct UJuiceContentReward* JuiceTraySelectedReward; // 0x180(0x08)
	struct TArray<struct UJuiceContentReward*> JuiceTrayRewardOptions; // 0x188(0x10)
	int32_t JuiceTrayBlueprintCost; // 0x198(0x04)
	int32_t JuiceTrayContentsTotalValue; // 0x19c(0x04)
	int32_t JuiceTrayContentsEnergyOnlyTotal; // 0x1a0(0x04)
	enum class EJuiceTrayMessage JuiceTrayMessage; // 0x1a4(0x01)
	bool IsCraftingReadyToSubmit; // 0x1a5(0x01)
	char pad_1A6[0x2]; // 0x1a6(0x02)
};

// Class ShooterGame.JumpAnimSlot1P
// Size: 0x38 (Inherited: 0x38)
struct UJumpAnimSlot1P : UAnimSlot1P {
};

// Class ShooterGame.JumpAnimSlotGun1P
// Size: 0x38 (Inherited: 0x38)
struct UJumpAnimSlotGun1P : UAnimSlotGun1P {
};

// Class ShooterGame.JumpLowerBody3P
// Size: 0x38 (Inherited: 0x38)
struct UJumpLowerBody3P : UAnimSlotLowerBody3P {
};

// Class ShooterGame.JumpUpperBody3P
// Size: 0x38 (Inherited: 0x38)
struct UJumpUpperBody3P : UAnimSlotUpperBody3P {
};

// Class ShooterGame.JumpingCrowdPathFollowingComponent
// Size: 0x2d8 (Inherited: 0x2d0)
struct UJumpingCrowdPathFollowingComponent : UCrowdFollowingComponent {
	struct UCharacterMovementComponent* CharacterMoveComp; // 0x2d0(0x08)
};

// Class ShooterGame.JumpingPathFollowingComponent
// Size: 0x2a0 (Inherited: 0x288)
struct UJumpingPathFollowingComponent : UPathFollowingComponent {
	float FlyingAcceptanceRadius; // 0x288(0x04)
	float HeightAcceptanceModifier; // 0x28c(0x04)
	struct UCharacterMovementComponent* CharacterMoveComp; // 0x290(0x08)
	char pad_298[0x8]; // 0x298(0x08)
};

// Class ShooterGame.JumpLandAddLowerBody3P
// Size: 0x38 (Inherited: 0x38)
struct UJumpLandAddLowerBody3P : UAnimSlotLowerBody3P {
};

// Class ShooterGame.JumpLandAddUpperBody3P
// Size: 0x38 (Inherited: 0x38)
struct UJumpLandAddUpperBody3P : UAnimSlotUpperBody3P {
};

// Class ShooterGame.JumpLandAnimSlot1P
// Size: 0x38 (Inherited: 0x38)
struct UJumpLandAnimSlot1P : UAnimSlot1P {
};

// Class ShooterGame.JumpLandAnimSlotGun1P
// Size: 0x38 (Inherited: 0x38)
struct UJumpLandAnimSlotGun1P : UAnimSlotGun1P {
};

// Class ShooterGame.JumpLandLowerBody3P
// Size: 0x38 (Inherited: 0x38)
struct UJumpLandLowerBody3P : UAnimSlotLowerBody3P {
};

// Class ShooterGame.JumpLandUpperBody3P
// Size: 0x38 (Inherited: 0x38)
struct UJumpLandUpperBody3P : UAnimSlotUpperBody3P {
};

// Class ShooterGame.KeyLocationObject
// Size: 0x400 (Inherited: 0x3d0)
struct AKeyLocationObject : ATargetPoint {
	struct FName LocationName; // 0x3d0(0x0c)
	char pad_3DC[0x4]; // 0x3dc(0x04)
	struct FText LocalizedLocationName; // 0x3e0(0x18)
	enum class EAresTeam Team; // 0x3f8(0x01)
	char pad_3F9[0x7]; // 0x3f9(0x07)
};

// Class ShooterGame.KeyLocationVolume
// Size: 0x448 (Inherited: 0x418)
struct AKeyLocationVolume : APhysicsVolume {
	struct FString LocationName; // 0x418(0x10)
	struct FText LocalizedLocationName; // 0x428(0x18)
	struct TWeakObjectPtr<struct AKeyLocationObject> LinkedKeyLocationObject; // 0x440(0x08)
};

// Class ShooterGame.KillBannerData
// Size: 0x30 (Inherited: 0x30)
struct UKillBannerData : UObject {
};

// Class ShooterGame.KillFeedAssisterPortraits_Base
// Size: 0x2f8 (Inherited: 0x2c8)
struct UKillFeedAssisterPortraits_Base : UUserWidget {
	struct UImage* BGGradient; // 0x2c8(0x08)
	struct UImage* AssistPortrait1; // 0x2d0(0x08)
	struct UImage* AssistPortrait2; // 0x2d8(0x08)
	struct UImage* AssistPortrait3; // 0x2e0(0x08)
	struct UImage* AssistPortrait4; // 0x2e8(0x08)
	struct UOverlay* MeBorder; // 0x2f0(0x08)
};

// Class ShooterGame.KillFeedParticipant_Base
// Size: 0x360 (Inherited: 0x2c8)
struct UKillFeedParticipant_Base : UUserWidget {
	struct UImage* BGGradient; // 0x2c8(0x08)
	struct UImage* Portrait; // 0x2d0(0x08)
	struct UTextBlock* PlayerName; // 0x2d8(0x08)
	struct UOverlay* UltimateOverlay; // 0x2e0(0x08)
	struct UImage* UltimateActiveVFX; // 0x2e8(0x08)
	struct USizeBox* UltimateAbilityIconSizeBox; // 0x2f0(0x08)
	struct UImage* UltimateAbilityIcon; // 0x2f8(0x08)
	struct USizeBox* AssistSizeBox; // 0x300(0x08)
	struct UImage* AssistImage; // 0x308(0x08)
	struct USizeBox* WeaponSizeBox; // 0x310(0x08)
	struct UImage* WeaponImage; // 0x318(0x08)
	struct USizeBox* WallPenSizeBox; // 0x320(0x08)
	struct UImage* WallPenImage; // 0x328(0x08)
	struct USizeBox* HeadshotSizeBox; // 0x330(0x08)
	struct UImage* HeadshotImage; // 0x338(0x08)
	struct UOverlay* MeBorder; // 0x340(0x08)
	struct UImage* TopGradient; // 0x348(0x08)
	struct UImage* BotGradient; // 0x350(0x08)
	struct UImage* MeDiamondImage; // 0x358(0x08)
};

// Class ShooterGame.KillFeedRow_Base
// Size: 0x318 (Inherited: 0x2c8)
struct UKillFeedRow_Base : UUserWidget {
	struct UImage* OnFireVFX; // 0x2c8(0x08)
	struct UKillFeedAssisterPortraits_Base* KillFeedAssisterPortraits; // 0x2d0(0x08)
	struct UOverlay* Numerals; // 0x2d8(0x08)
	struct UImage* NumberBacker; // 0x2e0(0x08)
	struct UTextBlock* KillNumberText; // 0x2e8(0x08)
	struct UKillFeedParticipant_Base* KillFeedParticipant1; // 0x2f0(0x08)
	struct UKillFeedParticipant_Base* KillFeedParticipant2; // 0x2f8(0x08)
	struct UImage* ArrowRight; // 0x300(0x08)
	struct UImage* ArrowLeft; // 0x308(0x08)
	struct UImage* AnimateIn; // 0x310(0x08)
};

// Class ShooterGame.KillCalloutHUDElement_Base
// Size: 0x2e0 (Inherited: 0x2d8)
struct UKillCalloutHUDElement_Base : UCoordinatedHUDElement {
	struct UVerticalBox* VerticalBoxForKillRows; // 0x2d8(0x08)
};

// Class ShooterGame.KillProxyComponent
// Size: 0xf8 (Inherited: 0xe8)
struct UKillProxyComponent : UActorComponent {
	struct TArray<struct FGameplayTag> ProxyTags; // 0xe8(0x10)
};

// Class ShooterGame.KillStreakComponent
// Size: 0x110 (Inherited: 0xe8)
struct UKillStreakComponent : UActorComponent {
	char pad_E8[0x28]; // 0xe8(0x28)
};

// Class ShooterGame.LadderComponent
// Size: 0xe8 (Inherited: 0xe8)
struct ULadderComponent : UActorComponent {
};

// Class ShooterGame.LatencyService
// Size: 0xa0 (Inherited: 0x80)
struct ULatencyService : UInitSystem {
	struct UConfigManager* ConfigManager; // 0x80(0x08)
	struct URSOManager* RSOManager; // 0x88(0x08)
	struct UCoreGameManager* CoreGameManager; // 0x90(0x08)
	struct UPingManager* PingManager; // 0x98(0x08)
};

// Class ShooterGame.LazyPlatformWidgetLoader_Base
// Size: 0x308 (Inherited: 0x2c8)
struct ULazyPlatformWidgetLoader_Base : UUserWidget {
	enum class EAresPlatformWidgetFamily WidgetFamily; // 0x2c8(0x01)
	char pad_2C9[0x3]; // 0x2c9(0x03)
	struct FName WidgetID; // 0x2cc(0x0c)
	struct FMulticastInlineDelegate OnWidgetLoaded; // 0x2d8(0x10)
	struct FMulticastInlineDelegate OnWidgetLoadFailed; // 0x2e8(0x10)
	struct UUserWidget* CurrentWidgetInstance; // 0x2f8(0x08)
	struct UUserWidget* CurrentWidgetClass; // 0x300(0x08)
};

// Class ShooterGame.LeftGripUpperBody3P
// Size: 0x38 (Inherited: 0x38)
struct ULeftGripUpperBody3P : UAnimSlotUpperBody3P {
};

// Class ShooterGame.LegalInfoManager
// Size: 0xd0 (Inherited: 0x80)
struct ULegalInfoManager : UInitSystem {
	struct FString EndUserLicenseAgreement; // 0x80(0x10)
	struct FString PrivacyPolicy; // 0x90(0x10)
	struct URSOManager* RSOManager; // 0xa0(0x08)
	struct ULegalInfoService* LegalInfoService; // 0xa8(0x08)
	char pad_B0[0x20]; // 0xb0(0x20)
};

// Class ShooterGame.LegalInfoService
// Size: 0x38 (Inherited: 0x30)
struct ULegalInfoService : UObject {
	struct URiotGamesApiClient* RiotGamesApiClient; // 0x30(0x08)
};

// Class ShooterGame.LevelBorderDataAsset
// Size: 0x88 (Inherited: 0x50)
struct ULevelBorderDataAsset : UAresBasePrimaryDataAsset {
	struct TSoftClassPtr<UObject> UIData; // 0x50(0x30)
	int32_t StartingLevel; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
};

// Class ShooterGame.LevelBorderUIData
// Size: 0xa0 (Inherited: 0x90)
struct ULevelBorderUIData : UBaseContentUIData {
	struct UTexture* LevelNumberAppearance; // 0x90(0x08)
	struct UTexture* SmallPlayerCardAppearance; // 0x98(0x08)
};

// Class ShooterGame.LineCrosshairHudElement
// Size: 0x220 (Inherited: 0x178)
struct ULineCrosshairHudElement : UBaseCrosshairHudElement {
	bool bDoResolutionScaling; // 0x178(0x01)
	char pad_179[0x3]; // 0x179(0x03)
	float SymmetricResolutionScalingThreshold; // 0x17c(0x04)
	struct FAresCrosshairImage CrosshairImages[0x5]; // 0x180(0xa0)
};

// Class ShooterGame.LineTargetingStateComponent
// Size: 0x458 (Inherited: 0x368)
struct ULineTargetingStateComponent : URespondToEventStateComponent {
	struct FMulticastInlineDelegate OnValidTargetSelected; // 0x368(0x10)
	struct FMulticastInlineDelegate OnInvalidTargetSelected; // 0x378(0x10)
	float TargetingRange; // 0x388(0x04)
	float LineWidth; // 0x38c(0x04)
	bool OthersSeeTargeting; // 0x390(0x01)
	char pad_391[0x3]; // 0x391(0x03)
	float PlacementCheckRadius; // 0x394(0x04)
	struct TArray<struct FName> TagsPreventingPlacement; // 0x398(0x10)
	enum class ECollisionChannel TraceChannel; // 0x3a8(0x01)
	bool bUseComplexCollision; // 0x3a9(0x01)
	char pad_3AA[0x96]; // 0x3aa(0x96)
	bool bDrawDebugTargeting; // 0x440(0x01)
	char pad_441[0x17]; // 0x441(0x17)
};

// Class ShooterGame.ListEntryPerSlotConfigurer
// Size: 0x30 (Inherited: 0x30)
struct UListEntryPerSlotConfigurer : UInterface {
};

// Class ShooterGame.ListEntrySlotConfigurer
// Size: 0x30 (Inherited: 0x30)
struct UListEntrySlotConfigurer : UInterface {
};

// Class ShooterGame.ListEntrySlotConfigurerFactory
// Size: 0x30 (Inherited: 0x30)
struct UListEntrySlotConfigurerFactory : UInterface {
};

// Class ShooterGame.ListItemDisplayEntry
// Size: 0x30 (Inherited: 0x30)
struct UListItemDisplayEntry : UInterface {
};

// Class ShooterGame.ListItemDisplayEntryBase
// Size: 0x300 (Inherited: 0x2e0)
struct UListItemDisplayEntryBase : UAnimatableUserWidget {
	char pad_2E0[0x8]; // 0x2e0(0x08)
	struct TScriptInterface<IListItemDisplayEntryOwner> ListItemOwner; // 0x2e8(0x10)
	int32_t ListIndex; // 0x2f8(0x04)
	bool bSelected; // 0x2fc(0x01)
	char pad_2FD[0x3]; // 0x2fd(0x03)
};

// Class ShooterGame.ListItemDisplayEntryOwner
// Size: 0x30 (Inherited: 0x30)
struct UListItemDisplayEntryOwner : UInterface {
};

// Class ShooterGame.ListViewList
// Size: 0x410 (Inherited: 0x258)
struct UListViewList : UListViewBase {
	char pad_258[0xc8]; // 0x258(0xc8)
	struct FMulticastInlineDelegate OnItemActivated; // 0x320(0x10)
	enum class EOrientation Orientation; // 0x330(0x01)
	enum class ESelectionMode SelectionMode; // 0x331(0x01)
	enum class EConsumeMouseWheel ConsumeMouseWheel; // 0x332(0x01)
	bool bClearSelectionOnClick; // 0x333(0x01)
	bool bIsFocusable; // 0x334(0x01)
	char pad_335[0x3]; // 0x335(0x03)
	float EntrySpacing; // 0x338(0x04)
	bool bReturnFocusToSelection; // 0x33c(0x01)
	char pad_33D[0x3]; // 0x33d(0x03)
	struct TArray<struct FWildcard> ListItems; // 0x340(0x10)
	struct FWildcard SharedListItemData; // 0x350(0x40)
	struct TScriptInterface<IOrderedListModel> ListModel; // 0x390(0x10)
	char pad_3A0[0x10]; // 0x3a0(0x10)
	struct FMulticastInlineDelegate BP_OnEntryInitialized; // 0x3b0(0x10)
	struct FMulticastInlineDelegate BP_OnItemClicked; // 0x3c0(0x10)
	struct FMulticastInlineDelegate BP_OnItemDoubleClicked; // 0x3d0(0x10)
	struct FMulticastInlineDelegate BP_OnItemIsHoveredChanged; // 0x3e0(0x10)
	struct FMulticastInlineDelegate BP_OnItemSelectionChanged; // 0x3f0(0x10)
	struct FMulticastInlineDelegate BP_OnItemScrolledIntoView; // 0x400(0x10)
};

// Class ShooterGame.LiveStoryNPCActor
// Size: 0x3d0 (Inherited: 0x3d0)
struct ALiveStoryNPCActor : AActor {
};

// Class ShooterGame.LoadTimeMetricsStatics
// Size: 0x30 (Inherited: 0x30)
struct ULoadTimeMetricsStatics : UObject {
};

// Class ShooterGame.LocalePreferenceManager
// Size: 0xc8 (Inherited: 0x80)
struct ULocalePreferenceManager : UInitSystem {
	struct URiotProductManager* RiotProductManager; // 0x80(0x08)
	struct URiotGamesApiClient* RiotGamesApiClient; // 0x88(0x08)
	struct FString ProductLocaleURL; // 0x90(0x10)
	struct FString Locale; // 0xa0(0x10)
	struct TArray<struct FString> AvailableLocales; // 0xb0(0x10)
	bool bIsInitalized; // 0xc0(0x01)
	char pad_C1[0x7]; // 0xc1(0x07)
};

// Class ShooterGame.LocationalEffectManagerComponent
// Size: 0x1a0 (Inherited: 0x178)
struct ULocationalEffectManagerComponent : UEffectManagerComponent {
	struct TArray<struct FPendingStartEffect> DeferredLocationalEffects; // 0x178(0x10)
	struct TArray<struct TWeakObjectPtr<struct AEffectContainer>> LocalOneShotEffects; // 0x188(0x10)
	struct URemoteClientMovementComponent* RemoteClientMovementComponent; // 0x198(0x08)
};

// Class ShooterGame.LoginQueueManager
// Size: 0x148 (Inherited: 0x80)
struct ULoginQueueManager : UInitSystem {
	struct FMulticastInlineDelegate OnQueueUpdated; // 0x80(0x10)
	struct FMulticastInlineDelegate OnLoginReady; // 0x90(0x10)
	struct UConfigManager* ConfigManager; // 0xa0(0x08)
	struct USessionService* SessionService; // 0xa8(0x08)
	struct URSOManager* RSOManager; // 0xb0(0x08)
	struct ULoginQueueService* LoginQueueService; // 0xb8(0x08)
	char pad_C0[0x8]; // 0xc0(0x08)
	struct FString LoginToken; // 0xc8(0x10)
	struct FString QueueToken; // 0xd8(0x10)
	struct FLoginQueueQueueToken QueueTokenInfo; // 0xe8(0x18)
	struct FString RegionOverride; // 0x100(0x10)
	char pad_110[0x38]; // 0x110(0x38)
};

// Class ShooterGame.LoginQueueService
// Size: 0x38 (Inherited: 0x30)
struct ULoginQueueService : UObject {
	char pad_30[0x8]; // 0x30(0x08)
};

// Class ShooterGame.Look2AnimSlot1P
// Size: 0x38 (Inherited: 0x38)
struct ULook2AnimSlot1P : UAnimSlot1P {
};

// Class ShooterGame.LookAnimSlot1P
// Size: 0x38 (Inherited: 0x38)
struct ULookAnimSlot1P : UAnimSlot1P {
};

// Class ShooterGame.MainMenuCheatManager
// Size: 0x80 (Inherited: 0x80)
struct UMainMenuCheatManager : UAresCheatManagerBase {
};

// Class ShooterGame.MainMenuGameMode
// Size: 0x4c0 (Inherited: 0x4c0)
struct AMainMenuGameMode : AGameMode {
};

// Class ShooterGame.MainMenuModalDialogueWidget
// Size: 0x2d0 (Inherited: 0x2c8)
struct UMainMenuModalDialogueWidget : UUserWidget {
	struct UMainMenuQueuedDialogueModel* DialogueModel; // 0x2c8(0x08)
};

// Class ShooterGame.MainMenuParentWidget
// Size: 0x2d8 (Inherited: 0x2c8)
struct UMainMenuParentWidget : UUserWidget {
	struct UMainMenuViewModel* ViewModel; // 0x2c8(0x08)
	struct UMainMenuViewController* ViewController; // 0x2d0(0x08)
};

// Class ShooterGame.MainMenuStateV2
// Size: 0xc8 (Inherited: 0x90)
struct UMainMenuStateV2 : UStaticGameFlowState {
	struct FMulticastInlineDelegate OnMatchmakingMatchFoundChanged; // 0x90(0x10)
	char pad_A0[0x18]; // 0xa0(0x18)
	struct UPartyManager* PartyManager; // 0xb8(0x08)
	struct UCoreGameManager* CoreGameManager; // 0xc0(0x08)
};

// Class ShooterGame.MainMenuTelemetryManager
// Size: 0x48 (Inherited: 0x30)
struct UMainMenuTelemetryManager : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct UGameFlowStateManager* GameFlowStateManager; // 0x38(0x08)
	struct UUITelemetryManager* UITelemetryManager; // 0x40(0x08)
};

// Class ShooterGame.MainMenuViewController
// Size: 0x90 (Inherited: 0x30)
struct UMainMenuViewController : UGetOuterWorldObject {
	struct UMainMenuViewModel* ViewModel; // 0x30(0x08)
	struct UAresClientGameInstance* AresClientGameInstance; // 0x38(0x08)
	struct TMap<enum class EAresMainMenuTopNavigationState, struct UUserWidget*> StateWidgets; // 0x40(0x50)
};

// Class ShooterGame.NavBarMenu
// Size: 0x30 (Inherited: 0x30)
struct UNavBarMenu : UInterface {
};

// Class ShooterGame.MainMenuQueuedDialogueModel
// Size: 0x88 (Inherited: 0x30)
struct UMainMenuQueuedDialogueModel : UObject {
	struct UMainMenuModalDialogueWidget* WidgetClass; // 0x30(0x08)
	struct FDelegate OnDialogueCreated; // 0x38(0x14)
	struct FDelegate OnDialogueAccepted; // 0x4c(0x14)
	struct FDelegate OnDialogueDeclined; // 0x60(0x14)
	char pad_74[0x4]; // 0x74(0x04)
	struct FMulticastInlineDelegate OnDialogueCompleted; // 0x78(0x10)
};

// Class ShooterGame.MainMenuViewModel
// Size: 0x78 (Inherited: 0x30)
struct UMainMenuViewModel : UObject {
	enum class EAresMainMenuTopNavigationState MenuState; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct UUserWidget* MenuWidget; // 0x38(0x08)
	bool bInPrelude; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct FMulticastInlineDelegate OnNavigationStateChanged; // 0x48(0x10)
	struct FMulticastInlineDelegate OnNavigationStateRepeated; // 0x58(0x10)
	struct FMulticastInlineDelegate OnInPreludeChanged; // 0x68(0x10)
};

// Class ShooterGame.ShooterPlayerController
// Size: 0xb78 (Inherited: 0x988)
struct AShooterPlayerController : AAresPlayerController {
	struct FVisualizeRestoreData VisualizeRestoreData; // 0x988(0xa0)
	char pad_A28[0x10]; // 0xa28(0x10)
	bool bShowPossessedCharacterForDebugCharacterNetworking; // 0xa38(0x01)
	char pad_A39[0x7]; // 0xa39(0x07)
	struct FMulticastInlineDelegate OnMountAutoZipline; // 0xa40(0x10)
	struct FMulticastInlineDelegate OnSuppressed; // 0xa50(0x10)
	uint64_t DebugSubscriptionFlags; // 0xa60(0x08)
	struct FMulticastInlineDelegate OnCharacterRespawned; // 0xa68(0x10)
	char pad_A78[0x10]; // 0xa78(0x10)
	int32_t LastSmokeFrameID; // 0xa88(0x04)
	float CurrentSmokeOpacity; // 0xa8c(0x04)
	struct UVoteControllerComponent* VoteControllerComponent; // 0xa90(0x08)
	struct UCopyCrosshairCommandComponent* CopyCrosshairCommandComponent; // 0xa98(0x08)
	struct FRateLimiter ShopScreenPurchaseRateLimiter; // 0xaa0(0x30)
	char pad_AD0[0x8]; // 0xad0(0x08)
	struct UViewerFogOfWarComponent* FogOfWarComponent; // 0xad8(0x08)
	struct USceneComponent* LookAtTarget; // 0xae0(0x08)
	struct FVector2D LookAtRotationalExtents; // 0xae8(0x08)
	char pad_AF0[0x58]; // 0xaf0(0x58)
	struct FRateLimiter DiagnosticsRateLimiter; // 0xb48(0x30)
};

// Class ShooterGame.MannequinPlayerControllerBase
// Size: 0xb78 (Inherited: 0xb78)
struct AMannequinPlayerControllerBase : AShooterPlayerController {
};

// Class ShooterGame.ManualNumericProgressModel
// Size: 0x88 (Inherited: 0x88)
struct UManualNumericProgressModel : UManualNumericProgressModelBase {
};

// Class ShooterGame.MapLoadModel
// Size: 0x78 (Inherited: 0x30)
struct UMapLoadModel : UObject {
	char pad_30[0x28]; // 0x30(0x28)
	struct FString MapName; // 0x58(0x10)
	bool bMapReady; // 0x68(0x01)
	bool bMapComplete; // 0x69(0x01)
	char pad_6A[0x6]; // 0x6a(0x06)
	struct UConfigManager* ConfigManager; // 0x70(0x08)
};

// Class ShooterGame.MapPingComponent
// Size: 0xf8 (Inherited: 0xe8)
struct UMapPingComponent : UActorComponent {
	struct TArray<struct FActivePingData> ActivePingData; // 0xe8(0x10)
};

// Class ShooterGame.MapSelectScreen
// Size: 0x2c8 (Inherited: 0x2c8)
struct UMapSelectScreen : UDesignableUserWidget {
};

// Class ShooterGame.MapTargetingStateComponent
// Size: 0x470 (Inherited: 0x368)
struct UMapTargetingStateComponent : URespondToEventStateComponent {
	struct FMulticastInlineDelegate OnMapLocationSelected; // 0x368(0x10)
	struct FMulticastInlineDelegate OnInvalidMapLocation; // 0x378(0x10)
	enum class ETargettingRotation TransformRotation; // 0x388(0x01)
	char pad_389[0x7]; // 0x389(0x07)
	struct UClickableMapWidget* MapInteractionClass; // 0x390(0x08)
	bool bCloseMapOnSilence; // 0x398(0x01)
	bool bHideMinimap; // 0x399(0x01)
	char pad_39A[0x6]; // 0x39a(0x06)
	struct UClickableMapWidget* MapInteractionWidget; // 0x3a0(0x08)
	struct UWidgetComponent* WorldWidgetComponent; // 0x3a8(0x08)
	bool bAwaitingServerValidation; // 0x3b0(0x01)
	char pad_3B1[0x3]; // 0x3b1(0x03)
	struct TWeakObjectPtr<struct AAresPlayerController> MapOpenController; // 0x3b4(0x08)
	char pad_3BC[0x4]; // 0x3bc(0x04)
	struct UStateComponent* MapCloseState; // 0x3c0(0x08)
	struct AAresPlayerController* InteractingController; // 0x3c8(0x08)
	struct UInputComponent* InputComponent; // 0x3d0(0x08)
	struct FVector2D LocalHitLocation; // 0x3d8(0x08)
	struct FVector2D LastLocalHitLocation; // 0x3e0(0x08)
	char pad_3E8[0x88]; // 0x3e8(0x88)
};

// Class ShooterGame.MassRewardsCeremonyUIData
// Size: 0xa8 (Inherited: 0x90)
struct UMassRewardsCeremonyUIData : UBaseContentUIData {
	struct FText UIScreenTitle; // 0x90(0x18)
};

// Class ShooterGame.MassRewardsCeremonyDataAsset
// Size: 0x80 (Inherited: 0x50)
struct UMassRewardsCeremonyDataAsset : UAresBasePrimaryDataAsset {
	struct TSoftClassPtr<UObject> UIData; // 0x50(0x30)
};

// Class ShooterGame.MassRewardsManager
// Size: 0xb0 (Inherited: 0x80)
struct UMassRewardsManager : UInitSystem {
	struct UConfigManager* ConfigManager; // 0x80(0x08)
	struct URSOManager* RSOManager; // 0x88(0x08)
	struct UContentIndex* ContentIndex; // 0x90(0x08)
	struct URewardGrantModelFactory* RewardGrantModelFactory; // 0x98(0x08)
	struct UMassRewardsService* MassRewardsService; // 0xa0(0x08)
	struct UMassRewardViewModel* ViewModel; // 0xa8(0x08)
};

// Class ShooterGame.MassRewardsService
// Size: 0x38 (Inherited: 0x30)
struct UMassRewardsService : UObject {
	struct UConfigManager* ConfigManager; // 0x30(0x08)
};

// Class ShooterGame.MassRewardCeremonyViewModel
// Size: 0x58 (Inherited: 0x30)
struct UMassRewardCeremonyViewModel : UObject {
	enum class EMassRewardCeremonyType Type; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct TArray<struct URewardModel*> Rewards; // 0x38(0x10)
	char pad_48[0x10]; // 0x48(0x10)
};

// Class ShooterGame.MassRewardRankedCeremonyViewModel
// Size: 0x68 (Inherited: 0x58)
struct UMassRewardRankedCeremonyViewModel : UMassRewardCeremonyViewModel {
	struct UCompetitiveSeasonDataAsset* CompetitiveSeason; // 0x58(0x08)
	struct USeasonDataAsset* Season; // 0x60(0x08)
};

// Class ShooterGame.MassRewardTitledCeremonyViewModel
// Size: 0x70 (Inherited: 0x58)
struct UMassRewardTitledCeremonyViewModel : UMassRewardCeremonyViewModel {
	struct FText UIScreenTitle; // 0x58(0x18)
};

// Class ShooterGame.MassRewardViewModel
// Size: 0x40 (Inherited: 0x30)
struct UMassRewardViewModel : UObject {
	struct TArray<struct UMassRewardCeremonyViewModel*> Ceremonies; // 0x30(0x10)
};

// Class ShooterGame.MatchDetailsViewModel
// Size: 0x290 (Inherited: 0x30)
struct UMatchDetailsViewModel : UObject {
	struct FProcessedMatchDetails Data; // 0x30(0x238)
	struct FString TargetSubject; // 0x268(0x10)
	struct FMulticastInlineDelegate OnContentLoaded; // 0x278(0x10)
	char pad_288[0x8]; // 0x288(0x08)
};

// Class ShooterGame.MatchDetailsManager
// Size: 0x160 (Inherited: 0x80)
struct UMatchDetailsManager : UInitSystem {
	struct FMulticastInlineDelegate OnNewMatch; // 0x80(0x10)
	struct URMSManager* RMSManager; // 0x90(0x08)
	struct URSOManager* RSOManager; // 0x98(0x08)
	struct UMatchDetailsService* MatchDetailsService; // 0xa0(0x08)
	struct UInventoryManager* InventoryManager; // 0xa8(0x08)
	struct UPersonalizationManagerV2* PersonalizationManager; // 0xb0(0x08)
	struct UContentIndex* ContentIndex; // 0xb8(0x08)
	char pad_C0[0xa0]; // 0xc0(0xa0)
};

// Class ShooterGame.MatchDetailsService
// Size: 0x38 (Inherited: 0x30)
struct UMatchDetailsService : UObject {
	struct UConfigManager* ConfigManager; // 0x30(0x08)
};

// Class ShooterGame.MatchHistoryManager
// Size: 0x150 (Inherited: 0x80)
struct UMatchHistoryManager : UInitSystem {
	struct URSOManager* RSOManager; // 0x80(0x08)
	struct UMatchHistoryService* MatchHistoryService; // 0x88(0x08)
	struct UMatchDetailsManager* MatchDetailsManager; // 0x90(0x08)
	char pad_98[0x8]; // 0x98(0x08)
	struct UConfigManager* ConfigManager; // 0xa0(0x08)
	char pad_A8[0xa8]; // 0xa8(0xa8)
};

// Class ShooterGame.MatchHistoryScreenV2
// Size: 0x2d0 (Inherited: 0x2c8)
struct UMatchHistoryScreenV2 : UUserWidget {
	struct UMatchHistoryViewController* MatchHistoryViewController; // 0x2c8(0x08)
};

// Class ShooterGame.MatchHistoryService
// Size: 0x38 (Inherited: 0x30)
struct UMatchHistoryService : UObject {
	struct UConfigManager* ConfigManager; // 0x30(0x08)
};

// Class ShooterGame.MatchHistoryViewController
// Size: 0x148 (Inherited: 0x30)
struct UMatchHistoryViewController : UObject {
	struct FString Subject; // 0x30(0x10)
	struct UMatchHistoryViewModel* MatchHistoryViewModel; // 0x40(0x08)
	struct TMap<struct FLeaderboardMapKey, struct ULeaderboardViewModel*> LeaderboardModels; // 0x48(0x50)
	struct UMatchHistoryManager* MatchHistoryManager; // 0x98(0x08)
	struct UInventoryManager* InventoryManager; // 0xa0(0x08)
	struct UMMRManager* MMRManager; // 0xa8(0x08)
	struct TMap<struct FGuid, struct UCharacterUIData*> CharacterUIData; // 0xb0(0x50)
	struct UMatchViewDataContext* MatchViewDataContext; // 0x100(0x08)
	struct UContentIndex* ContentIndex; // 0x108(0x08)
	struct UContentManager* ContentManager; // 0x110(0x08)
	struct UConfigManager* ConfigManager; // 0x118(0x08)
	struct URSOManager* RSOManager; // 0x120(0x08)
	char pad_128[0x20]; // 0x128(0x20)
};

// Class ShooterGame.MatchPlayerScoreBreakdown
// Size: 0x60 (Inherited: 0x30)
struct UMatchPlayerScoreBreakdown : UObject {
	enum class EAresPlayerRelationship PlayerCategory; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	int32_t Score; // 0x34(0x04)
	struct FGuid CharacterID; // 0x38(0x10)
	struct FMulticastInlineDelegate OnContentLoaded; // 0x48(0x10)
	struct UCharacterUIData* CharacterData; // 0x58(0x08)
};

// Class ShooterGame.MatchViewDataContext
// Size: 0x40 (Inherited: 0x30)
struct UMatchViewDataContext : UObject {
	struct FString Subject; // 0x30(0x10)
};

// Class ShooterGame.LeaderboardPlayerModel
// Size: 0x88 (Inherited: 0x30)
struct ULeaderboardPlayerModel : UObject {
	struct FString Subject; // 0x30(0x10)
	struct FString GameName; // 0x40(0x10)
	struct FString TagLine; // 0x50(0x10)
	struct UPlayerCardDataAsset* PlayerCard; // 0x60(0x08)
	struct UPlayerTitleDataAsset* Title; // 0x68(0x08)
	int32_t RankedRating; // 0x70(0x04)
	int32_t CompetitiveTier; // 0x74(0x04)
	int32_t NumberOfWins; // 0x78(0x04)
	int32_t Rank; // 0x7c(0x04)
	bool IsAnonymized; // 0x80(0x01)
	bool IsBanned; // 0x81(0x01)
	bool IsSeparator; // 0x82(0x01)
	char pad_83[0x5]; // 0x83(0x05)
};

// Class ShooterGame.LeaderboardViewModel
// Size: 0x180 (Inherited: 0x30)
struct ULeaderboardViewModel : UObject {
	char pad_30[0x20]; // 0x30(0x20)
	struct TMap<int32_t, struct ULeaderboardPlayerModel*> Players; // 0x50(0x50)
	struct USeasonDataAsset* Season; // 0xa0(0x08)
	struct UCompetitiveSeasonDataAsset* CompetitiveSeason; // 0xa8(0x08)
	struct TMap<int32_t, struct FLeaderboardTierDetails> TierDetails; // 0xb0(0x50)
	int32_t TotalSeparators; // 0x100(0x04)
	int32_t TotalPlayers; // 0x104(0x04)
	char pad_108[0x8]; // 0x108(0x08)
	struct FMulticastInlineDelegate IsOnLeaderboardChanged; // 0x110(0x10)
	struct FMulticastInlineDelegate IsAnonymizedChanged; // 0x120(0x10)
	struct FMulticastInlineDelegate MyPlayerRankChanged; // 0x130(0x10)
	struct FMulticastInlineDelegate OnLeaderboardPlayersAdded; // 0x140(0x10)
	struct FMulticastInlineDelegate OnLoadingChanged; // 0x150(0x10)
	struct FMulticastInlineDelegate OnLeaderboardError; // 0x160(0x10)
	struct FMulticastInlineDelegate OnEmptyChanged; // 0x170(0x10)
};

// Class ShooterGame.MatchViewModel
// Size: 0x170 (Inherited: 0x30)
struct UMatchViewModel : UObject {
	int32_t Kills; // 0x30(0x04)
	int32_t Deaths; // 0x34(0x04)
	int32_t Assists; // 0x38(0x04)
	int32_t RoundsWon; // 0x3c(0x04)
	int32_t RoundsLost; // 0x40(0x04)
	int32_t Points; // 0x44(0x04)
	int32_t HighestEnemyPoints; // 0x48(0x04)
	bool DidPlayerWinMatch; // 0x4c(0x01)
	enum class EMatchOutcome PlayerMatchOutcome; // 0x4d(0x01)
	char pad_4E[0x2]; // 0x4e(0x02)
	int32_t TeamTotalPointsScoredInMatch; // 0x50(0x04)
	int32_t PlayerPointsScoredInMatch; // 0x54(0x04)
	struct FMatchScoreBreakdown Scores; // 0x58(0x38)
	struct FGuid CharacterID; // 0x90(0x10)
	struct FString QueueID; // 0xa0(0x10)
	bool IsRanked; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)
	struct FString MatchID; // 0xb8(0x10)
	struct FDateTime GameStartTime; // 0xc8(0x08)
	struct FTimespan GameLength; // 0xd0(0x08)
	bool HasData; // 0xd8(0x01)
	char pad_D9[0x7]; // 0xd9(0x07)
	struct FMulticastInlineDelegate OnContentLoaded; // 0xe0(0x10)
	struct UCharacterUIData* CharacterData; // 0xf0(0x08)
	struct UMapDataAsset* MapData; // 0xf8(0x08)
	struct UGameModeDataAsset* GameModeData; // 0x100(0x08)
	struct USeasonDataAsset* SeasonData; // 0x108(0x08)
	struct UCompetitiveSeasonDataAsset* CompetitiveSeasonData; // 0x110(0x08)
	struct FMulticastInlineDelegate OnMMRDataLoaded; // 0x118(0x10)
	struct FMMRMatchInfo MMRMatchInfo; // 0x128(0x30)
	struct TArray<int32_t> SortedPointsAllTeams; // 0x158(0x10)
	struct UMatchViewDataContext* DataContext; // 0x168(0x08)
};

// Class ShooterGame.MatchHistoryViewModel
// Size: 0xf0 (Inherited: 0x30)
struct UMatchHistoryViewModel : UObject {
	struct FMulticastInlineDelegate OnMatchHistoryViewModelLoadingStateChanged; // 0x30(0x10)
	struct FMulticastInlineDelegate OnMatchHistoryViewModelErrorStateChanged; // 0x40(0x10)
	struct FMulticastInlineDelegate OnMMRDataLoaded; // 0x50(0x10)
	struct FMulticastInlineDelegate OnMatchHistoryViewModelLoadedMatch; // 0x60(0x10)
	int32_t TotalGamesNeededForRating; // 0x70(0x04)
	int32_t RecentGamesNeededForRating; // 0x74(0x04)
	int32_t CurrentSeasonGamesNeededForRating; // 0x78(0x04)
	int32_t TotalGamesNeededForLeaderboard; // 0x7c(0x04)
	struct TArray<struct UMatchViewModel*> LoadedMatches; // 0x80(0x10)
	struct TMap<struct FGuid, struct FProcessedSeasonInfo> SeasonInfo; // 0x90(0x50)
	char pad_E0[0x8]; // 0xe0(0x08)
	struct UContentIndex* ContentIndex; // 0xe8(0x08)
};

// Class ShooterGame.MatchInfoHudElement
// Size: 0x8a0 (Inherited: 0x58)
struct UMatchInfoHudElement : UAresHudElement {
	struct FTeamScore AllyTeamScore; // 0x58(0x178)
	struct FTeamScore EnemyTeamScore; // 0x1d0(0x178)
	struct FTeamIcons TeamIconTuning; // 0x348(0x50)
	struct FTeamMoney AllyTeamMoney; // 0x398(0x148)
	struct FTeamMoney EnemyTeamMoney; // 0x4e0(0x148)
	struct FMatchTimer MatchTimerDisplay; // 0x628(0xb8)
	struct FRoundNumber RoundNumberDisplay; // 0x6e0(0xa0)
	struct FGamePausedText GamePausedTextDisplay; // 0x780(0x120)
};

// Class ShooterGame.MatchmakingManager
// Size: 0xf8 (Inherited: 0x80)
struct UMatchmakingManager : UInitSystem {
	struct FMulticastInlineDelegate OnQueueStatusUpdated; // 0x80(0x10)
	struct UMatchmakingService* MatchmakingService; // 0x90(0x08)
	struct UConfigManager* ConfigManager; // 0x98(0x08)
	struct URSOManager* RSOManager; // 0xa0(0x08)
	struct UPartyModel* PartyModel; // 0xa8(0x08)
	struct UPlatformSessionManager* SessionManager; // 0xb0(0x08)
	struct FAresQueueStatus QueueStatus; // 0xb8(0x20)
	char pad_D8[0x18]; // 0xd8(0x18)
	bool bQueueStatusUpdateInProgress; // 0xf0(0x01)
	char pad_F1[0x7]; // 0xf1(0x07)
};

// Class ShooterGame.MatchmakingQueueDataAsset
// Size: 0xc0 (Inherited: 0x50)
struct UMatchmakingQueueDataAsset : UAresBasePrimaryDataAsset {
	struct FString QueueID; // 0x50(0x10)
	struct FText DropdownText; // 0x60(0x18)
	struct FText SelectedText; // 0x78(0x18)
	struct TSoftClassPtr<UObject> UIData; // 0x90(0x30)
};

// Class ShooterGame.MatchmakingQueueUIData
// Size: 0xb0 (Inherited: 0x90)
struct UMatchmakingQueueUIData : UBaseContentUIData {
	struct FText Description; // 0x90(0x18)
	bool IsBeta; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
};

// Class ShooterGame.MatchmakingService
// Size: 0x38 (Inherited: 0x30)
struct UMatchmakingService : UObject {
	struct UConfigManager* ConfigManager; // 0x30(0x08)
};

// Class ShooterGame.MatchRecoveryGameDataEventSubscriptions
// Size: 0x48 (Inherited: 0x30)
struct UMatchRecoveryGameDataEventSubscriptions : UObject {
	struct UGameDataEventForwarder* GameDataEventForwarder; // 0x30(0x08)
	char pad_38[0x10]; // 0x38(0x10)
};

// Class ShooterGame.MatchResultEventCollector
// Size: 0xb0 (Inherited: 0x30)
struct UMatchResultEventCollector : UObject {
	struct FMulticastInlineDelegate OnMatchResultsCollected; // 0x30(0x10)
	struct UWorld* TheWorld; // 0x40(0x08)
	struct TMap<struct FString, struct UStruct*> EventTypes; // 0x48(0x50)
	char pad_98[0x18]; // 0x98(0x18)
};

// Class ShooterGame.Megamap
// Size: 0x2c8 (Inherited: 0x2c8)
struct UMegamap : UUserWidget {
};

// Class ShooterGame.MegamapCoordinator
// Size: 0x68 (Inherited: 0x30)
struct UMegamapCoordinator : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct FMulticastInlineDelegate OnMegamapToggled; // 0x38(0x10)
	struct AAresPlayerController* PlayerController; // 0x48(0x08)
	struct UMenuStackManager* MenuStackManager; // 0x50(0x08)
	struct UMegamap* Megamap; // 0x58(0x08)
	char pad_60[0x8]; // 0x60(0x08)
};

// Class ShooterGame.MegapacketComponent
// Size: 0x3e0 (Inherited: 0xe8)
struct UMegapacketComponent : UActorComponent {
	char pad_E8[0x2f8]; // 0xe8(0x2f8)
};

// Class ShooterGame.MeleeAttackStateComponent
// Size: 0x308 (Inherited: 0x2c8)
struct UMeleeAttackStateComponent : UScriptStateComponent {
	float AttackDistance; // 0x2c8(0x04)
	float BackstabAngleDegrees; // 0x2cc(0x04)
	float OuterHitSphereRadius; // 0x2d0(0x04)
	float InnerHitSphereRadius; // 0x2d4(0x04)
	struct FAresMeleeTuning AttackEffectTuning; // 0x2d8(0x18)
	struct FAresMeleeTuning BackstabAttackEffectTuning; // 0x2f0(0x18)
};

// Class ShooterGame.MemoryPerfStatsReport
// Size: 0x1e8 (Inherited: 0xe8)
struct UMemoryPerfStatsReport : UActorComponent {
	struct FMemoryPerfStatsComponent MemoryPerfStatsComponent; // 0xe8(0x100)
};

// Class ShooterGame.MenuStackEntry
// Size: 0x90 (Inherited: 0x30)
struct UMenuStackEntry : UObject {
	struct UUserWidget* Content; // 0x30(0x08)
	char pad_38[0x10]; // 0x38(0x10)
	struct FMulticastInlineDelegate OnOpen; // 0x48(0x10)
	struct FMulticastInlineDelegate OnClose; // 0x58(0x10)
	struct FMulticastInlineDelegate OnDismissed; // 0x68(0x10)
	struct FMenuMusic MenuMusic; // 0x78(0x10)
	enum class EMenuStackEntryFlags Flags; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
};

// Class ShooterGame.MenuStackManager
// Size: 0xd0 (Inherited: 0x30)
struct UMenuStackManager : UObject {
	struct FMulticastInlineDelegate OnMenuOpened; // 0x30(0x10)
	struct FMulticastInlineDelegate OnMenuClosed; // 0x40(0x10)
	struct FMulticastInlineDelegate OnCurrentMenuMusicChanged; // 0x50(0x10)
	struct FMulticastInlineDelegate OnTopNavBarCompatibleEntryChanged; // 0x60(0x10)
	struct TArray<struct UMenuStackEntry*> OpenedMenus; // 0x70(0x10)
	struct TArray<struct UMenuStackEntry*> ClosedMenus; // 0x80(0x10)
	struct UUserWidget* DefaultInputOwner; // 0x90(0x08)
	struct TScriptInterface<INavBarMenu> TopNavBarMenu; // 0x98(0x10)
	struct TWeakObjectPtr<struct UPanelWidget> MenuContainer; // 0xa8(0x08)
	struct TWeakObjectPtr<struct UPanelWidget> PopupContainer; // 0xb0(0x08)
	struct FMenuMusic CurrentMenuMusic; // 0xb8(0x10)
	bool bBusy; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)
};

// Class ShooterGame.MenuStackWidget
// Size: 0x30 (Inherited: 0x30)
struct UMenuStackWidget : UInterface {
};

// Class ShooterGame.MinimapVisionConesBlockerComponent
// Size: 0x510 (Inherited: 0x500)
struct UMinimapVisionConesBlockerComponent : UAresMinimapComponent {
	bool bShowVisualizationMesh; // 0x4f8(0x01)
	char pad_501[0xf]; // 0x501(0x0f)
};

// Class ShooterGame.MinimapVisionConesBlockerLineComponent
// Size: 0x510 (Inherited: 0x510)
struct UMinimapVisionConesBlockerLineComponent : UMinimapVisionConesBlockerComponent {
};

// Class ShooterGame.MinimapVisionConesBlockerRectComponent
// Size: 0x510 (Inherited: 0x510)
struct UMinimapVisionConesBlockerRectComponent : UMinimapVisionConesBlockerComponent {
};

// Class ShooterGame.MinimapVisionConesBlockerCircleComponent
// Size: 0x510 (Inherited: 0x510)
struct UMinimapVisionConesBlockerCircleComponent : UMinimapVisionConesBlockerComponent {
};

// Class ShooterGame.MinimapVisionConesComponent
// Size: 0x5a0 (Inherited: 0x500)
struct UMinimapVisionConesComponent : UAresMinimapComponent {
	char pad_500[0xa0]; // 0x500(0xa0)
};

// Class ShooterGame.MissingMinimapWidget
// Size: 0x2e8 (Inherited: 0x2e0)
struct UMissingMinimapWidget : UAresMinimapWidget {
	float LastSeen; // 0x2e0(0x04)
	char pad_2E4[0x4]; // 0x2e4(0x04)
};

// Class ShooterGame.Mission
// Size: 0x4c0 (Inherited: 0x3d0)
struct AMission : AActor {
	struct FMulticastInlineDelegate OnMissionReset; // 0x3d0(0x10)
	struct FMulticastInlineDelegate OnShowMissionUIChanged; // 0x3e0(0x10)
	struct FMulticastInlineDelegate OnObjectiveCompleted; // 0x3f0(0x10)
	struct FMulticastInlineDelegate OnObjectiveFailed; // 0x400(0x10)
	struct FMulticastInlineDelegate OnObjectiveStatusChanged; // 0x410(0x10)
	struct FMulticastInlineDelegate OnObjectiveProgressChanged; // 0x420(0x10)
	struct FMulticastInlineDelegate OnMissionStatusChanged; // 0x430(0x10)
	struct FMulticastInlineDelegate OnMissionActivated; // 0x440(0x10)
	struct FMulticastInlineDelegate OnMissionCompleted; // 0x450(0x10)
	struct FMulticastInlineDelegate OnMissionFailed; // 0x460(0x10)
	bool bShowMissionUI; // 0x470(0x01)
	char pad_471[0x7]; // 0x471(0x07)
	struct FText Title; // 0x478(0x18)
	struct FMissionStatusTracker Status; // 0x490(0x08)
	struct AShooterPlayerState* ShooterPlayerOwner; // 0x498(0x08)
	bool bInitializedObjectives; // 0x4a0(0x01)
	char pad_4A1[0x17]; // 0x4a1(0x17)
	bool bAutoShowMissionUIWhenAssigned; // 0x4b8(0x01)
	char pad_4B9[0x7]; // 0x4b9(0x07)
};

// Class ShooterGame.MissionGameStateComponent
// Size: 0x1c8 (Inherited: 0x170)
struct UMissionGameStateComponent : UBaseGameStateComponent {
	struct FMulticastInlineDelegate OnMissionActivated; // 0x170(0x10)
	struct FMulticastInlineDelegate OnMissionCompleted; // 0x180(0x10)
	struct FMulticastInlineDelegate OnMissionFailed; // 0x190(0x10)
	struct UBaseGameStateComponent* NextGameStateOnComplete; // 0x1a0(0x08)
	struct UBaseGameStateComponent* NextGameStateOnFailure; // 0x1a8(0x08)
	struct AMission* MissionClass; // 0x1b0(0x08)
	struct AMission* Mission; // 0x1b8(0x08)
	bool bAutoAssignMission; // 0x1c0(0x01)
	char pad_1C1[0x7]; // 0x1c1(0x07)
};

// Class ShooterGame.MissionManagerComponent
// Size: 0x1a8 (Inherited: 0xe8)
struct UMissionManagerComponent : UActorComponent {
	struct FMulticastInlineDelegate OnActiveMissionChanged; // 0xe8(0x10)
	char pad_F8[0x40]; // 0xf8(0x40)
	struct AMission* ActiveMission; // 0x138(0x08)
	struct TArray<struct AMission*> Missions; // 0x140(0x10)
	bool bMissionsCanGrantXP; // 0x150(0x01)
	char pad_151[0x7]; // 0x151(0x07)
	struct TMap<struct TSoftClassPtr<UObject>, struct FMegapacketMission> MegapacketMissionMap; // 0x158(0x50)
};

// Class ShooterGame.MissionSettingsScreen
// Size: 0x2e0 (Inherited: 0x2c8)
struct UMissionSettingsScreen : UUserWidget {
	struct UMissionSettingsScreenCoordinator* MissionSettingsScreenCoordinator; // 0x2c8(0x08)
	struct FMulticastInlineDelegate OnScreenVisbilityChanged; // 0x2d0(0x10)
};

// Class ShooterGame.MissionSettingsScreenCoordinator
// Size: 0x50 (Inherited: 0x30)
struct UMissionSettingsScreenCoordinator : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct UMenuStackManager* MenuStackManager; // 0x38(0x08)
	struct UMissionSettingsScreen* MissionSettingsScreen; // 0x40(0x08)
	struct AGameStateBase* GameState; // 0x48(0x08)
};

// Class ShooterGame.MMRManager
// Size: 0x388 (Inherited: 0x80)
struct UMMRManager : UInitSystem {
	struct FMulticastInlineDelegate OnPlayerUpdated; // 0x80(0x10)
	char pad_90[0xe8]; // 0x90(0xe8)
	struct UConfigManager* ConfigManager; // 0x178(0x08)
	struct URMSManager* RMSManager; // 0x180(0x08)
	struct URSOManager* RSOManager; // 0x188(0x08)
	struct UContentIndex* ContentIndex; // 0x190(0x08)
	struct UContentManager* ContentManager; // 0x198(0x08)
	struct UMMRService* MMRService; // 0x1a0(0x08)
	char pad_1A8[0x8]; // 0x1a8(0x08)
	struct UPlayerAffinityManager* PlayerAffinityManager; // 0x1b0(0x08)
	char pad_1B8[0x1d0]; // 0x1b8(0x1d0)
};

// Class ShooterGame.MMRService
// Size: 0x38 (Inherited: 0x30)
struct UMMRService : UObject {
	struct UConfigManager* ConfigManager; // 0x30(0x08)
};

// Class ShooterGame.MobileBlueprintFunctionLibrary
// Size: 0x30 (Inherited: 0x30)
struct UMobileBlueprintFunctionLibrary : UBlueprintFunctionLibrary {
};

// Class ShooterGame.MobileDeviceTelemetryComponent
// Size: 0x150 (Inherited: 0xe8)
struct UMobileDeviceTelemetryComponent : UActorComponent {
	char pad_E8[0x68]; // 0xe8(0x68)
};

// Class ShooterGame.MobileOverlayViewController
// Size: 0x70 (Inherited: 0x30)
struct UMobileOverlayViewController : UObject {
	struct FMulticastInlineDelegate OnCurrentOverlayMenuChanged; // 0x30(0x10)
	struct FMulticastInlineDelegate OnTextChatPanelRequested; // 0x40(0x10)
	struct FMulticastInlineDelegate OnSocialPanelRequested; // 0x50(0x10)
	struct UTextChatPanelViewController* TextChatPanelViewController; // 0x60(0x08)
	char pad_68[0x8]; // 0x68(0x08)
};

// Class ShooterGame.MockRewinder
// Size: 0x48 (Inherited: 0x30)
struct UMockRewinder : UObject {
	char pad_30[0x18]; // 0x30(0x18)
};

// Class ShooterGame.ModalManager
// Size: 0x58 (Inherited: 0x30)
struct UModalManager : UObject {
	struct FMulticastInlineDelegate OnNotificationDequeued; // 0x30(0x10)
	struct UQueuedNotification* CurrentNotification; // 0x40(0x08)
	struct TArray<struct UQueuedNotification*> InternalQueue; // 0x48(0x10)
};

// Class ShooterGame.ModeComponent
// Size: 0x118 (Inherited: 0xe8)
struct UModeComponent : UActorComponent {
	struct FMulticastInlineDelegate OnModeChanged; // 0xe8(0x10)
	struct FModeVariables AuthModeVariables; // 0xf8(0x08)
	struct FModeVariables ClientPredictedModeVariables; // 0x100(0x08)
	struct UValueDisagreementTimer* ClientPredictedValueDisagreementTimerClassOverride; // 0x108(0x08)
	struct UValueDisagreementTimer* ClientPredictedValueDisagreementTimer; // 0x110(0x08)
};

// Class ShooterGame.ModeGameDataEventSubscriptions
// Size: 0x38 (Inherited: 0x30)
struct UModeGameDataEventSubscriptions : UObject {
	struct UGameDataEventForwarder* GameDataEventForwarder; // 0x30(0x08)
};

// Class ShooterGame.ModifiedListModelBase
// Size: 0x78 (Inherited: 0x58)
struct UModifiedListModelBase : UWrapperListModel {
	struct TArray<struct FWildcard> ModifiedListItemDataCache; // 0x58(0x10)
	struct TArray<bool> DirtyFlags; // 0x68(0x10)
};

// Class ShooterGame.ModifiedListModel
// Size: 0x88 (Inherited: 0x78)
struct UModifiedListModel : UModifiedListModelBase {
	char pad_78[0x10]; // 0x78(0x10)
};

// Class ShooterGame.MoneyManagementComponent
// Size: 0x120 (Inherited: 0xe8)
struct UMoneyManagementComponent : UActorComponent {
	int32_t EnergyCostInMoney; // 0xe8(0x04)
	char pad_EC[0x4]; // 0xec(0x04)
	struct FMulticastInlineDelegate OnMoneyUpdated; // 0xf0(0x10)
	int32_t Money; // 0x100(0x04)
	int32_t TotalMoneyGranted; // 0x104(0x04)
	int32_t MoneyGainedSinceLastRound; // 0x108(0x04)
	int32_t MoneyOverMaxSinceLastRound; // 0x10c(0x04)
	int32_t Energy; // 0x110(0x04)
	int32_t TotalEnergyGranted; // 0x114(0x04)
	int32_t NumRefundableEnergy; // 0x118(0x04)
	int32_t Experience; // 0x11c(0x04)
};

// Class ShooterGame.MovementTimeShiftMonitor
// Size: 0x128 (Inherited: 0x30)
struct UMovementTimeShiftMonitor : UObject {
	char pad_30[0xf8]; // 0x30(0xf8)
};

// Class ShooterGame.MultiItemSlot
// Size: 0x60 (Inherited: 0x48)
struct UMultiItemSlot : UItemSlot {
	int32_t Capacity; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct TArray<struct AAresItem*> MultiContents; // 0x50(0x10)
};

// Class ShooterGame.MultiTransitionStateComponent
// Size: 0x400 (Inherited: 0x3a0)
struct UMultiTransitionStateComponent : UTimedStateComponent {
	struct TArray<struct FScriptStateEffectInfo> DefaultEffects; // 0x3a0(0x10)
	struct TMap<enum class EAresItemSlot, struct FScriptStateEffectInfoArray> TransitionEffectsMap; // 0x3b0(0x50)
};

// Class ShooterGame.MutableEntryTileView
// Size: 0x8e8 (Inherited: 0x3c8)
struct UMutableEntryTileView : UTileView {
	struct FScrollBarStyle WidgetBarStyle; // 0x3c8(0x518)
	float ScrollbarThickness; // 0x8e0(0x04)
	char pad_8E4[0x4]; // 0x8e4(0x04)
};

// Class ShooterGame.MutedPatternsManager
// Size: 0x2a8 (Inherited: 0x80)
struct UMutedPatternsManager : UInitSystem {
	struct FMulticastInlineDelegate OnMutedPatternsDictionaryUpdated; // 0x80(0x10)
	struct FMulticastInlineDelegate OnFeatureToggleChanged; // 0x90(0x10)
	char pad_A0[0x180]; // 0xa0(0x180)
	struct UAresSettingsManager* AresSettingsManager; // 0x220(0x08)
	struct TScriptInterface<IAresStringListSettingModel> StringListModel; // 0x228(0x10)
	struct UConfigManager* ConfigManager; // 0x238(0x08)
	char pad_240[0x48]; // 0x240(0x48)
	struct URSOManager* RSOManager; // 0x288(0x08)
	struct UPlayerAffinityManager* PlayerAffinityManager; // 0x290(0x08)
	struct UTelemetryManager* TelemetryManager; // 0x298(0x08)
	struct UPlayerSettingsTelemetry* PlayerSettingsTelemetry; // 0x2a0(0x08)
};

// Class ShooterGame.NativePlatformFriendsManager
// Size: 0x1a8 (Inherited: 0x80)
struct UNativePlatformFriendsManager : UInitSystem {
	struct FMulticastInlineDelegate OnFriendsListChanged; // 0x80(0x10)
	char pad_90[0x58]; // 0x90(0x58)
	struct TMap<struct FString, struct TWeakObjectPtr<struct UPlatformPlayer>> PlayerCache; // 0xe8(0x50)
	struct TArray<struct USocialPlayer*> SortedPlayers; // 0x138(0x10)
	struct TMap<struct FString, struct TWeakObjectPtr<struct UPlatformPlayer>> NativePlayerCache; // 0x148(0x50)
	char pad_198[0x10]; // 0x198(0x10)
};

// Class ShooterGame.NativePlatformSaveSystem
// Size: 0x1b8 (Inherited: 0x30)
struct UNativePlatformSaveSystem : UObject {
	char pad_30[0x188]; // 0x30(0x188)
};

// Class ShooterGame.NavArea_Fly
// Size: 0x50 (Inherited: 0x50)
struct UNavArea_Fly : UNavArea {
};

// Class ShooterGame.NavArea_Jump
// Size: 0x50 (Inherited: 0x50)
struct UNavArea_Jump : UNavArea {
};

// Class ShooterGame.NavAreaMeta_SwitchByTeamRole
// Size: 0xa0 (Inherited: 0x50)
struct UNavAreaMeta_SwitchByTeamRole : UNavAreaMeta {
	struct TMap<enum class EAresTeamRole, struct UNavAreaBase*> NavAreaClassesByTeamRole; // 0x50(0x50)
};

// Class ShooterGame.NavFilter_QuerierClassOverrides
// Size: 0x60 (Inherited: 0x50)
struct UNavFilter_QuerierClassOverrides : UNavigationQueryFilter {
	struct TArray<struct FNavQuerierClassOverride> QuerierClassOverrides; // 0x50(0x10)
};

// Class ShooterGame.NavFilterMeta_SwitchByTeamRole
// Size: 0xa0 (Inherited: 0x50)
struct UNavFilterMeta_SwitchByTeamRole : UNavigationQueryFilter {
	struct TMap<enum class EAresTeamRole, struct UNavigationQueryFilter*> NavFilterClassesByTeamRole; // 0x50(0x50)
};

// Class ShooterGame.NavLinkDropOff
// Size: 0x400 (Inherited: 0x3d0)
struct ANavLinkDropOff : AActor {
	char pad_3D0[0x10]; // 0x3d0(0x10)
	float DropOffDistance; // 0x3e0(0x04)
	float MaxDropOff; // 0x3e4(0x04)
	float MaxJumpHeight; // 0x3e8(0x04)
	char pad_3EC[0x14]; // 0x3ec(0x14)
};

// Class ShooterGame.NavLinkDropOffGenerator
// Size: 0x428 (Inherited: 0x3d0)
struct ANavLinkDropOffGenerator : AActor {
	char pad_3D0[0x10]; // 0x3d0(0x10)
	float DropOffSeparation; // 0x3e0(0x04)
	float DropOffDistance; // 0x3e4(0x04)
	float MaxStepUpHeight; // 0x3e8(0x04)
	float MinStepDownHeight; // 0x3ec(0x04)
	float MaxDropOff; // 0x3f0(0x04)
	float MaxJumpHeight; // 0x3f4(0x04)
	float BaseLift; // 0x3f8(0x04)
	float BaseBackOff; // 0x3fc(0x04)
	struct FName IgnoreObjectsWithTag; // 0x400(0x0c)
	char pad_40C[0x4]; // 0x40c(0x04)
	struct TArray<struct FNavigationLink> PointLinks; // 0x410(0x10)
	char pad_420[0x8]; // 0x420(0x08)
};

// Class ShooterGame.NavLinkDropOffIgnoreVolumeBase
// Size: 0x3d8 (Inherited: 0x3d0)
struct ANavLinkDropOffIgnoreVolumeBase : AActor {
	struct UBoxComponent* IgnoreVolume; // 0x3d0(0x08)
};

// Class ShooterGame.NavPointComponent
// Size: 0x6d0 (Inherited: 0x6b0)
struct UNavPointComponent : UWidgetComponent {
	struct FVector2D SceneScale; // 0x6b0(0x08)
	float MinOnScreenSize; // 0x6b8(0x04)
	float MaxOnScreenSize; // 0x6bc(0x04)
	struct AShooterCharacter* OwningCharacter; // 0x6c0(0x08)
	struct AAresPlayerController* LocalPC; // 0x6c8(0x08)
};

// Class ShooterGame.NavPointWidget
// Size: 0x2d8 (Inherited: 0x2c8)
struct UNavPointWidget : UUserWidget {
	struct AShooterCharacter* OwningCharacter; // 0x2c8(0x08)
	float LowHealthThreshold; // 0x2d0(0x04)
	bool bIsLowHealth; // 0x2d4(0x01)
	bool bIsUltimateReady; // 0x2d5(0x01)
	char pad_2D6[0x2]; // 0x2d6(0x02)
};

// Class ShooterGame.NetworkedRandomNumberGeneratorComponent
// Size: 0x118 (Inherited: 0xe8)
struct UNetworkedRandomNumberGeneratorComponent : UActorComponent {
	char pad_E8[0x18]; // 0xe8(0x18)
	int32_t AuthInitialRandomSeed; // 0x100(0x04)
	int32_t AuthCurrentRandomSeed; // 0x104(0x04)
	struct UValueDisagreementTimer* ClientPredictedValueDisagreementTimerClassOverride; // 0x108(0x08)
	struct UValueDisagreementTimer* ClientPredictedValueDisagreementTimer; // 0x110(0x08)
};

// Class ShooterGame.NetworkStreamableInterface
// Size: 0x30 (Inherited: 0x30)
struct UNetworkStreamableInterface : UInterface {
};

// Class ShooterGame.NetworkStreamComponent
// Size: 0x108 (Inherited: 0xe8)
struct UNetworkStreamComponent : UActorComponent {
	char pad_E8[0x8]; // 0xe8(0x08)
	bool bIsProcessingStreamData; // 0xf0(0x01)
	char pad_F1[0x7]; // 0xf1(0x07)
	struct AShooterCharacter* ShooterCharacterOwner; // 0xf8(0x08)
	float LastCaptureTime; // 0x100(0x04)
	char pad_104[0x4]; // 0x104(0x04)
};

// Class ShooterGame.NeutralTeamComponent
// Size: 0xf8 (Inherited: 0xf8)
struct UNeutralTeamComponent : UBaseTeamComponent {
};

// Class ShooterGame.NotificationManager
// Size: 0x50 (Inherited: 0x30)
struct UNotificationManager : UObject {
	struct UNotificationsModel* NotificationsModel; // 0x30(0x08)
	struct FMulticastInlineDelegate OnNotificationRequeued; // 0x38(0x10)
	struct UThreadedChatManager* ThreadedChatManager; // 0x48(0x08)
};

// Class ShooterGame.NotificationsModel
// Size: 0x60 (Inherited: 0x30)
struct UNotificationsModel : UObject {
	struct FMulticastInlineDelegate OnNotificationAdded; // 0x30(0x10)
	struct FMulticastInlineDelegate OnNotificationRemoved; // 0x40(0x10)
	struct TArray<struct UNotification*> Notifications; // 0x50(0x10)
};

// Class ShooterGame.NotificationsViewModel
// Size: 0x78 (Inherited: 0x30)
struct UNotificationsViewModel : UObject {
	struct FMulticastInlineDelegate OnNotificationAdded; // 0x30(0x10)
	struct FMulticastInlineDelegate OnNotificationRemoved; // 0x40(0x10)
	struct UNotificationsModel* NotificationsModel; // 0x50(0x08)
	struct TArray<struct UNotification*> ToastViewQueue; // 0x58(0x10)
	struct TArray<struct UNotification*> DisplayedToasts; // 0x68(0x10)
};

// Class ShooterGame.NPELoader
// Size: 0x90 (Inherited: 0x80)
struct UNPELoader : UInitSystem {
	struct UMMRManager* MMRManager; // 0x80(0x08)
	struct UGameFlowPredictionManager* GameFlowPredictionManager; // 0x88(0x08)
};

// Class ShooterGame.NumericProgressModel
// Size: 0x30 (Inherited: 0x30)
struct UNumericProgressModel : UInterface {
};

// Class ShooterGame.ObjectiveComponent
// Size: 0x170 (Inherited: 0xe8)
struct UObjectiveComponent : UActorComponent {
	struct FMulticastInlineDelegate OnObjectiveReset; // 0xe8(0x10)
	struct FMulticastInlineDelegate OnObjectiveStatusOrProgressChanged; // 0xf8(0x10)
	struct FMulticastInlineDelegate OnObjectiveActivated; // 0x108(0x10)
	struct FMulticastInlineDelegate OnObjectiveCompleted; // 0x118(0x10)
	struct FMulticastInlineDelegate OnObjectiveFailed; // 0x128(0x10)
	char SortIndex; // 0x138(0x01)
	enum class EObjectiveType ObjectiveType; // 0x139(0x01)
	char pad_13A[0x2]; // 0x13a(0x02)
	int32_t ProgressToComplete; // 0x13c(0x04)
	struct FText DefaultDescription; // 0x140(0x18)
	char PlatformVisibility; // 0x158(0x01)
	char pad_159[0x3]; // 0x159(0x03)
	struct FObjectiveStatusTracker Status; // 0x15c(0x08)
	int32_t Progress; // 0x164(0x04)
	struct AMission* Mission; // 0x168(0x08)
};

// Class ShooterGame.ObjectWithWorldContext
// Size: 0x38 (Inherited: 0x30)
struct UObjectWithWorldContext : UObject {
	struct UWorld* World; // 0x30(0x08)
};

// Class ShooterGame.ObservableArrayWrapperListModel
// Size: 0x98 (Inherited: 0x48)
struct UObservableArrayWrapperListModel : UOrderedListModelBase {
	struct UObject* BackingArrayOwner; // 0x48(0x08)
	char pad_50[0x48]; // 0x50(0x48)
};

// Class ShooterGame.UnorderedMapModelBase
// Size: 0x48 (Inherited: 0x30)
struct UUnorderedMapModelBase : UObject {
	char pad_30[0x18]; // 0x30(0x18)
};

// Class ShooterGame.ObservableMapWrapperModel
// Size: 0x88 (Inherited: 0x48)
struct UObservableMapWrapperModel : UUnorderedMapModelBase {
	struct UObject* BackingMapOwner; // 0x48(0x08)
	char pad_50[0x38]; // 0x50(0x38)
};

// Class ShooterGame.ObserverGameDataEventSubscriptions
// Size: 0x38 (Inherited: 0x30)
struct UObserverGameDataEventSubscriptions : UObject {
	struct UGameDataEventForwarder* GameDataEventForwarder; // 0x30(0x08)
};

// Class ShooterGame.ObserverPawn
// Size: 0x480 (Inherited: 0x458)
struct AObserverPawn : ASpectatorPawn {
	struct UCalloutRegionTrackingComponent* CalloutRegionTrackingComponent; // 0x458(0x08)
	struct UGamepadTuningDataAsset* GamepadTuningData; // 0x460(0x08)
	float WalkSpeedMultiplier; // 0x468(0x04)
	float RunSpeedMultiplier; // 0x46c(0x04)
	char pad_470[0x10]; // 0x470(0x10)
};

// Class ShooterGame.ObserverPawnMovement
// Size: 0x208 (Inherited: 0x198)
struct UObserverPawnMovement : USpectatorPawnMovement {
	char pad_198[0x70]; // 0x198(0x70)
};

// Class ShooterGame.ObserverPlayerController
// Size: 0xa30 (Inherited: 0x988)
struct AObserverPlayerController : AAresPlayerController {
	struct UFreeCamComponent* FreeCamComponent; // 0x988(0x08)
	struct UProjectileFollowComponent* ProjectileFollowComponent; // 0x990(0x08)
	struct FMulticastInlineDelegate OnOutlinesChanged; // 0x998(0x10)
	bool bUseBroadcastHud; // 0x9a8(0x01)
	char pad_9A9[0x7]; // 0x9a9(0x07)
	struct TMap<struct TSoftClassPtr<UObject>, struct TSoftClassPtr<UObject>> BroadcastHudOverrides; // 0x9b0(0x50)
	struct UActorVisualizationComponent* SightLinesComponent; // 0xa00(0x08)
	struct UObserverViewOptionsComponent* ClientPredictedObserverViewOptionsComponent; // 0xa08(0x08)
	char pad_A10[0x20]; // 0xa10(0x20)
};

// Class ShooterGame.ObserverPlayerState
// Size: 0x6d8 (Inherited: 0x670)
struct AObserverPlayerState : AAresPlayerStateBase {
	struct FMulticastInlineDelegate OnFollowTargetChanged; // 0x670(0x10)
	char pad_680[0x10]; // 0x680(0x10)
	struct TArray<struct FObfuscatedPlayerInformation> AllPlayersObfuscatedPlayerInformation; // 0x690(0x10)
	struct FTimerHandle UpdateObfuscatedPlayerInformationRetryHandle; // 0x6a0(0x08)
	struct TArray<struct AObserverPlayerState*> ViewTargetFollowers; // 0x6a8(0x10)
	struct AObserverPlayerState* FollowTarget; // 0x6b8(0x08)
	char pad_6C0[0x8]; // 0x6c0(0x08)
	struct UObserverViewOptionsComponent* ReplicatedObserverViewOptionsComponent; // 0x6c8(0x08)
	char pad_6D0[0x8]; // 0x6d0(0x08)
};

// Class ShooterGame.ObserverTeamComponent
// Size: 0x100 (Inherited: 0xf8)
struct UObserverTeamComponent : UBaseTeamComponent {
	bool bIsModerator; // 0xf8(0x01)
	char pad_F9[0x7]; // 0xf9(0x07)
};

// Class ShooterGame.ObserverViewOptionsComponent
// Size: 0x108 (Inherited: 0xe8)
struct UObserverViewOptionsComponent : UActorComponent {
	char pad_E8[0x18]; // 0xe8(0x18)
	struct FObserverViewOptionsNetworkedData ObserverViewOptionsNetworkedData; // 0x100(0x04)
	char pad_104[0x4]; // 0x104(0x04)
};

// Class ShooterGame.OcclusionPathComponent
// Size: 0x208 (Inherited: 0xe8)
struct UOcclusionPathComponent : UActorComponent {
	struct FRuntimeFloatCurve DistanceToOcclusionCurve; // 0xe8(0x88)
	struct TArray<struct FRoomInfo> Rooms; // 0x170(0x10)
	struct TArray<struct FPortalInfo> Portals; // 0x180(0x10)
	char pad_190[0x78]; // 0x190(0x78)
};

// Class ShooterGame.OnGroundEquippableSearchComponent
// Size: 0x130 (Inherited: 0xe8)
struct UOnGroundEquippableSearchComponent : UActorComponent {
	float OnGroundEquippableSearchRadius; // 0xe8(0x04)
	char pad_EC[0x4]; // 0xec(0x04)
	struct FMulticastInlineDelegate OnGroundEquippablesUpdated; // 0xf0(0x10)
	struct FVector TeamOnGroundSearchCenter; // 0x100(0x0c)
	char pad_10C[0x4]; // 0x10c(0x04)
	struct TArray<struct AAresOnGroundEquippable*> TeamOnGroundEquippables; // 0x110(0x10)
	struct FName TeamNameToSearch; // 0x120(0x0c)
	char pad_12C[0x4]; // 0x12c(0x04)
};

// Class ShooterGame.OnlineIdentityManager
// Size: 0x50 (Inherited: 0x30)
struct UOnlineIdentityManager : UObject {
	struct URSOManager* RSOManager; // 0x30(0x08)
	char pad_38[0x18]; // 0x38(0x18)
};

// Class ShooterGame.OptionsScreen
// Size: 0x2c8 (Inherited: 0x2c8)
struct UOptionsScreen : UUserWidget {
};

// Class ShooterGame.OptionsScreenCoordinator
// Size: 0x88 (Inherited: 0x30)
struct UOptionsScreenCoordinator : UObject {
	char pad_30[0x38]; // 0x30(0x38)
	struct UShooterUICoordinator* ShooterUICoordinator; // 0x68(0x08)
	struct AAresPlayerController* PlayerController; // 0x70(0x08)
	struct UMenuStackManager* MenuStackManager; // 0x78(0x08)
	struct UMenuStackEntry* OptionsMenuStackEntry; // 0x80(0x08)
};

// Class ShooterGame.OrderedListModel
// Size: 0x30 (Inherited: 0x30)
struct UOrderedListModel : UInterface {
};

// Class ShooterGame.OrderedListModelBlueprintLibrary
// Size: 0x30 (Inherited: 0x30)
struct UOrderedListModelBlueprintLibrary : UBlueprintFunctionLibrary {
};

// Class ShooterGame.ParallelAnimationConductorNode
// Size: 0xe0 (Inherited: 0xa8)
struct UParallelAnimationConductorNode : UAnimationConductorNodeBase {
	struct FAnimationConductorNodeSignalCondition ItemTerminationCondition; // 0xa8(0x14)
	char pad_BC[0x4]; // 0xbc(0x04)
	struct TArray<struct FParallelAnimationConductorNode_InternalChildData> ChildList; // 0xc0(0x10)
	char pad_D0[0x10]; // 0xd0(0x10)
};

// Class ShooterGame.PartyNotificationNameRequest
// Size: 0x50 (Inherited: 0x30)
struct UPartyNotificationNameRequest : UObject {
	struct UPlatformPlayer* Player; // 0x30(0x08)
	struct UThreadedChatManager* ThreadedChatManager; // 0x38(0x08)
	char pad_40[0x10]; // 0x40(0x10)
};

// Class ShooterGame.PartyChatManager
// Size: 0x60 (Inherited: 0x30)
struct UPartyChatManager : UObject {
	struct UPartyModel* PartyModel; // 0x30(0x08)
	struct UThreadedChatManager* ThreadedChatManager; // 0x38(0x08)
	struct FString LastPartyIDOnAdd; // 0x40(0x10)
	struct TArray<struct UPartyNotificationNameRequest*> CurrentRequests; // 0x50(0x10)
};

// Class ShooterGame.PartyManager
// Size: 0x520 (Inherited: 0x80)
struct UPartyManager : UInitSystem {
	struct FMulticastInlineDelegate OnInviteActionSucceeded; // 0x80(0x10)
	struct FMulticastInlineDelegate OnQueueConfigUpdated; // 0x90(0x10)
	struct FMulticastInlineDelegate OnSendInviteFailed; // 0xa0(0x10)
	struct FMulticastInlineDelegate OnSendInviteSucceeded; // 0xb0(0x10)
	struct FMulticastInlineDelegate OnCurrentPartyUpdated; // 0xc0(0x10)
	struct FMulticastInlineDelegate OnCustomGameConfigsUpdated; // 0xd0(0x10)
	char pad_E0[0x320]; // 0xe0(0x320)
	struct UPartyService* PartyService; // 0x400(0x08)
	struct URSOManager* RSOManager; // 0x408(0x08)
	struct URMSManager* RMSManager; // 0x410(0x08)
	struct UTextChatManagerV2* TextChatManager; // 0x418(0x08)
	struct UConfigManager* ConfigManager; // 0x420(0x08)
	struct UPlatformSessionManager* SessionManager; // 0x428(0x08)
	struct UAresClientEvents* AresClientEvents; // 0x430(0x08)
	struct UPingManager* PingManager; // 0x438(0x08)
	char pad_440[0x10]; // 0x440(0x10)
	struct FCustomGameConfigs CustomGameConfigs; // 0x450(0x90)
	bool bHasInitialCustomGameConfigs; // 0x4e0(0x01)
	char pad_4E1[0x3f]; // 0x4e1(0x3f)
};

// Class ShooterGame.PartyMatchmakingModel
// Size: 0x58 (Inherited: 0x30)
struct UPartyMatchmakingModel : UObject {
	struct FMulticastInlineDelegate OnMaxPartySizeChanged; // 0x30(0x10)
	struct FMulticastInlineDelegate OnPartySizeChanged; // 0x40(0x10)
	int32_t PartySize; // 0x50(0x04)
	int32_t MaxPartySize; // 0x54(0x04)
};

// Class ShooterGame.PartyMessageModel
// Size: 0x88 (Inherited: 0x30)
struct UPartyMessageModel : UObject {
	struct FMulticastInlineDelegate OnMarkedForDeletion; // 0x30(0x10)
	bool bMarkedForDeletion; // 0x40(0x01)
	enum class EPartyMessageStatus LocalStatus; // 0x41(0x01)
	char pad_42[0x6]; // 0x42(0x06)
	struct FString ID; // 0x48(0x10)
	enum class EPartyMessageType MessageType; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
	struct FString PartyID; // 0x60(0x10)
	struct UPlatformPlayer* Sender; // 0x70(0x08)
	struct UPlatformPlayer* Receiver; // 0x78(0x08)
	struct FDateTime CreatedAt; // 0x80(0x08)
};

// Class ShooterGame.PartyErrorNotification
// Size: 0x50 (Inherited: 0x30)
struct UPartyErrorNotification : UObject {
	bool HasBeenSeen; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct TArray<struct UPartyPlayerModel*> ErroredPlayers; // 0x38(0x10)
	enum class EAresPartyErrorNotificationType ErrorNotificationType; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// Class ShooterGame.PartyModel
// Size: 0x670 (Inherited: 0x30)
struct UPartyModel : UObject {
	struct FMulticastInlineDelegate OnIDChanged; // 0x30(0x10)
	struct FMulticastInlineDelegate OnStateChanged; // 0x40(0x10)
	struct FMulticastInlineDelegate OnQueueEntryTimeChanged; // 0x50(0x10)
	struct FMulticastInlineDelegate OnLocalQueueEntryTimeChanged; // 0x60(0x10)
	struct FMulticastInlineDelegate OnAccessibilityChanged; // 0x70(0x10)
	struct FMulticastInlineDelegate OnReceivedInviteAdded; // 0x80(0x10)
	struct FMulticastInlineDelegate OnReceivedInviteRemoved; // 0x90(0x10)
	struct FMulticastInlineDelegate OnSentInviteAdded; // 0xa0(0x10)
	struct FMulticastInlineDelegate OnSentInviteRemoved; // 0xb0(0x10)
	struct FMulticastInlineDelegate OnRequestAdded; // 0xc0(0x10)
	struct FMulticastInlineDelegate OnRequestRemoved; // 0xd0(0x10)
	struct FMulticastInlineDelegate OnMemberAdded; // 0xe0(0x10)
	struct FMulticastInlineDelegate OnMemberRemoved; // 0xf0(0x10)
	struct FMulticastInlineDelegate OnOwnerTransferred; // 0x100(0x10)
	struct FMulticastInlineDelegate OnIsOwnerChanged; // 0x110(0x10)
	struct FMulticastInlineDelegate OnMatchmakingChanged; // 0x120(0x10)
	struct FMulticastInlineDelegate OnIsTournamentChanged; // 0x130(0x10)
	struct FMulticastInlineDelegate OnLeavingMatchmakingChanged; // 0x140(0x10)
	struct FMulticastInlineDelegate OnPartySizeChanged; // 0x150(0x10)
	struct FMulticastInlineDelegate OnMaxPartySizeChanged; // 0x160(0x10)
	struct FMulticastInlineDelegate OnMinPartySizeChanged; // 0x170(0x10)
	struct FMulticastInlineDelegate OnHighSkillPartySizeChanged; // 0x180(0x10)
	struct FMulticastInlineDelegate OnHasInvalidPartySizeChanged; // 0x190(0x10)
	struct FMulticastInlineDelegate OnUseHighSkillPartySizeChanged; // 0x1a0(0x10)
	struct FMulticastInlineDelegate OnQueueIDChanged; // 0x1b0(0x10)
	struct FMulticastInlineDelegate OnChatConnectedChanged; // 0x1c0(0x10)
	struct FMulticastInlineDelegate OnPartySkillDisparityTooHighChanged; // 0x1d0(0x10)
	struct FMulticastInlineDelegate OnIsFullPartyAndBypassSkillRestrictionsChanged; // 0x1e0(0x10)
	struct FMulticastInlineDelegate OnSkillDisparityRRPenaltyChanged; // 0x1f0(0x10)
	struct FMulticastInlineDelegate OnErrorNotificationChanged; // 0x200(0x10)
	struct FMulticastInlineDelegate OnQueueDelayChanged; // 0x210(0x10)
	struct FMulticastInlineDelegate OnQueueRestrictionsChanged; // 0x220(0x10)
	struct FMulticastInlineDelegate OnIsEntirePartyReadyChanged; // 0x230(0x10)
	struct FMulticastInlineDelegate OnEligibleQueuesChanged; // 0x240(0x10)
	struct FMulticastInlineDelegate OnPreferredGamePodsChanged; // 0x250(0x10)
	struct FMulticastInlineDelegate OnSocialXPStateChanged; // 0x260(0x10)
	struct FMulticastInlineDelegate OnTournamentIdChanged; // 0x270(0x10)
	struct FMulticastInlineDelegate OnIsRosterPartyChanged; // 0x280(0x10)
	struct FMulticastInlineDelegate OnTournamentDataChanged; // 0x290(0x10)
	struct FString ID; // 0x2a0(0x10)
	enum class EPartyViewState CurrentState; // 0x2b0(0x01)
	char pad_2B1[0x7]; // 0x2b1(0x07)
	struct FDateTime QueueEntryTime; // 0x2b8(0x08)
	struct FDateTime LocalQueueEntryTime; // 0x2c0(0x08)
	enum class EAresPartyAccessibility Accessibility; // 0x2c8(0x01)
	char pad_2C9[0x7]; // 0x2c9(0x07)
	struct TMap<struct FString, struct UPartyMessageModel*> ReceivedInvites_Backing; // 0x2d0(0x50)
	char pad_320[0x28]; // 0x320(0x28)
	struct TMap<struct FString, struct UPartyMessageModel*> SentInvites; // 0x348(0x50)
	struct TMap<struct FString, struct UPartyMessageModel*> Requests_Backing; // 0x398(0x50)
	char pad_3E8[0x28]; // 0x3e8(0x28)
	struct TMap<struct FString, struct UPartyPlayerModel*> Members_Backing; // 0x410(0x50)
	char pad_460[0x28]; // 0x460(0x28)
	struct TMap<struct FString, struct UPartyPlayerModel*> NonReadyMembers; // 0x488(0x50)
	struct TSet<struct FString> EligibleQueues; // 0x4d8(0x50)
	struct UPartyPlayerModel* Owner; // 0x528(0x08)
	bool bOwner; // 0x530(0x01)
	char pad_531[0x7]; // 0x531(0x07)
	struct UCustomGameModel* CustomGameModel; // 0x538(0x08)
	int32_t MaxPartySize; // 0x540(0x04)
	int32_t MinPartySize; // 0x544(0x04)
	int32_t HighSkillPartySize; // 0x548(0x04)
	bool bUseHighSkillPartySize; // 0x54c(0x01)
	char pad_54D[0x3]; // 0x54d(0x03)
	struct FString QueueID; // 0x550(0x10)
	float SkillDisparityRRPenalty; // 0x560(0x04)
	bool bMatchmaking; // 0x564(0x01)
	bool bIsTournament; // 0x565(0x01)
	bool bIsRosterParty; // 0x566(0x01)
	bool bMatchmadeGame; // 0x567(0x01)
	bool bLeavingMatchmaking; // 0x568(0x01)
	bool bIsChatConnected; // 0x569(0x01)
	bool bIsPartySkillDisparityTooHigh; // 0x56a(0x01)
	bool bIsFullPartyAndBypassSkillRestrictions; // 0x56b(0x01)
	char pad_56C[0x4]; // 0x56c(0x04)
	struct UPartyErrorNotification* ErrorNotification; // 0x570(0x08)
	bool bHasQueueDelay; // 0x578(0x01)
	char pad_579[0x7]; // 0x579(0x07)
	struct TMap<struct FString, struct FQueueIneligiblePlayers> QueueIDToRestrictedPlayers; // 0x580(0x50)
	struct FDateTime QueueDelayFinishedTime; // 0x5d0(0x08)
	bool bIsEntirePartyReady; // 0x5d8(0x01)
	char pad_5D9[0x7]; // 0x5d9(0x07)
	struct TMap<struct FString, bool> PreferredGamePods; // 0x5e0(0x50)
	enum class ESocialXPState SocialXPState; // 0x630(0x01)
	char pad_631[0x7]; // 0x631(0x07)
	struct FString TournamentID; // 0x638(0x10)
	struct FTournamentData TournamentData; // 0x648(0x20)
	bool bHasInvalidPartySize; // 0x668(0x01)
	char pad_669[0x7]; // 0x669(0x07)
};

// Class ShooterGame.AcceptSuccessWrapper
// Size: 0x48 (Inherited: 0x30)
struct UAcceptSuccessWrapper : UObject {
	struct UGenericNotification* Notification; // 0x30(0x08)
	struct UNotificationManager* NotificationManager; // 0x38(0x08)
	struct UPartyNotificationManager* Parent; // 0x40(0x08)
};

// Class ShooterGame.PartyNotificationManager
// Size: 0xa0 (Inherited: 0x30)
struct UPartyNotificationManager : UObject {
	struct UPartyViewController* PartyViewController; // 0x30(0x08)
	struct UPartyModel* PartyModel; // 0x38(0x08)
	struct USocialViewControllerV3* SocialViewController; // 0x40(0x08)
	struct UNotificationManager* NotificationManager; // 0x48(0x08)
	struct TMap<struct FString, struct UAcceptSuccessWrapper*> OutgoingNotifications; // 0x50(0x50)
};

// Class ShooterGame.PartyPlayerModel
// Size: 0x1d8 (Inherited: 0x30)
struct UPartyPlayerModel : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct FMulticastInlineDelegate OnIsOwnerChanged; // 0x38(0x10)
	struct FMulticastInlineDelegate OnIsReadyChanged; // 0x48(0x10)
	struct FMulticastInlineDelegate OnSeasonalInfoChanged; // 0x58(0x10)
	struct FMulticastInlineDelegate OnCompetitiveTierChanged; // 0x68(0x10)
	struct FMulticastInlineDelegate OnQueueEligibleRemainingAccountLevelsChanged; // 0x78(0x10)
	struct FMulticastInlineDelegate OnQueueEligibleRemainingGamesChanged; // 0x88(0x10)
	struct FMulticastInlineDelegate OnQueueEligibleRemainingWinsChanged; // 0x98(0x10)
	struct FMulticastInlineDelegate OnPingsChanged; // 0xa8(0x10)
	struct FMulticastInlineDelegate OnIneligibleToPlayWithSubjectsChanged; // 0xb8(0x10)
	struct FMulticastInlineDelegate OnIsModeratorChanged; // 0xc8(0x10)
	struct FMulticastInlineDelegate OnUsingBroadcastHUDChanged; // 0xd8(0x10)
	int32_t CustomTeamSlotIndex; // 0xe8(0x04)
	char pad_EC[0x4]; // 0xec(0x04)
	struct UPlatformPlayer* PlatformPlayer; // 0xf0(0x08)
	int32_t CompetitiveTier; // 0xf8(0x04)
	char pad_FC[0x6c]; // 0xfc(0x6c)
	int32_t QueueEligibleRemainingAccountLevels; // 0x168(0x04)
	char pad_16C[0x4]; // 0x16c(0x04)
	struct TArray<struct FPingInfo> Pings; // 0x170(0x10)
	struct TSet<struct FString> IneligibleToPlayWithSubjects; // 0x180(0x50)
	bool bOwner; // 0x1d0(0x01)
	bool bReady; // 0x1d1(0x01)
	bool bIsModerator; // 0x1d2(0x01)
	bool bUsingBroadcastHUD; // 0x1d3(0x01)
	char pad_1D4[0x4]; // 0x1d4(0x04)
};

// Class ShooterGame.PartyService
// Size: 0x38 (Inherited: 0x30)
struct UPartyService : UObject {
	struct UConfigManager* ConfigManager; // 0x30(0x08)
};

// Class ShooterGame.PartyViewController
// Size: 0x148 (Inherited: 0x80)
struct UPartyViewController : UInitSystem {
	struct FMulticastInlineDelegate OnSendInviteSuccess; // 0x80(0x10)
	struct FMulticastInlineDelegate OnSendInviteFailure; // 0x90(0x10)
	struct UPartyModel* PartyModel; // 0xa0(0x08)
	struct UPartyManager* PartyManager; // 0xa8(0x08)
	struct UFriendsManager* FriendsManager; // 0xb0(0x08)
	struct UConfigManager* ConfigManager; // 0xb8(0x08)
	struct URSOManager* RSOManager; // 0xc0(0x08)
	struct UCoreGameManager* CoreGameManager; // 0xc8(0x08)
	struct UCustomGameManager* CustomGameManager; // 0xd0(0x08)
	struct UContentManager* ContentManager; // 0xd8(0x08)
	struct UPartyChatManager* PartyChatManager; // 0xe0(0x08)
	struct UMatchmakingManager* MatchmakingManager; // 0xe8(0x08)
	struct UContentIndex* ContentIndex; // 0xf0(0x08)
	struct UChatSessionManager* ChatSessionManager; // 0xf8(0x08)
	struct UGameFlowStateManager* GameFlowStateManager; // 0x100(0x08)
	struct UAresSettingsManager* AresSettingsManager; // 0x108(0x08)
	struct URosterManager* RosterManager; // 0x110(0x08)
	char pad_118[0x18]; // 0x118(0x18)
	struct UGameFeatureTogglesComponent* GameFeatureTogglesComponent; // 0x130(0x08)
	struct UPlatformPlayerManager* PlatformPlayerManager; // 0x138(0x08)
	struct UNotificationManager* NotificationManager; // 0x140(0x08)
};

// Class ShooterGame.PatchAvailabilityManager
// Size: 0xb8 (Inherited: 0x80)
struct UPatchAvailabilityManager : UInitSystem {
	struct FMulticastInlineDelegate OnPatchAvailable; // 0x80(0x10)
	bool bPatchAvailable; // 0x90(0x01)
	bool bInitialized; // 0x91(0x01)
	char pad_92[0x6]; // 0x92(0x06)
	struct UPatchAvailabilityService* PatchAvailabilityService; // 0x98(0x08)
	struct UConfigManager* ConfigManager; // 0xa0(0x08)
	char pad_A8[0x10]; // 0xa8(0x10)
};

// Class ShooterGame.PatchAvailabilityService
// Size: 0x40 (Inherited: 0x30)
struct UPatchAvailabilityService : UObject {
	struct URiotGamesApiClient* RiotGamesApiClient; // 0x30(0x08)
	char pad_38[0x8]; // 0x38(0x08)
};

// Class ShooterGame.PatchManager
// Size: 0x168 (Inherited: 0x80)
struct UPatchManager : UInitSystem {
	char pad_80[0x18]; // 0x80(0x18)
	struct FMulticastInlineDelegate OnPatchPreviewDone; // 0x98(0x10)
	struct UPatchService* PatchService; // 0xa8(0x08)
	struct URiotProductManager* RiotProductManager; // 0xb0(0x08)
	struct URSOManager* RSOManager; // 0xb8(0x08)
	struct URiotClientConfigManager* RiotClientConfigManager; // 0xc0(0x08)
	struct ULocalePreferenceManager* LocalePreferenceManager; // 0xc8(0x08)
	char pad_D0[0x8]; // 0xd0(0x08)
	struct FString PatchUrl; // 0xd8(0x10)
	struct FString PatchState; // 0xe8(0x10)
	float PatchedPercentage; // 0xf8(0x04)
	char pad_FC[0x4]; // 0xfc(0x04)
	struct FString PatchPreviewState; // 0x100(0x10)
	uint64_t PatchPreviewDownloadMB; // 0x110(0x08)
	uint64_t PatchDiskSizeDiff; // 0x118(0x08)
	bool PatchFailed; // 0x120(0x01)
	bool PatchFiles; // 0x121(0x01)
	char pad_122[0x46]; // 0x122(0x46)
};

// Class ShooterGame.PatchNotesManager
// Size: 0xa0 (Inherited: 0x30)
struct UPatchNotesManager : UObject {
	struct FPatchNotes CachedPatchNotes; // 0x30(0x40)
	char pad_70[0x18]; // 0x70(0x18)
	struct UPatchNotesService* PatchNotesService; // 0x88(0x08)
	struct UConfigManager* ConfigManager; // 0x90(0x08)
	struct URSOManager* RSOManager; // 0x98(0x08)
};

// Class ShooterGame.PatchNotesService
// Size: 0x38 (Inherited: 0x30)
struct UPatchNotesService : UObject {
	struct UConfigManager* ConfigManager; // 0x30(0x08)
};

// Class ShooterGame.PatchService
// Size: 0x38 (Inherited: 0x30)
struct UPatchService : UObject {
	struct URiotGamesApiClient* RiotGamesApiClient; // 0x30(0x08)
};

// Class ShooterGame.MobileVirtualCurrencyProduct
// Size: 0x78 (Inherited: 0x30)
struct UMobileVirtualCurrencyProduct : UObject {
	struct FString ProductId; // 0x30(0x10)
	struct FString Title; // 0x40(0x10)
	struct FString Description; // 0x50(0x10)
	int32_t Amount; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct FString FormattedPrice; // 0x68(0x10)
};

// Class ShooterGame.PaymentsManager
// Size: 0xd0 (Inherited: 0x80)
struct UPaymentsManager : UInitSystem {
	struct FMulticastInlineDelegate OnGetPurchaseURLSuccess; // 0x80(0x10)
	struct FMulticastInlineDelegate OnGetPurchaseURLError; // 0x90(0x10)
	struct FMulticastInlineDelegate OnMobileProductsChanged; // 0xa0(0x10)
	struct UPaymentsService* PaymentsService; // 0xb0(0x08)
	struct UConfigManager* ConfigManager; // 0xb8(0x08)
	struct TArray<struct UMobileVirtualCurrencyProduct*> VirtualCurrencyProducts; // 0xc0(0x10)
};

// Class ShooterGame.PaymentsService
// Size: 0x38 (Inherited: 0x30)
struct UPaymentsService : UObject {
	struct URiotGamesApiClient* RiotGamesApiClient; // 0x30(0x08)
};

// Class ShooterGame.ZoomLevelStateComponent
// Size: 0x3d0 (Inherited: 0x368)
struct UZoomLevelStateComponent : URespondToEventStateComponent {
	enum class EZoomStateLevel ZoomLevel; // 0x368(0x01)
	char pad_369[0x7]; // 0x369(0x07)
	struct FMulticastInlineDelegate OnRejectZoomInvalidState; // 0x370(0x10)
	bool bCanInterruptTransitions; // 0x380(0x01)
	char pad_381[0x7]; // 0x381(0x07)
	struct UEquippableStateMachineComponent* PrimaryStateMachine; // 0x388(0x08)
	struct UScriptStateComponent* ZoomDisabledState; // 0x390(0x08)
	struct TArray<struct UFiringStateComponent*> FiringStates; // 0x398(0x10)
	enum class EZoomFiringBehavior FiringBehavior; // 0x3a8(0x01)
	char pad_3A9[0x7]; // 0x3a9(0x07)
	struct UZoomComponent* ZoomComponent; // 0x3b0(0x08)
	struct AShooterCharacter* CurrentOwningCharacter; // 0x3b8(0x08)
	struct TArray<struct FZoomValidStates> ValidStates; // 0x3c0(0x10)
};

// Class ShooterGame.PendingZoomLevelStateComponent
// Size: 0x3d8 (Inherited: 0x3d0)
struct UPendingZoomLevelStateComponent : UZoomLevelStateComponent {
	struct UZoomLevelStateComponent* PendingReturnState; // 0x3d0(0x08)
};

// Class ShooterGame.PersonalizationComponent
// Size: 0x100 (Inherited: 0xe8)
struct UPersonalizationComponent : UActorComponent {
	struct TArray<struct FEquippableMapping> SelectedV2; // 0xe8(0x10)
	struct UContentIndex* ContentIndex; // 0xf8(0x08)
};

// Class ShooterGame.PersonalizationManagerV2
// Size: 0x2b8 (Inherited: 0x80)
struct UPersonalizationManagerV2 : UInitSystem {
	char pad_80[0x128]; // 0x80(0x128)
	struct FPlayerMapping PlayerMapping; // 0x1a8(0x68)
	struct UPersonalizationService* PersonalizationService; // 0x210(0x08)
	struct UConfigManager* ConfigManager; // 0x218(0x08)
	struct URSOManager* RSOManager; // 0x220(0x08)
	struct URMSManager* RMSManager; // 0x228(0x08)
	struct UContentIndex* ContentIndex; // 0x230(0x08)
	struct UContentManager* ContentManager; // 0x238(0x08)
	struct UStoreManager* StoreManager; // 0x240(0x08)
	struct UInventoryManager* InventoryManager; // 0x248(0x08)
	struct UAresClientEvents* AresClientEvents; // 0x250(0x08)
	char pad_258[0x30]; // 0x258(0x30)
	struct FMulticastInlineDelegate OnPlayerCardsEnabledChanged; // 0x288(0x10)
	struct FMulticastInlineDelegate OnPlayerTitlesEnabledChanged; // 0x298(0x10)
	struct FMulticastInlineDelegate OnIncognitoChanged; // 0x2a8(0x10)
};

// Class ShooterGame.PersonalizationService
// Size: 0x38 (Inherited: 0x30)
struct UPersonalizationService : UObject {
	struct UConfigManager* ConfigManager; // 0x30(0x08)
};

// Class ShooterGame.PingRequest
// Size: 0x148 (Inherited: 0x80)
struct UPingRequest : UInitSystem {
	char pad_80[0xb0]; // 0x80(0xb0)
	struct UPingManager* PingManager; // 0x130(0x08)
	char pad_138[0x10]; // 0x138(0x10)
};

// Class ShooterGame.PingService
// Size: 0x38 (Inherited: 0x30)
struct UPingService : UObject {
	struct UConfigManager* ConfigManager; // 0x30(0x08)
};

// Class ShooterGame.PingManager
// Size: 0x1b0 (Inherited: 0x80)
struct UPingManager : UInitSystem {
	char pad_80[0x18]; // 0x80(0x18)
	struct UPlatformSessionManager* SessionManager; // 0x98(0x08)
	struct UPartyManager* PartyManager; // 0xa0(0x08)
	struct UPingService* PingService; // 0xa8(0x08)
	struct UConfigManager* ConfigManager; // 0xb0(0x08)
	struct UObject* Outer; // 0xb8(0x08)
	char pad_C0[0x8]; // 0xc0(0x08)
	struct TMap<struct FString, struct FPingRequestContainer> PingRequestsByEndpointName; // 0xc8(0x50)
	struct TMap<struct FString, struct FPingRequestContainer> InProgressPingRequestsByEndpointName; // 0x118(0x50)
	char pad_168[0x48]; // 0x168(0x48)
};

// Class ShooterGame.PipResourceComponent
// Size: 0x120 (Inherited: 0x118)
struct UPipResourceComponent : UResourceComponent {
	int32_t MaxPips; // 0x118(0x04)
	char pad_11C[0x4]; // 0x11c(0x04)
};

// Class ShooterGame.PlacementTargetingStateComponent
// Size: 0x560 (Inherited: 0x368)
struct UPlacementTargetingStateComponent : URespondToEventStateComponent {
	struct FMulticastInlineDelegate OnValidTargetSelected; // 0x368(0x10)
	struct FMulticastInlineDelegate OnInvalidTargetSelected; // 0x378(0x10)
	float MaxTargetHeightFromFloor; // 0x388(0x04)
	char pad_38C[0x4]; // 0x38c(0x04)
	struct TArray<struct FName> TagsPreventingPlacement; // 0x390(0x10)
	bool bCanPlaceOnGameObjects; // 0x3a0(0x01)
	bool bLimitHeightAbovePlayerFloor; // 0x3a1(0x01)
	char pad_3A2[0x2]; // 0x3a2(0x02)
	float MaxTargetHeightFromPlayerFloor; // 0x3a4(0x04)
	char pad_3A8[0x8]; // 0x3a8(0x08)
	struct FTransform PlacementOffset; // 0x3b0(0x30)
	float PlacementRadius; // 0x3e0(0x04)
	float PlacementWallBuffer; // 0x3e4(0x04)
	bool bPlaceFlat; // 0x3e8(0x01)
	char pad_3E9[0x3]; // 0x3e9(0x03)
	float WallAngle; // 0x3ec(0x04)
	bool bWalkableRequired; // 0x3f0(0x01)
	bool bEncroachCheck; // 0x3f1(0x01)
	enum class EEncroachCheckFailureMode EncroachCheckFailureMode; // 0x3f2(0x01)
	bool bEncroachUsesIgnoredActors; // 0x3f3(0x01)
	float EncroachCheckBuffer; // 0x3f4(0x04)
	float EncroachCheckHalfHeight; // 0x3f8(0x04)
	float EncroachCheckRadius; // 0x3fc(0x04)
	enum class ECollisionChannel EncroachChannel; // 0x400(0x01)
	enum class ENavmeshProjection NavmeshProjection; // 0x401(0x01)
	char pad_402[0x2]; // 0x402(0x02)
	struct FVector NavmeshSearchExtents; // 0x404(0x0c)
	bool bLineOfSightRequired; // 0x410(0x01)
	char pad_411[0x7]; // 0x411(0x07)
	struct TArray<float> LineOfSightTargetOffsets; // 0x418(0x10)
	bool bLedgePlacement; // 0x428(0x01)
	char pad_429[0x3]; // 0x429(0x03)
	float LedgeSearchDistance; // 0x42c(0x04)
	float TargetingRange; // 0x430(0x04)
	float TargetingMaxHeight; // 0x434(0x04)
	bool OthersSeeTargeting; // 0x438(0x01)
	enum class ECollisionChannel TraceChannel; // 0x439(0x01)
	char pad_43A[0x2]; // 0x43a(0x02)
	struct FHitResult LastHitResult; // 0x43c(0x94)
	char pad_4D0[0x30]; // 0x4d0(0x30)
	bool bDrawDebugTargeting; // 0x500(0x01)
	char pad_501[0x1f]; // 0x501(0x1f)
	struct TArray<struct AActor*> ActorsIgnoredForTraces; // 0x520(0x10)
	float FloorTraceAboveNavmeshHeight; // 0x530(0x04)
	float FloorTraceBelowNavmeshHeight; // 0x534(0x04)
	bool bIgnoreShooterCharacters; // 0x538(0x01)
	char pad_539[0x7]; // 0x539(0x07)
	struct TArray<struct AShooterCharacter*> CachedShooterCharacters; // 0x540(0x10)
	char pad_550[0x10]; // 0x550(0x10)
};

// Class ShooterGame.PlatformDelegates
// Size: 0x30 (Inherited: 0x30)
struct UPlatformDelegates : UObject {
};

// Class ShooterGame.PlatformFaultedStateV2
// Size: 0x90 (Inherited: 0x90)
struct UPlatformFaultedStateV2 : UStaticGameFlowState {
};

// Class ShooterGame.PlatformInitializerV2
// Size: 0xa0 (Inherited: 0x30)
struct UPlatformInitializerV2 : UObject {
	char pad_30[0x18]; // 0x30(0x18)
	struct TMap<struct UInitSystem*, struct FPlatformInitializerEntry> Systems; // 0x48(0x50)
	enum class EAresPlatformInitStatus Status; // 0x98(0x01)
	bool bAdvancing; // 0x99(0x01)
	bool bPendingAdvance; // 0x9a(0x01)
	bool bMinimumPlatformInit; // 0x9b(0x01)
	enum class EPlatformInitErrorReason FailureReason; // 0x9c(0x01)
	char pad_9D[0x3]; // 0x9d(0x03)
};

// Class ShooterGame.PlatformInitSettingsManager
// Size: 0x88 (Inherited: 0x80)
struct UPlatformInitSettingsManager : UInitSystem {
	char pad_80[0x8]; // 0x80(0x08)
};

// Class ShooterGame.PlatformMetricsScaler
// Size: 0x170 (Inherited: 0x160)
struct UPlatformMetricsScaler : UPanelWidget {
	char pad_160[0x10]; // 0x160(0x10)
};

// Class ShooterGame.PlatformMetricsScalerSlot
// Size: 0x50 (Inherited: 0x40)
struct UPlatformMetricsScalerSlot : UPanelSlot {
	char pad_40[0x10]; // 0x40(0x10)
};

// Class ShooterGame.PlatformPlayer
// Size: 0x558 (Inherited: 0x30)
struct UPlatformPlayer : UObject {
	struct FMulticastInlineDelegate OnTrueDisplayNameChanged; // 0x30(0x10)
	struct FMulticastInlineDelegate OnAnonymizedDisplayNameChanged; // 0x40(0x10)
	char pad_50[0x10]; // 0x50(0x10)
	struct FMulticastInlineDelegate OnClientVersionChanged; // 0x60(0x10)
	struct FMulticastInlineDelegate OnPresenceStateChanged; // 0x70(0x10)
	struct FMulticastInlineDelegate OnProductChanged; // 0x80(0x10)
	struct FMulticastInlineDelegate OnIsValidAresPresenceChanged; // 0x90(0x10)
	struct FMulticastInlineDelegate OnSessionLoopStateChanged; // 0xa0(0x10)
	struct FMulticastInlineDelegate OnPartyOwnerSessionLoopStateChanged; // 0xb0(0x10)
	struct FMulticastInlineDelegate OnPartyOwnerMatchMapChanged; // 0xc0(0x10)
	struct FMulticastInlineDelegate OnProvisioningFlowChanged; // 0xd0(0x10)
	struct FMulticastInlineDelegate OnPartyOwnerProvisioningFlowChanged; // 0xe0(0x10)
	struct FMulticastInlineDelegate OnPartyOwnerMatchScoreChanged; // 0xf0(0x10)
	struct FMulticastInlineDelegate OnMatchMapChanged; // 0x100(0x10)
	struct FMulticastInlineDelegate OnPartyIDChanged; // 0x110(0x10)
	struct FMulticastInlineDelegate OnIsPartyOwnerChanged; // 0x120(0x10)
	struct FMulticastInlineDelegate OnPartyStateChanged; // 0x130(0x10)
	struct FMulticastInlineDelegate OnPartyAccessibilityChanged; // 0x140(0x10)
	struct FMulticastInlineDelegate OnPartyClientVersionChanged; // 0x150(0x10)
	struct FMulticastInlineDelegate OnIsInvitableChanged; // 0x160(0x10)
	struct FMulticastInlineDelegate OnIsOwnerTransferrableChanged; // 0x170(0x10)
	struct FMulticastInlineDelegate OnIsKickableChanged; // 0x180(0x10)
	struct FMulticastInlineDelegate OnIsInvitedChanged; // 0x190(0x10)
	struct FMulticastInlineDelegate OnIsFriendChanged; // 0x1a0(0x10)
	struct FMulticastInlineDelegate OnMaxPartySizeChanged; // 0x1b0(0x10)
	struct FMulticastInlineDelegate OnPartySizeChanged; // 0x1c0(0x10)
	struct FMulticastInlineDelegate OnQueueIDChanged; // 0x1d0(0x10)
	struct FMulticastInlineDelegate OnQueueEntryTimeChanged; // 0x1e0(0x10)
	struct FMulticastInlineDelegate OnTournamentDataChanged; // 0x1f0(0x10)
	struct FMulticastInlineDelegate OnPlayerCardChanged; // 0x200(0x10)
	struct FMulticastInlineDelegate OnPlayerTitleChanged; // 0x210(0x10)
	struct FMulticastInlineDelegate OnLoyaltyStatusChanged; // 0x220(0x10)
	struct FMulticastInlineDelegate OnActiveSubscriptionsChanged; // 0x230(0x10)
	struct FMulticastInlineDelegate OnSeasonBadgeInfoChanged; // 0x240(0x10)
	struct FMulticastInlineDelegate OnAccountLevelChanged; // 0x250(0x10)
	struct FMulticastInlineDelegate OnLevelBorderChanged; // 0x260(0x10)
	struct FMulticastInlineDelegate OnHideAccountLevelChanged; // 0x270(0x10)
	struct FMulticastInlineDelegate OnCompetitiveTierChanged; // 0x280(0x10)
	struct FMulticastInlineDelegate OnLeaderboardPositionChanged; // 0x290(0x10)
	char pad_2A0[0x1a0]; // 0x2a0(0x1a0)
	bool HideAccountLevel; // 0x440(0x01)
	char pad_441[0x3]; // 0x441(0x03)
	int32_t AccountLevel; // 0x444(0x04)
	int32_t CompetitiveTier; // 0x448(0x04)
	int32_t LeaderboardPosition; // 0x44c(0x04)
	char pad_450[0xf8]; // 0x450(0xf8)
	struct TArray<struct USubscriptionDataAsset*> ActiveSubscriptions; // 0x548(0x10)
};

// Class ShooterGame.PlatformPlayerManager
// Size: 0x150 (Inherited: 0x80)
struct UPlatformPlayerManager : UInitSystem {
	struct UPresenceManager* PresenceManager; // 0x80(0x08)
	struct UDisplayNameManager* DisplayNameManager; // 0x88(0x08)
	struct URSOManager* RSOManager; // 0x90(0x08)
	struct UPartyManager* PartyManager; // 0x98(0x08)
	struct UConfigManager* ConfigManager; // 0xa0(0x08)
	struct UGameFlowStateManager* GameFlowStateManager; // 0xa8(0x08)
	struct UAresSettingsManager* AresSettingsManager; // 0xb0(0x08)
	struct UFriendsModel* FriendsModel; // 0xb8(0x08)
	struct UPartyModel* PartyModel; // 0xc0(0x08)
	struct UContentIndex* ContentIndex; // 0xc8(0x08)
	struct UPersonalizationManagerV2* PersonalizationManager; // 0xd0(0x08)
	struct UAccountXPManager* AccountXPManager; // 0xd8(0x08)
	struct UCoreGameManager* CoreGameManager; // 0xe0(0x08)
	struct UStoreManager* StoreManager; // 0xe8(0x08)
	struct UPregameManager* PregameManager; // 0xf0(0x08)
	struct TMap<struct FString, struct TWeakObjectPtr<struct UPlatformPlayer>> PlayerCache; // 0xf8(0x50)
	bool bShouldUpdatePresences; // 0x148(0x01)
	char pad_149[0x7]; // 0x149(0x07)
};

// Class ShooterGame.PlatformSessionManager
// Size: 0x208 (Inherited: 0x80)
struct UPlatformSessionManager : UInitSystem {
	char pad_80[0x18]; // 0x80(0x18)
	struct FMulticastInlineDelegate OnSessionLoopStateChanged; // 0x98(0x10)
	struct FMulticastInlineDelegate OnPlaytimeNotification; // 0xa8(0x10)
	char pad_B8[0x50]; // 0xb8(0x50)
	struct FSessionDTO Session; // 0x108(0xb8)
	char pad_1C0[0x8]; // 0x1c0(0x08)
	struct USessionService* SessionService; // 0x1c8(0x08)
	struct URSOManager* RSOManager; // 0x1d0(0x08)
	struct URMSManager* RMSManager; // 0x1d8(0x08)
	struct UConfigManager* ConfigManager; // 0x1e0(0x08)
	struct UAresClientEvents* AresClientEvents; // 0x1e8(0x08)
	struct UPlayerAffinityManager* PlayerAffinityManager; // 0x1f0(0x08)
	struct ULoginQueueManager* LoginQueueManager; // 0x1f8(0x08)
	char pad_200[0x8]; // 0x200(0x08)
};

// Class ShooterGame.PlaybackManager
// Size: 0x58 (Inherited: 0x30)
struct UPlaybackManager : UObject {
	char pad_30[0x28]; // 0x30(0x28)
};

// Class ShooterGame.PlayerAffinityManager
// Size: 0x118 (Inherited: 0x80)
struct UPlayerAffinityManager : UInitSystem {
	struct URiotClientConfigManager* RiotClientConfigManager; // 0x80(0x08)
	char pad_88[0x8]; // 0x88(0x08)
	struct UPlayerAffinityService* PlayerAffinityService; // 0x90(0x08)
	struct FString Affinity; // 0x98(0x10)
	struct FPlayerAffinityToken AffinityToken; // 0xa8(0x10)
	struct FString GameShardZoneOverride; // 0xb8(0x10)
	struct FString PlayerAffinityOverride; // 0xc8(0x10)
	bool bIgnorePlayerAffinity; // 0xd8(0x01)
	char pad_D9[0x3f]; // 0xd9(0x3f)
};

// Class ShooterGame.PlayerAffinityService
// Size: 0x38 (Inherited: 0x30)
struct UPlayerAffinityService : UObject {
	struct URiotGamesApiClient* RiotGamesApiClient; // 0x30(0x08)
};

// Class ShooterGame.PlayerAliasManager
// Size: 0x108 (Inherited: 0x80)
struct UPlayerAliasManager : UInitSystem {
	char pad_80[0x18]; // 0x80(0x18)
	struct UPlayerAliasService* PlayerAliasService; // 0x98(0x08)
	struct URSOManager* RSOManager; // 0xa0(0x08)
	char pad_A8[0x60]; // 0xa8(0x60)
};

// Class ShooterGame.PlayerAliasService
// Size: 0x38 (Inherited: 0x30)
struct UPlayerAliasService : UObject {
	struct URiotGamesApiClient* RiotGamesApiClient; // 0x30(0x08)
};

// Class ShooterGame.PlayerCardDataAsset
// Size: 0x1d0 (Inherited: 0x50)
struct UPlayerCardDataAsset : UAresBasePrimaryDataAsset {
	struct TSoftClassPtr<UObject> UIData; // 0x50(0x30)
	struct TSoftClassPtr<UObject> Theme; // 0x80(0x30)
	struct TSoftObjectPtr<UTexture2D> LargeArt; // 0xb0(0x30)
	struct TSoftObjectPtr<UTexture2D> WideArt; // 0xe0(0x30)
	struct TSoftObjectPtr<UTexture2D> SmallArt; // 0x110(0x30)
	struct TSoftObjectPtr<UMaterial> LargeMaterial; // 0x140(0x30)
	struct TSoftObjectPtr<UMaterial> WideMaterial; // 0x170(0x30)
	struct TSoftObjectPtr<UMaterial> SmallMaterial; // 0x1a0(0x30)
};

// Class ShooterGame.PlayerCardUIData
// Size: 0x90 (Inherited: 0x90)
struct UPlayerCardUIData : UBaseContentUIData {
};

// Class ShooterGame.PlayerDiscrepancyDetectionComponent
// Size: 0x118 (Inherited: 0xe8)
struct UPlayerDiscrepancyDetectionComponent : UActorComponent {
	char pad_E8[0x30]; // 0xe8(0x30)
};

// Class ShooterGame.PlayerFacingPerfMetric
// Size: 0xa8 (Inherited: 0x30)
struct UPlayerFacingPerfMetric : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct FMulticastInlineDelegate OnDataUpdated; // 0x38(0x10)
	char pad_48[0x60]; // 0x48(0x60)
};

// Class ShooterGame.PlayerFacingPerfManager
// Size: 0x68 (Inherited: 0x30)
struct UPlayerFacingPerfManager : UObject {
	char pad_30[0x28]; // 0x30(0x28)
	struct TArray<struct UPlayerFacingPerfMetric*> Metrics; // 0x58(0x10)
};

// Class ShooterGame.PlayerFacingPerfGraphWidgetBase
// Size: 0x3b0 (Inherited: 0x2c8)
struct UPlayerFacingPerfGraphWidgetBase : UUserWidget {
	float MaxYAxisTop; // 0x2c8(0x04)
	float MinYAxisTop; // 0x2cc(0x04)
	float MaxYAxisBottom; // 0x2d0(0x04)
	float MinYAxisBottom; // 0x2d4(0x04)
	float YAxisMargin; // 0x2d8(0x04)
	int32_t XAxisZoom; // 0x2dc(0x04)
	struct FLinearColor GraphBackgroundColor; // 0x2e0(0x10)
	struct UFont* Font; // 0x2f0(0x08)
	int32_t FontSize; // 0x2f8(0x04)
	char pad_2FC[0x4]; // 0x2fc(0x04)
	struct FText GraphTitle; // 0x300(0x18)
	enum class EPlayerPerfMetricCategory MetricCategory; // 0x318(0x01)
	char pad_319[0x7]; // 0x319(0x07)
	struct TArray<struct FGraphMetricEntry> GraphMetrics; // 0x320(0x10)
	enum class EGraphDisplayType DisplayType; // 0x330(0x01)
	char pad_331[0x7]; // 0x331(0x07)
	struct UPlayerFacingPerfMetric* Metric; // 0x338(0x08)
	char pad_340[0x70]; // 0x340(0x70)
};

// Class ShooterGame.UISurveyResponse
// Size: 0x38 (Inherited: 0x30)
struct UUISurveyResponse : UObject {
	int32_t questionId; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class ShooterGame.LikertResponse
// Size: 0x40 (Inherited: 0x38)
struct ULikertResponse : UUISurveyResponse {
	int32_t LikertResponse; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class ShooterGame.FreeTextResponse
// Size: 0x48 (Inherited: 0x38)
struct UFreeTextResponse : UUISurveyResponse {
	struct FString ResponseText; // 0x38(0x10)
};

// Class ShooterGame.UISurveyQuestion
// Size: 0x58 (Inherited: 0x30)
struct UUISurveyQuestion : UObject {
	int32_t ID; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct FString Type; // 0x38(0x10)
	struct FString Question; // 0x48(0x10)
};

// Class ShooterGame.SurveyQuestionAndAnswer
// Size: 0x40 (Inherited: 0x30)
struct USurveyQuestionAndAnswer : UObject {
	struct UUISurveyQuestion* Question; // 0x30(0x08)
	struct UUISurveyResponse* Response; // 0x38(0x08)
};

// Class ShooterGame.UIPlayerSurvey
// Size: 0x78 (Inherited: 0x30)
struct UUIPlayerSurvey : UObject {
	bool IsSurveyAvailable; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	int32_t ID; // 0x34(0x04)
	struct FString Title; // 0x38(0x10)
	struct FString Caption; // 0x48(0x10)
	struct FString Type; // 0x58(0x10)
	struct TArray<struct USurveyQuestionAndAnswer*> SurveyData; // 0x68(0x10)
};

// Class ShooterGame.PlayerFeedbackManager
// Size: 0x78 (Inherited: 0x30)
struct UPlayerFeedbackManager : UObject {
	struct FMulticastInlineDelegate FOnSurveyFound; // 0x30(0x10)
	struct FMulticastInlineDelegate FOnSurveyResponseSent; // 0x40(0x10)
	struct UPlayerFeedbackService* PlayerFeedbackService; // 0x50(0x08)
	struct URSOManager* RSOManager; // 0x58(0x08)
	struct UUIPlayerSurvey* CurrentPlayerSurvey; // 0x60(0x08)
	struct TArray<struct UUISurveyResponse*> ResponsesForCurrentSurvey; // 0x68(0x10)
};

// Class ShooterGame.PlayerFeedbackService
// Size: 0x38 (Inherited: 0x30)
struct UPlayerFeedbackService : UObject {
	struct UConfigManager* ConfigManager; // 0x30(0x08)
};

// Class ShooterGame.PlayerFeedbackToolPluginManager
// Size: 0xb0 (Inherited: 0x80)
struct UPlayerFeedbackToolPluginManager : UInitSystem {
	char pad_80[0x20]; // 0x80(0x20)
	struct UConfigManager* ConfigManager; // 0xa0(0x08)
	struct URSOManager* RSOManager; // 0xa8(0x08)
};

// Class ShooterGame.PlayerFeedbackToolViewController
// Size: 0xa0 (Inherited: 0x30)
struct UPlayerFeedbackToolViewController : UObject {
	struct UPlayerFeedbackToolViewModel* ViewModel; // 0x30(0x08)
	bool bFeatureEnabled; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct FMulticastInlineDelegate OnSurveyReceived; // 0x40(0x10)
	bool shouldTriggerNPESurvey; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct URSOManager* RSOManager; // 0x58(0x08)
	struct UConfigManager* ConfigManager; // 0x60(0x08)
	struct UContentManager* ContentManager; // 0x68(0x08)
	struct UPlayerFeedbackToolManager* PlayerFeedbackToolManager; // 0x70(0x08)
	struct UPlayerFeedbackToolPluginManager* PlayerFeedbackToolPluginManager; // 0x78(0x08)
	struct UPlayerAffinityManager* PlayerAffinityManager; // 0x80(0x08)
	struct UMMRManager* MMRManager; // 0x88(0x08)
	char pad_90[0x9]; // 0x90(0x09)
	bool bSurveyLimitReached; // 0x99(0x01)
	char pad_9A[0x6]; // 0x9a(0x06)
};

// Class ShooterGame.PlayerFeedbackToolViewModel
// Size: 0x48 (Inherited: 0x30)
struct UPlayerFeedbackToolViewModel : UObject {
	bool LoginSurveyRequested; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FString SurveyEventType; // 0x38(0x10)
};

// Class ShooterGame.PlayerFeedbackToolWidget
// Size: 0x2f0 (Inherited: 0x2c8)
struct UPlayerFeedbackToolWidget : UUserWidget {
	bool bAnswersSubmitted; // 0x2c8(0x01)
	bool bFeatureEnabled; // 0x2c9(0x01)
	char pad_2CA[0x6]; // 0x2ca(0x06)
	struct FString SurveyEventType; // 0x2d0(0x10)
	struct UPlayerFeedbackToolManager* PlayerFeedbackToolManager; // 0x2e0(0x08)
	struct URSOManager* RSOManager; // 0x2e8(0x08)
};

// Class ShooterGame.PlayerGameDataEventSubscriptions
// Size: 0x48 (Inherited: 0x30)
struct UPlayerGameDataEventSubscriptions : UObject {
	struct UGameDataEventForwarder* GameDataEventForwarder; // 0x30(0x08)
	char pad_38[0x10]; // 0x38(0x10)
};

// Class ShooterGame.PlayerIdentityUpdater
// Size: 0x48 (Inherited: 0x30)
struct UPlayerIdentityUpdater : UObject {
	struct UPartyManager* PartyManager; // 0x30(0x08)
	struct UPersonalizationManagerV2* PersonalizationManager; // 0x38(0x08)
	struct UAccountXPManager* AccountXPManager; // 0x40(0x08)
};

// Class ShooterGame.PlayerListingManager
// Size: 0x100 (Inherited: 0x80)
struct UPlayerListingManager : UInitSystem {
	char pad_80[0x68]; // 0x80(0x68)
	struct UFriendsModel* FriendsModel; // 0xe8(0x08)
	struct UPartyManager* PartyManager; // 0xf0(0x08)
	struct URSOManager* RSOManager; // 0xf8(0x08)
};

// Class ShooterGame.PlayerPurchaseablesComponent
// Size: 0xf8 (Inherited: 0xe8)
struct UPlayerPurchaseablesComponent : UActorComponent {
	char pad_E8[0x8]; // 0xe8(0x08)
	bool bLoadPersistedItems; // 0xf0(0x01)
	bool bPreventWeaponDropOnDeath; // 0xf1(0x01)
	char pad_F2[0x6]; // 0xf2(0x06)
};

// Class ShooterGame.PlayerReportSequence
// Size: 0xb0 (Inherited: 0x30)
struct UPlayerReportSequence : UObject {
	struct FString Offender; // 0x30(0x10)
	struct TArray<enum class EPlayerReportReason> Reasons; // 0x40(0x10)
	enum class EGameFlowStateType Location; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct FString Comment; // 0x58(0x10)
	struct FString MatchID; // 0x68(0x10)
	struct FMulticastInlineDelegate OnSuccess; // 0x78(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x88(0x10)
	struct UPlayerAffinityManager* PlayerAffinityManager; // 0x98(0x08)
	struct UPlayerReportService* ReportService; // 0xa0(0x08)
	struct URestrictionsService* RestrictionsService; // 0xa8(0x08)
};

// Class ShooterGame.PlayerReportManager
// Size: 0x68 (Inherited: 0x30)
struct UPlayerReportManager : UObject {
	char pad_30[0x10]; // 0x30(0x10)
	struct UPlayerAffinityManager* PlayerAffinityManager; // 0x40(0x08)
	struct UPlayerReportSequence* ActiveReportSequence; // 0x48(0x08)
	struct UPlayerReportService* ReportService; // 0x50(0x08)
	struct URestrictionsService* RestrictionsService; // 0x58(0x08)
	struct UGameFlowStateManager* GameFlowStateManager; // 0x60(0x08)
};

// Class ShooterGame.PlayerReportNotificationManager
// Size: 0x38 (Inherited: 0x30)
struct UPlayerReportNotificationManager : UObject {
	struct UNotificationManager* NotificationManager; // 0x30(0x08)
};

// Class ShooterGame.PlayerReportService
// Size: 0x38 (Inherited: 0x30)
struct UPlayerReportService : UObject {
	struct URiotGamesApiClient* RiotGamesApiClient; // 0x30(0x08)
};

// Class ShooterGame.PlayerScoreCombatTrackerComponent
// Size: 0xf0 (Inherited: 0xe8)
struct UPlayerScoreCombatTrackerComponent : UActorComponent {
	char pad_E8[0x8]; // 0xe8(0x08)
};

// Class ShooterGame.PlayerScoreComponent
// Size: 0x110 (Inherited: 0xe8)
struct UPlayerScoreComponent : UActorComponent {
	char pad_E8[0x10]; // 0xe8(0x10)
	int32_t Score; // 0xf8(0x04)
	char pad_FC[0x4]; // 0xfc(0x04)
	struct TArray<struct FPlayerScoreDebugEntry> DebugEntries; // 0x100(0x10)
};

// Class ShooterGame.PlayerSettingsTelemetry
// Size: 0x100 (Inherited: 0x80)
struct UPlayerSettingsTelemetry : UInitSystem {
	struct FMulticastInlineDelegate OnPlayerSettingsChangesCommitted; // 0x80(0x10)
	char pad_90[0x50]; // 0x90(0x50)
	struct UAresSettingsManager* AresSettingsManager; // 0xe0(0x08)
	struct URSOManager* RSOManager; // 0xe8(0x08)
	struct UTelemetrySampler* TelemetrySampler; // 0xf0(0x08)
	struct UTelemetryManager* TelemetryManager; // 0xf8(0x08)
};

// Class ShooterGame.PlayerSprayComponent
// Size: 0x110 (Inherited: 0xe8)
struct UPlayerSprayComponent : UActorComponent {
	struct USprayEquipSlotDataAsset* LastContextSprayed; // 0xe8(0x08)
	int32_t LastRoundSprayed; // 0xf0(0x04)
	char pad_F4[0x4]; // 0xf4(0x04)
	struct TArray<struct AEffectContainer*> ActiveSprays; // 0xf8(0x10)
	bool bInfiniteSprays; // 0x108(0x01)
	char pad_109[0x7]; // 0x109(0x07)
};

// Class ShooterGame.PlayerTimelineDebugComponent
// Size: 0x160 (Inherited: 0xe8)
struct UPlayerTimelineDebugComponent : UActorComponent {
	char pad_E8[0x78]; // 0xe8(0x78)
};

// Class ShooterGame.PlayerTitleUIData
// Size: 0x90 (Inherited: 0x90)
struct UPlayerTitleUIData : UBaseContentUIData {
};

// Class ShooterGame.PlayerTitleDataAsset
// Size: 0xb0 (Inherited: 0x50)
struct UPlayerTitleDataAsset : UAresBasePrimaryDataAsset {
	struct TSoftClassPtr<UObject> UIData; // 0x50(0x30)
	struct FText TitleText; // 0x80(0x18)
	struct FText TitleTextAllCaps; // 0x98(0x18)
};

// Class ShooterGame.PoolingResetInterface
// Size: 0x30 (Inherited: 0x30)
struct UPoolingResetInterface : UInterface {
};

// Class ShooterGame.PostProcessTintBlendable
// Size: 0x38 (Inherited: 0x30)
struct UPostProcessTintBlendable : UObject {
	char pad_30[0x8]; // 0x30(0x08)
};

// Class ShooterGame.PrecalcProjectileCollisionComponent
// Size: 0xf8 (Inherited: 0xe8)
struct UPrecalcProjectileCollisionComponent : UActorComponent {
	struct TArray<struct AActor*> ActorsToIgnore; // 0xe8(0x10)
};

// Class ShooterGame.PrecalculatedProjectileMovementComponent
// Size: 0x308 (Inherited: 0x2d8)
struct UPrecalculatedProjectileMovementComponent : UFiniteSpeedMovementComponent {
	float PrecalculatedMovementTime; // 0x2d8(0x04)
	float PrecalculatedTimestep; // 0x2dc(0x04)
	struct TArray<struct FCalculatedProjectileStep> ProjectilePath; // 0x2e0(0x10)
	struct USyncedTimerComponent* MovementSyncedTimer; // 0x2f0(0x08)
	char pad_2F8[0x10]; // 0x2f8(0x10)
};

// Class ShooterGame.PreconstructedWidgetListModelMediator
// Size: 0xb0 (Inherited: 0x30)
struct UPreconstructedWidgetListModelMediator : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct FMulticastInlineDelegate OnItemActivated; // 0x38(0x10)
	char pad_48[0x8]; // 0x48(0x08)
	struct TArray<struct TScriptInterface<IListItemDisplayEntry>> EntryList; // 0x50(0x10)
	struct TScriptInterface<IOrderedListModel> ListModel; // 0x60(0x10)
	struct FWildcard SharedListItemData; // 0x70(0x40)
};

// Class ShooterGame.PregameCharacterSelectSpawner
// Size: 0x488 (Inherited: 0x3d0)
struct APregameCharacterSelectSpawner : AActor {
	struct AEffectContainer* NoCharacterSelectedFXC; // 0x3d0(0x08)
	struct AEffectContainer* WaitingForLoadFXC; // 0x3d8(0x08)
	struct UPregameViewController* PregameViewController; // 0x3e0(0x08)
	struct UPregameViewModel* PregameViewModel; // 0x3e8(0x08)
	struct UCharacterDataAsset* CurrentCharacter; // 0x3f0(0x08)
	bool bCharacterLockedIn; // 0x3f8(0x01)
	char pad_3F9[0x17]; // 0x3f9(0x17)
	struct FEffectID CurrentEffectID; // 0x410(0x20)
	struct FEffectData EffectData; // 0x430(0x58)
};

// Class ShooterGame.PregamePlayerController
// Size: 0x990 (Inherited: 0x988)
struct APregamePlayerController : AAresPlayerController {
	struct UPregameViewController* PregameViewController; // 0x988(0x08)
};

// Class ShooterGame.PregameCheatManager
// Size: 0x80 (Inherited: 0x80)
struct UPregameCheatManager : UAresCheatManagerBase {
};

// Class ShooterGame.PregameManager
// Size: 0x408 (Inherited: 0x80)
struct UPregameManager : UInitSystem {
	char pad_80[0x48]; // 0x80(0x48)
	bool bWasSessionAndPregameConsistent; // 0xc8(0x01)
	char pad_C9[0xf]; // 0xc9(0x0f)
	struct UPregameService* PregameService; // 0xd8(0x08)
	struct UConfigManager* ConfigManager; // 0xe0(0x08)
	struct URSOManager* RSOManager; // 0xe8(0x08)
	struct URMSManager* RMSManager; // 0xf0(0x08)
	struct UPlayerAffinityManager* PlayerAffinityManager; // 0xf8(0x08)
	struct UTextChatManagerV2* TextChatManager; // 0x100(0x08)
	struct UAresClientEvents* AresClientEvents; // 0x108(0x08)
	struct UPlatformSessionManager* SessionManager; // 0x110(0x08)
	char pad_118[0x2f0]; // 0x118(0x2f0)
};

// Class ShooterGame.PregameParentWidget
// Size: 0x2c8 (Inherited: 0x2c8)
struct UPregameParentWidget : UUserWidget {
};

// Class ShooterGame.PregamePlayerActor
// Size: 0x3d0 (Inherited: 0x3d0)
struct APregamePlayerActor : AActor {
};

// Class ShooterGame.PregameGameMode
// Size: 0x4c0 (Inherited: 0x4c0)
struct APregameGameMode : AGameMode {
};

// Class ShooterGame.PregameService
// Size: 0x38 (Inherited: 0x30)
struct UPregameService : UObject {
	struct UConfigManager* ConfigManager; // 0x30(0x08)
};

// Class ShooterGame.PregameStateV2
// Size: 0xa8 (Inherited: 0x90)
struct UPregameStateV2 : UStaticGameFlowState {
	struct FMulticastInlineDelegate OnMatchCancelled; // 0x90(0x10)
	struct UPregameManager* PregameManager; // 0xa0(0x08)
};

// Class ShooterGame.PregameViewController
// Size: 0x88 (Inherited: 0x30)
struct UPregameViewController : UObject {
	struct UPregameViewModel* ViewModel; // 0x30(0x08)
	struct UPregameViewModel* EditorViewModel; // 0x38(0x08)
	struct UConfigManager* ConfigManager; // 0x40(0x08)
	struct UPregameManager* PregameManager; // 0x48(0x08)
	struct UGameFlowStateManager* GameFlowStateManager; // 0x50(0x08)
	struct UPlatformPlayerManager* PlatformPlayerManager; // 0x58(0x08)
	struct UContentIndex* ContentIndex; // 0x60(0x08)
	struct UPartyManager* PartyManager; // 0x68(0x08)
	struct UCharacterDataAsset* CharacterPrediction; // 0x70(0x08)
	char pad_78[0x10]; // 0x78(0x10)
};

// Class ShooterGame.PregamePlayerModel
// Size: 0xe0 (Inherited: 0x30)
struct UPregamePlayerModel : UObject {
	struct FMulticastInlineDelegate OnTeamIDChanged; // 0x30(0x10)
	struct FMulticastInlineDelegate OnIsLocalPlayerChanged; // 0x40(0x10)
	struct FMulticastInlineDelegate OnCharacterChanged; // 0x50(0x10)
	struct FMulticastInlineDelegate OnCompetitiveTierChanged; // 0x60(0x10)
	struct FMulticastInlineDelegate OnIsCaptainChanged; // 0x70(0x10)
	struct FMulticastInlineDelegate OnLockedInChanged; // 0x80(0x10)
	struct FString Subject; // 0x90(0x10)
	struct FName TeamID; // 0xa0(0x0c)
	char pad_AC[0x4]; // 0xac(0x04)
	struct UPlatformPlayer* PlatformPlayer; // 0xb0(0x08)
	struct FString DisplayName; // 0xb8(0x10)
	int32_t CompetitiveTier; // 0xc8(0x04)
	bool bIsCaptain; // 0xcc(0x01)
	char pad_CD[0x3]; // 0xcd(0x03)
	struct UCharacterDataAsset* Character; // 0xd0(0x08)
	bool bIsLockedIn; // 0xd8(0x01)
	bool bIsLocalPlayer; // 0xd9(0x01)
	char pad_DA[0x6]; // 0xda(0x06)
};

// Class ShooterGame.PregameTeamModel
// Size: 0xb8 (Inherited: 0x30)
struct UPregameTeamModel : UObject {
	struct FMulticastInlineDelegate OnRoleChanged; // 0x30(0x10)
	struct FMulticastInlineDelegate OnPlayerAdded; // 0x40(0x10)
	struct FMulticastInlineDelegate OnPlayerRemoved; // 0x50(0x10)
	struct FMulticastInlineDelegate OnNumPlayersLockedInChanged; // 0x60(0x10)
	struct FMulticastInlineDelegate OnMajorityVoteWinnerChanged; // 0x70(0x10)
	struct FName ID; // 0x80(0x0c)
	struct FName Role; // 0x8c(0x0c)
	struct TArray<struct UPregamePlayerModel*> Players; // 0x98(0x10)
	int32_t NumPlayersLockedIn; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
	struct UCharacterDataAsset* MajorityVoteWinner; // 0xb0(0x08)
};

// Class ShooterGame.PregameViewModel
// Size: 0x4d0 (Inherited: 0x30)
struct UPregameViewModel : UObject {
	struct FMulticastInlineDelegate OnMatchIDChanged; // 0x30(0x10)
	struct FMulticastInlineDelegate OnStateChanged; // 0x40(0x10)
	struct FMulticastInlineDelegate OnTimeRemainingInPhaseChanged; // 0x50(0x10)
	struct FMulticastInlineDelegate OnTimeRemainingInStepChanged; // 0x60(0x10)
	struct FMulticastInlineDelegate OnIsPregameFinishedChanged; // 0x70(0x10)
	struct FMulticastInlineDelegate OnMapChanged; // 0x80(0x10)
	struct FMulticastInlineDelegate OnMapSelectPoolChanged; // 0x90(0x10)
	struct FMulticastInlineDelegate OnBannedMapsChanged; // 0xa0(0x10)
	struct FMulticastInlineDelegate OnCastVotesChanged; // 0xb0(0x10)
	struct FMulticastInlineDelegate OnMapSelectStepsChanged; // 0xc0(0x10)
	struct FMulticastInlineDelegate OnMapSelectStepChanged; // 0xd0(0x10)
	struct FMulticastInlineDelegate OnTeam1Changed; // 0xe0(0x10)
	struct FMulticastInlineDelegate OnGameModeChanged; // 0xf0(0x10)
	struct FMulticastInlineDelegate OnQueueIDChanged; // 0x100(0x10)
	struct FMulticastInlineDelegate OnLocalPlayerChanged; // 0x110(0x10)
	struct FMulticastInlineDelegate OnLocalCharacterChanged; // 0x120(0x10)
	struct FMulticastInlineDelegate OnIsLocalPlayerLockedInChanged; // 0x130(0x10)
	struct FMulticastInlineDelegate OnIsLocalPlayerLockingInChanged; // 0x140(0x10)
	struct FMulticastInlineDelegate OnIsLocalPlayerSpectatorChanged; // 0x150(0x10)
	struct FMulticastInlineDelegate OnIsLocalPlayerCoachChanged; // 0x160(0x10)
	struct FMulticastInlineDelegate OnCoachAdded; // 0x170(0x10)
	struct FMulticastInlineDelegate OnEnemyLockinCountChanged; // 0x180(0x10)
	struct FMulticastInlineDelegate OnEnemyTeamSizeChanged; // 0x190(0x10)
	struct FMulticastInlineDelegate OnTimeElapsedChanged; // 0x1a0(0x10)
	struct FMulticastInlineDelegate OnPregameLockInStateChanged; // 0x1b0(0x10)
	struct FMulticastInlineDelegate OnCharacterStateChanged; // 0x1c0(0x10)
	struct FMulticastInlineDelegate OnShowRankedIconsChanged; // 0x1d0(0x10)
	struct FMulticastInlineDelegate OnInitialized; // 0x1e0(0x10)
	struct FMulticastInlineDelegate OnTournamentMetadataChanged; // 0x1f0(0x10)
	struct FMulticastInlineDelegate OnTournamentRosterMetadataChanged; // 0x200(0x10)
	struct FMulticastInlineDelegate OnPregameDelayedFinalization; // 0x210(0x10)
	bool bInitialized; // 0x220(0x01)
	char pad_221[0x7]; // 0x221(0x07)
	struct UConfigManager* ConfigManager; // 0x228(0x08)
	struct FString MatchID; // 0x230(0x10)
	enum class EPregameMatchState State; // 0x240(0x01)
	char pad_241[0x3]; // 0x241(0x03)
	float TimeRemainingInPhase; // 0x244(0x04)
	struct FDateTime PhaseEndTime; // 0x248(0x08)
	float TimeRemainingInStep; // 0x250(0x04)
	char pad_254[0x4]; // 0x254(0x04)
	struct FDateTime StepEndTime; // 0x258(0x08)
	bool bIsPregameFinished; // 0x260(0x01)
	char pad_261[0x3]; // 0x261(0x03)
	struct TWeakObjectPtr<struct UMapDataAsset> Map; // 0x264(0x08)
	char pad_26C[0x4]; // 0x26c(0x04)
	struct TArray<struct UMapDataAsset*> MapSelectPool; // 0x270(0x10)
	struct TArray<struct UMapDataAsset*> BannedMaps; // 0x280(0x10)
	struct TArray<struct FPregameCastVote> CastedVotes; // 0x290(0x10)
	struct TArray<struct FPregameStep> MapSelectSteps; // 0x2a0(0x10)
	int32_t MapSelectStep; // 0x2b0(0x04)
	char pad_2B4[0x4]; // 0x2b4(0x04)
	struct FString Team1; // 0x2b8(0x10)
	struct UGameModeDataAsset* GameMode; // 0x2c8(0x08)
	struct FString QueueID; // 0x2d0(0x10)
	struct TMap<struct FName, struct UPregameTeamModel*> Teams; // 0x2e0(0x50)
	struct TMap<struct FName, struct UPregamePlayerModel*> Coaches; // 0x330(0x50)
	struct UPregamePlayerModel* LocalPlayer; // 0x380(0x08)
	bool bIsLocalPlayerLockedIn; // 0x388(0x01)
	bool bIsLocalPlayerLockingIn; // 0x389(0x01)
	bool bIsLocalPlayerSpectator; // 0x38a(0x01)
	bool bIsLocalPlayerCoach; // 0x38b(0x01)
	char pad_38C[0x4]; // 0x38c(0x04)
	struct UCharacterDataAsset* LocalCharacter; // 0x390(0x08)
	struct TMap<struct UCharacterDataAsset*, enum class EPregameCharacterState> CharacterStates; // 0x398(0x50)
	int32_t EnemyLockinCount; // 0x3e8(0x04)
	int32_t EnemyTeamSize; // 0x3ec(0x04)
	int32_t TimeElapsed; // 0x3f0(0x04)
	enum class EPregameLockInState LockInState; // 0x3f4(0x01)
	bool bShowRankedIcons; // 0x3f5(0x01)
	bool bAllowDuplicateAgents; // 0x3f6(0x01)
	char pad_3F7[0x1]; // 0x3f7(0x01)
	struct FTournamentMetadata TournamentMetadata; // 0x3f8(0x80)
	struct FTournamentRosterMetadata RosterMetadata; // 0x478(0x50)
	bool bUseDelayedFinalization; // 0x4c8(0x01)
	bool bIsDelayedFinalizationTriggered; // 0x4c9(0x01)
	char pad_4CA[0x6]; // 0x4ca(0x06)
};

// Class ShooterGame.PreloadManager
// Size: 0x638 (Inherited: 0x80)
struct UPreloadManager : UInitSystem {
	char pad_80[0x30]; // 0x80(0x30)
	bool bAssetPreloadEnabled; // 0xb0(0x01)
	char pad_B1[0x4b7]; // 0xb1(0x4b7)
	struct UGameFlowStateManager* GameFlowStateManager; // 0x568(0x08)
	struct UPregameManager* PregameManager; // 0x570(0x08)
	struct UContentIndex* ContentIndex; // 0x578(0x08)
	struct UCoreGameManager* CoreGameManager; // 0x580(0x08)
	struct UTelemetryManager* TelemetryManager; // 0x588(0x08)
	struct UConfigManager* ConfigManager; // 0x590(0x08)
	char pad_598[0xa0]; // 0x598(0xa0)
};

// Class ShooterGame.PremierRosterModel
// Size: 0x40 (Inherited: 0x30)
struct UPremierRosterModel : UObject {
	int64_t LeaguePoints; // 0x30(0x08)
	int32_t Division; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class ShooterGame.PremierManager
// Size: 0x100 (Inherited: 0x30)
struct UPremierManager : UObject {
	char pad_30[0x18]; // 0x30(0x18)
	struct URSOManager* RSOManager; // 0x48(0x08)
	struct URMSManager* RMSManager; // 0x50(0x08)
	struct UPremierService* PremierService; // 0x58(0x08)
	struct TMap<struct FString, struct UPremierRosterModel*> CurrentPremierRosterModels; // 0x60(0x50)
	struct TMap<struct FString, int64_t> CurrentPremierRosterModelVersions; // 0xb0(0x50)
};

// Class ShooterGame.PremierRosterViewController
// Size: 0xf0 (Inherited: 0x80)
struct UPremierRosterViewController : UInitSystem {
	struct FMulticastInlineDelegate OnPremierRosterViewModelUpdated; // 0x80(0x10)
	struct UPremierManager* PremierManager; // 0x90(0x08)
	struct URosterManager* RosterManager; // 0x98(0x08)
	struct TMap<struct FString, struct UPremierRosterViewModel*> PremierRosterViewModels; // 0xa0(0x50)
};

// Class ShooterGame.PremierRosterViewModel
// Size: 0x50 (Inherited: 0x30)
struct UPremierRosterViewModel : UObject {
	struct FString ID; // 0x30(0x10)
	int64_t LeaguePoints; // 0x40(0x08)
	int32_t Division; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// Class ShooterGame.PremierEventScheduleDataAsset
// Size: 0x48 (Inherited: 0x38)
struct UPremierEventScheduleDataAsset : UDataAsset {
	struct TArray<struct FPremierEventDivisionSchedule> SchedulePerDivision; // 0x38(0x10)
};

// Class ShooterGame.PremierEventMapPoolDataAsset
// Size: 0x48 (Inherited: 0x38)
struct UPremierEventMapPoolDataAsset : UDataAsset {
	struct TArray<struct TSoftClassPtr<UObject>> Maps; // 0x38(0x10)
};

// Class ShooterGame.PremierSeasonDataAsset
// Size: 0xc0 (Inherited: 0x50)
struct UPremierSeasonDataAsset : UAresBasePrimaryDataAsset {
	struct TSoftClassPtr<UObject> UIData; // 0x50(0x30)
	struct TSoftClassPtr<UObject> CompetitiveSeason; // 0x80(0x30)
	struct FDateTime StartTimeOverride; // 0xb0(0x08)
	struct UDataTable* Events; // 0xb8(0x08)
};

// Class ShooterGame.PremierSeasonUIData
// Size: 0x90 (Inherited: 0x90)
struct UPremierSeasonUIData : UBaseContentUIData {
};

// Class ShooterGame.PremierService
// Size: 0x38 (Inherited: 0x30)
struct UPremierService : UObject {
	struct UConfigManager* ConfigManager; // 0x30(0x08)
};

// Class ShooterGame.PresenceManager
// Size: 0x128 (Inherited: 0x80)
struct UPresenceManager : UInitSystem {
	struct FMulticastInlineDelegate OnPresencesUpdated; // 0x80(0x10)
	bool bInitialized; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
	struct TMap<struct FString, struct FPresenceResourceMap> Presences; // 0x98(0x50)
	struct UPresenceService* PresenceService; // 0xe8(0x08)
	struct UChatSessionManager* ChatSessionManager; // 0xf0(0x08)
	char pad_F8[0x30]; // 0xf8(0x30)
};

// Class ShooterGame.PresenceService
// Size: 0x38 (Inherited: 0x30)
struct UPresenceService : UObject {
	struct URiotGamesApiClient* RiotGamesApiClient; // 0x30(0x08)
};

// Class ShooterGame.PresenceUpdater
// Size: 0x2b8 (Inherited: 0x80)
struct UPresenceUpdater : UInitSystem {
	char pad_80[0x8]; // 0x80(0x08)
	bool bInitialized; // 0x88(0x01)
	bool bIsShutdown; // 0x89(0x01)
	char pad_8A[0x6]; // 0x8a(0x06)
	struct FAresPresenceData TargetPresenceData; // 0x90(0x170)
	struct UPresenceService* PresenceService; // 0x200(0x08)
	struct UTextChatManagerV2* TextChatManager; // 0x208(0x08)
	struct UPartyManager* PartyManager; // 0x210(0x08)
	struct UCustomGameManager* CustomGameManager; // 0x218(0x08)
	struct UPlatformSessionManager* SessionManager; // 0x220(0x08)
	struct UCoreGameManager* CoreGameManager; // 0x228(0x08)
	struct UPresenceManager* PresenceManager; // 0x230(0x08)
	struct URSOManager* RSOManager; // 0x238(0x08)
	struct UChatSessionManager* ChatSessionManager; // 0x240(0x08)
	struct UPlatformPlayerManager* PlatformPlayerManager; // 0x248(0x08)
	struct UPregameManager* PregameManager; // 0x250(0x08)
	struct UAresClientEvents* AresClientEvents; // 0x258(0x08)
	struct UMatchmakingManager* MatchmakingManager; // 0x260(0x08)
	struct UInventoryManager* InventoryManager; // 0x268(0x08)
	struct UGameFlowStateManager* GameFlowStateManager; // 0x270(0x08)
	struct UConfigManager* ConfigManager; // 0x278(0x08)
	struct UAccountXPManager* AccountXPManager; // 0x280(0x08)
	struct UMMRManager* MMRManager; // 0x288(0x08)
	char pad_290[0x28]; // 0x290(0x28)
};

// Class ShooterGame.ProgressModelSet
// Size: 0xc8 (Inherited: 0x88)
struct UProgressModelSet : UManualNumericProgressModelBase {
	struct TArray<struct FProgressModelSet_ChildData> ChildObjects; // 0x88(0x10)
	char pad_98[0x30]; // 0x98(0x30)
};

// Class ShooterGame.ProjectileBounceComponent
// Size: 0x1a8 (Inherited: 0xf8)
struct UProjectileBounceComponent : UProjectileCollisionResponseComponent {
	struct FMulticastInlineDelegate OnProjectileBounce; // 0xf8(0x10)
	char bBounceAngleAffectsFriction : 1; // 0x108(0x01)
	char pad_108_1 : 7; // 0x108(0x01)
	char pad_109[0x3]; // 0x109(0x03)
	float Bounciness; // 0x10c(0x04)
	float Friction; // 0x110(0x04)
	float BounceVelocityProjectileStopThreshold; // 0x114(0x04)
	struct FClassInclusionExclusionFilter StopTypeFilter; // 0x118(0x50)
	struct FName CannotStopTag; // 0x168(0x0c)
	float ShortBounceDistance; // 0x174(0x04)
	int32_t MaxShortBounces; // 0x178(0x04)
	float BounceStopSurfaceAngle; // 0x17c(0x04)
	float MinBounceWhenCannotStop; // 0x180(0x04)
	float MinLateralWhenCannotStop; // 0x184(0x04)
	char pad_188[0x10]; // 0x188(0x10)
	char DefaultBounceAngleAffectsFriction : 1; // 0x198(0x01)
	char pad_198_1 : 7; // 0x198(0x01)
	char pad_199[0x3]; // 0x199(0x03)
	float DefaultBounciness; // 0x19c(0x04)
	float DefaultFriction; // 0x1a0(0x04)
	float DefaultBounceVelocityProjectileStopThreshold; // 0x1a4(0x04)
};

// Class ShooterGame.ProjectileThrowStateComponent
// Size: 0x330 (Inherited: 0x2c8)
struct UProjectileThrowStateComponent : UScriptStateComponent {
	struct FMulticastInlineDelegate OnThrow; // 0x2c8(0x10)
	struct FProjectileThrowTuning ProjectileTuning; // 0x2d8(0x40)
	bool bAddToContext; // 0x318(0x01)
	char pad_319[0x7]; // 0x319(0x07)
	struct UNetworkedRandomNumberGeneratorComponent* NetworkedRandomNumberGeneratorComponent; // 0x320(0x08)
	char pad_328[0x8]; // 0x328(0x08)
};

// Class ShooterGame.ProjectileDownStateComponent
// Size: 0x330 (Inherited: 0x330)
struct UProjectileDownStateComponent : UProjectileThrowStateComponent {
};

// Class ShooterGame.ProjectileEstimationComponent
// Size: 0x5e0 (Inherited: 0x570)
struct UProjectileEstimationComponent : USphereComponent {
	struct FProjectileThrowTuning ThrowInfo; // 0x568(0x40)
	bool bManualProjectileInfo; // 0x5a8(0x01)
	struct FProjectileEstimationInfo ProjectileInfo; // 0x5ac(0x34)
};

// Class ShooterGame.ProjectileFollowComponent
// Size: 0x128 (Inherited: 0x108)
struct UProjectileFollowComponent : USpectateActionComponent {
	bool bShouldFollowProjectile; // 0x108(0x01)
	char pad_109[0x7]; // 0x109(0x07)
	struct UFreeCamComponent* CachedFreeCamComponent; // 0x110(0x08)
	char pad_118[0x10]; // 0x118(0x10)
};

// Class ShooterGame.ProjectileLeftStateComponent
// Size: 0x330 (Inherited: 0x330)
struct UProjectileLeftStateComponent : UProjectileThrowStateComponent {
};

// Class ShooterGame.ProjectileRightStateComponent
// Size: 0x330 (Inherited: 0x330)
struct UProjectileRightStateComponent : UProjectileThrowStateComponent {
};

// Class ShooterGame.ProjectileStickComponent
// Size: 0x168 (Inherited: 0xf8)
struct UProjectileStickComponent : UProjectileCollisionResponseComponent {
	struct FMulticastInlineDelegate OnProjectileStick; // 0xf8(0x10)
	struct FClassInclusionExclusionFilter StuckToFilter; // 0x108(0x50)
	bool bShouldAlignToStickPoint; // 0x158(0x01)
	char pad_159[0x3]; // 0x159(0x03)
	struct FRotator AlignmentOffset; // 0x15c(0x0c)
};

// Class ShooterGame.ProjectileStopOnFloorComponent
// Size: 0x160 (Inherited: 0xf8)
struct UProjectileStopOnFloorComponent : UProjectileCollisionResponseComponent {
	float StopSurfaceAngle; // 0xf8(0x04)
	char pad_FC[0x4]; // 0xfc(0x04)
	struct FClassInclusionExclusionFilter FloorTypeFilter; // 0x100(0x50)
	struct FName InvalidFloorTag; // 0x150(0x0c)
	char pad_15C[0x4]; // 0x15c(0x04)
};

// Class ShooterGame.PropMovementComponent
// Size: 0x138 (Inherited: 0x128)
struct UPropMovementComponent : UMovementComponent {
	float Bounciness; // 0x128(0x04)
	float Friction; // 0x12c(0x04)
	float BounceVelocityProjectileStopThreshold; // 0x130(0x04)
	char pad_134[0x4]; // 0x134(0x04)
};

// Class ShooterGame.ProvisioningErrorNotificationManager
// Size: 0x90 (Inherited: 0x80)
struct UProvisioningErrorNotificationManager : UInitSystem {
	struct URMSManager* RMSManager; // 0x80(0x08)
	struct UNotificationManager* NotificationManager; // 0x88(0x08)
};

// Class ShooterGame.PurchasableFilterComponent
// Size: 0x108 (Inherited: 0xe8)
struct UPurchasableFilterComponent : UActorComponent {
	struct TArray<struct UAresPurchasable*> Allowlist; // 0xe8(0x10)
	struct TArray<struct UAresPurchasable*> Denylist; // 0xf8(0x10)
};

// Class ShooterGame.PurchasedItemComponent
// Size: 0x100 (Inherited: 0xe8)
struct UPurchasedItemComponent : UActorComponent {
	struct UAresPurchasableEquippable* Purchaseable; // 0xe8(0x08)
	bool bIsCurrentSessionPurchase; // 0xf0(0x01)
	char pad_F1[0x7]; // 0xf1(0x07)
	struct AShooterPlayerState* PurchasingPlayerState; // 0xf8(0x08)
};

// Class ShooterGame.PurchaseManager
// Size: 0xd0 (Inherited: 0x30)
struct UPurchaseManager : UObject {
	struct FMulticastInlineDelegate OnOrderSubmitted; // 0x30(0x10)
	struct FMulticastInlineDelegate OnOrderProcessed; // 0x40(0x10)
	struct FMulticastInlineDelegate OnOrderFailed; // 0x50(0x10)
	struct FDelegate OnStoreManagerSubmitOrderSuccess; // 0x60(0x14)
	struct FDelegate OnStoreManagerSubmitOrderError; // 0x74(0x14)
	struct UConfigManager* ConfigManager; // 0x88(0x08)
	struct UStoreManager* StoreManager; // 0x90(0x08)
	struct UStoreUITelemetryManager* UITelemetryManager; // 0x98(0x08)
	struct UPlayerFeedbackToolViewController* PlayerFeedbackToolViewController; // 0xa0(0x08)
	struct FGuid OrderXID; // 0xa8(0x10)
	struct FGuid OrderID; // 0xb8(0x10)
	enum class EPurchaseSource PurchaseSource; // 0xc8(0x01)
	enum class EPurchaseType PurchaseType; // 0xc9(0x01)
	enum class EJuiceOrderRequestType JuiceCraftType; // 0xca(0x01)
	enum class EPurchaseState PurchaseState; // 0xcb(0x01)
	char pad_CC[0x4]; // 0xcc(0x04)
};

// Class ShooterGame.PurchaseModal
// Size: 0x2d8 (Inherited: 0x2c8)
struct UPurchaseModal : UUserWidget {
	struct UPurchaseModalViewModel* ViewModel; // 0x2c8(0x08)
	struct UPurchaseModalViewController* ViewController; // 0x2d0(0x08)
};

// Class ShooterGame.PurchaseModalViewController
// Size: 0xc8 (Inherited: 0x30)
struct UPurchaseModalViewController : UObject {
	struct FMulticastInlineDelegate OnOrderSubmitted; // 0x30(0x10)
	struct FMulticastInlineDelegate OnOrderComplete; // 0x40(0x10)
	struct FMulticastInlineDelegate OnOrderError; // 0x50(0x10)
	enum class EPurchaseSource ModalPurchaseSource; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
	struct UStoreManager* StoreManager; // 0x68(0x08)
	struct UConfigManager* ConfigManager; // 0x70(0x08)
	struct UPersonalizationManagerV2* PersonalizationManager; // 0x78(0x08)
	struct UContractsManager* ContractsManager; // 0x80(0x08)
	struct UPurchaseModalViewModel* ViewModel; // 0x88(0x08)
	struct UStoreUITelemetryManager* UITelemetryManager; // 0x90(0x08)
	struct UPlayerFeedbackToolViewController* PlayerFeedbackToolViewController; // 0x98(0x08)
	struct UInventoryManager* InventoryManager; // 0xa0(0x08)
	struct FGuid TransactionXID; // 0xa8(0x10)
	struct FGuid OrderID; // 0xb8(0x10)
};

// Class ShooterGame.PurchaseModalViewModel
// Size: 0x198 (Inherited: 0x30)
struct UPurchaseModalViewModel : UObject {
	int32_t PurchasePrice; // 0x30(0x04)
	struct FGuid PurchaseCurrency; // 0x34(0x10)
	bool IsDiscountApplied; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	int32_t DiscountAmount; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct FMulticastInlineDelegate OnWalletBalanceUpdated; // 0x50(0x10)
	struct FGuid OfferId; // 0x60(0x10)
	enum class EPurchaseType PurchaseType; // 0x70(0x01)
	char pad_71[0x3]; // 0x71(0x03)
	int32_t CurrentLevel; // 0x74(0x04)
	int32_t FromLevel; // 0x78(0x04)
	int32_t ToLevel; // 0x7c(0x04)
	struct FGuid ContractDefinitionID; // 0x80(0x10)
	struct FGuid ItemProgressionDefinitionID; // 0x90(0x10)
	struct FGuid SidegradeID; // 0xa0(0x10)
	struct FGuid SidegradeOptionID; // 0xb0(0x10)
	struct TArray<struct FWalletCost> SidegradeCosts; // 0xc0(0x10)
	struct TArray<struct FEntitlementReward> BundlePurchaseExpectedEntitlementRewards; // 0xd0(0x10)
	struct TArray<struct FWalletReward> BundlePurchaseExpectedWalletRewards; // 0xe0(0x10)
	struct TMap<struct FGuid, int32_t> BundlePurchaseExpectedCosts; // 0xf0(0x50)
	char pad_140[0x18]; // 0x140(0x18)
	enum class EPurchaseState State; // 0x158(0x01)
	char pad_159[0x3]; // 0x159(0x03)
	int32_t WalletBalance; // 0x15c(0x04)
	struct UStoreOffer* Offer; // 0x160(0x08)
	struct TArray<struct FStoreOfferReward> Rewards; // 0x168(0x10)
	struct TArray<struct UEntitlementRewardModel*> SidegradeRewards; // 0x178(0x10)
	struct UBundleViewModel* Bundle; // 0x188(0x08)
	struct UUpgradeCurrencyOffer* UpgradeCurrencyOffer; // 0x190(0x08)
};

// Class ShooterGame.PushNotificationsListener
// Size: 0x48 (Inherited: 0x30)
struct UPushNotificationsListener : UObject {
	struct UPushNotificationsManager* PushNotificationsManager; // 0x30(0x08)
	struct UPartyViewController* PartyViewController; // 0x38(0x08)
	struct UPartyNotificationManager* PartyNotificationManager; // 0x40(0x08)
};

// Class ShooterGame.PushNotificationsManager
// Size: 0xa0 (Inherited: 0x80)
struct UPushNotificationsManager : UInitSystem {
	struct UPushNotificationsService* PushNotificationsService; // 0x80(0x08)
	struct UPushNotificationsListener* PushNotificationsListener; // 0x88(0x08)
	struct URSOManager* RSOManager; // 0x90(0x08)
	char pad_98[0x8]; // 0x98(0x08)
};

// Class ShooterGame.PushNotificationsService
// Size: 0x38 (Inherited: 0x30)
struct UPushNotificationsService : UObject {
	struct UConfigManager* ConfigManager; // 0x30(0x08)
};

// Class ShooterGame.QueuedNotification
// Size: 0x70 (Inherited: 0x30)
struct UQueuedNotification : UObject {
	struct FMulticastInlineDelegate OnDisplay; // 0x30(0x10)
	struct FMulticastInlineDelegate OnDispose; // 0x40(0x10)
	struct FMulticastInlineDelegate OnResponse; // 0x50(0x10)
	struct UGenericNotification* NotificationData; // 0x60(0x08)
	char pad_68[0x8]; // 0x68(0x08)
};

// Class ShooterGame.QueuedNotificationConsumerComponent
// Size: 0x100 (Inherited: 0xe8)
struct UQueuedNotificationConsumerComponent : UActorComponent {
	struct UQueuedNotification* CurrentNotification; // 0xe8(0x08)
	char pad_F0[0x8]; // 0xf0(0x08)
	struct UQueuedNotification* PendingNotification; // 0xf8(0x08)
};

// Class ShooterGame.RadialBuffProjectileEffectComponent
// Size: 0x140 (Inherited: 0xf8)
struct URadialBuffProjectileEffectComponent : UBaseProjectileEffectComponent {
	float ExplosionBuffLevel; // 0xf8(0x04)
	char pad_FC[0x4]; // 0xfc(0x04)
	struct UAresGameplayBuff* ExplosionBuffClass; // 0x100(0x08)
	float ExplosionMinimumBuffLevel; // 0x108(0x04)
	float ExplosionBuffLevelFalloff; // 0x10c(0x04)
	float ExplosionRadius; // 0x110(0x04)
	float ExplosionInnerRadius; // 0x114(0x04)
	float AxialSearchRadius; // 0x118(0x04)
	enum class ECollisionChannel ExplosionSearchTraceChannel; // 0x11c(0x01)
	char pad_11D[0x3]; // 0x11d(0x03)
	struct UDamageType* DamageType; // 0x120(0x08)
	bool bIgnoreVictimsThatShareInstigator; // 0x128(0x01)
	char pad_129[0x7]; // 0x129(0x07)
	struct FMulticastInlineDelegate OnAppliedRadialBuff; // 0x130(0x10)
};

// Class ShooterGame.RadialDamageProjectileEffectComponent
// Size: 0x138 (Inherited: 0xf8)
struct URadialDamageProjectileEffectComponent : UBaseProjectileEffectComponent {
	float ExplosionDamage; // 0xf8(0x04)
	float ExplosionMinimumDamage; // 0xfc(0x04)
	float ExplosionDamageFalloff; // 0x100(0x04)
	float ExplosionRadius; // 0x104(0x04)
	float ExplosionInnerRadius; // 0x108(0x04)
	float AxialSearchRadius; // 0x10c(0x04)
	enum class ECollisionChannel ExplosionSearchTraceChannel; // 0x110(0x01)
	bool AxialSearchBackwards; // 0x111(0x01)
	char pad_112[0x6]; // 0x112(0x06)
	struct UDamageType* DamageType; // 0x118(0x08)
	bool bIgnoreVictimsThatShareInstigator; // 0x120(0x01)
	char pad_121[0x7]; // 0x121(0x07)
	struct FMulticastInlineDelegate OnDealtRadialDamage; // 0x128(0x10)
};

// Class ShooterGame.RadialForceModuleProjectileEffectComponent
// Size: 0x118 (Inherited: 0xf8)
struct URadialForceModuleProjectileEffectComponent : UBaseProjectileEffectComponent {
	enum class EAresTeamTargeting TeamFilter; // 0xf8(0x01)
	char pad_F9[0x3]; // 0xf9(0x03)
	float Radius; // 0xfc(0x04)
	float AxialSearchRadius; // 0x100(0x04)
	enum class ECollisionChannel RadiusSearchTraceChannel; // 0x104(0x01)
	char pad_105[0x3]; // 0x105(0x03)
	struct UForceModule* ForceModule; // 0x108(0x08)
	float Duration; // 0x110(0x04)
	char pad_114[0x4]; // 0x114(0x04)
};

// Class ShooterGame.RadialTargetingStateComponent
// Size: 0x390 (Inherited: 0x2c8)
struct URadialTargetingStateComponent : UScriptStateComponent {
	enum class ERadialTargetSourcePoint SourcePoint; // 0x2c8(0x01)
	char pad_2C9[0x7]; // 0x2c9(0x07)
	struct FClassInclusionExclusionFilter TargetFilter; // 0x2d0(0x50)
	float Radius; // 0x320(0x04)
	enum class ECollisionChannel SearchCollision; // 0x324(0x01)
	char pad_325[0x3]; // 0x325(0x03)
	float ConeAngle; // 0x328(0x04)
	float ConePullBack; // 0x32c(0x04)
	bool bTwoDimensionalCone; // 0x330(0x01)
	bool bCheckLineOfSight; // 0x331(0x01)
	enum class ECollisionChannel LineOfSightCollision; // 0x332(0x01)
	enum class EAresTeamTargeting TeamFilter; // 0x333(0x01)
	char pad_334[0x50]; // 0x334(0x50)
	bool bDrawDebugTargeting; // 0x384(0x01)
	char pad_385[0xb]; // 0x385(0x0b)
};

// Class ShooterGame.RankedAbilityChargeComponent
// Size: 0x190 (Inherited: 0x168)
struct URankedAbilityChargeComponent : UEquipmentChargeComponent {
	struct TArray<struct FRankChargeInfo> RankInfo; // 0x168(0x10)
	struct FMulticastInlineDelegate OnRankChanged; // 0x178(0x10)
	int32_t CurrentRank; // 0x188(0x04)
	int32_t RankBoughtThisRound; // 0x18c(0x04)
};

// Class ShooterGame.RateLimiterComponent
// Size: 0x118 (Inherited: 0xe8)
struct URateLimiterComponent : UActorComponent {
	struct FRateLimiter RateLimiter; // 0xe8(0x30)
};

// Class ShooterGame.ReadyingStateComponent
// Size: 0x458 (Inherited: 0x3a0)
struct UReadyingStateComponent : UTimedStateComponent {
	struct FScriptStateEffectInfo ReadyingEffects[0x3]; // 0x3a0(0xa8)
	float ReadyingTimes[0x3]; // 0x448(0x0c)
	enum class EEquipSpeed AuthEquipSpeed; // 0x454(0x01)
	enum class EEquipSpeed LocallyPredictedEquipSpeed; // 0x455(0x01)
	bool bAlwaysFastEquipNormalSpeed; // 0x456(0x01)
	enum class EEquipSpeed EquipSpeedOverride; // 0x457(0x01)
};

// Class ShooterGame.ReflectedPlayerSettingsManager
// Size: 0x80 (Inherited: 0x30)
struct UReflectedPlayerSettingsManager : UObject {
	char pad_30[0x50]; // 0x30(0x50)
};

// Class ShooterGame.RelevantFogOfWarComponent
// Size: 0x320 (Inherited: 0x320)
struct URelevantFogOfWarComponent : UFogOfWarComponent {
};

// Class ShooterGame.ReloadStateComponent
// Size: 0x3f8 (Inherited: 0x368)
struct UReloadStateComponent : URespondToEventStateComponent {
	struct FMulticastInlineDelegate OnAmmoLoaded; // 0x368(0x10)
	struct FMulticastInlineDelegate OnReloadAnimationComplete; // 0x378(0x10)
	struct FMulticastInlineDelegate OnReloadSubstateEntered; // 0x388(0x10)
	enum class EMagazineEjectableBehavior MagazineEjectableBehavior; // 0x398(0x01)
	char pad_399[0x3]; // 0x399(0x03)
	float AnimationTime; // 0x39c(0x04)
	bool bReloadFullClip; // 0x3a0(0x01)
	char pad_3A1[0x7]; // 0x3a1(0x07)
	struct TArray<struct FTriggerInput> ReloadTriggerInputs; // 0x3a8(0x10)
	float IntroTime; // 0x3b8(0x04)
	float LoadTime; // 0x3bc(0x04)
	int32_t ReloadAmountPerCycle; // 0x3c0(0x04)
	char pad_3C4[0x4]; // 0x3c4(0x04)
	struct UAmmoComponent* RegisteredAmmoComponent; // 0x3c8(0x08)
	struct UStateComponent* ReturnState; // 0x3d0(0x08)
	struct FReloadStateVariables ReloadStateVariables; // 0x3d8(0x18)
	struct AShooterCharacter* ReloadingCharacter; // 0x3f0(0x08)
};

// Class ShooterGame.RemoteClientMovementComponent
// Size: 0x1c8 (Inherited: 0xe8)
struct URemoteClientMovementComponent : UActorComponent {
	struct UMovementTimeShiftMonitor* SharedRemoteTimeShiftMonitor; // 0xe8(0x08)
	int32_t NumRebases; // 0xf0(0x04)
	int32_t NumRebasesFromOverqueue; // 0xf4(0x04)
	bool DebugForceRebase; // 0xf8(0x01)
	char pad_F9[0x37]; // 0xf9(0x37)
	struct TSet<struct UShooterCharacterMovement*> RemoteCharacterMovementComponents; // 0x130(0x50)
	struct TArray<struct AShooterCharacter*> ShooterCharacterTickOrdering; // 0x180(0x10)
	struct UShooterCharacterMovement* MovementComponentWithMostUnprocessedQueuedMoves; // 0x190(0x08)
	char pad_198[0x30]; // 0x198(0x30)
};

// Class ShooterGame.RemoteNetworkedGameStateComponent
// Size: 0x108 (Inherited: 0xe8)
struct URemoteNetworkedGameStateComponent : UActorComponent {
	struct TArray<struct AShooterCharacter*> RegisteredShooterCharacters; // 0xe8(0x10)
	char pad_F8[0x4]; // 0xf8(0x04)
	float AllySendRatePerSecond; // 0xfc(0x04)
	char pad_100[0x8]; // 0x100(0x08)
};

// Class ShooterGame.ReplayBlueprintLibrary
// Size: 0x30 (Inherited: 0x30)
struct UReplayBlueprintLibrary : UBlueprintFunctionLibrary {
};

// Class ShooterGame.ReplayEffectComponent
// Size: 0xe8 (Inherited: 0xe8)
struct UReplayEffectComponent : UActorComponent {
};

// Class ShooterGame.ReplayMovementComponent
// Size: 0xe8 (Inherited: 0xe8)
struct UReplayMovementComponent : UActorComponent {
};

// Class ShooterGame.ReplayPlayerController
// Size: 0x830 (Inherited: 0x738)
struct AReplayPlayerController : APlayerController {
	struct FRateLimiter RateLimiterSettings; // 0x738(0x30)
	char pad_768[0x10]; // 0x768(0x10)
	struct FMulticastInlineDelegate OnScrubComplete; // 0x778(0x10)
	struct UReplayMovementComponent* ReplayMovementComponent; // 0x788(0x08)
	struct UGamepadInputComponent* GamepadInputComponent; // 0x790(0x08)
	struct UViewTargetComponent* ViewTargetComponent; // 0x798(0x08)
	struct UScreenTransitionComponent* ScreenTransitionComponent; // 0x7a0(0x08)
	struct USpectateInOrderActionComponent* SpectateInOrderActionComponent; // 0x7a8(0x08)
	struct USpectateSpecificActionComponent* SpectateSpecificActionComponent; // 0x7b0(0x08)
	struct UFreeCamComponent* FreeCamComponent; // 0x7b8(0x08)
	struct UProjectileFollowComponent* ProjectileFollowComponent; // 0x7c0(0x08)
	char pad_7C8[0x68]; // 0x7c8(0x68)
};

// Class ShooterGame.ReplicationSleepComponent
// Size: 0x110 (Inherited: 0xe8)
struct UReplicationSleepComponent : UActorComponent {
	enum class EReplicationSleepWhen SleepWhen; // 0xe8(0x01)
	bool bIgnoreSleepingChanges; // 0xe9(0x01)
	char pad_EA[0x2]; // 0xea(0x02)
	float SleepingUpdateRate; // 0xec(0x04)
	float TimeToSleep; // 0xf0(0x04)
	char pad_F4[0x4]; // 0xf4(0x04)
	struct FTimerHandle BeginSleepTimerHandle; // 0xf8(0x08)
	struct FTimerHandle ChangesTimerHandle; // 0x100(0x08)
	enum class EReplicationSleepState SleepState; // 0x108(0x01)
	char pad_109[0x3]; // 0x109(0x03)
	float LastValidChangeTime; // 0x10c(0x04)
};

// Class ShooterGame.ReporterFeedbackManager
// Size: 0x1b8 (Inherited: 0x80)
struct UReporterFeedbackManager : UInitSystem {
	char pad_80[0x120]; // 0x80(0x120)
	struct UReporterFeedbackService* ReporterFeedbackService; // 0x1a0(0x08)
	struct UModalManager* ModalManager; // 0x1a8(0x08)
	struct UConfigManager* ConfigManager; // 0x1b0(0x08)
};

// Class ShooterGame.ReporterFeedbackService
// Size: 0x38 (Inherited: 0x30)
struct UReporterFeedbackService : UObject {
	struct URiotGamesApiClient* RiotGamesApiClient; // 0x30(0x08)
};

// Class ShooterGame.ResetForRespawnInterface
// Size: 0x30 (Inherited: 0x30)
struct UResetForRespawnInterface : UInterface {
};

// Class ShooterGame.ResourceVisualizationComponent
// Size: 0x108 (Inherited: 0xe8)
struct UResourceVisualizationComponent : UActorComponent {
	struct FMulticastInlineDelegate OnVisualizationChanged; // 0xe8(0x10)
	struct FMulticastInlineDelegate OnIconChanged; // 0xf8(0x10)
};

// Class ShooterGame.AmmoResourceVisualizationComponent
// Size: 0x110 (Inherited: 0x108)
struct UAmmoResourceVisualizationComponent : UResourceVisualizationComponent {
	struct UAmmoComponent* AmmoComponent; // 0x108(0x08)
};

// Class ShooterGame.BlueprintResourceVisualizationComponent
// Size: 0x138 (Inherited: 0x108)
struct UBlueprintResourceVisualizationComponent : UResourceVisualizationComponent {
	struct FAmmoHudInfo PredictedAmmoHudInfo; // 0x108(0x10)
	struct FAmmoHudInfo AuthAmmoHudInfo; // 0x118(0x10)
	struct UTexture2D* Icon; // 0x128(0x08)
	struct UValueDisagreementTimer* ClientPredictedValueDisagreementTimer; // 0x130(0x08)
};

// Class ShooterGame.RestrictionsManager
// Size: 0x2f8 (Inherited: 0x80)
struct URestrictionsManager : UInitSystem {
	struct FMulticastInlineDelegate OnQueueRestrictionChanged; // 0x80(0x10)
	struct FMulticastInlineDelegate OnPenalizedPlayersChanged; // 0x90(0x10)
	char pad_A0[0x228]; // 0xa0(0x228)
	struct URestrictionsService* RestrictionsService; // 0x2c8(0x08)
	struct URSOManager* RSOManager; // 0x2d0(0x08)
	struct URMSManager* RMSManager; // 0x2d8(0x08)
	struct UConfigManager* ConfigManager; // 0x2e0(0x08)
	struct UModalManager* ModalManager; // 0x2e8(0x08)
	char pad_2F0[0x8]; // 0x2f0(0x08)
};

// Class ShooterGame.RestrictionsService
// Size: 0x40 (Inherited: 0x30)
struct URestrictionsService : UObject {
	struct UConfigManager* ConfigManager; // 0x30(0x08)
	struct URSOManager* RSOManager; // 0x38(0x08)
};

// Class ShooterGame.ResurrectPlayerSpawner
// Size: 0x50 (Inherited: 0x48)
struct UResurrectPlayerSpawner : UDynamicLocationPlayerSpawner {
	char pad_48[0x8]; // 0x48(0x08)
};

// Class ShooterGame.ReusableHitScanProjectileComponent
// Size: 0x130 (Inherited: 0xe8)
struct UReusableHitScanProjectileComponent : UActorComponent {
	struct FProjectileTuning ProjectileTuning; // 0xe8(0x20)
	float ErrorPower; // 0x108(0x04)
	int32_t ErrorRetries; // 0x10c(0x04)
	int32_t RoundsBetweenTracers; // 0x110(0x04)
	int32_t RoundsBetweenImpacts; // 0x114(0x04)
	int32_t RoundsUntilNextTracer; // 0x118(0x04)
	int32_t RoundsUntilNextImpact; // 0x11c(0x04)
	struct UNetworkedRandomNumberGeneratorComponent* NetworkedRandomNumberGeneratorComponent; // 0x120(0x08)
	struct AProjectile* ReusableHitScanProjectile; // 0x128(0x08)
};

// Class ShooterGame.RewardGrantModelFactory
// Size: 0x38 (Inherited: 0x30)
struct URewardGrantModelFactory : UObject {
	struct UContentIndex* ContentIndex; // 0x30(0x08)
};

// Class ShooterGame.RewardModel
// Size: 0x30 (Inherited: 0x30)
struct URewardModel : UObject {
};

// Class ShooterGame.EntitlementRewardModel
// Size: 0x40 (Inherited: 0x30)
struct UEntitlementRewardModel : URewardModel {
	int32_t Amount; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct UAresBasePrimaryDataAsset* DataAssetAsBaseType; // 0x38(0x08)
};

// Class ShooterGame.EquippableSkinRewardModel
// Size: 0x40 (Inherited: 0x40)
struct UEquippableSkinRewardModel : UEntitlementRewardModel {
};

// Class ShooterGame.CharacterRewardModel
// Size: 0x40 (Inherited: 0x40)
struct UCharacterRewardModel : UEntitlementRewardModel {
};

// Class ShooterGame.EquippableCharmLevelRewardModel
// Size: 0x40 (Inherited: 0x40)
struct UEquippableCharmLevelRewardModel : UEntitlementRewardModel {
};

// Class ShooterGame.EquippableSkinLevelRewardModel
// Size: 0x40 (Inherited: 0x40)
struct UEquippableSkinLevelRewardModel : UEntitlementRewardModel {
};

// Class ShooterGame.EquippableSkinChromaRewardModel
// Size: 0x40 (Inherited: 0x40)
struct UEquippableSkinChromaRewardModel : UEntitlementRewardModel {
};

// Class ShooterGame.EquippableAttachmentRewardModel
// Size: 0x40 (Inherited: 0x40)
struct UEquippableAttachmentRewardModel : UEntitlementRewardModel {
};

// Class ShooterGame.SprayRewardModel
// Size: 0x40 (Inherited: 0x40)
struct USprayRewardModel : UEntitlementRewardModel {
};

// Class ShooterGame.PlayerCardRewardModel
// Size: 0x40 (Inherited: 0x40)
struct UPlayerCardRewardModel : UEntitlementRewardModel {
};

// Class ShooterGame.PlayerTitleRewardModel
// Size: 0x40 (Inherited: 0x40)
struct UPlayerTitleRewardModel : UEntitlementRewardModel {
};

// Class ShooterGame.WalletRewardModel
// Size: 0x40 (Inherited: 0x30)
struct UWalletRewardModel : URewardModel {
	struct UCurrencyDataAsset* CurrencyDataAsset; // 0x30(0x08)
	int32_t Amount; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class ShooterGame.JuiceBoxRewardModel
// Size: 0x40 (Inherited: 0x30)
struct UJuiceBoxRewardModel : URewardModel {
	struct UJuiceBoxDataAsset* JuiceBoxDataAsset; // 0x30(0x08)
	int32_t Amount; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class ShooterGame.JuiceContentRewardModel
// Size: 0x40 (Inherited: 0x30)
struct UJuiceContentRewardModel : URewardModel {
	struct UEquippableSkinDataAsset* EquippableSkinDataAsset; // 0x30(0x08)
	int32_t Amount; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class ShooterGame.RewardGrantModel
// Size: 0x50 (Inherited: 0x30)
struct URewardGrantModel : UObject {
	struct FGuid ID; // 0x30(0x10)
	struct TArray<struct URewardModel*> RewardModels; // 0x40(0x10)
};

// Class ShooterGame.WalletCostModel
// Size: 0x40 (Inherited: 0x30)
struct UWalletCostModel : UObject {
	int32_t AmountToDeduct; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct UCurrencyDataAsset* CurrencyDataAsset; // 0x38(0x08)
};

// Class ShooterGame.CostModel
// Size: 0x40 (Inherited: 0x30)
struct UCostModel : UObject {
	struct TArray<struct UWalletCostModel*> WalletCosts; // 0x30(0x10)
};

// Class ShooterGame.InventoryChangeModel
// Size: 0x40 (Inherited: 0x30)
struct UInventoryChangeModel : UObject {
	struct URewardGrantModel* Rewards; // 0x30(0x08)
	struct UCostModel* Costs; // 0x38(0x08)
};

// Class ShooterGame.RewindableGameObject
// Size: 0x408 (Inherited: 0x400)
struct ARewindableGameObject : AGameObject {
	struct UServerRewindComponent* ServerRewindComponent; // 0x400(0x08)
};

// Class ShooterGame.RewindableInterface
// Size: 0x30 (Inherited: 0x30)
struct URewindableInterface : UInterface {
};

// Class ShooterGame.RewindComponent
// Size: 0x110 (Inherited: 0xe8)
struct URewindComponent : UActorComponent {
	float MaxAllowableRewindTime; // 0xe8(0x04)
	char pad_EC[0x4]; // 0xec(0x04)
	struct TArray<struct FIdempotentRewindable> SimpleRewindables; // 0xf0(0x10)
	struct TArray<struct FIdempotentRewindable> ComplexRewindables; // 0x100(0x10)
};

// Class ShooterGame.RightGripUpperBody3P
// Size: 0x38 (Inherited: 0x38)
struct URightGripUpperBody3P : UAnimSlotUpperBody3P {
};

// Class ShooterGame.RiotClientConfigManager
// Size: 0x128 (Inherited: 0x80)
struct URiotClientConfigManager : UInitSystem {
	struct UConfigManager* ConfigManager; // 0x80(0x08)
	struct URiotClientConfigService* RiotClientConfigService; // 0x88(0x08)
	char pad_90[0x98]; // 0x90(0x98)
};

// Class ShooterGame.RiotClientConfigService
// Size: 0x38 (Inherited: 0x30)
struct URiotClientConfigService : UObject {
	struct URiotGamesApiClient* RiotGamesApiClient; // 0x30(0x08)
};

// Class ShooterGame.RiotClientHeartbeatManager
// Size: 0xc0 (Inherited: 0x80)
struct URiotClientHeartbeatManager : UInitSystem {
	struct UConfigManager* ConfigManager; // 0x80(0x08)
	struct UPlatformInitSettingsManager* PlatformInitSettingsManager; // 0x88(0x08)
	struct UGameFlowStateManager* GameFlowStateManager; // 0x90(0x08)
	struct URiotClientSessionService* RiotClientSessionService; // 0x98(0x08)
	char pad_A0[0x10]; // 0xa0(0x10)
	struct FString AuthToken; // 0xb0(0x10)
};

// Class ShooterGame.MonitoredRiotClient
// Size: 0x170 (Inherited: 0x30)
struct UMonitoredRiotClient : UObject {
	struct URNetClient* Client; // 0x30(0x08)
	char pad_38[0x138]; // 0x38(0x138)
};

// Class ShooterGame.RiotClientStartupMonitor
// Size: 0x68 (Inherited: 0x30)
struct URiotClientStartupMonitor : UObject {
	struct TArray<struct UMonitoredRiotClient*> WatchedClients; // 0x30(0x10)
	char pad_40[0x28]; // 0x40(0x28)
};

// Class ShooterGame.RiotClientManager
// Size: 0x50 (Inherited: 0x30)
struct URiotClientManager : UObject {
	struct UTestAccountsManager* TestAccountsManager; // 0x30(0x08)
	struct TArray<struct URNetClient*> ConnectedClients; // 0x38(0x10)
	struct URiotClientStartupMonitor* StartupMonitor; // 0x48(0x08)
};

// Class ShooterGame.RiotClientManagerProvider
// Size: 0x30 (Inherited: 0x30)
struct URiotClientManagerProvider : UInterface {
};

// Class ShooterGame.RiotClientSessionService
// Size: 0x38 (Inherited: 0x30)
struct URiotClientSessionService : UObject {
	struct URiotGamesApiClient* RiotGamesApiClient; // 0x30(0x08)
};

// Class ShooterGame.RiotGamesApiClient
// Size: 0x130 (Inherited: 0x80)
struct URiotGamesApiClient : UInitSystem {
	char pad_80[0x40]; // 0x80(0x40)
	struct URiotGamesApiLogin* RiotLoginHelper; // 0xc0(0x08)
	struct URNetStub* RNetStub; // 0xc8(0x08)
	struct URiotProductManager* RiotProductManager; // 0xd0(0x08)
	struct UPlatformInitSettingsManager* PlatformInitSettingsManager; // 0xd8(0x08)
	char pad_E0[0x38]; // 0xe0(0x38)
	struct URNetQueryClient* QueryClient; // 0x118(0x08)
	struct URNetEventingClient* EventingClient; // 0x120(0x08)
	char pad_128[0x8]; // 0x128(0x08)
};

// Class ShooterGame.RNetEventingClient
// Size: 0x48 (Inherited: 0x30)
struct URNetEventingClient : UObject {
	char pad_30[0x18]; // 0x30(0x18)
};

// Class ShooterGame.RiotGamesApiEventingClient
// Size: 0xa0 (Inherited: 0x48)
struct URiotGamesApiEventingClient : URNetEventingClient {
	char pad_48[0x50]; // 0x48(0x50)
	struct URiotGamesApiClient* Client; // 0x98(0x08)
};

// Class ShooterGame.RiotGamesApiLogin
// Size: 0xa0 (Inherited: 0x30)
struct URiotGamesApiLogin : UObject {
	char pad_30[0x58]; // 0x30(0x58)
	struct URiotGamesApiClient* Client; // 0x88(0x08)
	char pad_90[0x10]; // 0x90(0x10)
};

// Class ShooterGame.RiotGamesApiQueryHelper
// Size: 0x40 (Inherited: 0x30)
struct URiotGamesApiQueryHelper : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct URiotGamesApiClient* Client; // 0x38(0x08)
};

// Class ShooterGame.RiotProductManager
// Size: 0xb8 (Inherited: 0x80)
struct URiotProductManager : UInitSystem {
	struct FString ProductId; // 0x80(0x10)
	struct FString PatchlineId; // 0x90(0x10)
	struct FString RiotGamesApiSettingsToken; // 0xa0(0x10)
	bool UseDevRiotClient; // 0xb0(0x01)
	bool IsSJC; // 0xb1(0x01)
	bool IsTencent; // 0xb2(0x01)
	char pad_B3[0x5]; // 0xb3(0x05)
};

// Class ShooterGame.RiotStatusService
// Size: 0x38 (Inherited: 0x30)
struct URiotStatusService : UObject {
	struct URiotGamesApiClient* RiotGamesApiClient; // 0x30(0x08)
};

// Class ShooterGame.RiotWarningManager
// Size: 0x1b8 (Inherited: 0x80)
struct URiotWarningManager : UInitSystem {
	char pad_80[0xc8]; // 0x80(0xc8)
	struct URiotWarningService* RiotWarningService; // 0x148(0x08)
	struct UModalManager* ModalManager; // 0x150(0x08)
	struct UConfigManager* ConfigManager; // 0x158(0x08)
	char pad_160[0x58]; // 0x160(0x58)
};

// Class ShooterGame.RiotWarningService
// Size: 0x38 (Inherited: 0x30)
struct URiotWarningService : UObject {
	struct URiotGamesApiClient* RiotGamesApiClient; // 0x30(0x08)
};

// Class ShooterGame.RMSManager
// Size: 0x148 (Inherited: 0x80)
struct URMSManager : UInitSystem {
	char pad_80[0xc0]; // 0x80(0xc0)
	struct URMSService* RMSService; // 0x140(0x08)
};

// Class ShooterGame.RMSService
// Size: 0x38 (Inherited: 0x30)
struct URMSService : UObject {
	struct URiotGamesApiClient* RiotGamesApiClient; // 0x30(0x08)
};

// Class ShooterGame.RNetClient
// Size: 0x60 (Inherited: 0x30)
struct URNetClient : UObject {
	char pad_30[0x18]; // 0x30(0x18)
	enum class ERNetConnectionStatus ConnectionStatus; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct URNetQueryClient* QueryClient; // 0x50(0x08)
	struct URNetEventingClient* EventingClient; // 0x58(0x08)
};

// Class ShooterGame.RNetRequestSender
// Size: 0x30 (Inherited: 0x30)
struct URNetRequestSender : UInterface {
};

// Class ShooterGame.RNetQueryClient
// Size: 0x88 (Inherited: 0x30)
struct URNetQueryClient : UObject {
	char pad_30[0x48]; // 0x30(0x48)
	struct TScriptInterface<IRNetRequestSender> RequestSender; // 0x78(0x10)
};

// Class ShooterGame.RNetStub
// Size: 0x58 (Inherited: 0x30)
struct URNetStub : UObject {
	char pad_30[0x28]; // 0x30(0x28)
};

// Class ShooterGame.RNetVoiceManager
// Size: 0x408 (Inherited: 0x80)
struct URNetVoiceManager : UInitSystem {
	char pad_80[0x18]; // 0x80(0x18)
	struct FMulticastInlineDelegate OnVoiceSessionParticipantUpdated; // 0x98(0x10)
	struct FMulticastInlineDelegate OnVoiceSessionParticipantRemoved; // 0xa8(0x10)
	char pad_B8[0x18]; // 0xb8(0x18)
	struct FMulticastInlineDelegate OnCaptureDevicesUpdated; // 0xd0(0x10)
	struct FMulticastInlineDelegate OnRenderDevicesUpdated; // 0xe0(0x10)
	struct FMulticastInlineDelegate OnAudioPropertiesUpdated; // 0xf0(0x10)
	struct FMulticastInlineDelegate OnLoopbackEnabledChanged; // 0x100(0x10)
	struct FMulticastInlineDelegate OnSettingsSaved; // 0x110(0x10)
	struct FMulticastInlineDelegate OnChannelMuteChanged; // 0x120(0x10)
	char pad_130[0x170]; // 0x130(0x170)
	struct URNetVoiceService* VoiceService; // 0x2a0(0x08)
	struct FVoiceDevices CaptureDevices; // 0x2a8(0x10)
	struct FVoiceDevices RenderDevices; // 0x2b8(0x10)
	char pad_2C8[0x48]; // 0x2c8(0x48)
	struct FAudioProperties AudioProperties; // 0x310(0x04)
	char pad_314[0x4]; // 0x314(0x04)
	struct UConfigManager* ConfigManager; // 0x318(0x08)
	struct URSOManager* RSOManager; // 0x320(0x08)
	struct UGameFlowStateManager* GameFlowStateManager; // 0x328(0x08)
	char pad_330[0x8]; // 0x330(0x08)
	struct UAresSettingsManager* SettingsManager; // 0x338(0x08)
	struct UAresClientEvents* AresClientEvents; // 0x340(0x08)
	char pad_348[0xc0]; // 0x348(0xc0)
};

// Class ShooterGame.RNetVoiceService
// Size: 0x38 (Inherited: 0x30)
struct URNetVoiceService : UObject {
	struct URiotGamesApiClient* RiotGamesApiClient; // 0x30(0x08)
};

// Class ShooterGame.RoamingSettingsManager
// Size: 0xc8 (Inherited: 0x80)
struct URoamingSettingsManager : UInitSystem {
	struct FMulticastInlineDelegate SettingChanged; // 0x80(0x10)
	struct UConfigManager* ConfigManager; // 0x90(0x08)
	struct UAresSettingsManager* AresSettingsManager; // 0x98(0x08)
	struct URoamingSettingsService* RoamingSettingsService; // 0xa0(0x08)
	struct UNotificationManager* NotificationManager; // 0xa8(0x08)
	struct UPlayerSettingsTelemetry* PlayerSettingsTelemetry; // 0xb0(0x08)
	struct UActionBindingsManager* ActionBindingsManager; // 0xb8(0x08)
	char pad_C0[0x8]; // 0xc0(0x08)
};

// Class ShooterGame.RoamingSettingsService
// Size: 0x38 (Inherited: 0x30)
struct URoamingSettingsService : UObject {
	struct URiotGamesApiClient* RiotGamesApiClient; // 0x30(0x08)
};

// Class ShooterGame.RopeIdleAdditiveLowerBody3P
// Size: 0x38 (Inherited: 0x38)
struct URopeIdleAdditiveLowerBody3P : UAnimSlotLowerBody3P {
};

// Class ShooterGame.RopeIdleAdditiveUpperBody3P
// Size: 0x38 (Inherited: 0x38)
struct URopeIdleAdditiveUpperBody3P : UAnimSlotUpperBody3P {
};

// Class ShooterGame.RopeIdleLowerBody3P
// Size: 0x38 (Inherited: 0x38)
struct URopeIdleLowerBody3P : UAnimSlotLowerBody3P {
};

// Class ShooterGame.RopeIdleUpperBody3P
// Size: 0x38 (Inherited: 0x38)
struct URopeIdleUpperBody3P : UAnimSlotUpperBody3P {
};

// Class ShooterGame.RopeLookLowerBody3P
// Size: 0x38 (Inherited: 0x38)
struct URopeLookLowerBody3P : UAnimSlotLowerBody3P {
};

// Class ShooterGame.RopeLookUpperBody3P
// Size: 0x38 (Inherited: 0x38)
struct URopeLookUpperBody3P : UAnimSlotUpperBody3P {
};

// Class ShooterGame.RopeNavLowerBody3P
// Size: 0x38 (Inherited: 0x38)
struct URopeNavLowerBody3P : UAnimSlotLowerBody3P {
};

// Class ShooterGame.RopeNavUpperBody3P
// Size: 0x38 (Inherited: 0x38)
struct URopeNavUpperBody3P : UAnimSlotUpperBody3P {
};

// Class ShooterGame.RopeNavHorizontalAdditiveLowerBody3P
// Size: 0x38 (Inherited: 0x38)
struct URopeNavHorizontalAdditiveLowerBody3P : UAnimSlotLowerBody3P {
};

// Class ShooterGame.RopeNavHorizontalLowerBody3P
// Size: 0x38 (Inherited: 0x38)
struct URopeNavHorizontalLowerBody3P : UAnimSlotLowerBody3P {
};

// Class ShooterGame.RopeNavHorizontalUpperBody3P
// Size: 0x38 (Inherited: 0x38)
struct URopeNavHorizontalUpperBody3P : UAnimSlotUpperBody3P {
};

// Class ShooterGame.RopeNavVerticalAdditiveLowerBody3P
// Size: 0x38 (Inherited: 0x38)
struct URopeNavVerticalAdditiveLowerBody3P : UAnimSlotLowerBody3P {
};

// Class ShooterGame.RopeNavVerticalLowerBody3P
// Size: 0x38 (Inherited: 0x38)
struct URopeNavVerticalLowerBody3P : UAnimSlotLowerBody3P {
};

// Class ShooterGame.RopeNavVerticalUpperBody3P
// Size: 0x38 (Inherited: 0x38)
struct URopeNavVerticalUpperBody3P : UAnimSlotUpperBody3P {
};

// Class ShooterGame.RopeStopDownLowerBody3P
// Size: 0x38 (Inherited: 0x38)
struct URopeStopDownLowerBody3P : UAnimSlotLowerBody3P {
};

// Class ShooterGame.RopeStopDownUpperBody3P
// Size: 0x38 (Inherited: 0x38)
struct URopeStopDownUpperBody3P : UAnimSlotUpperBody3P {
};

// Class ShooterGame.RopeStopUpLowerBody3P
// Size: 0x38 (Inherited: 0x38)
struct URopeStopUpLowerBody3P : UAnimSlotLowerBody3P {
};

// Class ShooterGame.RopeStopUpUpperBody3P
// Size: 0x38 (Inherited: 0x38)
struct URopeStopUpUpperBody3P : UAnimSlotUpperBody3P {
};

// Class ShooterGame.RopeTurnLeftLowerBody3P
// Size: 0x38 (Inherited: 0x38)
struct URopeTurnLeftLowerBody3P : UAnimSlotLowerBody3P {
};

// Class ShooterGame.RopeTurnLeftUpperBody3P
// Size: 0x38 (Inherited: 0x38)
struct URopeTurnLeftUpperBody3P : UAnimSlotUpperBody3P {
};

// Class ShooterGame.RopeTurnRightLowerBody3P
// Size: 0x38 (Inherited: 0x38)
struct URopeTurnRightLowerBody3P : UAnimSlotLowerBody3P {
};

// Class ShooterGame.RopeTurnRightUpperBody3P
// Size: 0x38 (Inherited: 0x38)
struct URopeTurnRightUpperBody3P : UAnimSlotUpperBody3P {
};

// Class ShooterGame.RosterManager
// Size: 0x188 (Inherited: 0x80)
struct URosterManager : UInitSystem {
	struct FMulticastInlineDelegate OnRosterPlayerUpdated; // 0x80(0x10)
	struct FMulticastInlineDelegate OnRosterAdded; // 0x90(0x10)
	struct FMulticastInlineDelegate OnRosterRemoved; // 0xa0(0x10)
	struct UConfigManager* ConfigManager; // 0xb0(0x08)
	struct URSOManager* RSOManager; // 0xb8(0x08)
	struct UContentIndex* ContentIndex; // 0xc0(0x08)
	struct URMSManager* RMSManager; // 0xc8(0x08)
	struct UTextChatManagerV2* TextChatManager; // 0xd0(0x08)
	struct UPlayerAffinityManager* PlayerAffinityManager; // 0xd8(0x08)
	struct URosterService* RosterService; // 0xe0(0x08)
	char pad_E8[0xa0]; // 0xe8(0xa0)
};

// Class ShooterGame.RosterMatchModel
// Size: 0xf8 (Inherited: 0x30)
struct URosterMatchModel : UObject {
	struct UMapDataAsset* MapData; // 0x30(0x08)
	int32_t RoundsWon; // 0x38(0x04)
	int32_t RoundsLost; // 0x3c(0x04)
	bool bDidWin; // 0x40(0x01)
	bool bIsTournamentMatch; // 0x41(0x01)
	enum class ETournamentRound RoundType; // 0x42(0x01)
	char pad_43[0x1]; // 0x43(0x01)
	int32_t LeaguePoints; // 0x44(0x04)
	struct FTournamentRosterInfo EnemyInfo; // 0x48(0x80)
	struct FString TournamentID; // 0xc8(0x10)
	struct FString RosterID; // 0xd8(0x10)
	struct FString MatchID; // 0xe8(0x10)
};

// Class ShooterGame.RosterTournamentModel
// Size: 0x60 (Inherited: 0x30)
struct URosterTournamentModel : UObject {
	int32_t TotalTeams; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct FString TournamentID; // 0x38(0x10)
	int32_t MatchesWon; // 0x48(0x04)
	int32_t MatchesLost; // 0x4c(0x04)
	struct TArray<struct URosterMatchModel*> Matches; // 0x50(0x10)
};

// Class ShooterGame.RosterMatchHistoryModel
// Size: 0x88 (Inherited: 0x30)
struct URosterMatchHistoryModel : UObject {
	struct FMulticastInlineDelegate OnDidErrorChanged; // 0x30(0x10)
	struct FMulticastInlineDelegate OnIsLoadingChanged; // 0x40(0x10)
	struct FMulticastInlineDelegate OnEntriesAdded; // 0x50(0x10)
	struct TArray<struct UObject*> Entries; // 0x60(0x10)
	char pad_70[0x18]; // 0x70(0x18)
};

// Class ShooterGame.RosterMatchHistoryViewController
// Size: 0x90 (Inherited: 0x30)
struct URosterMatchHistoryViewController : UObject {
	struct UMatchHistoryManager* MatchHistoryManager; // 0x30(0x08)
	struct UContentIndex* ContentIndex; // 0x38(0x08)
	struct TMap<struct FString, struct URosterMatchHistoryModel*> Models; // 0x40(0x50)
};

// Class ShooterGame.RosterMatchHistoryScreen
// Size: 0x2d0 (Inherited: 0x2c8)
struct URosterMatchHistoryScreen : UUserWidget {
	struct URosterMatchHistoryViewController* ViewController; // 0x2c8(0x08)
};

// Class ShooterGame.RosterMemberModel
// Size: 0x78 (Inherited: 0x30)
struct URosterMemberModel : UObject {
	struct FString Puuid; // 0x30(0x10)
	struct FString RosterID; // 0x40(0x10)
	struct FDateTime DateJoined; // 0x50(0x08)
	struct FMulticastInlineDelegate OnRosterMemberRoleUpdated; // 0x58(0x10)
	struct UPlatformPlayer* PlatformPlayer; // 0x68(0x08)
	enum class ERosterMemberRole RoleEnum; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
};

// Class ShooterGame.RosterModel
// Size: 0x1e8 (Inherited: 0x30)
struct URosterModel : UObject {
	struct FMulticastInlineDelegate OnRosterModelMembersUpdated; // 0x30(0x10)
	struct FMulticastInlineDelegate OnRosterModelInvitesUpdated; // 0x40(0x10)
	struct FMulticastInlineDelegate OnRosterModelMetadataUpdated; // 0x50(0x10)
	struct FString ID; // 0x60(0x10)
	int64_t Version; // 0x70(0x08)
	struct FString Realm; // 0x78(0x10)
	struct FRosterAffinity AffinityInfo; // 0x88(0x20)
	struct FString Name; // 0xa8(0x10)
	struct FString Tag; // 0xb8(0x10)
	struct TMap<struct FString, struct FRosterLock> Locks; // 0xc8(0x50)
	struct TMap<struct FString, struct URosterMemberModel*> Members; // 0x118(0x50)
	struct TArray<struct FRosterInvite> Invites; // 0x168(0x10)
	struct FRosterMetadata MetaData; // 0x178(0x70)
};

// Class ShooterGame.RosterPlayerModel
// Size: 0xc8 (Inherited: 0x30)
struct URosterPlayerModel : UObject {
	struct FMulticastInlineDelegate OnInvitesReceived; // 0x30(0x10)
	struct FMulticastInlineDelegate OnInvitesRemoved; // 0x40(0x10)
	struct FString Puuid; // 0x50(0x10)
	int64_t Version; // 0x60(0x08)
	struct TMap<struct FString, struct FRosterInfo> Rosters; // 0x68(0x50)
	struct TArray<struct FRosterInvite> Invites; // 0xb8(0x10)
};

// Class ShooterGame.RosterService
// Size: 0x38 (Inherited: 0x30)
struct URosterService : UObject {
	struct UConfigManager* ConfigManager; // 0x30(0x08)
};

// Class ShooterGame.RosterViewController
// Size: 0x120 (Inherited: 0x80)
struct URosterViewController : UInitSystem {
	struct FMulticastInlineDelegate OnRosterPlayerModelUpdated; // 0x80(0x10)
	struct FMulticastInlineDelegate OnRosterModelsUpdated; // 0x90(0x10)
	struct TMap<struct FString, struct URosterModel*> RosterModels; // 0xa0(0x50)
	struct URosterPlayerModel* RosterPlayerModel; // 0xf0(0x08)
	struct URosterManager* RosterManager; // 0xf8(0x08)
	struct UConfigManager* ConfigManager; // 0x100(0x08)
	struct URSOManager* RSOManager; // 0x108(0x08)
	struct UPlatformPlayerManager* PlatformPlayerManager; // 0x110(0x08)
	struct UPartyManager* PartyManager; // 0x118(0x08)
};

// Class ShooterGame.RoundPersistenceComponent
// Size: 0x100 (Inherited: 0xe8)
struct URoundPersistenceComponent : UActorComponent {
	enum class ERoundPersistenceBehavior PersistBehavior; // 0xe8(0x01)
	bool bPersistedThisRound; // 0xe9(0x01)
	char pad_EA[0x6]; // 0xea(0x06)
	struct FMulticastInlineDelegate AuthOnPreDestroy; // 0xf0(0x10)
};

// Class ShooterGame.RoundRestoreManagerComponent
// Size: 0x180 (Inherited: 0xe8)
struct URoundRestoreManagerComponent : UActorComponent {
	struct FMulticastInlineDelegate OnRoundRestoreComplete; // 0xe8(0x10)
	char pad_F8[0x70]; // 0xf8(0x70)
	struct TArray<int32_t> SavedSnapshotIDs; // 0x168(0x10)
	char pad_178[0x8]; // 0x178(0x08)
};

// Class ShooterGame.RoundStartRewardSpawnPoint
// Size: 0x3e0 (Inherited: 0x3d0)
struct ARoundStartRewardSpawnPoint : AActor {
	struct UBombTeamComponent* TeamComponent; // 0x3d0(0x08)
	struct UTeamRoleComponent* RoleComponent; // 0x3d8(0x08)
};

// Class ShooterGame.RoundStateLogComponent
// Size: 0xf0 (Inherited: 0xe8)
struct URoundStateLogComponent : UActorComponent {
	char pad_E8[0x8]; // 0xe8(0x08)
};

// Class ShooterGame.RPCManager
// Size: 0x140 (Inherited: 0xe8)
struct URPCManager : UActorComponent {
	char pad_E8[0x58]; // 0xe8(0x58)
};

// Class ShooterGame.RSOManager
// Size: 0x378 (Inherited: 0x80)
struct URSOManager : UInitSystem {
	char pad_80[0xa8]; // 0x80(0xa8)
	struct URSOService* RSOService; // 0x128(0x08)
	struct FRSOToken RSOToken; // 0x130(0x18)
	struct FRSOUserInfo RSOUserInfo; // 0x148(0x48)
	struct FRSOToken RSOClientToken; // 0x190(0x18)
	struct FString RSOUserInfoToken; // 0x1a8(0x10)
	struct FUserInfoToken ParsedUserInfoToken; // 0x1b8(0x70)
	struct FRSOParsedIdToken ParsedIdToken; // 0x228(0x40)
	struct FEntitlementsToken RSOEntitlementsToken; // 0x268(0x20)
	char pad_288[0xf0]; // 0x288(0xf0)
};

// Class ShooterGame.RSOService
// Size: 0x38 (Inherited: 0x30)
struct URSOService : UObject {
	struct URiotGamesApiClient* RiotGamesApiClient; // 0x30(0x08)
};

// Class ShooterGame.RunAnimSlot1P
// Size: 0x38 (Inherited: 0x38)
struct URunAnimSlot1P : UAnimSlot1P {
};

// Class ShooterGame.RunAnimSlotGun1P
// Size: 0x38 (Inherited: 0x38)
struct URunAnimSlotGun1P : UAnimSlotGun1P {
};

// Class ShooterGame.RunLowerBody3P
// Size: 0x38 (Inherited: 0x38)
struct URunLowerBody3P : UAnimSlotLowerBody3P {
};

// Class ShooterGame.RunUpperBody3P
// Size: 0x38 (Inherited: 0x38)
struct URunUpperBody3P : UAnimSlotUpperBody3P {
};

// Class ShooterGame.ScalingScreenWidgetComponent
// Size: 0x6d0 (Inherited: 0x6b0)
struct UScalingScreenWidgetComponent : UWidgetComponent {
	float MinDistance; // 0x6b0(0x04)
	float MaxDistance; // 0x6b4(0x04)
	float ScaleAtMinDistance; // 0x6b8(0x04)
	float ScaleAtMaxDistance; // 0x6bc(0x04)
	char pad_6C0[0x10]; // 0x6c0(0x10)
};

// Class ShooterGame.ScopedAnimationCueSource
// Size: 0x30 (Inherited: 0x30)
struct UScopedAnimationCueSource : UInterface {
};

// Class ShooterGame.ScoreAndHistoryOverlay
// Size: 0x2c8 (Inherited: 0x2c8)
struct UScoreAndHistoryOverlay : UUserWidget {
};

// Class ShooterGame.ScoreboardContentWidget
// Size: 0x2e8 (Inherited: 0x2c8)
struct UScoreboardContentWidget : UUserWidget {
	struct UTextBlock* ToggleCursorBindingText; // 0x2c8(0x08)
	struct UGridPanel* AllyGrid; // 0x2d0(0x08)
	struct UGridPanel* EnemyGrid; // 0x2d8(0x08)
	struct UScoreAndHistoryOverlay* ScoreAndHistoryOverlay; // 0x2e0(0x08)
};

// Class ShooterGame.ScoreboardPlayerCardWidget
// Size: 0x370 (Inherited: 0x2c8)
struct UScoreboardPlayerCardWidget : UUserWidget {
	struct UBorder* AllyCardContainer; // 0x2c8(0x08)
	struct UImage* ArmorImage; // 0x2d0(0x08)
	struct UTextBlock* AssistsText; // 0x2d8(0x08)
	struct UImage* BestGunImage; // 0x2e0(0x08)
	struct UMenuAnchor* CharacterInfoAnchor; // 0x2e8(0x08)
	struct UButton* CharacterInfoButton; // 0x2f0(0x08)
	struct UTextBlock* CharacterName; // 0x2f8(0x08)
	struct UImage* CharacterPortrait; // 0x300(0x08)
	struct UUserWidget* CompetitiveTierIconSmall; // 0x308(0x08)
	struct UImage* CoreBGImage; // 0x310(0x08)
	struct UTextBlock* CurrentMoneyText; // 0x318(0x08)
	struct UTextBlock* DeathsText; // 0x320(0x08)
	struct UWidget* HasBomb; // 0x328(0x08)
	struct UProgressBar* HealthBar; // 0x330(0x08)
	struct UTextBlock* KillsText; // 0x338(0x08)
	struct UImage* MIAWidget; // 0x340(0x08)
	struct UWidget* MicContainer; // 0x348(0x08)
	struct UTextBlock* PingText; // 0x350(0x08)
	struct UWidget* PlayerNameWidget; // 0x358(0x08)
	struct UImage* SetDeadOverlay; // 0x360(0x08)
	struct UTextBlock* UltPointCount; // 0x368(0x08)
};

// Class ShooterGame.ScreenMessageElement
// Size: 0xe0 (Inherited: 0x58)
struct UScreenMessageElement : UAresHudElement {
	struct FVector2D MessageDrawOffset; // 0x58(0x08)
	enum class EAresDrawOrigin MessageDrawOrigin; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
	struct FAresHudFontParams MessageFontParams; // 0x68(0x70)
	enum class EAresHudTextExtentsMode MessageTextExtentsMode; // 0xd8(0x01)
	char pad_D9[0x7]; // 0xd9(0x07)
};

// Class ShooterGame.ScreenTransitionComponent
// Size: 0x128 (Inherited: 0xe8)
struct UScreenTransitionComponent : UActorComponent {
	struct FMulticastInlineDelegate OnScreenTransitionUpdated; // 0xe8(0x10)
	char pad_F8[0x18]; // 0xf8(0x18)
	struct TArray<struct FName> ActiveTransitions; // 0x110(0x10)
	char pad_120[0x4]; // 0x120(0x04)
	int32_t AuthSpectateRequestAck; // 0x124(0x04)
};

// Class ShooterGame.SeasonUIData
// Size: 0x90 (Inherited: 0x90)
struct USeasonUIData : UBaseContentUIData {
};

// Class ShooterGame.SeasonDataAsset
// Size: 0xc8 (Inherited: 0x50)
struct USeasonDataAsset : UAresBasePrimaryDataAsset {
	struct TSoftClassPtr<UObject> ParentSeason; // 0x50(0x30)
	enum class EAresSeasonType Type; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
	struct FDateTime StartTime; // 0x88(0x08)
	struct FDateTime EndTime; // 0x90(0x08)
	struct TSoftClassPtr<UObject> UIData; // 0x98(0x30)
};

// Class ShooterGame.SerialSequenceAnimationConductorNode
// Size: 0xf8 (Inherited: 0xa0)
struct USerialSequenceAnimationConductorNode : UIndexedSequenceAnimationConductorNodeBase {
	struct TArray<struct TScriptInterface<IAnimationConductorNode>> ChildList; // 0xa0(0x10)
	struct FAnimationConductorNodeSignalCondition ItemTerminationCondition; // 0xb0(0x14)
	struct FAnimationConductorNodeSignalCondition LastItemTerminationCondition; // 0xc4(0x14)
	struct TScriptInterface<IAnimationConductorNode> CurrentChild; // 0xd8(0x10)
	char pad_E8[0x10]; // 0xe8(0x10)
};

// Class ShooterGame.ServerMovementTimingComponent
// Size: 0x120 (Inherited: 0xe8)
struct UServerMovementTimingComponent : UActorComponent {
	struct FMulticastInlineDelegate OnFixedMoveTimeStepChange; // 0xe8(0x10)
	char pad_F8[0x20]; // 0xf8(0x20)
	struct UFixedMoveTimeStepManagerComponent* FixedMoveTimeStepManager; // 0x118(0x08)
};

// Class ShooterGame.ServerPerformanceMonitoringComponent
// Size: 0x118 (Inherited: 0x118)
struct UServerPerformanceMonitoringComponent : UBasePerformanceMonitoringComponent {
};

// Class ShooterGame.ServerPerRoundTelemetryComponent
// Size: 0x158 (Inherited: 0xe8)
struct UServerPerRoundTelemetryComponent : UActorComponent {
	char pad_E8[0x70]; // 0xe8(0x70)
};

// Class ShooterGame.ServerPlayerStateTelemetryComponent
// Size: 0x3c0 (Inherited: 0x100)
struct UServerPlayerStateTelemetryComponent : UBasePlayerStateTelemetryComponent {
	int64_t GameId; // 0x100(0x08)
	char pad_108[0x38]; // 0x108(0x38)
	struct FGameEventInventory TelemetryInventoryCache; // 0x140(0x148)
	bool bIsInventoryCacheInitialized; // 0x288(0x01)
	char pad_289[0xf]; // 0x289(0x0f)
	struct TArray<struct FInventoryChangeEvent> PendingInventoryChangeEvents; // 0x298(0x10)
	char pad_2A8[0x118]; // 0x2a8(0x118)
};

// Class ShooterGame.ServerRewindComponent
// Size: 0x130 (Inherited: 0x110)
struct UServerRewindComponent : URewindComponent {
	char pad_110[0xc]; // 0x110(0x0c)
	float CurrentRewindTime; // 0x11c(0x04)
	float CurrentJitterTime; // 0x120(0x04)
	float DebugCurrentRewindTargetTimestamp; // 0x124(0x04)
	bool PauseRewinding; // 0x128(0x01)
	char pad_129[0x7]; // 0x129(0x07)
};

// Class ShooterGame.ServerTeamVisibilityComponent
// Size: 0x138 (Inherited: 0xe8)
struct UServerTeamVisibilityComponent : UActorComponent {
	char pad_E8[0x50]; // 0xe8(0x50)
};

// Class ShooterGame.ServerVoteTelemetryComponent
// Size: 0xe8 (Inherited: 0xe8)
struct UServerVoteTelemetryComponent : UActorComponent {
};

// Class ShooterGame.ServiceTickerManager
// Size: 0x148 (Inherited: 0x80)
struct UServiceTickerManager : UInitSystem {
	struct FMulticastInlineDelegate OnTickerChanged; // 0x80(0x10)
	char pad_90[0x18]; // 0x90(0x18)
	struct UConfigManager* ConfigManager; // 0xa8(0x08)
	struct URiotProductManager* RiotProductManager; // 0xb0(0x08)
	struct URiotStatusService* RiotStatusService; // 0xb8(0x08)
	struct UPlatformSessionManager* SessionManager; // 0xc0(0x08)
	struct UContentManager* ContentManager; // 0xc8(0x08)
	struct UContentIndex* ContentIndex; // 0xd0(0x08)
	char pad_D8[0x8]; // 0xd8(0x08)
	struct FRiotStatus RiotStatus; // 0xe0(0x50)
	struct TArray<struct FTickerStatus> TickerStatuses; // 0x130(0x10)
	char pad_140[0x8]; // 0x140(0x08)
};

// Class ShooterGame.SessionService
// Size: 0x38 (Inherited: 0x30)
struct USessionService : UObject {
	struct UConfigManager* ConfigManager; // 0x30(0x08)
};

// Class ShooterGame.SettingsScreen
// Size: 0x2c8 (Inherited: 0x2c8)
struct USettingsScreen : UUserWidget {
};

// Class ShooterGame.TeamSocialSettingsContentBase
// Size: 0x318 (Inherited: 0x2c8)
struct UTeamSocialSettingsContentBase : UUserWidget {
	struct UVerticalBox* AllyContainer; // 0x2c8(0x08)
	struct UVerticalBox* EnemyContainer; // 0x2d0(0x08)
	struct UWidget* TeamVoiceHeader; // 0x2d8(0x08)
	struct UButton* MuteEnemyChatButton; // 0x2e0(0x08)
	struct UWidget* MuteEnemyChatCheckbox; // 0x2e8(0x08)
	struct UButton* MuteObserverChatButton; // 0x2f0(0x08)
	struct UWidget* MuteObserverChatCheckbox; // 0x2f8(0x08)
	struct UWidget* RemakeButton; // 0x300(0x08)
	struct UWidget* SurrenderButton; // 0x308(0x08)
	struct UWidget* TimeoutButton; // 0x310(0x08)
};

// Class ShooterGame.IndividualSocialSettingsContentBase
// Size: 0x330 (Inherited: 0x2c8)
struct UIndividualSocialSettingsContentBase : UUserWidget {
	struct UWidget* AcceptInviteButton; // 0x2c8(0x08)
	struct UWidget* AddFriendButton; // 0x2d0(0x08)
	struct UWidget* AddToPartyButton; // 0x2d8(0x08)
	struct UBorder* WidgetBorder; // 0x2e0(0x08)
	struct UImage* CharacterIcon; // 0x2e8(0x08)
	struct UTextBlock* CharacterName; // 0x2f0(0x08)
	struct UCheckBox* PingsMuteCheck; // 0x2f8(0x08)
	struct UWidget* PlayerNameWidget; // 0x300(0x08)
	struct UWidget* ReportButton; // 0x308(0x08)
	struct UCheckBox* TextMuteCheck; // 0x310(0x08)
	struct UCheckBox* VoiceMuteCheck; // 0x318(0x08)
	struct USlider* VolumeSetSlider; // 0x320(0x08)
	struct UTextBlock* VolumeText; // 0x328(0x08)
};

// Class ShooterGame.ShooterBlueprintLibrary
// Size: 0x30 (Inherited: 0x30)
struct UShooterBlueprintLibrary : UBlueprintFunctionLibrary {
};

// Class ShooterGame.ShooterCamera
// Size: 0x2f00 (Inherited: 0x2e50)
struct AShooterCamera : APlayerCameraManager {
	struct FMulticastInlineDelegate OnViewTargetChanged; // 0x2e50(0x10)
	struct FMulticastInlineDelegate OnAresCameraStyleChanged; // 0x2e60(0x10)
	struct FMulticastInlineDelegate OnAresCameraPerspectiveChanged; // 0x2e70(0x10)
	enum class EAresCameraPerspective AresCameraPerspective; // 0x2e80(0x01)
	char pad_2E81[0x3]; // 0x2e81(0x03)
	struct FRotator LastControlRotation; // 0x2e84(0x0c)
	struct FRotator DebugInputRotator; // 0x2e90(0x0c)
	float Camera3PTargetZoom; // 0x2e9c(0x04)
	bool bCamera3PRotateEnabled; // 0x2ea0(0x01)
	char pad_2EA1[0x7]; // 0x2ea1(0x07)
	struct USpringArmComponent* Camera3PSpringArm; // 0x2ea8(0x08)
	struct UCameraComponent* Camera3P; // 0x2eb0(0x08)
	struct FAresThidPersonDebugCameraSettings ThirdPersonDebugCameraSettings; // 0x2eb8(0x20)
	struct FSpectatorFocusObjectCameraSettings SpectatorFocusObjectCameraSettings; // 0x2ed8(0x10)
	bool bTargetViewModeActive; // 0x2ee8(0x01)
	char pad_2EE9[0x17]; // 0x2ee9(0x17)
};

// Class ShooterGame.ShooterCharacter
// Size: 0x1080 (Inherited: 0x670)
struct AShooterCharacter : ACharacter {
	char pad_670[0x28]; // 0x670(0x28)
	enum class ECachedTeamColor CachedTeamColor; // 0x698(0x01)
	char pad_699[0x3]; // 0x699(0x03)
	struct FName CachedTeamTheme; // 0x69c(0x0c)
	struct FColor CachedFresnelColor; // 0x6a8(0x04)
	float CachedFresnelOffset; // 0x6ac(0x04)
	float CachedFresnelIntensity; // 0x6b0(0x04)
	float CachedLocalFresnelOffset; // 0x6b4(0x04)
	float FresnelIntensity; // 0x6b8(0x04)
	float FresnelOffset; // 0x6bc(0x04)
	float OriginalFresnelIntensity; // 0x6c0(0x04)
	float OriginalFresnelOffset; // 0x6c4(0x04)
	struct FMulticastInlineDelegate OnCharacterPreDeath; // 0x6c8(0x10)
	struct FMulticastInlineDelegate OnCharacterDeath; // 0x6d8(0x10)
	struct FMulticastInlineDelegate OnAuthGotKill; // 0x6e8(0x10)
	struct FMulticastInlineDelegate OnAuthGenerateKillEffects; // 0x6f8(0x10)
	struct FMulticastInlineDelegate OnAuthTookDamage; // 0x708(0x10)
	char pad_718[0x18]; // 0x718(0x18)
	struct FMulticastInlineDelegate OnAuthMoved; // 0x730(0x10)
	struct FMulticastInlineDelegate AuthOnDealtDamageToCharacter; // 0x740(0x10)
	struct FMulticastInlineDelegate OnAuthUsedEquippable; // 0x750(0x10)
	struct FMulticastInlineDelegate OnMoveBlocked; // 0x760(0x10)
	char pad_770[0x28]; // 0x770(0x28)
	struct FMulticastInlineDelegate OnCharacterSpawnComplete; // 0x798(0x10)
	bool bIsPlayerCharacter; // 0x7a8(0x01)
	bool bWaitingToNotifyGameState; // 0x7a9(0x01)
	char pad_7AA[0x6]; // 0x7aa(0x06)
	struct FMulticastInlineDelegate OnInstigatorChanged; // 0x7b0(0x10)
	struct FMulticastInlineDelegate OnPossession; // 0x7c0(0x10)
	struct FMulticastInlineDelegate OnClientControllerChanged; // 0x7d0(0x10)
	struct FMulticastInlineDelegate OnCameraUpdated; // 0x7e0(0x10)
	bool bAIControlled; // 0x7f0(0x01)
	bool bCreatedWithReuseActorRespawnDisabled; // 0x7f1(0x01)
	char pad_7F2[0x2]; // 0x7f2(0x02)
	float TargetEyeHeightProportion; // 0x7f4(0x04)
	struct URoundPersistenceComponent* Persistence; // 0x7f8(0x08)
	struct UGamepadTuningDataAsset* GamepadTuningData; // 0x800(0x08)
	struct UAresAbilitySystemComponent* AbilitiesAndBuffs; // 0x808(0x08)
	enum class ENetRole AuthPrevRemoteRole; // 0x810(0x01)
	char pad_811[0x7]; // 0x811(0x07)
	struct TArray<struct TSoftClassPtr<UObject>> AdditionalTickingComponentAllowlist; // 0x818(0x10)
	char pad_828[0x18]; // 0x828(0x18)
	struct UShooterCharacterFogOfWarComponent* FogOfWarComponent; // 0x840(0x08)
	struct UShooterCharacterVisionComponent* VisionComponent; // 0x848(0x08)
	struct UFootstepsComponent* FootstepsComponent; // 0x850(0x08)
	struct UCalloutRegionTrackingComponent* CalloutRegionTrackingComponent; // 0x858(0x08)
	struct UDynamicBlockingComponent* DynamicBlocking; // 0x860(0x08)
	char pad_868[0x48]; // 0x868(0x48)
	struct FShooterGameTimeMarker AuthLastPlayerInputTimestamp; // 0x8b0(0x0c)
	char pad_8BC[0x4]; // 0x8bc(0x04)
	struct FMulticastInlineDelegate OnStartTouchWidgets; // 0x8c0(0x10)
	struct FMulticastInlineDelegate OnStopTouchWidgets; // 0x8d0(0x10)
	struct UCharacterAbilityWidget* AbilityHUDWidget; // 0x8e0(0x08)
	struct UCharacterAbilityWidget* AbilityHUDWidgetTemplate; // 0x8e8(0x08)
	struct UAresInputStateComponent* InputStateComponent; // 0x8f0(0x08)
	struct UNetworkStreamComponent* NetworkStreamComponent; // 0x8f8(0x08)
	struct TArray<struct FStartingEquippable> StartingEquippables; // 0x900(0x10)
	bool bCanReceiveModeSpecificInventory; // 0x910(0x01)
	char pad_911[0x7]; // 0x911(0x07)
	struct TArray<struct AAresEquippable*> StartingEquippableClasses; // 0x918(0x10)
	struct TArray<struct UAresPurchasable*> StartingPurchasableAssets; // 0x928(0x10)
	struct FMulticastInlineDelegate AuthOnCharacterResurrected; // 0x938(0x10)
	struct UAresInventory* Inventory; // 0x948(0x08)
	bool bShouldTickInventory; // 0x950(0x01)
	char pad_951[0x1f]; // 0x951(0x1f)
	struct FMulticastInlineDelegate AuthOnResistedDeath; // 0x970(0x10)
	char pad_980[0x28]; // 0x980(0x28)
	struct UDamageableComponent* DamageHandler; // 0x9a8(0x08)
	struct FMulticastInlineDelegate OnFocusProjectileChanged; // 0x9b0(0x10)
	struct FMulticastInlineDelegate OnFocusProjectileInvalidated; // 0x9c0(0x10)
	struct TArray<struct TWeakObjectPtr<struct AActor>> FocusProjectiles; // 0x9d0(0x10)
	struct UShooterCharacterDeathReactionComponent* DeathReactionComponent; // 0x9e0(0x08)
	struct FMulticastInlineDelegate OnCollisionChangedFromDeath; // 0x9e8(0x10)
	struct AEffectContainer* DeathEffectContainer; // 0x9f8(0x08)
	struct TArray<enum class ECollisionChannel> ChannelsToIgnoreWhenIntangible; // 0xa00(0x10)
	enum class ECollisionChannel IntangibleObjectType; // 0xa10(0x01)
	struct FCollisionResponseContainer TangibleCapsuleResponse; // 0xa11(0x20)
	struct FCollisionResponseContainer TangibleMeshResponse; // 0xa31(0x20)
	struct FCollisionResponseContainer IntangibleCapsuleResponse; // 0xa51(0x20)
	struct FCollisionResponseContainer IntangibleMeshResponse; // 0xa71(0x20)
	char pad_A91[0x7]; // 0xa91(0x07)
	struct TMap<struct TWeakObjectPtr<struct UAnimationAsset>, struct TWeakObjectPtr<struct AAresEquippable>> AnimationAssociatedEquippables; // 0xa98(0x50)
	char pad_AE8[0x8]; // 0xae8(0x08)
	struct UAkAudioEvent* HitConfirmEvent; // 0xaf0(0x08)
	struct UAkAudioEvent* HitConfirmHeadshotEvent; // 0xaf8(0x08)
	float TeamVisionBlindThreshold; // 0xb00(0x04)
	bool bCharacterMakesBloodSplatters; // 0xb04(0x01)
	bool bCharacterHasNavPointAttached; // 0xb05(0x01)
	char pad_B06[0x2]; // 0xb06(0x02)
	struct UNavPointComponent* NavpointComponentType; // 0xb08(0x08)
	struct FMulticastInlineDelegate OnTeamChanged; // 0xb10(0x10)
	struct FMulticastInlineDelegate OnDeathCameraComplete; // 0xb20(0x10)
	float CameraShakeDamageScalar; // 0xb30(0x04)
	char pad_B34[0x4]; // 0xb34(0x04)
	struct FMulticastInlineDelegate OnUpdateCharacterMeshes; // 0xb38(0x10)
	struct FMulticastInlineDelegate OnPerspectiveChanged; // 0xb48(0x10)
	struct FMulticastInlineDelegate OnCharacterLanded; // 0xb58(0x10)
	char pad_B68[0x10]; // 0xb68(0x10)
	struct FMulticastInlineDelegate OnJumpKeyPressed; // 0xb78(0x10)
	struct FMulticastInlineDelegate OnJumpKeyReleased; // 0xb88(0x10)
	struct TArray<struct FCharacterClassSlotModifer> CharacterClassSlotModifiers; // 0xb98(0x10)
	struct TArray<struct FCharacterClassCostModifer> CharacterClassCostModifiers; // 0xba8(0x10)
	struct TArray<struct TSoftClassPtr<UObject>> CharacterClassExcludedPurchasableAssets; // 0xbb8(0x10)
	int32_t TotalPurchasablesModifier; // 0xbc8(0x04)
	char pad_BCC[0x4]; // 0xbcc(0x04)
	struct TArray<struct FCharacterClassDamageTypeModifer> CharacterClassDamageTypeModifiers; // 0xbd0(0x10)
	struct USkeletalMeshComponent* Mesh1P; // 0xbe0(0x08)
	struct USkeletalMeshComponent* MeshOverlay1P; // 0xbe8(0x08)
	struct USkeletalMeshComponent* MeshCosmetic3P; // 0xbf0(0x08)
	bool WasEquippableWantsToHideFirstPersonMesh; // 0xbf8(0x01)
	bool WasControllerWantsToHideFirstPersonMesh; // 0xbf9(0x01)
	bool WasInvisible; // 0xbfa(0x01)
	bool WasIntangible; // 0xbfb(0x01)
	bool WasFirstPerson; // 0xbfc(0x01)
	bool WasInvisibleEquippables; // 0xbfd(0x01)
	bool WasInvisible1P; // 0xbfe(0x01)
	bool WasAlly; // 0xbff(0x01)
	bool bMeshesDirtyInitiallyComputed; // 0xc00(0x01)
	bool bIsLeftHanded; // 0xc01(0x01)
	bool InitialPossessionOccured; // 0xc02(0x01)
	char pad_C03[0x1]; // 0xc03(0x01)
	float JumpFallDistanceRequiredForLandingSound; // 0xc04(0x04)
	struct UCurveFloat* JumpFallDamageCurve; // 0xc08(0x08)
	struct UDamageType* JumpFallDamageTypeAsset; // 0xc10(0x08)
	char bAlternateMovementHeld : 1; // 0xc18(0x01)
	char bCrouchHeld : 1; // 0xc18(0x01)
	char pad_C18_2 : 6; // 0xc18(0x01)
	bool bMoveSyncCrouchHeld; // 0xc19(0x01)
	char bIsJumpKeyHeld : 1; // 0xc1a(0x01)
	char pad_C1A_1 : 7; // 0xc1a(0x01)
	char pad_C1B[0x1]; // 0xc1b(0x01)
	float LastJumpKeyDownTimestamp; // 0xc1c(0x04)
	float MitigatedFallDistance; // 0xc20(0x04)
	char pad_C24[0x4]; // 0xc24(0x04)
	struct TArray<struct UMaterialInstanceDynamic*> Mesh3PMIDs; // 0xc28(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> Mesh1PMIDs; // 0xc38(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> Mesh1POverlayMIDs; // 0xc48(0x10)
	struct AGameObject* DropOnDeathObjectTemplateAsset; // 0xc58(0x08)
	bool bDropObjectWithKillersTeam; // 0xc60(0x01)
	char pad_C61[0x7]; // 0xc61(0x07)
	struct UAkAudioEvent* DeathEvent; // 0xc68(0x08)
	struct UParticleSystem* RespawnFX; // 0xc70(0x08)
	struct UAkAudioEvent* RespawnEvent; // 0xc78(0x08)
	struct UAkAudioEvent* TargetingEvent; // 0xc80(0x08)
	float CorpseLifetime; // 0xc88(0x04)
	char pad_C8C[0x24]; // 0xc8c(0x24)
	float MinimumTimeBetweenCameraHitRolls; // 0xcb0(0x04)
	float TimeOfLastCameraHitRoll; // 0xcb4(0x04)
	float AddedEyeHeight; // 0xcb8(0x04)
	float StandingEyeOffset; // 0xcbc(0x04)
	float CrouchingEyeOffset; // 0xcc0(0x04)
	char pad_CC4[0x4]; // 0xcc4(0x04)
	struct FMulticastInlineDelegate OnCausedDamageResponse; // 0xcc8(0x10)
	struct FMulticastInlineDelegate OnAboutToFireProjectiles; // 0xcd8(0x10)
	struct FMulticastInlineDelegate OnFiredProjectiles; // 0xce8(0x10)
	struct FMulticastInlineDelegate OnFiredProjectilesEx; // 0xcf8(0x10)
	struct FMulticastInlineDelegate OnAuthFallingOutOfWorld; // 0xd08(0x10)
	struct FMulticastInlineDelegate OnTeleported; // 0xd18(0x10)
	struct UForceModuleManagerComponent* ForceModuleManager; // 0xd28(0x08)
	struct UStealthComponent* StealthComponent; // 0xd30(0x08)
	struct FMulticastInlineDelegate OnInventoryRestored; // 0xd38(0x10)
	float MaxShield; // 0xd48(0x04)
	float MaxOvershield; // 0xd4c(0x04)
	float ShieldDegenerationPerSecond; // 0xd50(0x04)
	float CrouchTimeSeconds; // 0xd54(0x04)
	float OverrideCrouchTimeSeconds; // 0xd58(0x04)
	float CrouchCompressionAmount; // 0xd5c(0x04)
	bool bIsStuckUncrouching; // 0xd60(0x01)
	char pad_D61[0x3]; // 0xd61(0x03)
	float CharacterScale; // 0xd64(0x04)
	struct FCharacterScaleData CharacterScaleData; // 0xd68(0x18)
	struct TWeakObjectPtr<struct AShooterCharacter> ScavengableCharacter; // 0xd80(0x08)
	struct FRotator FacingControlRotation; // 0xd88(0x0c)
	char pad_D94[0x4]; // 0xd94(0x04)
	struct FPurchasableList CharacterPurchasables; // 0xd98(0x10)
	struct TArray<struct UAresPurchasable*> PurchasableClassAssets; // 0xda8(0x10)
	int32_t NumPointsNeededForUltimate; // 0xdb8(0x04)
	int32_t DesignPlaytestNumPointsNeededForUltimate; // 0xdbc(0x04)
	struct TArray<struct FName> HeadDamageBoneNames; // 0xdc0(0x10)
	struct TArray<struct FName> LegDamageBoneNames; // 0xdd0(0x10)
	enum class CharacterRange OptimalRange; // 0xde0(0x01)
	char pad_DE1[0x3]; // 0xde1(0x03)
	float AimPunchMovementErrorThreshold; // 0xde4(0x04)
	struct UMaterialInterface* Baked3PMaterial; // 0xde8(0x08)
	struct UMaterialInterface* Baked1PMaterial; // 0xdf0(0x08)
	bool bIsTornOff; // 0xdf8(0x01)
	char pad_DF9[0x7]; // 0xdf9(0x07)
	struct UAresHitReactions* DeathReactionTemplateAsset; // 0xe00(0x08)
	struct UAresHitReactions* DeathReactionObject; // 0xe08(0x08)
	struct UAresHitReactions* AltDeathReactionTemplateAsset; // 0xe10(0x08)
	struct UAresHitReactions* AltDeathReactionObject; // 0xe18(0x08)
	float DeathAwakeTime; // 0xe20(0x04)
	char pad_E24[0x4]; // 0xe24(0x04)
	float DeathClothSettleTime; // 0xe28(0x04)
	char pad_E2C[0xc]; // 0xe2c(0x0c)
	struct FMulticastInlineDelegate OnBecomeViewTarget; // 0xe38(0x10)
	struct FMulticastInlineDelegate OnEndViewTarget; // 0xe48(0x10)
	struct UParticleSystemComponent* AllyIconParticleSystem; // 0xe58(0x08)
	struct FVector OldCachedLocation; // 0xe60(0x0c)
	char pad_E6C[0x4]; // 0xe6c(0x04)
	struct UCombatReportTrackingConfigComponent* CombatReportTrackingConfig; // 0xe70(0x08)
	struct UReplicationSleepComponent* ReplicationSleepComponent; // 0xe78(0x08)
	char pad_E80[0x4]; // 0xe80(0x04)
	struct FAres3PCameraSettings Camera3PSettings; // 0xe84(0x1c)
	struct UTexture* NonPlayerCharacterIcon; // 0xea0(0x08)
	enum class EShooterCharacterCameraState CameraState; // 0xea8(0x01)
	char pad_EA9[0x7]; // 0xea9(0x07)
	struct UCameraComponent* FollowRecoilCameraComponent; // 0xeb0(0x08)
	struct UCameraComponent* CustomActiveCameraComponent; // 0xeb8(0x08)
	bool bUseDeathCameraSpringArm; // 0xec0(0x01)
	char pad_EC1[0x7]; // 0xec1(0x07)
	struct USpringArmComponent* DeathCameraSpringArm; // 0xec8(0x08)
	struct UCameraComponent* DeathCameraComponent; // 0xed0(0x08)
	enum class EShooterCharacterDebugCameraMode DebugCameraMode; // 0xed8(0x01)
	char pad_ED9[0x7]; // 0xed9(0x07)
	struct FAresDeathCameraSettings DeathCameraSettings; // 0xee0(0x40)
	char pad_F20[0x5c]; // 0xf20(0x5c)
	struct TWeakObjectPtr<struct UCharacterDataAsset> DataAsset; // 0xf7c(0x08)
	char pad_F84[0x24]; // 0xf84(0x24)
	struct UServerRewindComponent* ServerRewindComponent; // 0xfa8(0x08)
	struct UTransformRewinderComponent* TransformRewinderComponent; // 0xfb0(0x08)
	struct USkeletalPoseRewinderComponent* SkeletalPoseRewinderComponent; // 0xfb8(0x08)
	char pad_FC0[0x1]; // 0xfc0(0x01)
	bool bIsForced1PTextureStreamingEnabled; // 0xfc1(0x01)
	char pad_FC2[0x6]; // 0xfc2(0x06)
	struct UAresGameplayBuff* DisconnectedBuff; // 0xfc8(0x08)
	struct FMulticastInlineDelegate OnDisconnectedCharacterDestroyed; // 0xfd0(0x10)
	bool bNeedsEnemyHitRegInfo; // 0xfe0(0x01)
	char pad_FE1[0x3]; // 0xfe1(0x03)
	float GamepadBaseTurnRate; // 0xfe4(0x04)
	float GamepadBaseLookUpRate; // 0xfe8(0x04)
	char pad_FEC[0x10]; // 0xfec(0x10)
	int32_t NumResetsForRespawn; // 0xffc(0x04)
	char pad_1000[0x4]; // 0x1000(0x04)
	struct FDeadAndSettledRespawnData DeadAndSettledRespawnData; // 0x1004(0x04)
	struct FDefaultSkeletalMeshInfo Mesh1PDefaultSkeletalMeshInfo; // 0x1008(0x18)
	struct FDefaultSkeletalMeshInfo MeshOverlay1PDefaultSkeletalMeshInfo; // 0x1020(0x18)
	struct FDefaultSkeletalMeshInfo MeshCosmetic3PDefaultSkeletalMeshInfo; // 0x1038(0x18)
	struct FDefaultSkeletalMeshInfo CurMeshDefaultSkeletalMeshInfo; // 0x1050(0x18)
	struct TArray<struct UPrimitiveComponent*> DefaultPrimitiveComponents; // 0x1068(0x10)
	char pad_1078[0x8]; // 0x1078(0x08)
};

// Class ShooterGame.ShooterCharacterAnimInstance
// Size: 0xe40 (Inherited: 0x300)
struct UShooterCharacterAnimInstance : UAnimInstance {
	struct UAnimationStateComponent* AnimationStateComponent; // 0x300(0x08)
	struct USplitBodyRotationComponent* SplitBodyRotationComponent; // 0x308(0x08)
	struct USplitBodyRotationGroundComponent* SplitBodyRotationGroundComponent; // 0x310(0x08)
	struct USplitBodyRotationRopeComponent* SplitBodyRotationRopeComponent; // 0x318(0x08)
	struct FAnimationStateParams AnimationStateParams; // 0x320(0x1d0)
	struct FAnimSequenceSlotArray Idle1PSlotArray; // 0x4f0(0x20)
	struct FAnimSequenceSlotArray IdleAdd1PSlotArray; // 0x510(0x20)
	struct FAnimSequenceSlotArray Disabled1PSlotArray; // 0x530(0x20)
	struct FAnimSequenceSlotArray Run1PSlotArray; // 0x550(0x20)
	struct FAnimSequenceSlotArray Walk1PSlotArray; // 0x570(0x20)
	struct FAnimSequenceSlotArray Jump1PSlotArray; // 0x590(0x20)
	struct FAnimSequenceSlotArray JumpLand1PSlotArray; // 0x5b0(0x20)
	struct FAnimSequenceSlotArray Crouch1PSlotArray; // 0x5d0(0x20)
	struct FAnimSequenceSlotArray CrouchIdle1PSlotArray; // 0x5f0(0x20)
	struct FAnimSequenceSlotArray CrouchWalk1PSlotArray; // 0x610(0x20)
	struct FAnimSequenceSlotArray UnCrouch1PSlotArray; // 0x630(0x20)
	struct FAimOffsetBlendspaceSlotArray Primary1PAimOffsets; // 0x650(0x20)
	struct FAimOffsetBlendspaceSlotArray Secondary1PAimOffsets; // 0x670(0x20)
	struct FAnimSequenceSlotArray IdleBaseUpperBody3PSlotArray; // 0x690(0x20)
	struct FAnimSequenceSlotArray IdleUpperBody3PSlotArray; // 0x6b0(0x20)
	struct FBlendspaceSlotArray RunUpperBody3PSlotArray; // 0x6d0(0x20)
	struct FAnimSequenceSlotArray JumpUpperBody3PSlotArray; // 0x6f0(0x20)
	struct FAnimSequenceSlotArray JumpLandUpperBody3PSlotArray; // 0x710(0x20)
	struct FAnimSequenceSlotArray JumpLandAddUpperBody3PSlotArray; // 0x730(0x20)
	struct FAnimSequenceSlotArray CrouchUpperBody3PSlotArray; // 0x750(0x20)
	struct FBlendspaceSlotArray CrouchWalkUpperBody3PSlotArray; // 0x770(0x20)
	struct FAnimSequenceSlotArray CrouchFallUpperBody3PSlotArray; // 0x790(0x20)
	struct FAnimSequenceSlotArray FallUpperBody3PSlotArray; // 0x7b0(0x20)
	struct FAnimSequenceSlotArray RightGripUpperBody3PSlotArray; // 0x7d0(0x20)
	struct FAnimSequenceSlotArray LeftGripUpperBody3PSlotArray; // 0x7f0(0x20)
	struct FAnimSequenceSlotArray StopUpperBody3PSlotArray; // 0x810(0x20)
	struct FAnimSequenceSlotArray RopeIdleUpperBody3PSlotArray; // 0x830(0x20)
	struct FAnimSequenceSlotArray RopeIdleAddUpperBody3PSlotArray; // 0x850(0x20)
	struct FBlendspaceSlotArray RopeLookUpperBody3PSlotArray; // 0x870(0x20)
	struct FBlendspace1DSlotArray RopeTurnLeftUpperBody3PSlotArray; // 0x890(0x20)
	struct FBlendspace1DSlotArray RopeTurnRightUpperBody3PSlotArray; // 0x8b0(0x20)
	struct FBlendspace1DSlotArray RopeNavUpperBody3PSlotArray; // 0x8d0(0x20)
	struct FBlendspace1DSlotArray RopeNavHorizontalUpperBody3PSlotArray; // 0x8f0(0x20)
	struct FBlendspace1DSlotArray RopeNavVerticalUpperBody3PSlotArray; // 0x910(0x20)
	struct FAnimSequenceSlotArray RopeStopUpUpperBody3PSlotArray; // 0x930(0x20)
	struct FAnimSequenceSlotArray RopeStopDownUpperBody3PSlotArray; // 0x950(0x20)
	struct FAnimSequenceSlotArray IdleLowerBody3PSlotArray; // 0x970(0x20)
	struct FBlendspace1DSlotArray TurnLeftLowerBody3PSlotArray; // 0x990(0x20)
	struct FBlendspace1DSlotArray TurnRightLowerBody3PSlotArray; // 0x9b0(0x20)
	struct FBlendspaceSlotArray RunLowerBody3PSlotArray; // 0x9d0(0x20)
	struct FBlendspaceSlotArray JumpLowerBody3PSlotArray; // 0x9f0(0x20)
	struct FAnimSequenceSlotArray FallLowerBody3PSlotArray; // 0xa10(0x20)
	struct FAnimSequenceSlotArray GlideLowerBody3PSlotArray; // 0xa30(0x20)
	struct FAnimSequenceSlotArray JumpLandLowerBody3PSlotArray; // 0xa50(0x20)
	struct FAnimSequenceSlotArray JumpLandAddLowerBody3PSlotArray; // 0xa70(0x20)
	struct FAnimSequenceSlotArray CrouchLowerBody3PSlotArray; // 0xa90(0x20)
	struct FBlendspace1DSlotArray CrouchTurnLeftLowerBody3PSlotArray; // 0xab0(0x20)
	struct FBlendspace1DSlotArray CrouchTurnRightLowerBody3PSlotArray; // 0xad0(0x20)
	struct FBlendspaceSlotArray CrouchWalkLowerBody3PSlotArray; // 0xaf0(0x20)
	struct FAnimSequenceSlotArray StopLowerBody3PSlotArray; // 0xb10(0x20)
	struct FAnimSequenceSlotArray RopeIdleLowerBody3PSlotArray; // 0xb30(0x20)
	struct FAnimSequenceSlotArray RopeIdleAddLowerBody3PSlotArray; // 0xb50(0x20)
	struct FBlendspaceSlotArray RopeLookLowerBody3PSlotArray; // 0xb70(0x20)
	struct FBlendspace1DSlotArray RopeTurnLeftLowerBody3PSlotArray; // 0xb90(0x20)
	struct FBlendspace1DSlotArray RopeTurnRightLowerBody3PSlotArray; // 0xbb0(0x20)
	struct FBlendspace1DSlotArray RopeNavLowerBody3PSlotArray; // 0xbd0(0x20)
	struct FBlendspace1DSlotArray RopeNavHorizontalLowerBody3PSlotArray; // 0xbf0(0x20)
	struct FAnimSequenceSlotArray RopeNavHorizontalAddLowerBody3PSlotArray; // 0xc10(0x20)
	struct FBlendspace1DSlotArray RopeNavVerticalLowerBody3PSlotArray; // 0xc30(0x20)
	struct FAnimSequenceSlotArray RopeNavVerticalAddLowerBody3PSlotArray; // 0xc50(0x20)
	struct FAnimSequenceSlotArray RopeStopUpLowerBody3PSlotArray; // 0xc70(0x20)
	struct FAnimSequenceSlotArray RopeStopDownLowerBody3PSlotArray; // 0xc90(0x20)
	struct FAimOffsetBlendspaceSlotArray UpperBodyAimOffsets; // 0xcb0(0x20)
	struct FAimOffsetBlendspaceSlotArray LowerBodyAimOffsets; // 0xcd0(0x20)
	struct FBlendspaceSlotArray HitReactions3PSlotArray; // 0xcf0(0x20)
	struct UAnimSequence* FaceAiming3PSlot; // 0xd10(0x08)
	struct UAnimSequence* FaceAimFiring3PSlot; // 0xd18(0x08)
	struct UAnimSequence* FaceDead3PSlot; // 0xd20(0x08)
	struct UAnimSequence* FaceFiring3PSlot; // 0xd28(0x08)
	struct UAnimSequence* FaceHit3PSlot; // 0xd30(0x08)
	struct UAnimSequence* FaceIdle3PSlot; // 0xd38(0x08)
	struct UAnimSequence* FaceMeleeAttacking3PSlot; // 0xd40(0x08)
	struct UAnimSequence* FaceFidget3PSlot; // 0xd48(0x08)
	bool bResetFaceFidgetTimers; // 0xd50(0x01)
	char pad_D51[0x3]; // 0xd51(0x03)
	struct FBoneTransformAim3P BoneTransformAim3P; // 0xd54(0x74)
	bool HasAnimationStateComponent; // 0xdc8(0x01)
	char pad_DC9[0x3]; // 0xdc9(0x03)
	struct FVector AccumulatedRootMotion; // 0xdcc(0x0c)
	float StartAccumulationTimestamp; // 0xdd8(0x04)
	bool bHasAccumulatedRootMotion; // 0xddc(0x01)
	char pad_DDD[0x63]; // 0xddd(0x63)
};

// Class ShooterGame.ShooterCharacterAnimInstanceReplicationComponent
// Size: 0xf8 (Inherited: 0xe8)
struct UShooterCharacterAnimInstanceReplicationComponent : UActorComponent {
	struct TArray<struct FPendingAnimUpdate> PendingAnimUpdates; // 0xe8(0x10)
};

// Class ShooterGame.ShooterCharacterDeathReactionComponent
// Size: 0x168 (Inherited: 0xe8)
struct UShooterCharacterDeathReactionComponent : UActorComponent {
	char pad_E8[0x8]; // 0xe8(0x08)
	struct FMulticastInlineDelegate OnSelectDeathReaction; // 0xf0(0x10)
	struct TArray<struct FBodySectionEntry> BodySectionInfo; // 0x100(0x10)
	struct AEffectContainer* DeathMontageEffect; // 0x110(0x08)
	struct UForceModule* DeathForceModule; // 0x118(0x08)
	struct AEffectContainer* DeathMontageEffectOverride; // 0x120(0x08)
	struct UObject* DeathMontageEffectOverrideContext; // 0x128(0x08)
	bool bAllowDeathMontageEffectOverride; // 0x130(0x01)
	char pad_131[0x3]; // 0x131(0x03)
	float CorpsePerchRadius; // 0x134(0x04)
	float CorrectionAngleTotalLerpTime; // 0x138(0x04)
	char pad_13C[0x4]; // 0x13c(0x04)
	struct UAnimMontage* DeathAnimMontage; // 0x140(0x08)
	float InitialActorYaw; // 0x148(0x04)
	float TargetActorYaw; // 0x14c(0x04)
	float CorrectionAngleLerpTime; // 0x150(0x04)
	char pad_154[0x14]; // 0x154(0x14)
};

// Class ShooterGame.ShooterCharacterDebugComponent
// Size: 0x2e0 (Inherited: 0xe8)
struct UShooterCharacterDebugComponent : UActorComponent {
	struct TSet<struct AShooterPlayerController*> DebugCharacterNetworkingWatchingControllers; // 0xe8(0x50)
	char pad_138[0x50]; // 0x138(0x50)
	struct TArray<struct AAresEquippable*> DebugWatchEquippables; // 0x188(0x10)
	struct FDebugServerHitRegTuning DebugServerHitRegTuning; // 0x198(0x1c)
	struct FDebugProjectileFiringTuning DebugProjectileFiringTuning; // 0x1b4(0x10)
	float AutoFireTimeInterval; // 0x1c4(0x04)
	float AutoFireCooldown; // 0x1c8(0x04)
	bool bAutoFireHold; // 0x1cc(0x01)
	bool bAutoFireHoldPrevious; // 0x1cd(0x01)
	bool bAutoWalkHold; // 0x1ce(0x01)
	bool bAutoWalkHoldPrevious; // 0x1cf(0x01)
	bool bAutoJumpRepeatedly; // 0x1d0(0x01)
	bool bJumpIsHeld; // 0x1d1(0x01)
	char pad_1D2[0x2]; // 0x1d2(0x02)
	float JumpRepeatedlyLastJumpTime; // 0x1d4(0x04)
	char pad_1D8[0x8]; // 0x1d8(0x08)
	bool bAutoCrouchHold; // 0x1e0(0x01)
	bool bAutoCrouchHoldPrevious; // 0x1e1(0x01)
	enum class EAresItemSlot AutoSwapEquippable; // 0x1e2(0x01)
	char pad_1E3[0x2d]; // 0x1e3(0x2d)
	int32_t HitRegHistoryIndex; // 0x210(0x04)
	float LastTimestampOfConfirmedHit; // 0x214(0x04)
	char pad_218[0x80]; // 0x218(0x80)
	struct TArray<struct FDebugPruneComplexRewindEntry> DebugPruneComplexRewindEntries; // 0x298(0x10)
	struct TArray<struct FDebugProjectileTargetCheckingEntry> DebugProjectileTargetCheckingEntries; // 0x2a8(0x10)
	struct TArray<struct FDebugProjectileFireSnapshot> ClientDebugProjectileFireSnapshots; // 0x2b8(0x10)
	struct TArray<struct FDebugProjectileFireSnapshot> AuthDebugProjectileFireSnapshots; // 0x2c8(0x10)
	char pad_2D8[0x8]; // 0x2d8(0x08)
};

// Class ShooterGame.ShooterCharacterFogOfWarComponent
// Size: 0x348 (Inherited: 0x320)
struct UShooterCharacterFogOfWarComponent : UFogOfWarComponent {
	float JumpVelocityContribution; // 0x320(0x04)
	float MaxSpeedContribution; // 0x324(0x04)
	float MaxSpeed; // 0x328(0x04)
	float InitialJumpVelocity; // 0x32c(0x04)
	bool bCachedMaxSpeed; // 0x330(0x01)
	bool bCachedJumpVelocity; // 0x331(0x01)
	char pad_332[0x6]; // 0x332(0x06)
	struct AShooterCharacter* OwnerCharacter; // 0x338(0x08)
	struct UBaseTeamComponent* CachedTeamComponent; // 0x340(0x08)
};

// Class ShooterGame.ShooterCharacterHitRegDebugComponent
// Size: 0x1a8 (Inherited: 0xe8)
struct UShooterCharacterHitRegDebugComponent : UActorComponent {
	char pad_E8[0x78]; // 0xe8(0x78)
	struct TArray<struct FNetworkedClientShotResult> PendingShotResultsToSerialize; // 0x160(0x10)
	char pad_170[0x38]; // 0x170(0x38)
};

// Class ShooterGame.ShooterCharacterMinimapComponent
// Size: 0x540 (Inherited: 0x500)
struct UShooterCharacterMinimapComponent : UAresMinimapComponent {
	float TeleportInvisibleDelay; // 0x4f8(0x04)
	bool bNeedsShooterCharacterParameterUpdate; // 0x4fc(0x01)
	bool bIsSelf; // 0x4fd(0x01)
	bool bIsEnemy; // 0x4fe(0x01)
	bool bIsAlive; // 0x4ff(0x01)
	bool bHasBomb; // 0x500(0x01)
	bool bIsVisible; // 0x501(0x01)
	float LastSeen; // 0x504(0x04)
	bool bIsSpeaking; // 0x508(0x01)
	bool bPlayCommPulse; // 0x509(0x01)
	bool bPlayCommCriticalPulse; // 0x50a(0x01)
	bool bDebugFogOfWar; // 0x50b(0x01)
	struct UVisibilityComponent* VisibilityComponent; // 0x510(0x08)
	struct UBaseTeamComponent* LastTeamComponent; // 0x518(0x08)
	struct AShooterCharacter* LastViewTarget; // 0x520(0x08)
	bool bLocalObserver; // 0x528(0x01)
	bool bRecentlyTeleported; // 0x529(0x01)
	bool bHasTeamSight; // 0x52a(0x01)
	bool bBeingDestroyed; // 0x52b(0x01)
	char pad_52E[0x12]; // 0x52e(0x12)
};

// Class ShooterGame.ShooterCharacterMinimapDisplayComponentDeprecated
// Size: 0x290 (Inherited: 0x290)
struct UShooterCharacterMinimapDisplayComponentDeprecated : UMinimapDisplayComponentDeprecated {
};

// Class ShooterGame.ShooterCharacterMinimapWidget
// Size: 0x2f0 (Inherited: 0x2e0)
struct UShooterCharacterMinimapWidget : UAresMinimapWidget {
	bool bIsSelf; // 0x2e0(0x01)
	bool bIsEnemy; // 0x2e1(0x01)
	bool bIsAlive; // 0x2e2(0x01)
	bool bHasBomb; // 0x2e3(0x01)
	bool bIsVisible; // 0x2e4(0x01)
	char pad_2E5[0x3]; // 0x2e5(0x03)
	float LastSeen; // 0x2e8(0x04)
	bool bCommPulse; // 0x2ec(0x01)
	bool bCommCriticalPulse; // 0x2ed(0x01)
	bool bDebugFogOfWar; // 0x2ee(0x01)
	char pad_2EF[0x1]; // 0x2ef(0x01)
};

// Class ShooterGame.ShooterCharacterMovement
// Size: 0xfd0 (Inherited: 0xbc0)
struct UShooterCharacterMovement : UCharacterMovementComponent {
	char pad_BC0[0x18]; // 0xbc0(0x18)
	struct FMulticastInlineDelegate OnPreMovementTick; // 0xbd8(0x10)
	struct FMulticastInlineDelegate OnPrepareMovement; // 0xbe8(0x10)
	struct FMulticastInlineDelegate OnPostMovementTick; // 0xbf8(0x10)
	struct FMulticastInlineDelegate OnGameFrameMovementComplete; // 0xc08(0x10)
	struct FMulticastInlineDelegate OnCrouchStateUpdated; // 0xc18(0x10)
	float AirControlDisableOnBounceTime; // 0xc28(0x04)
	char pad_C2C[0x14]; // 0xc2c(0x14)
	struct FMulticastInlineDelegate OnBouncedOff; // 0xc40(0x10)
	char pad_C50[0x8]; // 0xc50(0x08)
	float CachedTemporaryMovementSpeedModifier; // 0xc58(0x04)
	char pad_C5C[0x8]; // 0xc5c(0x08)
	struct FVector LastWalkingLocation; // 0xc64(0x0c)
	struct FMulticastInlineDelegate OnStartedJump; // 0xc70(0x10)
	float CrouchHopVelocityMultiplier; // 0xc80(0x04)
	float FlightHeight; // 0xc84(0x04)
	struct FJumpVariables JumpVariables; // 0xc88(0x34)
	float TimeOfLastRemoteClientTimingRecording; // 0xcbc(0x04)
	struct FAresMovementTuning MovementTuning; // 0xcc0(0xcc)
	char pad_D8C[0xc]; // 0xd8c(0x0c)
	struct FAresJumpTuning DefaultJumpTuning; // 0xd98(0x20)
	float CrouchSlideThreshold; // 0xdb8(0x04)
	bool bEnableCrouchSlide; // 0xdbc(0x01)
	char pad_DBD[0x3]; // 0xdbd(0x03)
	struct FAresJumpLandSlowTuningV2 JumpLandSlowTuningV2; // 0xdc0(0x10)
	float ClientMoveSendRateUpperLimit; // 0xdd0(0x04)
	float ClientMoveNextSendDeltaTime; // 0xdd4(0x04)
	bool bSendClientMoveThisFrame; // 0xdd8(0x01)
	bool bIsDroppingMoves; // 0xdd9(0x01)
	char pad_DDA[0x6]; // 0xdda(0x06)
	int32_t DebugLastServerCombinedMoves; // 0xde0(0x04)
	int32_t DebugTotalServerCombinedMoves; // 0xde4(0x04)
	float ReplicateServerCombinedMovesVarsTimer; // 0xde8(0x04)
	char pad_DEC[0xc]; // 0xdec(0x0c)
	float ServerLocationDiffMag; // 0xdf8(0x04)
	float ServerLocationDiffMagMin; // 0xdfc(0x04)
	float ServerLocationDiffMagMax; // 0xe00(0x04)
	char pad_E04[0x14]; // 0xe04(0x14)
	float DebugMovementCurveTimeLength; // 0xe18(0x04)
	float DebugFlySpeedMultiplierFast; // 0xe1c(0x04)
	float DebugFlySpeedMultiplierSlow; // 0xe20(0x04)
	char pad_E24[0x44]; // 0xe24(0x44)
	bool bWasLocallyRelevant; // 0xe68(0x01)
	char pad_E69[0x7]; // 0xe69(0x07)
	uint64_t DebugTotalClientAdjustPositionCalls; // 0xe70(0x08)
	float TrueVerticalVelocity; // 0xe78(0x04)
	char pad_E7C[0x2c]; // 0xe7c(0x2c)
	int32_t TotalMovesExecuted; // 0xea8(0x04)
	float DebugLastFwdPredDeltaTime; // 0xeac(0x04)
	int32_t DebugTotalForwardPredictedMoves; // 0xeb0(0x04)
	int32_t DebugTotalRealMovesExecuted; // 0xeb4(0x04)
	int32_t NumRebases; // 0xeb8(0x04)
	int32_t NumOverQueuedRebases; // 0xebc(0x04)
	uint32_t SerializedMovesReceivedSinceLastTimestep; // 0xec0(0x04)
	bool DebugForceRebase; // 0xec4(0x01)
	char pad_EC5[0x3]; // 0xec5(0x03)
	struct FVector ForceModulesTotal; // 0xec8(0x0c)
	char pad_ED4[0x4]; // 0xed4(0x04)
	struct UMovementTimeShiftMonitor* TimeShiftMonitor; // 0xed8(0x08)
	char pad_EE0[0x28]; // 0xee0(0x28)
	float PreviousMovementOverrideRemoteSimulationMoveDelayTimeSeconds; // 0xf08(0x04)
	int32_t ConsecutiveInsertionFailureNum; // 0xf0c(0x04)
	char pad_F10[0x3c]; // 0xf10(0x3c)
	float TimeInForwardPrediction; // 0xf4c(0x04)
	char pad_F50[0x8]; // 0xf50(0x08)
	struct UShooterCharacterMovementDebugComponent* DebugComponent; // 0xf58(0x08)
	struct URemoteClientMovementComponent* RemoteClientMovementComponent; // 0xf60(0x08)
	char pad_F68[0x68]; // 0xf68(0x68)
};

// Class ShooterGame.ShooterCharacterMovementDebugComponent
// Size: 0x170 (Inherited: 0xe8)
struct UShooterCharacterMovementDebugComponent : UActorComponent {
	char pad_E8[0x88]; // 0xe8(0x88)
};

// Class ShooterGame.ShooterCharacterVisibilityComponent
// Size: 0x180 (Inherited: 0x180)
struct UShooterCharacterVisibilityComponent : UVisibilityComponent {
};

// Class ShooterGame.ShooterCharacterVisionComponent
// Size: 0x108 (Inherited: 0xe8)
struct UShooterCharacterVisionComponent : UActorComponent {
	struct TArray<struct AShooterCharacter*> VisibleCharacterOverrides; // 0xe8(0x10)
	struct TArray<struct AShooterCharacter*> LastVisibleCharacterOverrides; // 0xf8(0x10)
};

// Class ShooterGame.ShooterCheatManager
// Size: 0x118 (Inherited: 0xf8)
struct UShooterCheatManager : UAresCheatManager {
	struct FSoftObjectPath DevOnlyGunNamesToEquippableDataAssetsDataTable; // 0xf8(0x20)
};

// Class ShooterGame.ShooterConsoleComponent
// Size: 0xf8 (Inherited: 0xe8)
struct UShooterConsoleComponent : UActorComponent {
	char pad_E8[0x10]; // 0xe8(0x10)
};

// Class ShooterGame.ShooterDamageType
// Size: 0x130 (Inherited: 0x48)
struct UShooterDamageType : UDamageType {
	struct FCanvasIcon KillIcon; // 0x48(0x18)
	struct TSoftClassPtr<UObject> Equippable; // 0x60(0x30)
	float HealthScale; // 0x90(0x04)
	float ShieldScale; // 0x94(0x04)
	bool bIgnoresShield; // 0x98(0x01)
	char pad_99[0x3]; // 0x99(0x03)
	float CharacterScale; // 0x9c(0x04)
	float ObjectScale; // 0xa0(0x04)
	bool bShowHitConfirm; // 0xa4(0x01)
	char pad_A5[0x3]; // 0xa5(0x03)
	struct AEffectContainer* CharacterHitFXC; // 0xa8(0x08)
	bool bApplySelfDamageMultiplier; // 0xb0(0x01)
	bool bApplyAllyDamageMultiplier; // 0xb1(0x01)
	bool bIgnoreFriendlyFire; // 0xb2(0x01)
	bool bIsNonLethal; // 0xb3(0x01)
	char pad_B4[0x4]; // 0xb4(0x04)
	struct FString DisplayName; // 0xb8(0x10)
	struct FText DisplayNameText; // 0xc8(0x18)
	enum class EAresDamageCategory DamageCategory; // 0xe0(0x01)
	enum class EAresDamageIndicationType DamageIndicationType; // 0xe1(0x01)
	enum class EAresHitIndicatorDisplayType HitIndicatorDisplayType; // 0xe2(0x01)
	enum class EAresHitSoundPlayType HitSoundPlayType; // 0xe3(0x01)
	enum class EAresDamageAnimationCategory DamageAnimationCategory; // 0xe4(0x01)
	char pad_E5[0x3]; // 0xe5(0x03)
	float DamagePhysicsScale; // 0xe8(0x04)
	char pad_EC[0x4]; // 0xec(0x04)
	struct TArray<struct FDamagePenetration> Penetration; // 0xf0(0x10)
	struct ADamageSource* DamageSource; // 0x100(0x08)
	struct UMatineeCameraShake* OnHitHeadshotCameraMod; // 0x108(0x08)
	struct UMatineeCameraShake* OnHitMovingTargetCameraMod; // 0x110(0x08)
	bool bReportDeath; // 0x118(0x01)
	char pad_119[0x7]; // 0x119(0x07)
	struct UAkAudioEvent* HitConfirmEventOverride; // 0x120(0x08)
	struct UAkAudioEvent* HitConfirmHeadshotEventOverride; // 0x128(0x08)
};

// Class ShooterGame.ShooterExplosionEffect
// Size: 0x410 (Inherited: 0x3d0)
struct AShooterExplosionEffect : AActor {
	struct UParticleSystem* ExplosionFX; // 0x3d0(0x08)
	struct UPointLightComponent* ExplosionLight; // 0x3d8(0x08)
	float ExplosionLightFadeOut; // 0x3e0(0x04)
	char pad_3E4[0x4]; // 0x3e4(0x04)
	struct UAkAudioEvent* ExplosionEvent; // 0x3e8(0x08)
	float ParticleTeamColor; // 0x3f0(0x04)
	char pad_3F4[0x4]; // 0x3f4(0x04)
	struct UParticleSystemComponent* ActiveParticleSystemComponent; // 0x3f8(0x08)
	char pad_400[0x10]; // 0x400(0x10)
};

// Class ShooterGame.ShooterGame_Menu
// Size: 0x4f0 (Inherited: 0x4c0)
struct AShooterGame_Menu : AGameMode {
	char pad_4C0[0x30]; // 0x4c0(0x30)
};

// Class ShooterGame.ShooterGameGlobals
// Size: 0x828 (Inherited: 0x30)
struct UShooterGameGlobals : UObject {
	char pad_30[0xe8]; // 0x30(0xe8)
	struct FAresCheatData CheatData; // 0x118(0x70)
	struct FAresAccessibilityGlobals Accessibility; // 0x188(0x24)
	char pad_1AC[0x4]; // 0x1ac(0x04)
	struct FAresGameGlobals Game; // 0x1b0(0x48)
	struct FAresInputGlobals Input; // 0x1f8(0x14)
	char pad_20C[0x4]; // 0x20c(0x04)
	struct FAresAudioGlobals Audio; // 0x210(0x10)
	struct FAresHUDGlobals HUD; // 0x220(0x3c0)
	struct TArray<struct FAresTheme> Themes; // 0x5e0(0x10)
	struct FAresDecalManagerGlobals DecalManager; // 0x5f0(0x04)
	struct FAresStoreGlobals Store; // 0x5f4(0x08)
	struct FAresRespawnGlobals Respawn; // 0x5fc(0x08)
	char pad_604[0x4]; // 0x604(0x04)
	struct UAresSlateGlobals* SlateGlobals; // 0x608(0x08)
	struct TSoftClassPtr<UObject> SlateGlobalsAsset; // 0x610(0x30)
	struct UAresSlateGlobals* CachedSlateGlobals; // 0x640(0x08)
	struct UAresEquippableGlobals* EquippableGlobals; // 0x648(0x08)
	struct TSoftClassPtr<UObject> EquippableGlobalsAsset; // 0x650(0x30)
	struct UAresEquippableGlobals* CachedEquippableGlobals; // 0x680(0x08)
	struct TSoftClassPtr<UObject> WeaponsCatalog; // 0x688(0x30)
	struct AAresSkinCatalog* CachedWeaponsCatalog; // 0x6b8(0x08)
	struct TArray<struct FEquippedSkin> InitEquips; // 0x6c0(0x10)
	struct TArray<struct UHUDGlobalsDataAsset*> CachedHUDGlobals; // 0x6d0(0x10)
	struct TArray<struct UUIGlobalsDataAsset*> CachedUIGlobals; // 0x6e0(0x10)
	struct TArray<struct UCoreGlobalsDataAsset*> CachedCoreGlobals; // 0x6f0(0x10)
	struct TArray<struct UFrontendUIGlobalsDataAsset*> CachedFrontendUIGlobals; // 0x700(0x10)
	struct TArray<struct UPlatformSpecializedUIGlobalsDataAsset*> CachedPlatformSpecializedUIGlobals; // 0x710(0x10)
	struct TSoftClassPtr<UObject> WallPenetrationGlobalsAsset; // 0x720(0x30)
	struct UAresWallPenetrationGlobals* CachedWallPenetrationGlobals; // 0x750(0x08)
	struct TSoftClassPtr<UObject> NetworkingGlobalsAsset; // 0x758(0x30)
	struct UAresNetworkingGlobals* CachedNetworkingGlobals; // 0x788(0x08)
	struct TSoftObjectPtr<UMaterial> WatermarkMaterial; // 0x790(0x30)
	struct TSoftObjectPtr<UMaterial> WatermarkUIMaterial; // 0x7c0(0x30)
	char pad_7F0[0x20]; // 0x7f0(0x20)
	struct UGamepadTuningDataAsset* GamepadTuningData; // 0x810(0x08)
	char pad_818[0x10]; // 0x818(0x10)
};

// Class ShooterGame.ShooterGameMode
// Size: 0x880 (Inherited: 0x4c0)
struct AShooterGameMode : AGameMode {
	struct TSet<enum class EGameModeSublevelKey> GameModeSublevelKeys; // 0x4c0(0x50)
	struct TArray<struct AAresEquippable*> StartingEquippableClasses; // 0x510(0x10)
	struct TArray<struct TSoftClassPtr<UObject>> DefaultTotemClasses; // 0x520(0x10)
	bool bDisableCharacterMeshTickWhileInFogOfWar; // 0x530(0x01)
	char pad_531[0x7]; // 0x531(0x07)
	struct TArray<struct ULevelStreaming*> ClientOnlySublevelsToStream; // 0x538(0x10)
	struct FMulticastInlineDelegate OnRoundBegin; // 0x548(0x10)
	struct FMulticastInlineDelegate OnRoundEnd; // 0x558(0x10)
	struct FMulticastInlineDelegate OnPlayerKilled; // 0x568(0x10)
	struct FMulticastInlineDelegate OnPlayerSpawned; // 0x578(0x10)
	struct FMulticastInlineDelegate OnPhaseChange; // 0x588(0x10)
	struct FMulticastInlineDelegate OnGameplayActiveChange; // 0x598(0x10)
	struct FMulticastInlineDelegate OnDisconnectedPlayerDestroyed; // 0x5a8(0x10)
	struct FMulticastInlineDelegate OnPlayerDisassociated; // 0x5b8(0x10)
	struct FMulticastInlineDelegate OnRoundPlayersReady; // 0x5c8(0x10)
	struct FMulticastInlineDelegate OnGameRestart; // 0x5d8(0x10)
	struct FMulticastInlineDelegate OnReset; // 0x5e8(0x10)
	struct FMulticastInlineDelegate OnGameShutdown; // 0x5f8(0x10)
	struct APawn* BotPawnClass; // 0x608(0x08)
	struct TSoftClassPtr<UObject> BotPawnClassAsset; // 0x610(0x30)
	struct FString BotControllerClassPath; // 0x640(0x10)
	struct TSoftClassPtr<UObject> BotControllerClass; // 0x650(0x30)
	struct FMulticastInlineDelegate OnDefaultWeaponChanged; // 0x680(0x10)
	struct UAresGameEventLog* GameEventLog; // 0x690(0x08)
	struct UMatchResultEventCollector* MatchResultEventCollector; // 0x698(0x08)
	bool bAlwaysAllowWeaponSelling; // 0x6a0(0x01)
	bool bCarryOverPickedUpEquippablesToNextRound; // 0x6a1(0x01)
	bool bCarryOverAmmoToNextRound; // 0x6a2(0x01)
	char pad_6A3[0x5]; // 0x6a3(0x05)
	struct UAresCeremonyComponent* CeremonyComponent; // 0x6a8(0x08)
	struct UBehaviorScoreTrackerManagerComponent* BehaviorScoreTrackerManagerComponent; // 0x6b0(0x08)
	struct UVoteManagerComponent* VoteManagerComponent; // 0x6b8(0x08)
	struct UAFKDetectionComponent* AFKHandlingType; // 0x6c0(0x08)
	struct UGameModeReplayComponent* ReplayComponent; // 0x6c8(0x08)
	struct UDropInManagerComponent* DropInManagerComponent; // 0x6d0(0x08)
	struct UServerPerRoundTelemetryComponent* ServerPerRoundTelemetryComponent; // 0x6d8(0x08)
	struct UServerMovementTimingComponent* ServerMovementTimingComponent; // 0x6e0(0x08)
	char pad_6E8[0xc]; // 0x6e8(0x0c)
	int32_t KillScore; // 0x6f4(0x04)
	int32_t AssistScore; // 0x6f8(0x04)
	float DamageSelfScale; // 0x6fc(0x04)
	float DamageAllyScale; // 0x700(0x04)
	int32_t MaxBots; // 0x704(0x04)
	struct TArray<struct AShooterAIController*> BotControllers; // 0x708(0x10)
	struct UStateMachineComponent* StateMachine; // 0x718(0x08)
	struct AAresRespawnManager* RespawnManager; // 0x720(0x08)
	char pad_728[0x10]; // 0x728(0x10)
	float GameEventTickRate; // 0x738(0x04)
	float MaxRespawnDelay; // 0x73c(0x04)
	float MaxRespawnDelayTime; // 0x740(0x04)
	float MinRespawnDelayValue; // 0x744(0x04)
	struct AAresRespawnManager* RespawnManagerClass; // 0x748(0x08)
	struct TSoftClassPtr<UObject> RespawnManagerClassAsset; // 0x750(0x30)
	struct TMap<enum class EAresTeamRole, int32_t> SpawnSetForRole; // 0x780(0x50)
	struct TArray<struct FAresGameRewardTuning> KillBountyTable; // 0x7d0(0x10)
	struct TArray<struct FAresGameRewardTuning> DeathPenaltyTable; // 0x7e0(0x10)
	char pad_7F0[0x4]; // 0x7f0(0x04)
	float GamePhaseStartTime; // 0x7f4(0x04)
	float GameStateMachineStateStartTime; // 0x7f8(0x04)
	char pad_7FC[0x4]; // 0x7fc(0x04)
	struct UFogOfWarManagerComponent* FogOfWarManager; // 0x800(0x08)
	struct UServerTeamVisibilityComponent* ServerTeamVisibilityComponent; // 0x808(0x08)
	char pad_810[0x18]; // 0x810(0x18)
	struct UMegapacketComponent* MegapacketComponent; // 0x828(0x08)
	bool bIsLoadTestEnabled; // 0x830(0x01)
	char pad_831[0x1]; // 0x831(0x01)
	bool bGameplayStartsImmediately; // 0x832(0x01)
	bool bDownsampleServerCharacterAnims; // 0x833(0x01)
	int32_t ServerAnimUpdateRate; // 0x834(0x04)
	struct FMulticastInlineDelegate OnBuyPhaseUpdated; // 0x838(0x10)
	struct TArray<struct AShooterCharacter*> RegisteredCharactersNeedingEnemyHitRegInfo; // 0x848(0x10)
	bool bIsFriendlyFireEnabled; // 0x858(0x01)
	char pad_859[0x3]; // 0x859(0x03)
	float MaxSecondsToWaitForInactivePlayers; // 0x85c(0x04)
	bool bIsRoundBeingReset; // 0x860(0x01)
	char pad_861[0x17]; // 0x861(0x17)
	bool bIsChangingRoles; // 0x878(0x01)
	char pad_879[0x7]; // 0x879(0x07)
};

// Class ShooterGame.ShooterGameSession
// Size: 0x4e8 (Inherited: 0x3f0)
struct AShooterGameSession : AGameSession {
	char pad_3F0[0xf8]; // 0x3f0(0xf8)
};

// Class ShooterGame.ShooterGameState
// Size: 0xbe0 (Inherited: 0x5a8)
struct AShooterGameState : AAresGameStateBase {
	float ExtraDeathcamFadeToBlackDuration; // 0x5a8(0x04)
	char pad_5AC[0x4]; // 0x5ac(0x04)
	struct UAresAimToolingTracker* AimToolingTracker; // 0x5b0(0x08)
	struct TArray<struct AAresCalloutRegion*> CalloutRegions; // 0x5b8(0x10)
	struct TArray<struct FCustomTeamColor> CustomTeamColors; // 0x5c8(0x10)
	enum class ECharacterColorationScheme CharacterColorationMode; // 0x5d8(0x01)
	bool bShowAFKStatusChangedInChat; // 0x5d9(0x01)
	bool bAllowCharacterSpecificStartingEquippables; // 0x5da(0x01)
	bool bAllowCharacterSpecificEquippablesInShop; // 0x5db(0x01)
	char pad_5DC[0x4]; // 0x5dc(0x04)
	struct TArray<struct UObject*> EnabledUIScreenCoordinators; // 0x5e0(0x10)
	int32_t NumTeamsToCreateOverride; // 0x5f0(0x04)
	char pad_5F4[0x4]; // 0x5f4(0x04)
	struct FAresMatchResult MatchResult; // 0x5f8(0x10)
	struct UBaseTeamComponent* PendingWinningTeam; // 0x608(0x08)
	char pad_610[0x8]; // 0x610(0x08)
	struct UBaseTeamComponent* WinnerOfLastRound; // 0x618(0x08)
	struct TArray<struct FAresTeamEconomy> TeamEconomy; // 0x620(0x10)
	struct FMulticastInlineDelegate OnTeamAverageLoadoutValueUpdated; // 0x630(0x10)
	struct AActor* SpectateFocusObject; // 0x640(0x08)
	struct TArray<struct FAresTeamInfo> TeamComponents; // 0x648(0x10)
	struct TArray<struct FMapPingData> MegaMapPings; // 0x658(0x10)
	struct TArray<struct FMapPingData> FirstPersonPings; // 0x668(0x10)
	struct UAresClientGameInstance* ClientGameInstance; // 0x678(0x08)
	struct FMulticastInlineDelegate OnMatchTimeoutStateChanged; // 0x680(0x10)
	struct FMulticastInlineDelegate OnMatchTimerPausedChanged; // 0x690(0x10)
	struct FMulticastInlineDelegate OnIgnoreShoppingRestrictionsChanged; // 0x6a0(0x10)
	int32_t NumPointsToWinGame; // 0x6b0(0x04)
	int32_t NumRoundsToSwitchTeams; // 0x6b4(0x04)
	struct FAresGameInfo GameInfo; // 0x6b8(0x48)
	float FriendlyDamageScale; // 0x700(0x04)
	float SelfDamageScale; // 0x704(0x04)
	struct FMulticastInlineDelegate OnPlayerStateListUpdated; // 0x708(0x10)
	char pad_718[0x10]; // 0x718(0x10)
	struct FMulticastInlineDelegate OnNotificationSystemUpdated; // 0x728(0x10)
	struct FMulticastInlineDelegate OnResetGame; // 0x738(0x10)
	float GearGivenAsBountyPercent; // 0x748(0x04)
	float BountyGivenToKillerVSTeamPercent; // 0x74c(0x04)
	float PercentToRefundDeadPlayersOnRoundWin; // 0x750(0x04)
	int32_t MaxBankedMoney; // 0x754(0x04)
	float DurationOfDamageAssist; // 0x758(0x04)
	float RechargeCostMultiplier; // 0x75c(0x04)
	char pad_760[0x30]; // 0x760(0x30)
	struct FMulticastInlineDelegate OnPlayerSpawn; // 0x790(0x10)
	struct FMulticastInlineDelegate OnCharacterSpawn; // 0x7a0(0x10)
	struct FMulticastInlineDelegate OnWeaponAttachmentSpawn; // 0x7b0(0x10)
	struct FMulticastInlineDelegate OnNonPlayerActorKilled; // 0x7c0(0x10)
	struct FMulticastInlineDelegate OnPlayerKill; // 0x7d0(0x10)
	struct FMulticastInlineDelegate AuthOnPlayerKilledAndProcessed; // 0x7e0(0x10)
	struct FMulticastInlineDelegate OnPlayerTemporaryDeath; // 0x7f0(0x10)
	struct FMulticastInlineDelegate OnPlayerRecovery; // 0x800(0x10)
	struct FMulticastInlineDelegate OnPlayerResurrect; // 0x810(0x10)
	float TimeToBuyOnceRoundBegins; // 0x820(0x04)
	float TimeToSetPlayerIntentionOnceRoundBegins; // 0x824(0x04)
	float PlayerIntentionFadeTime; // 0x828(0x04)
	int32_t HeavyWeaponCostThreshold; // 0x82c(0x04)
	struct FMulticastInlineDelegate OnRoundNumberChanged; // 0x830(0x10)
	char pad_840[0x30]; // 0x840(0x30)
	int32_t MinSecondsBetweenPresenceUpdates; // 0x870(0x04)
	bool bForceReuseActorOnRespawnEnabled; // 0x874(0x01)
	bool bShouldShowPlayerWidgetBase; // 0x875(0x01)
	bool bScoreboardOmitsBots; // 0x876(0x01)
	char pad_877[0x1]; // 0x877(0x01)
	int32_t NetServerMaxTickRate; // 0x878(0x04)
	char pad_87C[0x4]; // 0x87c(0x04)
	struct FAresPlatformMatchInfo MatchInfo; // 0x880(0x10)
	struct UGameStateHUDConfig* GameStateHUDConfig; // 0x890(0x08)
	enum class EAresGamePhase StartingPhase; // 0x898(0x01)
	char pad_899[0x3]; // 0x899(0x03)
	int32_t RoundTime; // 0x89c(0x04)
	int32_t RoundEndingTime; // 0x8a0(0x04)
	bool bIsShoppingEnabled; // 0x8a4(0x01)
	char pad_8A5[0x3]; // 0x8a5(0x03)
	struct FMulticastInlineDelegate OnPointsUpdated; // 0x8a8(0x10)
	char pad_8B8[0x10]; // 0x8b8(0x10)
	struct FMulticastInlineDelegate OnDropInEnabledUpdated; // 0x8c8(0x10)
	struct FMulticastInlineDelegate OnGameplayActiveChanged; // 0x8d8(0x10)
	char pad_8E8[0x10]; // 0x8e8(0x10)
	struct FMulticastInlineDelegate OnCharacterSwitched; // 0x8f8(0x10)
	struct FMulticastInlineDelegate OnStrategicOutcomesUpdated; // 0x908(0x10)
	struct FMulticastInlineDelegate OnChosenCeremonyForRoundUpdated; // 0x918(0x10)
	struct TArray<struct TSoftClassPtr<UObject>> CriticalGameItemClasses; // 0x928(0x10)
	struct TArray<struct AAresEquippable*> AllowlistedEquippablesToAlwaysDrop; // 0x938(0x10)
	struct TArray<struct FAresRoundResult> RoundResults; // 0x948(0x10)
	struct TArray<struct FStrategicOutcomeOfRound> StrategicOutcomes; // 0x958(0x10)
	struct AAresCeremony* ChosenCeremonyForRound; // 0x968(0x08)
	int32_t RoundNumber; // 0x970(0x04)
	char pad_974[0x4]; // 0x974(0x04)
	struct FString DebugMessage; // 0x978(0x10)
	struct UAresStore* Store; // 0x988(0x08)
	struct TSoftClassPtr<UObject> StoreAsset; // 0x990(0x30)
	struct UAresStore* CachedStore; // 0x9c0(0x08)
	uint32_t TotalServerLogLinesRecorded; // 0x9c8(0x04)
	char pad_9CC[0x4]; // 0x9cc(0x04)
	struct TArray<struct FAresGameRewardTuning> GameRewardsTable; // 0x9d0(0x10)
	struct UDecalManager* DecalManager; // 0x9e0(0x08)
	struct UClientPerRoundTelemetryComponent* ClientPerRoundTelemetryComponent; // 0x9e8(0x08)
	struct UMobileDeviceTelemetryComponent* MobileDeviceTelemetryComponent; // 0x9f0(0x08)
	float AverageServerFrameTimeMs; // 0x9f8(0x04)
	char pad_9FC[0x4]; // 0x9fc(0x04)
	struct TArray<struct FAresDebugSphereReplicated> ReplicatedDebugSpheres; // 0xa00(0x10)
	struct TArray<struct FAresDebugLineReplicated> ReplicatedDebugLines; // 0xa10(0x10)
	struct TArray<struct FAresDebugTextReplicated> ReplicatedDebugText; // 0xa20(0x10)
	struct FMulticastInlineDelegate OnMatchBegin; // 0xa30(0x10)
	struct FMulticastInlineDelegate OnMatchEnd; // 0xa40(0x10)
	struct FMulticastInlineDelegate OnRoundBegin; // 0xa50(0x10)
	struct FMulticastInlineDelegate OnInRound; // 0xa60(0x10)
	struct FMulticastInlineDelegate OnRoundEnd; // 0xa70(0x10)
	struct FMulticastInlineDelegate OnGamePhaseChanged; // 0xa80(0x10)
	struct FMulticastInlineDelegate OnAllowedVoteTypesReplicated; // 0xa90(0x10)
	struct UBasePerformanceMonitoringComponent* LocalPerformanceMonitoringComponent; // 0xaa0(0x08)
	enum class EAresGamePhase Phase; // 0xaa8(0x01)
	char pad_AA9[0x7]; // 0xaa9(0x07)
	struct TArray<struct AGameplayVote*> AllowedVoteTypes; // 0xab0(0x10)
	char pad_AC0[0x8]; // 0xac0(0x08)
	struct AAresSoundHandler* SoundHandler; // 0xac8(0x08)
	struct AAresActorSoundPool* ActorSoundPool; // 0xad0(0x08)
	struct UOnGroundEquippableSearchComponent* OnGroundEquippableSearchComponent; // 0xad8(0x08)
	struct AAresDroppedEquippable* DroppedEquippable; // 0xae0(0x08)
	struct AAresOnGroundEquippable* OnGroundEquippable; // 0xae8(0x08)
	int32_t PhaseAllowedGameInput; // 0xaf0(0x04)
	char pad_AF4[0x4]; // 0xaf4(0x04)
	struct URemoteNetworkedGameStateComponent* RemoteNetworkedGameStateComponent; // 0xaf8(0x08)
	struct UFixedMoveTimeStepManagerComponent* FixedMoveTimeStepManagerComponent; // 0xb00(0x08)
	struct URemoteClientMovementComponent* RemoteClientMovementComponent; // 0xb08(0x08)
	struct UGameDataExportComponent* GameDataExportComponent; // 0xb10(0x08)
	struct UOcclusionPathComponent* OcclusionPathComponent; // 0xb18(0x08)
	struct FMulticastInlineDelegate OnModifierManagerCreated; // 0xb20(0x10)
	struct TSoftClassPtr<UObject> ModifierManagerClass; // 0xb30(0x30)
	struct AGameModifierManager* ModifierManager; // 0xb60(0x08)
	struct FDegradedNetworkSimulationPresets DegradedNetworkSimulationPresets; // 0xb68(0x10)
	struct FCurrentNetworkSimulationSettings CurrentNetworkSimulationSettings; // 0xb78(0x18)
	char pad_B90[0x8]; // 0xb90(0x08)
	struct USprayEquipSlotDataAsset* SprayContextSocket; // 0xb98(0x08)
	struct UDebugSubscriptionComponent* DebugSubscriptionComponent; // 0xba0(0x08)
	struct UGameModeDataAsset* GameModeDataAsset; // 0xba8(0x08)
	struct TArray<struct FRoundParticipantsInfo> RoundParticipantsInfos; // 0xbb0(0x10)
	char pad_BC0[0x10]; // 0xbc0(0x10)
	struct UImpactEffectManagerComponent* ImpactEffectManager; // 0xbd0(0x08)
	struct UEffectPoolManagerComponent* EffectPoolManager; // 0xbd8(0x08)
};

// Class ShooterGame.ShooterGameUserSettings
// Size: 0x1d8 (Inherited: 0x130)
struct UShooterGameUserSettings : UGameUserSettings {
	struct FMulticastInlineDelegate OnMonitorInfoChanged; // 0x130(0x10)
	struct FString DefaultMonitorDeviceID; // 0x140(0x10)
	int32_t DefaultMonitorIndex; // 0x150(0x04)
	char pad_154[0x4]; // 0x154(0x04)
	struct FString LastConfirmedDefaultMonitorDeviceID; // 0x158(0x10)
	int32_t LastConfirmedDefaultMonitorIndex; // 0x168(0x04)
	bool bShouldLetterbox; // 0x16c(0x01)
	bool bLastConfirmedShouldLetterbox; // 0x16d(0x01)
	char pad_16E[0x32]; // 0x16e(0x32)
	struct TArray<struct FAresMonitorInfo> AllMonitorInfo; // 0x1a0(0x10)
	char pad_1B0[0x20]; // 0x1b0(0x20)
	struct UAresSettingsManager* AresSettingsManager; // 0x1d0(0x08)
};

// Class ShooterGame.ShooterHUD
// Size: 0xa60 (Inherited: 0x4d0)
struct AShooterHUD : AHUD {
	struct FAresHudTuning HudTuning; // 0x4d0(0x04)
	char pad_4D4[0x4]; // 0x4d4(0x04)
	struct FAresDebugHudTuning DebugHudTuning; // 0x4d8(0x80)
	struct FCharacterHUD CharacterDisplay; // 0x558(0x60)
	struct FAnnouncerHUD AnnouncerDisplay; // 0x5b8(0x04)
	char pad_5BC[0x4]; // 0x5bc(0x04)
	struct FCanvasIcon SprayVelocityIndicatorIcon; // 0x5c0(0x18)
	struct FCanvasIcon RemoteActivatableHighlightIcon; // 0x5d8(0x18)
	struct FColor CrossHairDrawColor; // 0x5f0(0x04)
	char pad_5F4[0x14]; // 0x5f4(0x14)
	struct UFont* BigFont; // 0x608(0x08)
	struct UFont* NormalFont; // 0x610(0x08)
	struct UFont* CustomFont; // 0x618(0x08)
	struct UFont* CustomFont2; // 0x620(0x08)
	struct UFont* CustomFont3; // 0x628(0x08)
	struct UFont* EndOfRoundFont; // 0x630(0x08)
	struct UFont* FixedWidthFont; // 0x638(0x08)
	float IntentionPortraitPadding; // 0x640(0x04)
	char pad_644[0x4]; // 0x644(0x04)
	struct UTexture* IntentionHighlightTexture; // 0x648(0x08)
	struct UTexture* MissingIntentionPortraitTexture; // 0x650(0x08)
	char pad_658[0x8]; // 0x658(0x08)
	struct UShooterUICoordinator* Coordinator; // 0x660(0x08)
	struct TWeakObjectPtr<struct UAresWidgetRegistry> CachedWidgetRegistry; // 0x668(0x08)
	struct FColor HUDLight; // 0x670(0x04)
	struct FColor HUDDark; // 0x674(0x04)
	struct FCanvasIcon VictoryIcon; // 0x678(0x18)
	struct FCanvasIcon DefeatIcon; // 0x690(0x18)
	struct FCanvasIcon TieIcon; // 0x6a8(0x18)
	char pad_6C0[0x4]; // 0x6c0(0x04)
	bool bDisableHitNotify; // 0x6c4(0x01)
	char pad_6C5[0x3]; // 0x6c5(0x03)
	float HitNotifyDisplayTime; // 0x6c8(0x04)
	struct FVector HitNotifyCenterOffset; // 0x6cc(0x0c)
	float HitNotifyMinimumAlpha; // 0x6d8(0x04)
	struct FColor HitNotifyHealthColor; // 0x6dc(0x04)
	struct FColor HitNotifyShieldColor; // 0x6e0(0x04)
	float YouHitEnemyFullAlphaTime; // 0x6e4(0x04)
	float YouHitEnemyFadeTime; // 0x6e8(0x04)
	float YouHitEnemyFadeFraction1; // 0x6ec(0x04)
	float YouHitEnemyFadeHeight1; // 0x6f0(0x04)
	float KillConfirmFullAlphaTime; // 0x6f4(0x04)
	float KillConfirmFadeTime; // 0x6f8(0x04)
	float KillConfirmFullAlpha; // 0x6fc(0x04)
	float KillConfirmPulseInTime; // 0x700(0x04)
	float KillConfirmPulseScale; // 0x704(0x04)
	struct FCanvasIcon KillNotifyCrosshair; // 0x708(0x18)
	float GrenadeIndicatorHudRadius; // 0x720(0x04)
	char pad_724[0x8]; // 0x724(0x08)
	float FXEndTime; // 0x72c(0x04)
	float FXStartTime; // 0x730(0x04)
	char pad_734[0x4]; // 0x734(0x04)
	struct UMaterialInstanceDynamic* AbilityFXMaterial; // 0x738(0x08)
	float ParticleSystemEndTime; // 0x740(0x04)
	char pad_744[0x4]; // 0x744(0x04)
	struct UParticleSystemComponent* AbilityParticleSystem; // 0x748(0x08)
	struct FCanvasIcon HitNotifyIcon; // 0x750(0x18)
	struct FCanvasIcon crosshair[0x5]; // 0x768(0x78)
	struct FCanvasIcon HitNotifyCrosshair; // 0x7e0(0x18)
	char pad_7F8[0x30]; // 0x7f8(0x30)
	float OffscreenNameAllowPercentage; // 0x828(0x04)
	float NameOffsetHeight; // 0x82c(0x04)
	struct FColor PlayerNames_AllyTeamColor; // 0x830(0x04)
	struct FColor PlayerNames_EnemyTeamColor; // 0x834(0x04)
	struct FColor PlayerNames_NeutralTeamColor; // 0x838(0x04)
	struct FColor PlayerNames_FullHealthColor; // 0x83c(0x04)
	struct FColor PlayerNames_ZeroHealthColor; // 0x840(0x04)
	float PlayerNames_HealthTextScale; // 0x844(0x04)
	struct UTexture2D* HitNotifyTexture; // 0x848(0x08)
	struct UTexture2D* HUDMainTexture; // 0x850(0x08)
	struct UTexture2D* HUDAssets02Texture; // 0x858(0x08)
	struct UTexture2D* LowHealthOverlayTexture; // 0x860(0x08)
	struct UTexture2D* CrossHairIcon; // 0x868(0x08)
	struct UTexture2D* AllyDownWorldspaceIcon; // 0x870(0x08)
	struct FVector AllyDownWorldspaceIconOffset; // 0x878(0x0c)
	struct FColor UsingBarColor; // 0x884(0x04)
	struct FColor UsingMessageColor; // 0x888(0x04)
	struct FColor UsingIconTint; // 0x88c(0x04)
	float UsingHUD_TextDistanceFromIcon; // 0x890(0x04)
	float UsingHUD_TextHeight; // 0x894(0x04)
	float UsingHUD_PaddingBetweenTextMessages; // 0x898(0x04)
	char pad_89C[0x44]; // 0x89c(0x44)
	struct FMulticastInlineDelegate ShooterHUDElementsFinished; // 0x8e0(0x10)
	struct FMulticastInlineDelegate SetShowBlindOverlayUpdated; // 0x8f0(0x10)
	struct FMulticastInlineDelegate ShowKillBannerUpdated; // 0x900(0x10)
	struct UPanelWidget* AbilityHUDParent; // 0x910(0x08)
	char pad_918[0x1]; // 0x918(0x01)
	bool bShowBlindOverlay; // 0x919(0x01)
	bool bShowKillBanners; // 0x91a(0x01)
	char pad_91B[0x5]; // 0x91b(0x05)
	struct TArray<struct UAresHudElement*> DebugHudElementClasses; // 0x920(0x10)
	struct TArray<struct UAresHudElement*> HUDElements; // 0x930(0x10)
	struct UBaseCrosshairHudElement* CrosshairHUDElement; // 0x940(0x08)
	bool bHudElementsInitCalled; // 0x948(0x01)
	char pad_949[0xef]; // 0x949(0xef)
	struct TArray<struct AActor*> QueuedActorsForDebugDrawName; // 0xa38(0x10)
	struct TArray<struct USceneComponent*> QueuedComponentsForDebugDrawName; // 0xa48(0x10)
	char pad_A58[0x4]; // 0xa58(0x04)
	float LastUpdateTime; // 0xa5c(0x04)
};

// Class ShooterGame.ShooterLocalPlayer
// Size: 0x268 (Inherited: 0x268)
struct UShooterLocalPlayer : ULocalPlayer {
};

// Class ShooterGame.ShooterManifestBlueprintLibrary
// Size: 0x30 (Inherited: 0x30)
struct UShooterManifestBlueprintLibrary : UBlueprintFunctionLibrary {
};

// Class ShooterGame.ClickableMapWidget
// Size: 0x2f8 (Inherited: 0x2d8)
struct UClickableMapWidget : UCoordinatedHUDElement {
	struct FMulticastInlineDelegate OnWorldLocationSelected; // 0x2d8(0x10)
	struct FMulticastInlineDelegate OnMultipleWorldLocationsSelected; // 0x2e8(0x10)
};

// Class ShooterGame.ShooterMinimapDeprecated
// Size: 0x3d0 (Inherited: 0x3d0)
struct AShooterMinimapDeprecated : AInfo {
};

// Class ShooterGame.ShooterPlayerController_Menu
// Size: 0x738 (Inherited: 0x738)
struct AShooterPlayerController_Menu : APlayerController {
};

// Class ShooterGame.ShooterPlayerControllerDebugComponent
// Size: 0xe8 (Inherited: 0xe8)
struct UShooterPlayerControllerDebugComponent : UActorComponent {
};

// Class ShooterGame.ShooterPlayerState
// Size: 0x950 (Inherited: 0x670)
struct AShooterPlayerState : AAresPlayerStateBase {
	struct FMulticastInlineDelegate OnDesiredClassDefaultObjectChanged; // 0x670(0x10)
	struct FMulticastInlineDelegate OnSpawnedCharacterChanged; // 0x680(0x10)
	struct FMulticastInlineDelegate OnPossessedCharacterChanged; // 0x690(0x10)
	struct FMulticastInlineDelegate OnPossessedCharacterChangedWithPrevCharacter; // 0x6a0(0x10)
	struct FMulticastInlineDelegate OnNumUltimatePointsChanged; // 0x6b0(0x10)
	struct FMulticastInlineDelegate OnTotalAcquiredUltimatePointsChanged; // 0x6c0(0x10)
	struct FMulticastInlineDelegate OnEquippableChargeInfosChanged; // 0x6d0(0x10)
	struct FMulticastInlineDelegate OnAliveStateChanged; // 0x6e0(0x10)
	struct FMulticastInlineDelegate AuthOnAliveStateChanged; // 0x6f0(0x10)
	char pad_700[0x18]; // 0x700(0x18)
	struct AOwnerExclusivePlayerInfo* PlayerInfo; // 0x718(0x08)
	struct UCombatReportComponent* CombatReportType; // 0x720(0x08)
	struct TArray<struct FGuid> AccessibleCharacterList; // 0x728(0x10)
	struct UBasicCombatStatsComponent* BasicCombatStatsComponent; // 0x738(0x08)
	struct UMoneyManagementComponent* MoneyManagementComponent; // 0x740(0x08)
	struct UPlayerScoreComponent* PlayerScoreComponent; // 0x748(0x08)
	struct UGunRequestComponent* GunRequestComponent; // 0x750(0x08)
	struct UMissionManagerComponent* MissionManagerComponent; // 0x758(0x08)
	struct UBasePlayerStateTelemetryComponent* PlayerStateTelemetryComponent; // 0x760(0x08)
	struct UPlayerDiscrepancyDetectionComponent* PlayerDiscrepancyDetectionComponent; // 0x768(0x08)
	struct UAFKDetectionComponent* AFKDetectionComponent; // 0x770(0x08)
	struct UAFKDetectionComponent* AFKHandlingType; // 0x778(0x08)
	struct FCrosshairSettings CrosshairSettings; // 0x780(0x130)
	struct AShooterCharacter* SpawnedCharacter; // 0x8b0(0x08)
	struct AShooterCharacter* ClientPrevSpawnedCharacter; // 0x8b8(0x08)
	struct AShooterCharacter* PossessedCharacter; // 0x8c0(0x08)
	int32_t NumUltimatePoints; // 0x8c8(0x04)
	int32_t TotalAcquiredUltimatePoints; // 0x8cc(0x04)
	int32_t NumRefundableUltimatePoints; // 0x8d0(0x04)
	char pad_8D4[0x4]; // 0x8d4(0x04)
	struct TArray<struct AShooterPlayerState*> MapPingsMuted; // 0x8d8(0x10)
	struct FGuid DesiredClass; // 0x8e8(0x10)
	struct FGuid AuthNextRoundClass; // 0x8f8(0x10)
	bool bIsCheatInvulnerable; // 0x908(0x01)
	bool bIsCheatAutoResurrect; // 0x909(0x01)
	bool bIsCheatGhost; // 0x90a(0x01)
	char pad_90B[0x1]; // 0x90b(0x01)
	int32_t CombatReportIndex; // 0x90c(0x04)
	struct TArray<struct TSoftClassPtr<UObject>> DebugDefaultWheelSprays; // 0x910(0x10)
	bool bAllowAgentSpecificKeybinds; // 0x920(0x01)
	bool bShouldInitCoach; // 0x921(0x01)
	bool bIsCoach; // 0x922(0x01)
	char pad_923[0x1]; // 0x923(0x01)
	struct FName AuthCoachTeam; // 0x924(0x0c)
	struct FMulticastInlineDelegate OnSuppressRevealed; // 0x930(0x10)
	struct FMulticastInlineDelegate OnCoachInitialized; // 0x940(0x10)
};

// Class ShooterGame.ShooterSettingsFacade
// Size: 0x30 (Inherited: 0x30)
struct UShooterSettingsFacade : UObject {
};

// Class ShooterGame.ShooterUICoordinator
// Size: 0x90 (Inherited: 0x30)
struct UShooterUICoordinator : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct FMulticastInlineDelegate OnMinimapVisibilityChanged; // 0x38(0x10)
	struct UMenuStackManager* MenuStackManager; // 0x48(0x08)
	struct UHUDElementCoordinator* HUDElementCoordinator; // 0x50(0x08)
	struct UShopScreenCoordinator* ShopScreenCoordinator; // 0x58(0x08)
	struct UOptionsScreenCoordinator* OptionsScreenCoordinator; // 0x60(0x08)
	struct UCoordinatedShooterUIModel* CoordinatedShooterUIModel; // 0x68(0x08)
	struct UMegamapCoordinator* MegamapCoordinator; // 0x70(0x08)
	struct UMissionSettingsScreenCoordinator* MissionSettingsScreenCoordinator; // 0x78(0x08)
	char pad_80[0x10]; // 0x80(0x10)
};

// Class ShooterGame.CoordinatedShooterUIModel
// Size: 0x80 (Inherited: 0x30)
struct UCoordinatedShooterUIModel : UObject {
	struct FMulticastInlineDelegate OnShopVisbilityChanged; // 0x30(0x10)
	struct FMulticastInlineDelegate OnHudVisbilityChanged; // 0x40(0x10)
	struct FMulticastInlineDelegate OnOptionsVisbilityChanged; // 0x50(0x10)
	struct FMulticastInlineDelegate OnMegamapVisibilityChanged; // 0x60(0x10)
	struct FMulticastInlineDelegate OnMinimapVisibilityChanged; // 0x70(0x10)
};

// Class ShooterGame.InventorySlotModel
// Size: 0x90 (Inherited: 0x30)
struct UInventorySlotModel : UObject {
	int32_t Charges; // 0x30(0x04)
	int32_t MaxCharges; // 0x34(0x04)
	int32_t ExtraCharges; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct UShopPurchasableModel* ItemDetails; // 0x40(0x08)
	struct UShopPurchasableModel* UpgradeDetails; // 0x48(0x08)
	struct UCharacterHudComponent* CurrentItemHudComponent; // 0x50(0x08)
	struct FMulticastInlineDelegate OnModelUpdated; // 0x58(0x10)
	struct TArray<enum class EAresItemSlot> CompatibleSlotTypes; // 0x68(0x10)
	struct AShooterPlayerState* PlayerState; // 0x78(0x08)
	enum class EAresItemSlot ItemSlot; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
	struct AAresItem* CurrentItem; // 0x88(0x08)
};

// Class ShooterGame.PurchasableWeaponData
// Size: 0x60 (Inherited: 0x30)
struct UPurchasableWeaponData : UObject {
	float MaxDamage; // 0x30(0x04)
	float MinDamage; // 0x34(0x04)
	float FarthestRangeForMaxDamage; // 0x38(0x04)
	float ClostedRangeForMinDamage; // 0x3c(0x04)
	float HeadshotMultiplier; // 0x40(0x04)
	float MinSpread; // 0x44(0x04)
	float MaxSpread; // 0x48(0x04)
	float FiringRate; // 0x4c(0x04)
	float MagazineSize; // 0x50(0x04)
	float ReloadSpeed; // 0x54(0x04)
	float MovementSpeed; // 0x58(0x04)
	float ReadyTime; // 0x5c(0x04)
};

// Class ShooterGame.ShopPurchasableModel
// Size: 0x190 (Inherited: 0x30)
struct UShopPurchasableModel : UObject {
	int32_t Price; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct FText Name; // 0x38(0x18)
	struct TArray<enum class EAresItemSlot> CompatibleSlots; // 0x50(0x10)
	struct FSlateBrush ShopImage; // 0x60(0x90)
	struct FName ShopCategory; // 0xf0(0x0c)
	struct FName ShopSubcategory; // 0xfc(0x0c)
	struct FText ShopCategoryText; // 0x108(0x18)
	struct FShopGridPosition ShopGridPosition; // 0x120(0x08)
	struct FText Description; // 0x128(0x18)
	bool bCanAfford; // 0x140(0x01)
	bool bCanPurchase; // 0x141(0x01)
	bool bCanSell; // 0x142(0x01)
	bool bIsOwned; // 0x143(0x01)
	char pad_144[0x4]; // 0x144(0x04)
	struct TArray<enum class EAresItemSlot> InventorySlotsOwnedIn; // 0x148(0x10)
	bool bCanDrop; // 0x158(0x01)
	bool bCanRemove; // 0x159(0x01)
	bool bCanTrash; // 0x15a(0x01)
	bool bShowInStore; // 0x15b(0x01)
	char pad_15C[0x4]; // 0x15c(0x04)
	struct UPurchasableWeaponData* WeaponDetails; // 0x160(0x08)
	struct FMulticastInlineDelegate OnModelUpdated; // 0x168(0x10)
	bool bWasPurchasedThisRound; // 0x178(0x01)
	char pad_179[0x3]; // 0x179(0x03)
	int32_t SellPrice; // 0x17c(0x04)
	struct AOwnerExclusivePlayerInfo* PlayerInfo; // 0x180(0x08)
	struct UAresPurchasable* Purchasable; // 0x188(0x08)
};

// Class ShooterGame.ShopGameInfoModel
// Size: 0x50 (Inherited: 0x30)
struct UShopGameInfoModel : UObject {
	int32_t CurrentRound; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct FMulticastInlineDelegate OnModelUpdated; // 0x38(0x10)
	struct AShooterGameState* GameState; // 0x48(0x08)
};

// Class ShooterGame.ShopPlayerModel
// Size: 0x250 (Inherited: 0x30)
struct UShopPlayerModel : UObject {
	struct FString PlayerName; // 0x30(0x10)
	int32_t LoadoutValue; // 0x40(0x04)
	int32_t PlayerMoney; // 0x44(0x04)
	int32_t PlayerEnergy; // 0x48(0x04)
	int32_t TotalPurchases; // 0x4c(0x04)
	struct APawn* DesiredClass; // 0x50(0x08)
	struct FText ClassName; // 0x58(0x18)
	struct FSlateBrush ClassPortrait; // 0x70(0x90)
	int32_t UltimatePoints; // 0x100(0x04)
	int32_t RefundableUltimatePoints; // 0x104(0x04)
	int32_t ClassUltimatePointsNeeded; // 0x108(0x04)
	char pad_10C[0x4]; // 0x10c(0x04)
	struct FSlateBrush ClassUltiamteIcon; // 0x110(0x90)
	struct UInventorySlotModel* PrimarySlot; // 0x1a0(0x08)
	struct UInventorySlotModel* SecondarySlot; // 0x1a8(0x08)
	struct UInventorySlotModel* GrenadeSlot; // 0x1b0(0x08)
	struct UInventorySlotModel* Ability1Slot; // 0x1b8(0x08)
	struct UInventorySlotModel* Ability2Slot; // 0x1c0(0x08)
	struct UInventorySlotModel* UltimateSlot; // 0x1c8(0x08)
	struct UInventorySlotModel* ArmorSlot; // 0x1d0(0x08)
	struct UInventorySlotModel* PassiveSlot; // 0x1d8(0x08)
	struct TArray<struct FAresPlayerRoundInfo> RoundInfos; // 0x1e0(0x10)
	struct FMulticastInlineDelegate OnModelUpdated; // 0x1f0(0x10)
	struct FMulticastInlineDelegate OnSlotCompatibilityUpdated; // 0x200(0x10)
	float PreviousPurchaseTime; // 0x210(0x04)
	char pad_214[0x4]; // 0x214(0x04)
	struct FMulticastInlineDelegate OnFulfillGunRequest; // 0x218(0x10)
	struct FMulticastInlineDelegate OnMakeGunRequest; // 0x228(0x10)
	struct FMulticastInlineDelegate OnCancelGunRequest; // 0x238(0x10)
	struct AShooterPlayerState* PlayerState; // 0x248(0x08)
};

// Class ShooterGame.ShopAbilitiesContainer
// Size: 0x2c8 (Inherited: 0x2c8)
struct UShopAbilitiesContainer : UUserWidget {
};

// Class ShooterGame.ShopItemCategoryContainer
// Size: 0x2c8 (Inherited: 0x2c8)
struct UShopItemCategoryContainer : UDesignableUserWidget {
};

// Class ShooterGame.ShopArmorCategoryContainer
// Size: 0x2c8 (Inherited: 0x2c8)
struct UShopArmorCategoryContainer : UUserWidget {
};

// Class ShooterGame.ShopSidearmsCategoryContainer
// Size: 0x2c8 (Inherited: 0x2c8)
struct UShopSidearmsCategoryContainer : UUserWidget {
};

// Class ShooterGame.ShopItemDetailPanel
// Size: 0x2d8 (Inherited: 0x2c8)
struct UShopItemDetailPanel : UUserWidget {
	struct FMulticastInlineDelegate OnItemPreviewReset; // 0x2c8(0x10)
};

// Class ShooterGame.ShopSlotHeader
// Size: 0x2c8 (Inherited: 0x2c8)
struct UShopSlotHeader : UUserWidget {
};

// Class ShooterGame.ShopTeamLoadout
// Size: 0x2c8 (Inherited: 0x2c8)
struct UShopTeamLoadout : UUserWidget {
};

// Class ShooterGame.ShopConfirmationToast
// Size: 0x2c8 (Inherited: 0x2c8)
struct UShopConfirmationToast : UUserWidget {
};

// Class ShooterGame.ShopScreen
// Size: 0x2d0 (Inherited: 0x2c8)
struct UShopScreen : UUserWidget {
	int32_t ZOrder; // 0x2c8(0x04)
	char pad_2CC[0x4]; // 0x2cc(0x04)
};

// Class ShooterGame.ShopContentWidget
// Size: 0x340 (Inherited: 0x2c8)
struct UShopContentWidget : UUserWidget {
	struct UHorizontalBox* RankUpWidgetContainer; // 0x2c8(0x08)
	struct UShopAbilitiesContainer* AbilitiesContainer; // 0x2d0(0x08)
	struct UShopArmorCategoryContainer* ArmorContainer; // 0x2d8(0x08)
	struct UShopSidearmsCategoryContainer* SidearmsContainer; // 0x2e0(0x08)
	struct UShopItemCategoryContainer* HeavyWeaponsContainer; // 0x2e8(0x08)
	struct UShopItemCategoryContainer* ShotgunsContainer; // 0x2f0(0x08)
	struct UShopItemCategoryContainer* SMGsContainer; // 0x2f8(0x08)
	struct UShopItemCategoryContainer* SniperRiflesContainer; // 0x300(0x08)
	struct UShopItemCategoryContainer* RiflesContainer; // 0x308(0x08)
	struct UShopItemDetailPanel* ItemDetailPanel; // 0x310(0x08)
	struct UShopTeamLoadout* TeamLoadoutRecap; // 0x318(0x08)
	struct UShopConfirmationToast* Toast; // 0x320(0x08)
	struct UShopSlotHeader* ShopSlotHeaderArmor; // 0x328(0x08)
	struct UShopSlotHeader* ShopSlotHeaderPrimary; // 0x330(0x08)
	struct UShopSlotHeader* ShopSlotHeaderSidearm; // 0x338(0x08)
};

// Class ShooterGame.ShopScreenCoordinator
// Size: 0xa8 (Inherited: 0x30)
struct UShopScreenCoordinator : UObject {
	char pad_30[0x28]; // 0x30(0x28)
	struct UCoordinatedShooterUIModel* CoordinatedShooterUIModel; // 0x58(0x08)
	struct UMenuStackManager* MenuStackManager; // 0x60(0x08)
	struct AShooterPlayerController* PlayerController; // 0x68(0x08)
	struct UMenuStackEntry* ShopMenuStackEntry; // 0x70(0x08)
	struct TArray<struct UShopPurchasableModel*> CurrentPurchasablesModel; // 0x78(0x10)
	struct TArray<struct UShopPlayerModel*> CurrentTeammateModel; // 0x88(0x10)
	struct UShopPlayerModel* CurrentPlayerModel; // 0x98(0x08)
	struct UShopGameInfoModel* CurrentGameInfoModel; // 0xa0(0x08)
};

// Class ShooterGame.ShopScreenImplementation
// Size: 0x2f0 (Inherited: 0x2d0)
struct UShopScreenImplementation : UShopScreen {
	bool bIsUsingGamepad; // 0x2d0(0x01)
	char pad_2D1[0x1]; // 0x2d1(0x01)
	bool bGamepadCanClose; // 0x2d2(0x01)
	bool bShopIsOpen; // 0x2d3(0x01)
	char pad_2D4[0x4]; // 0x2d4(0x04)
	struct UWidget* GamepadFirstFocusWidget; // 0x2d8(0x08)
	struct TArray<struct UUserWidget*> GamepadChildWidgets; // 0x2e0(0x10)
};

// Class ShooterGame.SignatureAbilityResourceComponent
// Size: 0x170 (Inherited: 0x168)
struct USignatureAbilityResourceComponent : UEquipmentChargeComponent {
	int32_t NumSignatureChargesPerUse; // 0x168(0x04)
	int32_t AuthSignatureChargeAmount; // 0x16c(0x04)
};

// Class ShooterGame.SimpleLifecycleWidget
// Size: 0x2e8 (Inherited: 0x2c8)
struct USimpleLifecycleWidget : UUserWidget {
	struct FMulticastInlineDelegate OnShowCompleted; // 0x2c8(0x10)
	struct FMulticastInlineDelegate OnHideCompleted; // 0x2d8(0x10)
};

// Class ShooterGame.SimpleReplicationSleepComponent
// Size: 0x110 (Inherited: 0x110)
struct USimpleReplicationSleepComponent : UReplicationSleepComponent {
};

// Class ShooterGame.SimpleSectionHeadersListModelBase
// Size: 0x70 (Inherited: 0x58)
struct USimpleSectionHeadersListModelBase : UWrapperListModel {
	struct TArray<struct FSimpleSectionHeadersListModelBase_HeaderInfo> HeaderList; // 0x58(0x10)
	char pad_68[0x8]; // 0x68(0x08)
};

// Class ShooterGame.SimpleSectionHeadersListModel
// Size: 0x90 (Inherited: 0x70)
struct USimpleSectionHeadersListModel : USimpleSectionHeadersListModelBase {
	char pad_70[0x20]; // 0x70(0x20)
};

// Class ShooterGame.SingleItemListModel
// Size: 0xa0 (Inherited: 0x48)
struct USingleItemListModel : UOrderedListModelBase {
	struct FWildcard ContentItem; // 0x48(0x40)
	char pad_88[0x18]; // 0x88(0x18)
};

// Class ShooterGame.SnapshotRewinderComponent
// Size: 0x100 (Inherited: 0xe8)
struct USnapshotRewinderComponent : UActorComponent {
	char pad_E8[0x8]; // 0xe8(0x08)
	bool bSampleEveryFrame; // 0xf0(0x01)
	char pad_F1[0x3]; // 0xf1(0x03)
	float TimeBetweenRewindSnapshots; // 0xf4(0x04)
	float MaxRewindTime; // 0xf8(0x04)
	float LastSnapshotCreatedTimeStamp; // 0xfc(0x04)
};

// Class ShooterGame.SkeletalPoseRewinderComponent
// Size: 0x140 (Inherited: 0x100)
struct USkeletalPoseRewinderComponent : USnapshotRewinderComponent {
	struct USkeletalMeshComponent* SkeletalMeshComponent; // 0x100(0x08)
	struct TArray<struct FSkeletalPoseSnapshot> Snapshots; // 0x108(0x10)
	char pad_118[0x28]; // 0x118(0x28)
};

// Class ShooterGame.SkinUpgradeButton
// Size: 0x2f8 (Inherited: 0x2c8)
struct USkinUpgradeButton : UUserWidget {
	struct FGuid ProgressionDefinitionID; // 0x2c8(0x10)
	enum class ESkinUpgradeState UpgradeState; // 0x2d8(0x01)
	char pad_2D9[0x3]; // 0x2d9(0x03)
	int32_t CurrentTier; // 0x2dc(0x04)
	int32_t NextTier; // 0x2e0(0x04)
	int32_t Cost; // 0x2e4(0x04)
	struct UCurrencyDataAsset* CurrencyDataAsset; // 0x2e8(0x08)
	struct USidegradeModel* CurrentSidegradeModel; // 0x2f0(0x08)
};

// Class ShooterGame.SlashCommandHandler
// Size: 0x30 (Inherited: 0x30)
struct USlashCommandHandler : UInterface {
};

// Class ShooterGame.SlotModifierComponent
// Size: 0xf8 (Inherited: 0xe8)
struct USlotModifierComponent : UActorComponent {
	enum class EAresItemSlot TargetSlot; // 0xe8(0x01)
	enum class EAresItemSlot AddedCompatibility; // 0xe9(0x01)
	char pad_EA[0x6]; // 0xea(0x06)
	struct UAresInventory* Inventory; // 0xf0(0x08)
};

// Class ShooterGame.SniperCrosshairHudElement
// Size: 0x190 (Inherited: 0x178)
struct USniperCrosshairHudElement : UBaseCrosshairHudElement {
	struct TArray<struct FSniperCrosshairMaterial> SniperCrosshairMaterialsToDraw; // 0x178(0x10)
	struct UCurveFloat* SpreadToDistortionCurve; // 0x188(0x08)
};

// Class ShooterGame.SocialPartyTeam
// Size: 0x88 (Inherited: 0x30)
struct USocialPartyTeam : UObject {
	struct TArray<struct USocialPlayer*> Players; // 0x30(0x10)
	struct FMulticastInlineDelegate OnPlayerAdded; // 0x40(0x10)
	struct FMulticastInlineDelegate OnPlayerRemoved; // 0x50(0x10)
	char pad_60[0x28]; // 0x60(0x28)
};

// Class ShooterGame.SocialPartyModel
// Size: 0x1d0 (Inherited: 0x30)
struct USocialPartyModel : UObject {
	struct FString PartyID; // 0x30(0x10)
	struct FMulticastInlineDelegate OnOwnerProvisioningFlowChanged; // 0x40(0x10)
	struct FMulticastInlineDelegate OnOwnerSessionLoopStateChanged; // 0x50(0x10)
	struct FMulticastInlineDelegate OnOwnerMatchMapChanged; // 0x60(0x10)
	struct FMulticastInlineDelegate OnOwnerMatchScoreChanged; // 0x70(0x10)
	struct FMulticastInlineDelegate OnPartyClientVersionChanged; // 0x80(0x10)
	struct FMulticastInlineDelegate OnPartyStateChanged; // 0x90(0x10)
	struct FMulticastInlineDelegate OnPartyAccessibilityChanged; // 0xa0(0x10)
	struct FMulticastInlineDelegate OnIsPartyOpenChanged; // 0xb0(0x10)
	struct FMulticastInlineDelegate OnIsJoinableChanged; // 0xc0(0x10)
	struct FMulticastInlineDelegate OnIsMyPartyChanged; // 0xd0(0x10)
	struct FMulticastInlineDelegate OnMaxPartySizeChanged; // 0xe0(0x10)
	struct FMulticastInlineDelegate OnPartySizeChanged; // 0xf0(0x10)
	struct FMulticastInlineDelegate OnVersionChanged; // 0x100(0x10)
	struct FMulticastInlineDelegate OnQueueEntryTimeChanged; // 0x110(0x10)
	struct FMulticastInlineDelegate OnPendingRequestChanged; // 0x120(0x10)
	struct USocialPartyTeam* AllMembers; // 0x130(0x08)
	enum class EProvisioningFlowID OwnerProvisioningFlow; // 0x138(0x01)
	enum class ESessionLoopState OwnerSessionLoopState; // 0x139(0x01)
	char pad_13A[0x6]; // 0x13a(0x06)
	struct FString OwnerMatchMap; // 0x140(0x10)
	struct FString OwnerMatchCurrentTeam; // 0x150(0x10)
	int32_t OwnerMatchScoreAllyTeam; // 0x160(0x04)
	int32_t OwnerMatchScoreEnemyTeam; // 0x164(0x04)
	bool bIsCustomGame; // 0x168(0x01)
	char pad_169[0x7]; // 0x169(0x07)
	struct USocialPlayer* PartyLeader; // 0x170(0x08)
	struct FString PartyClientVersion; // 0x178(0x10)
	enum class EAresPartyState PartyState; // 0x188(0x01)
	enum class EAresPartyAccessibility PartyAccessibility; // 0x189(0x01)
	bool bIsPartyOpen; // 0x18a(0x01)
	bool bIsJoinable; // 0x18b(0x01)
	bool bIsMyParty; // 0x18c(0x01)
	bool bHasPendingRequest; // 0x18d(0x01)
	char pad_18E[0x2]; // 0x18e(0x02)
	int32_t MaxPartySize; // 0x190(0x04)
	int32_t PartySize; // 0x194(0x04)
	int32_t Version; // 0x198(0x04)
	char pad_19C[0x4]; // 0x19c(0x04)
	struct FDateTime QueueEntryTime; // 0x1a0(0x08)
	bool bHasInvite; // 0x1a8(0x01)
	char pad_1A9[0x7]; // 0x1a9(0x07)
	struct FDateTime LastInviteSent; // 0x1b0(0x08)
	bool bHasRequest; // 0x1b8(0x01)
	char pad_1B9[0x7]; // 0x1b9(0x07)
	struct FDateTime LastRequestSent; // 0x1c0(0x08)
	char pad_1C8[0x8]; // 0x1c8(0x08)
};

// Class ShooterGame.SocialPlayer
// Size: 0xe8 (Inherited: 0x30)
struct USocialPlayer : UObject {
	struct FMulticastInlineDelegate OnInviteChanged; // 0x30(0x10)
	struct FMulticastInlineDelegate OnRequestChanged; // 0x40(0x10)
	struct FMulticastInlineDelegate OnNotificationAdded; // 0x50(0x10)
	struct FMulticastInlineDelegate OnNotificationRemoved; // 0x60(0x10)
	struct FMulticastInlineDelegate OnPartyMembersChanged; // 0x70(0x10)
	struct UPlatformPlayer* PlatformPlayer; // 0x80(0x08)
	struct UPartyMessageModel* Invite; // 0x88(0x08)
	struct UPartyMessageModel* Request; // 0x90(0x08)
	struct FDateTime LastInteraction; // 0x98(0x08)
	struct TArray<struct UNotification*> NotificationsForPlayer; // 0xa0(0x10)
	char pad_B0[0x10]; // 0xb0(0x10)
	struct USocialPartyModel* AssociatedSocialParty; // 0xc0(0x08)
	struct USocialPartyModel* LastAssociatedSocialParty; // 0xc8(0x08)
	char pad_D0[0x18]; // 0xd0(0x18)
};

// Class ShooterGame.SocialViewControllerV3
// Size: 0x358 (Inherited: 0x80)
struct USocialViewControllerV3 : UInitSystem {
	struct FMulticastInlineDelegate OnCurrentPartyChanged; // 0x80(0x10)
	struct FMulticastInlineDelegate OnFriendPartyListWasReset; // 0x90(0x10)
	struct FMulticastInlineDelegate OnNumFriendPartiesOnlineChanged; // 0xa0(0x10)
	struct FMulticastInlineDelegate OnNumFriendsOnlineInPartiesChanged; // 0xb0(0x10)
	struct FMulticastInlineDelegate OnFriendsOnlineInOtherGamesListWasReset; // 0xc0(0x10)
	struct FMulticastInlineDelegate OnNumFriendsOnlineInOtherGamesChanged; // 0xd0(0x10)
	struct FMulticastInlineDelegate OnFriendsOfflineListWasReset; // 0xe0(0x10)
	struct FMulticastInlineDelegate OnNumFriendsOfflineChanged; // 0xf0(0x10)
	struct FMulticastInlineDelegate OnSocialPartyAdded; // 0x100(0x10)
	struct FMulticastInlineDelegate OnSocialPartyExpired; // 0x110(0x10)
	struct FMulticastInlineDelegate OnSocialPlayerCategoryChanged; // 0x120(0x10)
	struct FMulticastInlineDelegate OnSocialPlayerAdded; // 0x130(0x10)
	struct FMulticastInlineDelegate OnSocialPlayerExpired; // 0x140(0x10)
	struct FMulticastInlineDelegate OnAllModelsConsistent; // 0x150(0x10)
	struct FMulticastInlineDelegate OnPartyMessageAdded; // 0x160(0x10)
	struct FMulticastInlineDelegate OnPartyMessageRemoved; // 0x170(0x10)
	struct FMulticastInlineDelegate OnSocialPanelOpenStateChanged; // 0x180(0x10)
	char pad_190[0x10]; // 0x190(0x10)
	struct UPartyManager* PartyManager; // 0x1a0(0x08)
	struct UPartyViewController* PartyViewController; // 0x1a8(0x08)
	struct UNotificationManager* NotificationManager; // 0x1b0(0x08)
	struct UPartyModel* PartyModel; // 0x1b8(0x08)
	struct UPresenceManager* PresenceManager; // 0x1c0(0x08)
	struct UPlatformPlayerManager* PlatformPlayerManager; // 0x1c8(0x08)
	struct UConfigManager* ConfigManager; // 0x1d0(0x08)
	struct UPlayerListingManager* PlayerListingManager; // 0x1d8(0x08)
	struct UFriendsManager* FriendsManager; // 0x1e0(0x08)
	struct UGameFlowStateManager* GameFlowStateManager; // 0x1e8(0x08)
	char pad_1F0[0x10]; // 0x1f0(0x10)
	struct USocialPartyModel* CurrentParty; // 0x200(0x08)
	char pad_208[0x10]; // 0x208(0x10)
	struct TArray<struct USocialPartyModel*> FriendParties_Backing; // 0x218(0x10)
	char pad_228[0x30]; // 0x228(0x30)
	struct TArray<struct USocialPlayer*> FriendsOnlineInOtherGames; // 0x258(0x10)
	char pad_268[0x8]; // 0x268(0x08)
	struct TArray<struct USocialPlayer*> FriendsOffline; // 0x270(0x10)
	char pad_280[0x8]; // 0x280(0x08)
	struct TMap<struct FString, struct USocialPartyModel*> AllSocialPartiesByID; // 0x288(0x50)
	struct TMap<struct FString, struct USocialPlayer*> AllSocialPlayersBySubject; // 0x2d8(0x50)
	struct TArray<struct UPartyMessageModel*> PartyMessages; // 0x328(0x10)
	struct TArray<struct UPartyMessageModel*> HiddenPartyMessages; // 0x338(0x10)
	char pad_348[0x8]; // 0x348(0x08)
	struct FTimerHandle ScheduledUpdateTimerHandle; // 0x350(0x08)
};

// Class ShooterGame.SortedListModelBase
// Size: 0x68 (Inherited: 0x68)
struct USortedListModelBase : UIndexedWrapperListModelBase {
};

// Class ShooterGame.SortedListModel
// Size: 0x78 (Inherited: 0x68)
struct USortedListModel : USortedListModelBase {
	char pad_68[0x10]; // 0x68(0x10)
};

// Class ShooterGame.SortedMapToListModelBase
// Size: 0xb8 (Inherited: 0x48)
struct USortedMapToListModelBase : UOrderedListModelBase {
	struct TArray<struct FWildcard> Items; // 0x48(0x10)
	struct TMap<struct FWildcard, int32_t> KeyToIndexMap; // 0x58(0x50)
	struct TScriptInterface<IUnorderedMapModel> WrappedMapModel; // 0xa8(0x10)
};

// Class ShooterGame.SortedMapToListModel
// Size: 0xc8 (Inherited: 0xb8)
struct USortedMapToListModel : USortedMapToListModelBase {
	char pad_B8[0x10]; // 0xb8(0x10)
};

// Class ShooterGame.SoundNodeConstParamCrossFade
// Size: 0x80 (Inherited: 0x60)
struct USoundNodeConstParamCrossFade : USoundNode {
	struct TArray<struct FDistanceDatum> CrossFadeInput; // 0x60(0x10)
	struct FName ParamName; // 0x70(0x0c)
	char pad_7C[0x4]; // 0x7c(0x04)
};

// Class ShooterGame.SoundNodeLocalPlayer
// Size: 0x60 (Inherited: 0x60)
struct USoundNodeLocalPlayer : USoundNode {
};

// Class ShooterGame.SpawnActorProjectileEffectComponent
// Size: 0x128 (Inherited: 0xf8)
struct USpawnActorProjectileEffectComponent : UBaseProjectileEffectComponent {
	struct FMulticastInlineDelegate OnSpawnActor; // 0xf8(0x10)
	struct FMulticastInlineDelegate OnSpawnActorFailed; // 0x108(0x10)
	enum class ESpawnActorCollisionHandlingMethod SpawnCollision; // 0x118(0x01)
	char pad_119[0x7]; // 0x119(0x07)
	struct AActor* ActorSpawned; // 0x120(0x08)
};

// Class ShooterGame.SpawnActorStateComponent
// Size: 0x350 (Inherited: 0x2c8)
struct USpawnActorStateComponent : UScriptStateComponent {
	struct FMulticastInlineDelegate OnSetSpawnVariables; // 0x2c8(0x10)
	struct FMulticastInlineDelegate OnSpawnActor; // 0x2d8(0x10)
	struct TArray<struct FSpawnActorInfo> SpawnedActors; // 0x2e8(0x10)
	enum class ESpawnActorCollisionHandlingMethod SpawnMethod; // 0x2f8(0x01)
	bool bWaitForClientSpawn; // 0x2f9(0x01)
	char pad_2FA[0x6]; // 0x2fa(0x06)
	struct AActor* SpawnedActorType; // 0x300(0x08)
	bool bCosmeticActor; // 0x308(0x01)
	bool bPossessablePawn; // 0x309(0x01)
	char pad_30A[0x46]; // 0x30a(0x46)
};

// Class ShooterGame.SpawnPointGeneratorComponent
// Size: 0xf8 (Inherited: 0xe8)
struct USpawnPointGeneratorComponent : UActorComponent {
	struct FMulticastInlineDelegate OnSpawnPointsGenerated; // 0xe8(0x10)
};

// Class ShooterGame.SpawnPointPlayerSpawner
// Size: 0x30 (Inherited: 0x30)
struct USpawnPointPlayerSpawner : UPlayerSpawner {
};

// Class ShooterGame.SpawnPointScorerComponent
// Size: 0x1a8 (Inherited: 0xe8)
struct USpawnPointScorerComponent : UActorComponent {
	struct FMulticastInlineDelegate OnSpawnPointDataInitialized; // 0xe8(0x10)
	struct FMulticastInlineDelegate OnSpawnPointUsed; // 0xf8(0x10)
	struct FMulticastInlineDelegate OnSpawnPointUpdated; // 0x108(0x10)
	float FFACharacterLookAheadTimeSeconds; // 0x118(0x04)
	float TwoTeamCharacterLookAheadTimeSeconds; // 0x11c(0x04)
	float FFASpawnPointLookAheadTimeSeconds; // 0x120(0x04)
	float TwoTeamSpawnPointLookAheadTimeSeconds; // 0x124(0x04)
	float SpawnPointLookAheadBoxEnabledMultiplier; // 0x128(0x04)
	int32_t DesiredNumZeroVisibilitySpawnPoints; // 0x12c(0x04)
	float MinDynamicAdjustmentMultiplier; // 0x130(0x04)
	float MaxDynamicAdjustmentMultiplier; // 0x134(0x04)
	float DynamicAdjustmentIncrementAmount; // 0x138(0x04)
	int32_t NumSpawnPointsToReservePerAdditionalDeadCharacter; // 0x13c(0x04)
	float InvalidationDistance; // 0x140(0x04)
	float DefaultCharacterEyeHeight; // 0x144(0x04)
	float DefaultCharacterRunSpeed; // 0x148(0x04)
	float DefaultCharacterJumpSpeed; // 0x14c(0x04)
	struct TArray<struct AShooterCharacter*> RegisteredShooterCharacters; // 0x150(0x10)
	struct TArray<struct FSpawnPointData> SpawnPoints; // 0x160(0x10)
	struct TArray<int32_t> InitialSpawnPointIndices; // 0x170(0x10)
	struct TArray<enum class EAresTeamRole> RegisteredTeamRoles; // 0x180(0x10)
	char pad_190[0x18]; // 0x190(0x18)
};

// Class ShooterGame.SpawnPointScorerDebugComponent
// Size: 0x108 (Inherited: 0xe8)
struct USpawnPointScorerDebugComponent : UActorComponent {
	struct TArray<struct FSpawnPointDebugData> SpawnPointDebugData; // 0xe8(0x10)
	int32_t LastUsedSpawnPointDebugDataIndex; // 0xf8(0x04)
	int32_t LastUpdatedSpawnPointDebugDataIndex; // 0xfc(0x04)
	float LookAheadDynamicAdjustmentMultiplier; // 0x100(0x04)
	char pad_104[0x4]; // 0x104(0x04)
};

// Class ShooterGame.SpectateInOrderActionComponent
// Size: 0x128 (Inherited: 0x108)
struct USpectateInOrderActionComponent : USpectateActionComponent {
	char pad_108[0x20]; // 0x108(0x20)
};

// Class ShooterGame.SpectateSpecificActionComponent
// Size: 0x140 (Inherited: 0x108)
struct USpectateSpecificActionComponent : USpectateActionComponent {
	char pad_108[0x38]; // 0x108(0x38)
};

// Class ShooterGame.SpectatorWidgetBaseNative
// Size: 0x300 (Inherited: 0x2d8)
struct USpectatorWidgetBaseNative : UCoordinatedHUDElement {
	struct UImage* CharacterPortrait; // 0x2d8(0x08)
	struct UImage* ObjectiveIcon; // 0x2e0(0x08)
	struct UImage* objectiveIconbg; // 0x2e8(0x08)
	struct UTextBlock* PlayerName; // 0x2f0(0x08)
	struct UImage* teamBackground; // 0x2f8(0x08)
};

// Class ShooterGame.SplineMovementComponent
// Size: 0x160 (Inherited: 0x128)
struct USplineMovementComponent : UMovementComponent {
	struct USplineComponent* SplineComponent; // 0x128(0x08)
	struct TArray<struct FVector> Trajectory; // 0x130(0x10)
	float SpeedAlongSpline; // 0x140(0x04)
	enum class ESplineMovementSpeedUnit SpeedUnit; // 0x144(0x01)
	char pad_145[0x3]; // 0x145(0x03)
	float ClientPosition; // 0x148(0x04)
	float ServerPosition; // 0x14c(0x04)
	float ClientMovementTime; // 0x150(0x04)
	float ServerMovementTime; // 0x154(0x04)
	bool bClientReceivedNewServerMovementTime; // 0x158(0x01)
	char pad_159[0x3]; // 0x159(0x03)
	float ServerTeleportTime; // 0x15c(0x04)
};

// Class ShooterGame.SplitBodyRotationBaseComponent
// Size: 0x168 (Inherited: 0xe8)
struct USplitBodyRotationBaseComponent : UActorComponent {
	char pad_E8[0x8]; // 0xe8(0x08)
	float TurnRateScale; // 0xf0(0x04)
	float TurnRateScaleBlendOut; // 0xf4(0x04)
	float TurnRateScaleSpecialTurnState; // 0xf8(0x04)
	float TurnAtAngle; // 0xfc(0x04)
	float MaxTurnAtAngle; // 0x100(0x04)
	float UpdateTurnAngleMinPercent; // 0x104(0x04)
	float UpdateTurnAngleMaxPercent; // 0x108(0x04)
	float StationaryRecenterTime; // 0x10c(0x04)
	float StationaryRecenterMinimumAngle; // 0x110(0x04)
	bool bEnableSpecialTurnState; // 0x114(0x01)
	char pad_115[0x3]; // 0x115(0x03)
	float SpecialTurnStateDelayTime; // 0x118(0x04)
	float SpecialTurnStateDeltaYawTriggerValue; // 0x11c(0x04)
	float SpecialTurnStateAlphaBlendTriggerValue; // 0x120(0x04)
	char pad_124[0x14]; // 0x124(0x14)
	float LowerBodyTurnAngle; // 0x138(0x04)
	float LowerBodyAlphaBlend; // 0x13c(0x04)
	char pad_140[0x28]; // 0x140(0x28)
};

// Class ShooterGame.SplitBodyRotationComponent
// Size: 0x168 (Inherited: 0x168)
struct USplitBodyRotationComponent : USplitBodyRotationBaseComponent {
};

// Class ShooterGame.SplitBodyRotationGroundComponent
// Size: 0x168 (Inherited: 0x168)
struct USplitBodyRotationGroundComponent : USplitBodyRotationBaseComponent {
};

// Class ShooterGame.SplitBodyRotationRopeComponent
// Size: 0x168 (Inherited: 0x168)
struct USplitBodyRotationRopeComponent : USplitBodyRotationBaseComponent {
};

// Class ShooterGame.SprayUIData
// Size: 0x90 (Inherited: 0x90)
struct USprayUIData : UBaseContentUIData {
};

// Class ShooterGame.SprayDataAsset
// Size: 0xc8 (Inherited: 0x50)
struct USprayDataAsset : UAresBasePrimaryDataAsset {
	struct TSoftClassPtr<UObject> UIData; // 0x50(0x30)
	struct TSoftClassPtr<UObject> Theme; // 0x80(0x30)
	struct TArray<struct TSoftClassPtr<UObject>> Levels; // 0xb0(0x10)
	enum class EAresSprayCategory Category; // 0xc0(0x01)
	char pad_C1[0x7]; // 0xc1(0x07)
};

// Class ShooterGame.SprayEquipSlotUIData
// Size: 0x90 (Inherited: 0x90)
struct USprayEquipSlotUIData : UBaseContentUIData {
};

// Class ShooterGame.SprayEquipSlotDataAsset
// Size: 0x88 (Inherited: 0x50)
struct USprayEquipSlotDataAsset : UAresBasePrimaryDataAsset {
	struct TSoftClassPtr<UObject> UIData; // 0x50(0x30)
	int32_t SprayCategoriesAllowed; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
};

// Class ShooterGame.SprayLevelDataAsset
// Size: 0xe8 (Inherited: 0x50)
struct USprayLevelDataAsset : UAresBasePrimaryDataAsset {
	struct TSoftClassPtr<UObject> UIData; // 0x50(0x30)
	struct TSoftClassPtr<UObject> SprayData; // 0x80(0x30)
	struct TSoftClassPtr<UObject> Spray; // 0xb0(0x30)
	int32_t SprayLevel; // 0xe0(0x04)
	char pad_E4[0x4]; // 0xe4(0x04)
};

// Class ShooterGame.SprayLevelUIData
// Size: 0x90 (Inherited: 0x90)
struct USprayLevelUIData : UBaseContentUIData {
};

// Class ShooterGame.SprayLoadoutComponent
// Size: 0x168 (Inherited: 0xe8)
struct USprayLoadoutComponent : UActorComponent {
	struct TMap<struct USprayEquipSlotDataAsset*, struct AAresSpray*> SprayLoadout; // 0xe8(0x50)
	struct FMulticastInlineDelegate OnRepLoadoutDelegate; // 0x138(0x10)
	struct TArray<struct AAresSpray*> SprayLoadoutV2; // 0x148(0x10)
	struct TArray<struct FGuid> SprayLoadoutLevelIDs; // 0x158(0x10)
};

// Class ShooterGame.StabilityComponent
// Size: 0x1c40 (Inherited: 0xe8)
struct UStabilityComponent : UActorComponent {
	char pad_E8[0x8]; // 0xe8(0x08)
	float InProgressCrouchPenalty; // 0xf0(0x04)
	char pad_F4[0x4]; // 0xf4(0x04)
	struct FRuntimeFloatCurve LandingPenaltyCurve; // 0xf8(0x88)
	bool bRecoveryEnabled; // 0x180(0x01)
	char pad_181[0x7]; // 0x181(0x07)
	struct FStabilityVariable Error; // 0x188(0x7c8)
	struct FFixedRateDecayForStability MovementDecayRate; // 0x950(0xa0)
	struct FFixedRateDecayForStability PitchRecoilStabilityDecayRate; // 0x9f0(0xa0)
	struct FFixedRateDecayForStability YawRecoilStabilityDecayRate; // 0xa90(0xa0)
	struct FStabilityVariable PitchRecoil; // 0xb30(0x7c8)
	struct FStabilityVariable YawRecoil; // 0x12f8(0x7c8)
	enum class EStabilityInterpolationType StabilityIncreaseInterpolationType; // 0x1ac0(0x01)
	enum class EStabilityInterpolationType StabilityRecoveryInterpolationType; // 0x1ac1(0x01)
	char pad_1AC2[0x6]; // 0x1ac2(0x06)
	struct FRuntimeFloatCurve RecoveryTimeCurve; // 0x1ac8(0x88)
	struct FYawDirectionManipulator YawDirectionManipulator; // 0x1b50(0x2c)
	float GunRecoveryTimeRemainingInSeconds; // 0x1b7c(0x04)
	float GunRecoveryTimeInSeconds; // 0x1b80(0x04)
	float TapEfficiency; // 0x1b84(0x04)
	float InstabilityAccrualBank; // 0x1b88(0x04)
	float InstabilityDeductionPerShot; // 0x1b8c(0x04)
	struct FStabilityInterpolation StabilityInterpolation; // 0x1b90(0x64)
	struct FStabilityInterpolationVariable YawSwitchMultiplierInterpVariable; // 0x1bf4(0x14)
	struct UNetworkedRandomNumberGeneratorComponent* NetworkedRandomNumberGeneratorComponent; // 0x1c08(0x08)
	float ScopedStabilityMultiplier; // 0x1c10(0x04)
	float WalkingDelayTime; // 0x1c14(0x04)
	float RunningTimeToTriggerWalkingDelay; // 0x1c18(0x04)
	char pad_1C1C[0x20]; // 0x1c1c(0x20)
	float MinTaggingOverrideSpeedPercent; // 0x1c3c(0x04)
};

// Class ShooterGame.StabilityVisualizationComponent
// Size: 0x3c8 (Inherited: 0xe8)
struct UStabilityVisualizationComponent : UActorComponent {
	struct FCameraTuning CameraTuning; // 0xe8(0x250)
	struct UStabilityComponent* ActiveStabilityComponent; // 0x338(0x08)
	struct FRuntimeFloatCurve PitchToCrosshairAlphaCurve; // 0x340(0x88)
};

// Class ShooterGame.StabilityVisualizationManagerComponent
// Size: 0xf0 (Inherited: 0xe8)
struct UStabilityVisualizationManagerComponent : UActorComponent {
	struct UStabilityVisualizationComponent* ActiveStabilityVisualizationComponent; // 0xe8(0x08)
};

// Class ShooterGame.StandardAresStringListSetting
// Size: 0x88 (Inherited: 0x30)
struct UStandardAresStringListSetting : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct UArrayListModel* StringListModel; // 0x38(0x08)
	char pad_40[0x48]; // 0x40(0x48)
};

// Class ShooterGame.StandUpAnimSlot1P
// Size: 0x38 (Inherited: 0x38)
struct UStandUpAnimSlot1P : UAnimSlot1P {
};

// Class ShooterGame.StandUpAnimSlotGun1P
// Size: 0x38 (Inherited: 0x38)
struct UStandUpAnimSlotGun1P : UAnimSlotGun1P {
};

// Class ShooterGame.TransformTransitionContext
// Size: 0x60 (Inherited: 0x30)
struct UTransformTransitionContext : UStateTransitionContext {
	struct FTransform Transform; // 0x30(0x30)
};

// Class ShooterGame.ActorListTransitionContext
// Size: 0x40 (Inherited: 0x30)
struct UActorListTransitionContext : UStateTransitionContext {
	struct TArray<struct AActor*> Actors; // 0x30(0x10)
};

// Class ShooterGame.StealthComponent
// Size: 0x288 (Inherited: 0xe8)
struct UStealthComponent : UActorComponent {
	char pad_E8[0x8]; // 0xe8(0x08)
	float StealthRange; // 0xf0(0x04)
	float RevealTime; // 0xf4(0x04)
	float HideTime; // 0xf8(0x04)
	bool bInitialStealthState; // 0xfc(0x01)
	char pad_FD[0x3]; // 0xfd(0x03)
	struct AEffectContainer* StealthVisualizerEffect; // 0x100(0x08)
	struct AEffectContainer* WhileVisibleEffect; // 0x108(0x08)
	struct AEffectContainer* RevealedEffect; // 0x110(0x08)
	struct AEffectContainer* StartHideTimeEffect; // 0x118(0x08)
	struct AEffectContainer* HiddenEffect; // 0x120(0x08)
	struct FMulticastInlineDelegate OnRevealedFromStealth; // 0x128(0x10)
	struct FMulticastInlineDelegate OnHiddenByStealth; // 0x138(0x10)
	struct FMulticastInlineDelegate OnStartHide; // 0x148(0x10)
	struct FMulticastInlineDelegate OnStealthActiveChanged; // 0x158(0x10)
	struct FMulticastInlineDelegate OnSubscribedStealthUpdate; // 0x168(0x10)
	struct FMulticastInlineDelegate OnViewerLeaveStealthRange; // 0x178(0x10)
	struct FMulticastInlineDelegate OnViewerEnterStealthRange; // 0x188(0x10)
	char pad_198[0x80]; // 0x198(0x80)
	bool bStealthIsActive; // 0x218(0x01)
	char pad_219[0x7]; // 0x219(0x07)
	struct TMap<struct TWeakObjectPtr<struct AActor>, struct FRevealInfo> RevealHistory; // 0x220(0x50)
	struct UPrimitiveComponent* OverlapTestComponent; // 0x270(0x08)
	struct UPrimitiveComponent* PendingOverlapTestComponent; // 0x278(0x08)
	struct UStealthComponent* SubscribedToComponent; // 0x280(0x08)
};

// Class ShooterGame.StopLowerBody3P
// Size: 0x38 (Inherited: 0x38)
struct UStopLowerBody3P : UAnimSlotLowerBody3P {
};

// Class ShooterGame.StopUpperBody3P
// Size: 0x38 (Inherited: 0x38)
struct UStopUpperBody3P : UAnimSlotUpperBody3P {
};

// Class ShooterGame.StorefrontItemUIData
// Size: 0x108 (Inherited: 0x90)
struct UStorefrontItemUIData : UBaseContentUIData {
	struct FText Description; // 0x90(0x18)
	struct FText CustomDisplayNameSubtext; // 0xa8(0x18)
	struct UTexture* DisplayIcon2; // 0xc0(0x08)
	struct UTexture* VerticalPromoImage; // 0xc8(0x08)
	bool UseAdditionalContext; // 0xd0(0x01)
	char pad_D1[0x7]; // 0xd1(0x07)
	struct FText PromoExtraDescription; // 0xd8(0x18)
	struct FText BundleExtraDescription; // 0xf0(0x18)
};

// Class ShooterGame.StorefrontItemDataAsset
// Size: 0x80 (Inherited: 0x50)
struct UStorefrontItemDataAsset : UAresBasePrimaryDataAsset {
	struct TSoftClassPtr<UObject> UIData; // 0x50(0x30)
};

// Class ShooterGame.StoreManager
// Size: 0x408 (Inherited: 0x80)
struct UStoreManager : UInitSystem {
	struct FMulticastInlineDelegate OnIsBonusShopActiveChanged; // 0x80(0x10)
	struct FMulticastInlineDelegate OnIsEligibleForJuiceChanged; // 0x90(0x10)
	char pad_A0[0x30]; // 0xa0(0x30)
	struct FMulticastInlineDelegate OnPlayerStoreError; // 0xd0(0x10)
	struct FMulticastInlineDelegate OnWalletUpdated; // 0xe0(0x10)
	struct FMulticastInlineDelegate OnWalletOfTypeUpdated; // 0xf0(0x10)
	char pad_100[0x18]; // 0x100(0x18)
	struct FMulticastInlineDelegate OnOrderSuccess; // 0x118(0x10)
	struct FMulticastInlineDelegate OnOrderError; // 0x128(0x10)
	char pad_138[0x38]; // 0x138(0x38)
	struct FGetWalletResponse Wallet; // 0x170(0x50)
	struct FGetWalletResponse JuiceWallet; // 0x1c0(0x50)
	struct URewardGrantModelFactory* RewardGrantModelFactory; // 0x210(0x08)
	struct UStoreService* StoreService; // 0x218(0x08)
	struct URSOManager* RSOManager; // 0x220(0x08)
	struct URMSManager* RMSManager; // 0x228(0x08)
	struct UContentIndex* ContentIndex; // 0x230(0x08)
	struct UConfigManager* ConfigManager; // 0x238(0x08)
	struct UAresClientEvents* AresClientEvents; // 0x240(0x08)
	struct UPlatformSessionManager* SessionManager; // 0x248(0x08)
	struct UContentManager* ContentManager; // 0x250(0x08)
	struct UStorefrontModelV2* PlayerStorefrontV2; // 0x258(0x08)
	struct TMap<struct FGuid, struct UStoreOffer*> OffersByID; // 0x260(0x50)
	struct TMap<struct FGuid, struct UStoreOffer*> OffersByItemID; // 0x2b0(0x50)
	struct TMap<struct FGuid, struct FStorefrontBundleItem> BundleItemsByItemID; // 0x300(0x50)
	struct TArray<struct UUpgradeCurrencyOffer*> UpgradeCurrencyOffers; // 0x350(0x10)
	struct TMap<enum class EAresContentType, struct FEntitlementTypeInfo> EntitlementTypeInfos; // 0x360(0x50)
	struct TSet<struct FGuid> EquippableSkinIDs; // 0x3b0(0x50)
	char pad_400[0x8]; // 0x400(0x08)
};

// Class ShooterGame.StoreOffer
// Size: 0xa8 (Inherited: 0x30)
struct UStoreOffer : UObject {
	struct FGuid OfferId; // 0x30(0x10)
	bool IsDirectPurchase; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct TArray<struct FStoreOfferReward> Rewards; // 0x48(0x10)
	struct TMap<struct FGuid, int32_t> Cost; // 0x58(0x50)
};

// Class ShooterGame.BonusStoreOfferViewModel
// Size: 0xb8 (Inherited: 0x30)
struct UBonusStoreOfferViewModel : UObject {
	struct FGuid BonusOfferID; // 0x30(0x10)
	struct UStoreOffer* Offer; // 0x40(0x08)
	int32_t DiscountPercent; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct TMap<struct FGuid, int32_t> DiscountedCost; // 0x50(0x50)
	struct FString DiscountPercentDescription; // 0xa0(0x10)
	bool IsSeen; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)
};

// Class ShooterGame.UpgradeCurrencyOffer
// Size: 0x58 (Inherited: 0x30)
struct UUpgradeCurrencyOffer : UObject {
	struct UCurrencyDataAsset* PurchaseCurrency; // 0x30(0x08)
	int32_t Cost; // 0x38(0x04)
	struct FGuid OfferId; // 0x3c(0x10)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct UStorefrontItemDataAsset* StorefrontItem; // 0x50(0x08)
};

// Class ShooterGame.StorefrontModelV2
// Size: 0x90 (Inherited: 0x30)
struct UStorefrontModelV2 : UObject {
	struct UStorefrontBundleModel* FeaturedBundle; // 0x30(0x08)
	struct TArray<struct UStorefrontBundleModel*> FeaturedBundles; // 0x38(0x10)
	struct FDateTime FeaturedExpirationTime; // 0x48(0x08)
	struct FDateTime ExpirationTime; // 0x50(0x08)
	struct TArray<struct UStoreOffer*> SingleItemOffers; // 0x58(0x10)
	struct TArray<struct UBonusStoreOfferViewModel*> BonusStoreOffers; // 0x68(0x10)
	struct TArray<struct UJuiceBoxOfferModel*> JuiceBoxOffers; // 0x78(0x10)
	struct FDateTime BonusStoreExpirationTime; // 0x88(0x08)
};

// Class ShooterGame.StorefrontBundleModel
// Size: 0x70 (Inherited: 0x30)
struct UStorefrontBundleModel : UObject {
	struct FGuid ID; // 0x30(0x10)
	struct UStorefrontItemDataAsset* StorefrontItemDataAsset; // 0x40(0x08)
	struct UCurrencyDataAsset* PurchaseCurrencyDataAsset; // 0x48(0x08)
	struct TArray<struct FStorefrontBundleItem> BundleItems; // 0x50(0x10)
	struct FDateTime BundleExpirationTime; // 0x60(0x08)
	bool WholesaleOnly; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
};

// Class ShooterGame.JuiceBoxOfferModel
// Size: 0x68 (Inherited: 0x30)
struct UJuiceBoxOfferModel : UObject {
	struct FGuid JuiceBoxOfferID; // 0x30(0x10)
	struct UStorefrontItemDataAsset* StorefrontItemDataAsset; // 0x40(0x08)
	struct UJuiceBoxDataAsset* JuiceBoxDataAsset; // 0x48(0x08)
	int32_t Amount; // 0x50(0x04)
	int32_t BonusAmount; // 0x54(0x04)
	struct UCurrencyDataAsset* PurchaseCurrencyDataAsset; // 0x58(0x08)
	int32_t PurchaseCost; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
};

// Class ShooterGame.StoreService
// Size: 0x38 (Inherited: 0x30)
struct UStoreService : UObject {
	struct UConfigManager* ConfigManager; // 0x30(0x08)
};

// Class ShooterGame.StoreUITelemetryManager
// Size: 0x60 (Inherited: 0x30)
struct UStoreUITelemetryManager : UObject {
	char pad_30[0x10]; // 0x30(0x10)
	struct URSOManager* RSOManager; // 0x40(0x08)
	struct UPlatformSessionManager* SessionManager; // 0x48(0x08)
	struct UTelemetryManager* TelemetryManager; // 0x50(0x08)
	struct UConfigManager* ConfigManager; // 0x58(0x08)
};

// Class ShooterGame.StoreViewControllerV2
// Size: 0x168 (Inherited: 0x30)
struct UStoreViewControllerV2 : UObject {
	struct FMulticastInlineDelegate OnStorefrontNeedsRefresh; // 0x30(0x10)
	struct FMulticastInlineDelegate OnBonusStoreEnabledUpdated; // 0x40(0x10)
	struct FMulticastInlineDelegate OnOpenJuiceBoxOrderSubmitted; // 0x50(0x10)
	struct FMulticastInlineDelegate OnOpenJuiceBoxOrderComplete; // 0x60(0x10)
	struct FMulticastInlineDelegate OnOpenJuiceBoxOrderError; // 0x70(0x10)
	struct FMulticastInlineDelegate OnGetOpenJuiceBoxRewardsComplete; // 0x80(0x10)
	struct FMulticastInlineDelegate OnGetOpenJuiceBoxRewardsError; // 0x90(0x10)
	struct FMulticastInlineDelegate OnJuiceBoxAnimationCompleted; // 0xa0(0x10)
	struct FMulticastInlineDelegate OnJuiceBoxAnimationCanceled; // 0xb0(0x10)
	struct FMulticastInlineDelegate OnStorePopupOpened; // 0xc0(0x10)
	struct FMulticastInlineDelegate OnStorePopupClosed; // 0xd0(0x10)
	struct FMulticastInlineDelegate OnJuiceRewardsClosed; // 0xe0(0x10)
	struct UStoreViewModelV2* ViewModel; // 0xf0(0x08)
	char pad_F8[0x30]; // 0xf8(0x30)
	struct UConfigManager* ConfigManager; // 0x128(0x08)
	struct UStoreManager* StoreManager; // 0x130(0x08)
	struct UInventoryManager* InventoryManager; // 0x138(0x08)
	struct UPlatformSessionManager* PlatformSessionManager; // 0x140(0x08)
	char pad_148[0x11]; // 0x148(0x11)
	bool IsNightMarketRevealInitialized; // 0x159(0x01)
	char pad_15A[0x6]; // 0x15a(0x06)
	struct UDeferredOperation* RevealNightMarketOffersOperation; // 0x160(0x08)
};

// Class ShooterGame.BundleItemViewModel
// Size: 0x50 (Inherited: 0x30)
struct UBundleItemViewModel : UObject {
	int32_t BasePrice; // 0x30(0x04)
	float DiscountPercent; // 0x34(0x04)
	int32_t DiscountedPrice; // 0x38(0x04)
	enum class ESpecialItemStatus SpecialItemStatus; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	struct UStoreOffer* StoreOffer; // 0x40(0x08)
	struct UBaseInventoryModel* InventoryModel; // 0x48(0x08)
};

// Class ShooterGame.BundleViewModel
// Size: 0x80 (Inherited: 0x30)
struct UBundleViewModel : UObject {
	struct FGuid ID; // 0x30(0x10)
	struct UStorefrontItemDataAsset* StorefrontItemDataAsset; // 0x40(0x08)
	struct UCurrencyDataAsset* PurchaseCurrencyDataAsset; // 0x48(0x08)
	int32_t TotalBaseCost; // 0x50(0x04)
	int32_t TotalDiscountedCost; // 0x54(0x04)
	float TotalDiscountPercent; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct TArray<struct UBundleItemViewModel*> ItemViewModels; // 0x60(0x10)
	struct FDateTime BundleExpirationTime; // 0x70(0x08)
	bool IsValid; // 0x78(0x01)
	bool WholesaleOnly; // 0x79(0x01)
	char pad_7A[0x6]; // 0x7a(0x06)
};

// Class ShooterGame.OpenJuiceViewModel
// Size: 0x50 (Inherited: 0x30)
struct UOpenJuiceViewModel : UObject {
	struct FGuid OpenJuiceBoxOrderID; // 0x30(0x10)
	struct TArray<struct URewardModel*> OpenJuiceBoxRewards; // 0x40(0x10)
};

// Class ShooterGame.StoreViewModelV2
// Size: 0x150 (Inherited: 0x30)
struct UStoreViewModelV2 : UObject {
	struct FMulticastInlineDelegate OnPersonalizedOffersChanged; // 0x30(0x10)
	struct FMulticastInlineDelegate OnBonusStoreOffersChanged; // 0x40(0x10)
	struct FMulticastInlineDelegate OnJuiceBoxOffersChanged; // 0x50(0x10)
	struct FMulticastInlineDelegate OnFeaturedThemeChanged; // 0x60(0x10)
	struct FMulticastInlineDelegate OnFeaturedBundle; // 0x70(0x10)
	struct FMulticastInlineDelegate OnFeaturedBundles; // 0x80(0x10)
	char pad_90[0x18]; // 0x90(0x18)
	struct FMulticastInlineDelegate OnExpirationTimeChanged; // 0xa8(0x10)
	struct FMulticastInlineDelegate OnFeaturedExpirationTimeChanged; // 0xb8(0x10)
	struct FMulticastInlineDelegate OnBonusStoreExpirationTimeChanged; // 0xc8(0x10)
	struct UThemeDataAsset* FeaturedTheme; // 0xd8(0x08)
	struct FDateTime ExpirationTime; // 0xe0(0x08)
	struct FDateTime FeaturedExpirationTime; // 0xe8(0x08)
	struct FDateTime BonusStoreExpirationTime; // 0xf0(0x08)
	struct TArray<struct UStoreOffer*> PersonalizedOffers; // 0xf8(0x10)
	struct TArray<struct UBonusStoreOfferViewModel*> BonusStoreOffers; // 0x108(0x10)
	struct TArray<struct UJuiceBoxOfferModel*> JuiceBoxOffers; // 0x118(0x10)
	struct UBundleViewModel* FeaturedThemeBundleViewModel; // 0x128(0x08)
	struct TArray<struct UBundleViewModel*> FeaturedThemeBundleViewModels; // 0x130(0x10)
	struct UOpenJuiceViewModel* OpenJuiceViewModel; // 0x140(0x08)
	char pad_148[0x8]; // 0x148(0x08)
};

// Class ShooterGame.StrategicOutcomesComponent
// Size: 0xf8 (Inherited: 0xe8)
struct UStrategicOutcomesComponent : UActorComponent {
	struct TArray<struct FStrategicOutcomeOfRound> RoundOutcomes; // 0xe8(0x10)
};

// Class ShooterGame.StreamedVideoUIData
// Size: 0x90 (Inherited: 0x90)
struct UStreamedVideoUIData : UBaseContentUIData {
};

// Class ShooterGame.StreamedVideoDataAsset
// Size: 0x90 (Inherited: 0x50)
struct UStreamedVideoDataAsset : UAresBasePrimaryDataAsset {
	struct TSoftClassPtr<UObject> UIData; // 0x50(0x30)
	struct TArray<struct FStreamedVideoFile> Files; // 0x80(0x10)
};

// Class ShooterGame.SubDataBlueprintLibrary
// Size: 0x30 (Inherited: 0x30)
struct USubDataBlueprintLibrary : UBlueprintFunctionLibrary {
};

// Class ShooterGame.SubDataContainer
// Size: 0x30 (Inherited: 0x30)
struct USubDataContainer : UInterface {
};

// Class ShooterGame.SubDataWrapper
// Size: 0x78 (Inherited: 0x30)
struct USubDataWrapper : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct FWildcard Data; // 0x38(0x40)
};

// Class ShooterGame.SubRangeListModel
// Size: 0x68 (Inherited: 0x68)
struct USubRangeListModel : USubRangeListModelBase {
};

// Class ShooterGame.SubscriptionUIData
// Size: 0xa8 (Inherited: 0x90)
struct USubscriptionUIData : UBaseContentUIData {
	struct FText Description; // 0x90(0x18)
};

// Class ShooterGame.SubscriptionDataAsset
// Size: 0xb0 (Inherited: 0x50)
struct USubscriptionDataAsset : UAresBasePrimaryDataAsset {
	int32_t XPBoostAmount; // 0x50(0x04)
	enum class EXPBoostType XPBoostType; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
	struct TSoftClassPtr<UObject> UIData; // 0x58(0x30)
	struct FGuid EntitlementTypeID; // 0x88(0x10)
	struct FGuid AuthoringSubscriptionID; // 0x98(0x10)
	int32_t DisplayPriority; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
};

// Class ShooterGame.LoadoutPipsContainerWidget
// Size: 0x2d8 (Inherited: 0x2c8)
struct ULoadoutPipsContainerWidget : UShopItemCategoryContainer {
	struct UImage* hover; // 0x2c8(0x08)
	struct UHorizontalBox* itemContainer; // 0x2d0(0x08)
};

// Class ShooterGame.SyncedTimerComponent
// Size: 0x118 (Inherited: 0xe8)
struct USyncedTimerComponent : UActorComponent {
	bool bStartWithTimerEnabled; // 0xe8(0x01)
	char pad_E9[0x3]; // 0xe9(0x03)
	float TimerDuration; // 0xec(0x04)
	struct FMulticastInlineDelegate OnTimerExpired; // 0xf0(0x10)
	struct FMulticastInlineDelegate OnTimerStarted; // 0x100(0x10)
	float NetExpireTime; // 0x110(0x04)
	char pad_114[0x4]; // 0x114(0x04)
};

// Class ShooterGame.SyncStateMachineStateComponent
// Size: 0x388 (Inherited: 0x368)
struct USyncStateMachineStateComponent : URespondToEventStateComponent {
	bool bMustBeInState; // 0x368(0x01)
	bool bMustObserveTransition; // 0x369(0x01)
	char pad_36A[0x6]; // 0x36a(0x06)
	struct TArray<struct UStateComponent*> TriggeringStates; // 0x370(0x10)
	bool bHasEverFailedStateCondition; // 0x380(0x01)
	char pad_381[0x7]; // 0x381(0x07)
};

// Class ShooterGame.TaggingComponent
// Size: 0x120 (Inherited: 0xf8)
struct UTaggingComponent : UBaseProjectileEffectComponent {
	int32_t TaggingLevel; // 0xf8(0x04)
	char pad_FC[0x4]; // 0xfc(0x04)
	struct UForceModule* ShortRangeTagModule; // 0x100(0x08)
	float LongRangeDistanceThresold; // 0x108(0x04)
	char pad_10C[0x4]; // 0x10c(0x04)
	struct UForceModule* LongRangeTagModule; // 0x110(0x08)
	struct UForceModule* WallPenTagModule; // 0x118(0x08)
};

// Class ShooterGame.TaggingLevelComponent
// Size: 0xf0 (Inherited: 0xe8)
struct UTaggingLevelComponent : UActorComponent {
	int32_t TaggingLevel; // 0xe8(0x04)
	char pad_EC[0x4]; // 0xec(0x04)
};

// Class ShooterGame.TeamRoleComponent
// Size: 0x100 (Inherited: 0xf8)
struct UTeamRoleComponent : UBaseTeamComponent {
	enum class EAresTeamRole TeamRole; // 0xf8(0x01)
	char pad_F9[0x7]; // 0xf9(0x07)
};

// Class ShooterGame.TelemetryManager
// Size: 0xf0 (Inherited: 0x80)
struct UTelemetryManager : UInitSystem {
	char pad_80[0x1]; // 0x80(0x01)
	bool bIsLoadTest; // 0x81(0x01)
	char pad_82[0x6]; // 0x82(0x06)
	struct URSOManager* RSOManager; // 0x88(0x08)
	struct UConfigManager* ConfigManager; // 0x90(0x08)
	char pad_98[0x51]; // 0x98(0x51)
	char GameplayFlags; // 0xe9(0x01)
	char GameUIFlags; // 0xea(0x01)
	char pad_EB[0x5]; // 0xeb(0x05)
};

// Class ShooterGame.TelemetrySampler
// Size: 0xa0 (Inherited: 0x80)
struct UTelemetrySampler : UInitSystem {
	bool bIsServerTelemetrySampled; // 0x80(0x01)
	bool bIsDetailedClientTelemetrySampled; // 0x81(0x01)
	char pad_82[0x6]; // 0x82(0x06)
	struct URSOManager* RSOManager; // 0x88(0x08)
	struct UConfigManager* ConfigManager; // 0x90(0x08)
	struct UTelemetryManager* TelemetryManager; // 0x98(0x08)
};

// Class ShooterGame.TeleportLocationCheckStateComponent
// Size: 0x330 (Inherited: 0x2c8)
struct UTeleportLocationCheckStateComponent : UScriptStateComponent {
	struct TArray<struct FTeleportLocationCheckRing> LocationRings; // 0x2c8(0x10)
	float MaxDistanceToFloor; // 0x2d8(0x04)
	float NavMeshCastThickness; // 0x2dc(0x04)
	bool bRunOnClient; // 0x2e0(0x01)
	char pad_2E1[0x4f]; // 0x2e1(0x4f)
};

// Class ShooterGame.TeleportStateComponent
// Size: 0x2d0 (Inherited: 0x2c8)
struct UTeleportStateComponent : UScriptStateComponent {
	bool bSetControlRotation; // 0x2c8(0x01)
	bool bClearRewindHistory; // 0x2c9(0x01)
	bool bCancelMomentum; // 0x2ca(0x01)
	char pad_2CB[0x5]; // 0x2cb(0x05)
};

// Class ShooterGame.TestAccountsManager
// Size: 0x48 (Inherited: 0x30)
struct UTestAccountsManager : UObject {
	struct TArray<struct FGeneratedAccount> GeneratedAccounts; // 0x30(0x10)
	struct UTestAccountsService* AccountsService; // 0x40(0x08)
};

// Class ShooterGame.TestAccountsService
// Size: 0x30 (Inherited: 0x30)
struct UTestAccountsService : UObject {
};

// Class ShooterGame.TestAresHudElement
// Size: 0x1a8 (Inherited: 0x58)
struct UTestAresHudElement : UAresHudElement {
	char pad_58[0x8]; // 0x58(0x08)
	float TextStateDuration[0x3]; // 0x60(0x0c)
	float TextGrowSize; // 0x6c(0x04)
	struct FVector2D TextPos; // 0x70(0x08)
	enum class EAresDrawOrigin TextDrawOrigin; // 0x78(0x01)
	enum class EAresHudTextExtentsMode TextExtentsMode; // 0x79(0x01)
	char pad_7A[0x2]; // 0x7a(0x02)
	struct FVector2D TextBaseScale; // 0x7c(0x08)
	struct FLinearColor TextColorMask; // 0x84(0x10)
	char pad_94[0x4]; // 0x94(0x04)
	struct FAresHudFontParams FontParams; // 0x98(0x70)
	struct TArray<struct UTexture*> ImagesToCycle; // 0x108(0x10)
	float ImageCycleTime; // 0x118(0x04)
	struct FVector2D ImagePos; // 0x11c(0x08)
	enum class EAresDrawOrigin ImageDrawOrigin; // 0x124(0x01)
	char pad_125[0x3]; // 0x125(0x03)
	struct FVector2D ImageScale; // 0x128(0x08)
	struct FLinearColor ImageColorMask; // 0x130(0x10)
	struct FAresHudImageParams ImageParams; // 0x140(0x10)
	struct UMaterialInterface* Material; // 0x150(0x08)
	struct FName MaterialParameterName; // 0x158(0x0c)
	float MaterialRampUpAndDownTime; // 0x164(0x04)
	struct UMaterialInstanceDynamic* MaterialInstanceDynamic; // 0x168(0x08)
	struct FVector2D MaterialPos; // 0x170(0x08)
	enum class EAresDrawOrigin MaterialDrawOrigin; // 0x178(0x01)
	char pad_179[0x3]; // 0x179(0x03)
	struct FVector2D MaterialExtents; // 0x17c(0x08)
	struct FVector2D MaterialUvCoordinateStartPosition; // 0x184(0x08)
	struct FVector2D MaterialUvCoordinateEndPosition; // 0x18c(0x08)
	float MaterialRotation; // 0x194(0x04)
	struct FVector2D MaterialPivotPoint; // 0x198(0x08)
	struct FVector2D MaterialScale; // 0x1a0(0x08)
};

// Class ShooterGame.UnifiedChatMessageWrapper
// Size: 0x108 (Inherited: 0x30)
struct UUnifiedChatMessageWrapper : UObject {
	struct FUnifiedChatMessage Message; // 0x30(0xd8)
};

// Class ShooterGame.TextChatConversation
// Size: 0x30 (Inherited: 0x30)
struct UTextChatConversation : UInterface {
};

// Class ShooterGame.TextChatManagerV2
// Size: 0x170 (Inherited: 0x80)
struct UTextChatManagerV2 : UInitSystem {
	struct FMulticastInlineDelegate OnRoomListChanged; // 0x80(0x10)
	struct FMulticastInlineDelegate OnChatFilterUpdated; // 0x90(0x10)
	struct FMulticastInlineDelegate OnGlobalUnreadMessageCountUpdated; // 0xa0(0x10)
	struct FMUCInfos MUCInfos; // 0xb0(0x10)
	struct TArray<struct UTextChatRoomV2*> RegisteredRooms_Backing; // 0xc0(0x10)
	char pad_D0[0x28]; // 0xd0(0x28)
	struct UTextChatService* ChatService; // 0xf8(0x08)
	struct UChatSessionManager* ChatSessionManager; // 0x100(0x08)
	struct URSOManager* RSOManager; // 0x108(0x08)
	char pad_110[0x8]; // 0x110(0x08)
	struct UDisplayNameManager* DisplayNameManager; // 0x118(0x08)
	struct UTextChatRoomV2* ActiveConversation; // 0x120(0x08)
	char pad_128[0x48]; // 0x128(0x48)
};

// Class ShooterGame.TextChatPanelViewController
// Size: 0x50 (Inherited: 0x30)
struct UTextChatPanelViewController : UObject {
	struct FMulticastInlineDelegate OnActiveTextChatConversationChanged; // 0x30(0x10)
	struct TScriptInterface<ITextChatConversation> ActiveTextChatConversation; // 0x40(0x10)
};

// Class ShooterGame.TextChatRoomV2
// Size: 0x1a0 (Inherited: 0x30)
struct UTextChatRoomV2 : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct FMulticastInlineDelegate OnParticipantChange; // 0x38(0x10)
	struct FMulticastInlineDelegate OnDisconnected; // 0x48(0x10)
	char pad_58[0x10]; // 0x58(0x10)
	struct FString RoomID; // 0x68(0x10)
	bool bIsRestricted; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
	struct UTextChatService* ChatService; // 0x80(0x08)
	struct URSOManager* RSOManager; // 0x88(0x08)
	char pad_90[0x8]; // 0x90(0x08)
	struct TArray<struct FMUCParticipant> Participants; // 0x98(0x10)
	struct TArray<struct UUnifiedChatMessageWrapper*> Messages_Backing; // 0xa8(0x10)
	char pad_B8[0x28]; // 0xb8(0x28)
	struct UManualNumericProgressModel* HistoryLoadProgressModel; // 0xe0(0x08)
	struct FTextChatDraftTextInfo DraftInfo; // 0xe8(0x18)
	struct FMUCParticipant OtherUserInfo; // 0x100(0x60)
	char pad_160[0x40]; // 0x160(0x40)
};

// Class ShooterGame.TextChatService
// Size: 0x1f0 (Inherited: 0x30)
struct UTextChatService : UObject {
	char pad_30[0x1b0]; // 0x30(0x1b0)
	struct URiotGamesApiClient* RiotGamesApiClient; // 0x1e0(0x08)
	int64_t StartupTime; // 0x1e8(0x08)
};

// Class ShooterGame.ThemeUIData
// Size: 0x98 (Inherited: 0x90)
struct UThemeUIData : UBaseContentUIData {
	struct UTexture* StoreFeaturedImage; // 0x90(0x08)
};

// Class ShooterGame.ThemeFeaturesDataAsset
// Size: 0x90 (Inherited: 0x50)
struct UThemeFeaturesDataAsset : UAresBasePrimaryDataAsset {
	struct FDateTime ReleaseDate; // 0x50(0x08)
	enum class EThematicCategory ThematicCategory; // 0x58(0x01)
	bool Promo; // 0x59(0x01)
	char pad_5A[0x6]; // 0x5a(0x06)
	struct TSoftClassPtr<UObject> Theme; // 0x60(0x30)
};

// Class ShooterGame.ThemeDataAsset
// Size: 0x80 (Inherited: 0x50)
struct UThemeDataAsset : UAresBasePrimaryDataAsset {
	struct TSoftClassPtr<UObject> UIData; // 0x50(0x30)
};

// Class ShooterGame.ThreadedChatManager
// Size: 0x1a0 (Inherited: 0x80)
struct UThreadedChatManager : UInitSystem {
	struct FMulticastInlineDelegate OnMessagesAdded; // 0x80(0x10)
	struct FMulticastInlineDelegate OnRoomsUpdated; // 0x90(0x10)
	struct FMulticastInlineDelegate OnInGameMessageSent; // 0xa0(0x10)
	struct FMulticastInlineDelegate OnInitiateWhisperMessageToPlayer; // 0xb0(0x10)
	struct FMulticastInlineDelegate OnMessageBodyUpdated; // 0xc0(0x10)
	struct UTextChatService* ChatService; // 0xd0(0x08)
	struct TArray<struct FUnifiedChatMessage> Messages; // 0xd8(0x10)
	struct TSet<struct FString> KnownMessageIds; // 0xe8(0x50)
	struct UTextChatRoomV2* PartyRoom; // 0x138(0x08)
	struct UTextChatRoomV2* PregameRoom; // 0x140(0x08)
	struct UTextChatRoomV2* AllRoom; // 0x148(0x08)
	struct UTextChatRoomV2* TeamRoom; // 0x150(0x08)
	struct UPartyManager* PartyManager; // 0x158(0x08)
	struct UCoreGameManager* CoreGameManager; // 0x160(0x08)
	struct UPregameManager* PregameManager; // 0x168(0x08)
	struct UWhisperChatManager* WhisperChatManager; // 0x170(0x08)
	struct UMutedPatternsManager* MutedPatternsManager; // 0x178(0x08)
	struct UTextChatManagerV2* TextChatManager; // 0x180(0x08)
	struct UEmojiMapping* EmojiMapping; // 0x188(0x08)
	struct URSOManager* RSOManager; // 0x190(0x08)
	char pad_198[0x8]; // 0x198(0x08)
};

// Class ShooterGame.TimeGameStateComponent
// Size: 0x1d0 (Inherited: 0x170)
struct UTimeGameStateComponent : UBaseGameStateComponent {
	struct FMulticastInlineDelegate OnTimeChanged; // 0x170(0x10)
	struct FMulticastInlineDelegate OnPhaseEndedEarly; // 0x180(0x10)
	struct UBaseGameStateComponent* NextGameState; // 0x190(0x08)
	float StateLengthSeconds; // 0x198(0x04)
	char pad_19C[0x4]; // 0x19c(0x04)
	struct FTimerHandle StateTransitionTimerHandle; // 0x1a0(0x08)
	struct TArray<struct FTimedEvent> StateEvents; // 0x1a8(0x10)
	struct TArray<struct FTimedEvent> PendingStateEvents; // 0x1b8(0x10)
	bool bIsTimeGameStatePausedForMatchTimer; // 0x1c8(0x01)
	bool bIsTimeGameStateLocallyPaused; // 0x1c9(0x01)
	bool bIsTimerExpired; // 0x1ca(0x01)
	char pad_1CB[0x5]; // 0x1cb(0x05)
};

// Class ShooterGame.TouchInputDebugWidget
// Size: 0x328 (Inherited: 0x2c8)
struct UTouchInputDebugWidget : UUserWidget {
	char pad_2C8[0x60]; // 0x2c8(0x60)
};

// Class ShooterGame.TournamentModel
// Size: 0x178 (Inherited: 0x30)
struct UTournamentModel : UObject {
	struct FMulticastInlineDelegate OnCurrentStageChanged; // 0x30(0x10)
	struct FMulticastInlineDelegate OnIsLoadedChanged; // 0x40(0x10)
	struct FString ID; // 0x50(0x10)
	struct FString Name; // 0x60(0x10)
	int32_t TournamentSize; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	int64_t CurrentStage; // 0x78(0x08)
	struct TMap<int64_t, struct UTournamentStageModel*> Stages; // 0x80(0x50)
	struct TMap<struct FString, struct UTournamentMatchupModel*> Matchups; // 0xd0(0x50)
	struct TMap<struct FString, struct UTournamentParticipantModel*> TournamentParticipants; // 0x120(0x50)
	bool bIsLoaded; // 0x170(0x01)
	char pad_171[0x7]; // 0x171(0x07)
};

// Class ShooterGame.TournamentStageModel
// Size: 0x78 (Inherited: 0x30)
struct UTournamentStageModel : UObject {
	struct FMulticastInlineDelegate OnTournamentStageStatusUpdated; // 0x30(0x10)
	struct FMulticastInlineDelegate OnStageStartScheduled; // 0x40(0x10)
	struct TArray<struct UTournamentMatchupModel*> MatchupModels; // 0x50(0x10)
	int64_t ScheduledStageStartDateInSeconds; // 0x60(0x08)
	struct FDateTime ScheduledStageStartDate; // 0x68(0x08)
	enum class ETournamentStageStatus StatusEnum; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
};

// Class ShooterGame.TournamentMatchupModel
// Size: 0x60 (Inherited: 0x30)
struct UTournamentMatchupModel : UObject {
	struct FString MatchupID; // 0x30(0x10)
	int64_t MatchupNumber; // 0x40(0x08)
	bool Complete; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct TArray<struct UMatchupParticipantModel*> Participants; // 0x50(0x10)
};

// Class ShooterGame.MatchupParticipantModel
// Size: 0xc8 (Inherited: 0x30)
struct UMatchupParticipantModel : UObject {
	struct FString ParticipantID; // 0x30(0x10)
	bool IsBye; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	int64_t Points; // 0x48(0x08)
	int64_t Seed; // 0x50(0x08)
	struct FString Name; // 0x58(0x10)
	struct FString Tag; // 0x68(0x10)
	int32_t Score; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
	int64_t PreviousMatchupNumber; // 0x80(0x08)
	struct FUnverifiedMetadataPersonalization Personalization; // 0x88(0x40)
};

// Class ShooterGame.TournamentParticipantModel
// Size: 0x50 (Inherited: 0x30)
struct UTournamentParticipantModel : UObject {
	struct FString ParticipantID; // 0x30(0x10)
	struct FString CurrentMatchupID; // 0x40(0x10)
};

// Class ShooterGame.TournamentsManager
// Size: 0x58 (Inherited: 0x30)
struct UTournamentsManager : UObject {
	char pad_30[0x10]; // 0x30(0x10)
	struct URSOManager* RSOManager; // 0x40(0x08)
	struct URMSManager* RMSManager; // 0x48(0x08)
	struct UTournamentsService* TournamentsService; // 0x50(0x08)
};

// Class ShooterGame.TournamentsScreenV1
// Size: 0x2e0 (Inherited: 0x2c8)
struct UTournamentsScreenV1 : UUserWidget {
	struct UTournamentViewController* TournamentViewController; // 0x2c8(0x08)
	struct FString TournamentID; // 0x2d0(0x10)
};

// Class ShooterGame.TournamentsService
// Size: 0x38 (Inherited: 0x30)
struct UTournamentsService : UObject {
	struct UConfigManager* ConfigManager; // 0x30(0x08)
};

// Class ShooterGame.TournamentsTeamIconUIData
// Size: 0x90 (Inherited: 0x90)
struct UTournamentsTeamIconUIData : UBaseContentUIData {
};

// Class ShooterGame.TournamentsTeamIconDataAsset
// Size: 0x80 (Inherited: 0x50)
struct UTournamentsTeamIconDataAsset : UAresBasePrimaryDataAsset {
	struct TSoftClassPtr<UObject> UIData; // 0x50(0x30)
};

// Class ShooterGame.TournamentViewController
// Size: 0x50 (Inherited: 0x30)
struct UTournamentViewController : UObject {
	struct FMulticastInlineDelegate OnTournamentsModelUpdated; // 0x30(0x10)
	struct UTournamentModel* TournamentsModel; // 0x40(0x08)
	struct UTournamentsManager* TournamentsManager; // 0x48(0x08)
};

// Class ShooterGame.TracerProjectileEffectComponent
// Size: 0x170 (Inherited: 0xf8)
struct UTracerProjectileEffectComponent : UBaseProjectileEffectComponent {
	struct FTracerEffects TracerEffects[0x2]; // 0xf8(0x10)
	struct FName StartBoneName; // 0x108(0x0c)
	bool bEnabled; // 0x114(0x01)
	char pad_115[0x3]; // 0x115(0x03)
	struct FEffectData TracerEffectData; // 0x118(0x58)
};

// Class ShooterGame.TransformRewinderComponent
// Size: 0x170 (Inherited: 0x100)
struct UTransformRewinderComponent : USnapshotRewinderComponent {
	struct TArray<struct FTransformSnapshot> Snapshots; // 0x100(0x10)
	char pad_110[0x60]; // 0x110(0x60)
};

// Class ShooterGame.TransitionGameFlowState
// Size: 0xb0 (Inherited: 0x88)
struct UTransitionGameFlowState : UGameFlowState {
	char pad_88[0x28]; // 0x88(0x28)
};

// Class ShooterGame.TransitionManagerWidget
// Size: 0x2e0 (Inherited: 0x2c8)
struct UTransitionManagerWidget : UCrossWorldUserWidget {
	bool bTransitionIsActive; // 0x2c8(0x01)
	bool bTransitionIsEnding; // 0x2c9(0x01)
	char pad_2CA[0x6]; // 0x2ca(0x06)
	struct UPanelWidget* ContainerWidget; // 0x2d0(0x08)
	struct USimpleLifecycleWidget* CurrentTransitionWidget; // 0x2d8(0x08)
};

// Class ShooterGame.TransitionModelManager
// Size: 0xb0 (Inherited: 0x30)
struct UTransitionModelManager : UObject {
	struct FString CurrentMatchID; // 0x30(0x10)
	struct FString LastMatchID; // 0x40(0x10)
	struct UTransitionToPregameModel* TransitionToPregameModel; // 0x50(0x08)
	struct UTransitionToInGameModel* TransitionToInGameModel; // 0x58(0x08)
	struct UTransitionToMainMenuModel* TransitionToMainMenuModel; // 0x60(0x08)
	struct UContentIndex* ContentIndex; // 0x68(0x08)
	struct UPartyManager* PartyManager; // 0x70(0x08)
	struct UPregameManager* PregameManager; // 0x78(0x08)
	struct UMapLoadModel* MapLoadModel; // 0x80(0x08)
	struct UGameFlowStateManager* GameFlowStateManager; // 0x88(0x08)
	struct UCoreGameManager* CoreGameManager; // 0x90(0x08)
	struct URSOManager* RSOManager; // 0x98(0x08)
	struct UConfigManager* ConfigManager; // 0xa0(0x08)
	struct UPersonalizationManagerV2* PersonalizationManager; // 0xa8(0x08)
};

// Class ShooterGame.TransitionScreenModel
// Size: 0x48 (Inherited: 0x30)
struct UTransitionScreenModel : UObject {
	struct FMulticastInlineDelegate OnCurrentStateChanged; // 0x30(0x10)
	enum class ETransitionScreenState CurrentState; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// Class ShooterGame.TransitionToInGameModel
// Size: 0xe0 (Inherited: 0x48)
struct UTransitionToInGameModel : UTransitionScreenModel {
	struct UMapDataAsset* Map; // 0x48(0x08)
	struct UGameModeDataAsset* Mode; // 0x50(0x08)
	struct FString QueueID; // 0x58(0x10)
	struct FName AllyTeamID; // 0x68(0x0c)
	char pad_74[0x4]; // 0x74(0x04)
	struct TMap<struct FName, struct FLoadingScreenTeam> Teams; // 0x78(0x50)
	bool IsCustomGame; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)
	struct FString GamePodID; // 0xd0(0x10)
};

// Class ShooterGame.TransitionToInGameStateV2
// Size: 0xc0 (Inherited: 0xb0)
struct UTransitionToInGameStateV2 : UTransitionGameFlowState {
	struct UCoreGameManager* CoreGameManager; // 0xb0(0x08)
	struct UPingManager* PingManager; // 0xb8(0x08)
};

// Class ShooterGame.TransitionToMainMenuModel
// Size: 0x50 (Inherited: 0x48)
struct UTransitionToMainMenuModel : UTransitionScreenModel {
	struct UTransitionToPregameModel* TransitionToPregameModel; // 0x48(0x08)
};

// Class ShooterGame.TransitionToMainMenuStateV2
// Size: 0xb0 (Inherited: 0xb0)
struct UTransitionToMainMenuStateV2 : UTransitionGameFlowState {
};

// Class ShooterGame.TransitionToPlatformFaultedStateV2
// Size: 0xb0 (Inherited: 0xb0)
struct UTransitionToPlatformFaultedStateV2 : UTransitionGameFlowState {
};

// Class ShooterGame.TransitionToPregameModel
// Size: 0x158 (Inherited: 0x48)
struct UTransitionToPregameModel : UTransitionScreenModel {
	struct UMapDataAsset* Map; // 0x48(0x08)
	struct UGameModeDataAsset* Mode; // 0x50(0x08)
	enum class EAresTeam Team; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	struct FName TeamID; // 0x5c(0x0c)
	struct FString QueueID; // 0x68(0x10)
	struct FString TournamentID; // 0x78(0x10)
	struct FTournamentMetadata TournamentMetadata; // 0x88(0x80)
	struct FTournamentRosterMetadata RosterMetadata; // 0x108(0x50)
};

// Class ShooterGame.TransitionToPregameStateV2
// Size: 0xb8 (Inherited: 0xb0)
struct UTransitionToPregameStateV2 : UTransitionGameFlowState {
	struct UPregameManager* PregameManager; // 0xb0(0x08)
};

// Class ShooterGame.TravelManager
// Size: 0x90 (Inherited: 0x30)
struct UTravelManager : UObject {
	bool bInitialized; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float TimeWaitedToTravel; // 0x34(0x04)
	struct FName TravelInProgressDestination; // 0x38(0x0c)
	char pad_44[0x4]; // 0x44(0x04)
	struct URSOManager* RSOManager; // 0x48(0x08)
	struct UCoreGameManager* CoreGameManager; // 0x50(0x08)
	struct UGameFlowStateManager* GameFlowStateManager; // 0x58(0x08)
	char pad_60[0x8]; // 0x60(0x08)
	struct UConfigManager* ConfigManager; // 0x68(0x08)
	struct UAresClientEvents* AresClientEvents; // 0x70(0x08)
	char pad_78[0x8]; // 0x78(0x08)
	struct UDisplayNameManager* DisplayNameManager; // 0x80(0x08)
	struct UMapLoadModel* MapLoadModel; // 0x88(0x08)
};

// Class ShooterGame.TurnLeftLowerBody3P
// Size: 0x38 (Inherited: 0x38)
struct UTurnLeftLowerBody3P : UAnimSlotLowerBody3P {
};

// Class ShooterGame.TurnRightLowerBody3P
// Size: 0x38 (Inherited: 0x38)
struct UTurnRightLowerBody3P : UAnimSlotLowerBody3P {
};

// Class ShooterGame.TutorialManager
// Size: 0x70 (Inherited: 0x30)
struct UTutorialManager : UObject {
	struct UAresSettingsManager* AresSettingsManager; // 0x30(0x08)
	struct URoamingSettingsManager* RoamingSettingsManager; // 0x38(0x08)
	struct UCoreGameManager* CoreGameManager; // 0x40(0x08)
	struct UPartyManager* PartyManager; // 0x48(0x08)
	struct UStoreManager* StoreManager; // 0x50(0x08)
	struct UContractsViewController* ContractsViewController; // 0x58(0x08)
	struct UInventoryManager* InventoryManager; // 0x60(0x08)
	struct UConfigManager* ConfigManager; // 0x68(0x08)
};

// Class ShooterGame.MainMenuAutomationBase
// Size: 0x38 (Inherited: 0x30)
struct UMainMenuAutomationBase : UObject {
	char pad_30[0x8]; // 0x30(0x08)
};

// Class ShooterGame.HUDAutomationBase
// Size: 0x38 (Inherited: 0x30)
struct UHUDAutomationBase : UObject {
	struct AHUD* HUD; // 0x30(0x08)
};

// Class ShooterGame.PlayerUIAutomationBase
// Size: 0x40 (Inherited: 0x30)
struct UPlayerUIAutomationBase : UObject {
	struct UMainMenuAutomationBase* MainMenuAutomation; // 0x30(0x08)
	struct UHUDAutomationBase* HUDAutomation; // 0x38(0x08)
};

// Class ShooterGame.UISettings
// Size: 0x110 (Inherited: 0x30)
struct UUISettings : UObject {
	struct FSoftClassPath EmojiMappingClass; // 0x30(0x20)
	struct FSoftClassPath TransitionManagerWidgetClass; // 0x50(0x20)
	struct FSoftClassPath DefaultTransitionWidgetClass; // 0x70(0x20)
	struct FSoftClassPath TransitionToPregameWidgetClass; // 0x90(0x20)
	struct FSoftClassPath TransitionToInGameWidgetClass; // 0xb0(0x20)
	struct FSoftClassPath TransitionToMainMenuWidgetClass; // 0xd0(0x20)
	struct FSoftClassPath PregameToInGameTransitionWidgetClass; // 0xf0(0x20)
};

// Class ShooterGame.UITelemetryManager
// Size: 0x98 (Inherited: 0x80)
struct UUITelemetryManager : UInitSystem {
	struct URSOManager* RSOManager; // 0x80(0x08)
	struct UTelemetrySampler* TelemetrySampler; // 0x88(0x08)
	struct UTelemetryManager* TelemetryManager; // 0x90(0x08)
};

// Class ShooterGame.TelemetryButton
// Size: 0x4b0 (Inherited: 0x498)
struct UTelemetryButton : UButton {
	bool bSendTelemetry; // 0x498(0x01)
	char pad_499[0x7]; // 0x499(0x07)
	struct FString ActionTarget; // 0x4a0(0x10)
};

// Class ShooterGame.ModalNotificationWidget
// Size: 0x2c8 (Inherited: 0x2c8)
struct UModalNotificationWidget : UDesignableUserWidget {
};

// Class ShooterGame.UnequipStateComponent
// Size: 0x2d0 (Inherited: 0x2c8)
struct UUnequipStateComponent : UScriptStateComponent {
	enum class EEquipSpeed EquipSpeed; // 0x2c8(0x01)
	bool bIgnorePlayerSettingsAndReequipMostRecent; // 0x2c9(0x01)
	char pad_2CA[0x6]; // 0x2ca(0x06)
};

// Class ShooterGame.UniformGridListSlot
// Size: 0x68 (Inherited: 0x40)
struct UUniformGridListSlot : UOrderedListSimpleWidgetContainerSlot {
	enum class EHorizontalAlignment HorizontalAlignment; // 0x40(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x41(0x01)
	char pad_42[0x2]; // 0x42(0x02)
	int32_t Row; // 0x44(0x04)
	int32_t Column; // 0x48(0x04)
	char pad_4C[0x1c]; // 0x4c(0x1c)
};

// Class ShooterGame.UniformGridPanelList
// Size: 0x2c0 (Inherited: 0x298)
struct UUniformGridPanelList : UOrderedListSimpleWidgetContainerBase {
	struct FMargin SlotPadding; // 0x298(0x10)
	float MinDesiredSlotWidth; // 0x2a8(0x04)
	float MinDesiredSlotHeight; // 0x2ac(0x04)
	char pad_2B0[0x10]; // 0x2b0(0x10)
};

// Class ShooterGame.UniformGridSlotConfigurer
// Size: 0x58 (Inherited: 0x50)
struct UUniformGridSlotConfigurer : UListEntrySlotConfigurerBase {
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)
	enum class EGridAxis2D MajorAxis; // 0x52(0x01)
	char pad_53[0x1]; // 0x53(0x01)
	int32_t MaxMinorItemCount; // 0x54(0x04)
};

// Class ShooterGame.UnorderedMapModel
// Size: 0x30 (Inherited: 0x30)
struct UUnorderedMapModel : UInterface {
};

// Class ShooterGame.UnorderedMapModelBlueprintLibrary
// Size: 0x30 (Inherited: 0x30)
struct UUnorderedMapModelBlueprintLibrary : UBlueprintFunctionLibrary {
};

// Class ShooterGame.UrlParser
// Size: 0x30 (Inherited: 0x30)
struct UUrlParser : UBlueprintFunctionLibrary {
};

// Class ShooterGame.UsableCollisionVolume
// Size: 0x570 (Inherited: 0x570)
struct UUsableCollisionVolume : USphereComponent {
};

// Class ShooterGame.UsableComponent
// Size: 0x458 (Inherited: 0xe8)
struct UUsableComponent : UActorComponent {
	enum class EUsablePriority UsePriority; // 0xe8(0x01)
	char pad_E9[0x3]; // 0xe9(0x03)
	float ScoringBonus; // 0xec(0x04)
	bool bAllowMultipleUsers; // 0xf0(0x01)
	bool bCanBeSpedUp; // 0xf1(0x01)
	bool bDistanceLimitedUsable; // 0xf2(0x01)
	char pad_F3[0x1]; // 0xf3(0x01)
	float UseDistance; // 0xf4(0x04)
	bool bMustBeFullyInside; // 0xf8(0x01)
	bool bRequireLineOfSight; // 0xf9(0x01)
	enum class ECollisionChannel LineOfSightChannel; // 0xfa(0x01)
	bool bUseComplexForLineOfSight; // 0xfb(0x01)
	bool bClampCameraWhileUsing; // 0xfc(0x01)
	char pad_FD[0x3]; // 0xfd(0x03)
	float PitchClampWhileUsing; // 0x100(0x04)
	float YawClampWhileUsing; // 0x104(0x04)
	float AdditionalScoringAngle; // 0x108(0x04)
	float AdditionalScoringYaw; // 0x10c(0x04)
	float AdditionalScoringPitch; // 0x110(0x04)
	float TouchAdditionalScoringYaw; // 0x114(0x04)
	float TouchAdditionalScoringPitch; // 0x118(0x04)
	char pad_11C[0x4]; // 0x11c(0x04)
	struct FString UseMessage; // 0x120(0x10)
	struct FString UseMessage2; // 0x130(0x10)
	struct FText UseMessageText; // 0x140(0x18)
	struct FText UseMessage2Text; // 0x158(0x18)
	struct FColor UseMessage2Color; // 0x170(0x04)
	char pad_174[0x4]; // 0x174(0x04)
	struct FString UsingMessage; // 0x178(0x10)
	struct FText UsingMessageText; // 0x188(0x18)
	float UsingMessageScale; // 0x1a0(0x04)
	char pad_1A4[0x4]; // 0x1a4(0x04)
	struct FText CannotUseMessageText; // 0x1a8(0x18)
	struct FCanvasIcon UseIcon; // 0x1c0(0x18)
	struct FCanvasIcon UsingIcon; // 0x1d8(0x18)
	float UseIconScale; // 0x1f0(0x04)
	bool bConsumesInteraction; // 0x1f4(0x01)
	enum class EUseKeyType UseKey; // 0x1f5(0x01)
	char pad_1F6[0x2]; // 0x1f6(0x02)
	struct UAresGameplayBuff* CharacterUsingBuff; // 0x1f8(0x08)
	struct AAresEquippable* EquippableToSwitchTo; // 0x200(0x08)
	struct AEffectContainer* EquippableEquippedEffect; // 0x208(0x08)
	float EquippableCompleteTime; // 0x210(0x04)
	char pad_214[0x4]; // 0x214(0x04)
	struct AEffectContainer* EquippableCompleteEffect; // 0x218(0x08)
	float EquippableCancelTime; // 0x220(0x04)
	char pad_224[0x4]; // 0x224(0x04)
	struct AEffectContainer* EquippableCancelEffect; // 0x228(0x08)
	enum class EEquipSpeed EquippableUnequipSpeed; // 0x230(0x01)
	char pad_231[0x7]; // 0x231(0x07)
	struct FGameplayAttribute PreventUsingAttribute; // 0x238(0x38)
	struct FMulticastInlineDelegate OnCanUse; // 0x270(0x10)
	bool bCanUseResult; // 0x280(0x01)
	char pad_281[0x7]; // 0x281(0x07)
	struct FMulticastInlineDelegate OnCanSelect; // 0x288(0x10)
	bool bCanSelectResult; // 0x298(0x01)
	char pad_299[0x3]; // 0x299(0x03)
	float GetUseTimeResult; // 0x29c(0x04)
	struct FMulticastInlineDelegate OnUseRejected; // 0x2a0(0x10)
	struct FMulticastInlineDelegate OnUseStarted; // 0x2b0(0x10)
	struct FMulticastInlineDelegate OnUseSuccessful; // 0x2c0(0x10)
	struct FMulticastInlineDelegate OnUseCanceled; // 0x2d0(0x10)
	struct FMulticastInlineDelegate OnGetUseTime; // 0x2e0(0x10)
	struct FMulticastInlineDelegate OnBecomeLocalTargettedUsable; // 0x2f0(0x10)
	struct FMulticastInlineDelegate OnStopBeingLocalTargettedUsable; // 0x300(0x10)
	struct FMulticastInlineDelegate OnUsabilityUpdated; // 0x310(0x10)
	struct FMulticastInlineDelegate OnTextUpdated; // 0x320(0x10)
	bool bAreaInteraction; // 0x330(0x01)
	char pad_331[0x7]; // 0x331(0x07)
	struct AActor* UsableScoringActor; // 0x338(0x08)
	struct TArray<struct UPrimitiveComponent*> CollisionVolumes; // 0x340(0x10)
	float UseTime; // 0x350(0x04)
	bool bInsideCanUse; // 0x354(0x01)
	bool bIsUsable; // 0x355(0x01)
	bool bAllowClientPrediction; // 0x356(0x01)
	bool bInsideCanSelect; // 0x357(0x01)
	bool bIsSelectable; // 0x358(0x01)
	char pad_359[0x3]; // 0x359(0x03)
	float HighestProgress; // 0x35c(0x04)
	bool bIsContinuous; // 0x360(0x01)
	char pad_361[0x7]; // 0x361(0x07)
	struct TArray<struct UInteractableUserComponent*> OverlappingCharacters; // 0x368(0x10)
	struct TArray<struct UInteractableUserComponent*> NotifiedCharacters; // 0x378(0x10)
	struct TMap<struct UInteractableUserComponent*, float> AuthUsingCharactersUseTime; // 0x388(0x50)
	struct TMap<struct UInteractableUserComponent*, struct FActiveGameplayEffectHandle> UsingBuffMap; // 0x3d8(0x50)
	char pad_428[0x10]; // 0x428(0x10)
	struct TArray<struct FAuthUsableUser> AuthUsingCharacters; // 0x438(0x10)
	char pad_448[0x10]; // 0x448(0x10)
};

// Class ShooterGame.UserAction
// Size: 0x30 (Inherited: 0x30)
struct UUserAction : UInterface {
};

// Class ShooterGame.UserActionTarget
// Size: 0x30 (Inherited: 0x30)
struct UUserActionTarget : UInterface {
};

// Class ShooterGame.UserInfoNotificationManager
// Size: 0x90 (Inherited: 0x80)
struct UUserInfoNotificationManager : UInitSystem {
	struct UNotificationManager* NotificationManager; // 0x80(0x08)
	struct URSOManager* RSOManager; // 0x88(0x08)
};

// Class ShooterGame.UserObservableWidget
// Size: 0x30 (Inherited: 0x30)
struct UUserObservableWidget : UInterface {
};

// Class ShooterGame.ValueDisagreementTimer
// Size: 0xb0 (Inherited: 0x30)
struct UValueDisagreementTimer : UObject {
	bool bIsEnabled; // 0x30(0x01)
	char pad_31[0x67]; // 0x31(0x67)
	float ValueUnchangedTimeDuration; // 0x98(0x04)
	bool bValueChangedSinceLastTick; // 0x9c(0x01)
	char pad_9D[0x3]; // 0x9d(0x03)
	float ConsiderStablePingTimeMultiplier; // 0xa0(0x04)
	float ConsiderStableBufferTimeDurationMilliseconds; // 0xa4(0x04)
	float ConsiderStableMaxWaitTimeDurationMilliseconds; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
};

// Class ShooterGame.VanguardManager
// Size: 0xf0 (Inherited: 0x80)
struct UVanguardManager : UInitSystem {
	struct URMSManager* RMSManager; // 0x80(0x08)
	struct URSOManager* RSOManager; // 0x88(0x08)
	struct UCoreGameManager* CoreGameManager; // 0x90(0x08)
	struct UAresClientEvents* AresClientEvents; // 0x98(0x08)
	struct UConfigManager* ConfigManager; // 0xa0(0x08)
	struct FString CurrentMatchID; // 0xa8(0x10)
	struct FString VanguardServer; // 0xb8(0x10)
	char pad_C8[0x28]; // 0xc8(0x28)
};

// Class ShooterGame.VerticalBoxList
// Size: 0x2a8 (Inherited: 0x298)
struct UVerticalBoxList : UOrderedListSimpleWidgetContainerBase {
	char pad_298[0x10]; // 0x298(0x10)
};

// Class ShooterGame.VerticalBoxListSlot
// Size: 0x68 (Inherited: 0x40)
struct UVerticalBoxListSlot : UOrderedListSimpleWidgetContainerSlot {
	struct FMargin Padding; // 0x40(0x10)
	struct FSlateChildSize Size; // 0x50(0x08)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x58(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x59(0x01)
	char pad_5A[0xe]; // 0x5a(0x0e)
};

// Class ShooterGame.ViewerFogOfWarComponent
// Size: 0x118 (Inherited: 0xe8)
struct UViewerFogOfWarComponent : UActorComponent {
	char pad_E8[0x18]; // 0xe8(0x18)
	struct UBaseTeamComponent* CachedTeamComponent; // 0x100(0x08)
	struct UFogOfWarComponent* CachedFirstPersonComponent; // 0x108(0x08)
	char pad_110[0x1]; // 0x110(0x01)
	bool bAllActorsAreRelevant; // 0x111(0x01)
	char pad_112[0x6]; // 0x112(0x06)
};

// Class ShooterGame.ViewTargetComponent
// Size: 0x190 (Inherited: 0xe8)
struct UViewTargetComponent : UActorComponent {
	struct FMulticastInlineDelegate OnInfoReplicated; // 0xe8(0x10)
	struct FMulticastInlineDelegate OnModeChanged; // 0xf8(0x10)
	struct FMulticastInlineDelegate OnTargetReplicated; // 0x108(0x10)
	struct FMulticastInlineDelegate OnPreApplyPendingTarget; // 0x118(0x10)
	char pad_128[0x40]; // 0x128(0x40)
	bool bTickModeEnabled; // 0x168(0x01)
	bool bRequestedViewTargetUpdate; // 0x169(0x01)
	char pad_16A[0x1]; // 0x16a(0x01)
	enum class EAresPlayerViewTargetMode DefaultMode; // 0x16b(0x01)
	char pad_16C[0x4]; // 0x16c(0x04)
	struct FViewTargetInfo ViewTargetInfo; // 0x170(0x10)
	struct AActor* LocalPlayerViewTarget; // 0x180(0x08)
	struct AActor* LastTargetBeforeFreeCam; // 0x188(0x08)
};

// Class ShooterGame.VNGManager
// Size: 0xa0 (Inherited: 0x80)
struct UVNGManager : UInitSystem {
	struct UConfigManager* ConfigManager; // 0x80(0x08)
	struct UVNGService* VNGService; // 0x88(0x08)
	struct FString WebURL; // 0x90(0x10)
};

// Class ShooterGame.VNGService
// Size: 0x38 (Inherited: 0x30)
struct UVNGService : UObject {
	struct URiotGamesApiClient* RiotGamesApiClient; // 0x30(0x08)
};

// Class ShooterGame.VoiceSessionParticipantModelInterfaceBase
// Size: 0x98 (Inherited: 0x30)
struct UVoiceSessionParticipantModelInterfaceBase : UObject {
	char pad_30[0x68]; // 0x30(0x68)
};

// Class ShooterGame.VoiceSessionParticipantModel
// Size: 0x120 (Inherited: 0x98)
struct UVoiceSessionParticipantModel : UVoiceSessionParticipantModelInterfaceBase {
	struct FMulticastInlineDelegate OnIsMutedChanged; // 0x98(0x10)
	struct FMulticastInlineDelegate OnIsRestrictedChanged; // 0xa8(0x10)
	struct FMulticastInlineDelegate OnIsSpeakingChanged; // 0xb8(0x10)
	struct FMulticastInlineDelegate OnVolumeChanged; // 0xc8(0x10)
	struct FMulticastInlineDelegate OnEnergyChanged; // 0xd8(0x10)
	char pad_E8[0x38]; // 0xe8(0x38)
};

// Class ShooterGame.VoiceModel
// Size: 0xf8 (Inherited: 0x30)
struct UVoiceModel : UObject {
	struct FMulticastInlineDelegate OnSessionParticipantAdded; // 0x30(0x10)
	struct FMulticastInlineDelegate OnSessionParticipantRemoved; // 0x40(0x10)
	struct TMap<struct FString, struct UVoiceSessionParticipantModel*> TeamSessionParticipants; // 0x50(0x50)
	struct TMap<struct FString, struct UVoiceSessionParticipantModel*> PartySessionParticipants; // 0xa0(0x50)
	char pad_F0[0x8]; // 0xf0(0x08)
};

// Class ShooterGame.VoicePreferencesManager
// Size: 0x50 (Inherited: 0x30)
struct UVoicePreferencesManager : UObject {
	struct URNetVoiceManager* RNetVoiceManager; // 0x30(0x08)
	struct UVoiceModel* VoiceModel; // 0x38(0x08)
	struct UPartyModel* PartyModel; // 0x40(0x08)
	struct UVoicePreferencesModel* VoicePreferencesModel; // 0x48(0x08)
};

// Class ShooterGame.PartyMemberVoicePreference
// Size: 0x68 (Inherited: 0x30)
struct UPartyMemberVoicePreference : UObject {
	char pad_30[0x20]; // 0x30(0x20)
	struct FString Subject; // 0x50(0x10)
	char pad_60[0x8]; // 0x60(0x08)
};

// Class ShooterGame.VoicePreferencesModel
// Size: 0xa0 (Inherited: 0x30)
struct UVoicePreferencesModel : UObject {
	char pad_30[0x20]; // 0x30(0x20)
	struct TMap<struct FString, struct UPartyMemberVoicePreference*> PartyMemberPreferences; // 0x50(0x50)
};

// Class ShooterGame.VoiceRoomManager
// Size: 0xc0 (Inherited: 0x80)
struct UVoiceRoomManager : UInitSystem {
	struct URNetVoiceManager* RNetVoiceManager; // 0x80(0x08)
	struct UPartyManager* PartyManager; // 0x88(0x08)
	struct UCoreGameManager* CoreGameManager; // 0x90(0x08)
	struct UPregameManager* PregameManager; // 0x98(0x08)
	struct UGameFlowStateManager* GameFlowStateManager; // 0xa0(0x08)
	struct UAresSettingsManager* SettingsManager; // 0xa8(0x08)
	struct UContentIndexManager* ContentIndexManager; // 0xb0(0x08)
	struct UContentIndex* ContentIndex; // 0xb8(0x08)
};

// Class ShooterGame.VoiceSessionParticipantModelInterface
// Size: 0x30 (Inherited: 0x30)
struct UVoiceSessionParticipantModelInterface : UInterface {
};

// Class ShooterGame.VoiceSessionParticipantModelWrapperBase
// Size: 0xa8 (Inherited: 0x98)
struct UVoiceSessionParticipantModelWrapperBase : UVoiceSessionParticipantModelInterfaceBase {
	struct TScriptInterface<IVoiceSessionParticipantModelInterface> WrappedModel; // 0x98(0x10)
};

// Class ShooterGame.VoiceSessionParticipantModelSelector
// Size: 0xd8 (Inherited: 0xa8)
struct UVoiceSessionParticipantModelSelector : UVoiceSessionParticipantModelWrapperBase {
	struct UVoiceModel* VoiceModel; // 0xa8(0x08)
	char pad_B0[0x28]; // 0xb0(0x28)
};

// Class ShooterGame.VoiceViewController
// Size: 0xd0 (Inherited: 0x80)
struct UVoiceViewController : UInitSystem {
	struct URNetVoiceManager* RNetVoiceManager; // 0x80(0x08)
	struct UDisplayNameManager* DisplayNameManager; // 0x88(0x08)
	struct UVoicePreferencesManager* VoicePreferencesManager; // 0x90(0x08)
	struct UVoiceModel* VoiceModel; // 0x98(0x08)
	struct URSOManager* RSOManager; // 0xa0(0x08)
	char pad_A8[0x28]; // 0xa8(0x28)
};

// Class ShooterGame.VoteControllerComponent
// Size: 0x1c0 (Inherited: 0xe8)
struct UVoteControllerComponent : UActorComponent {
	char pad_E8[0x8]; // 0xe8(0x08)
	struct FMulticastInlineDelegate OnDebugQueueVoteCalled; // 0xf0(0x10)
	struct FMulticastInlineDelegate OnDebugParticipateVoteCalled; // 0x100(0x10)
	struct FMulticastInlineDelegate OnActiveVoteUpdated; // 0x110(0x10)
	struct FMulticastInlineDelegate OnLocallySelectedOptionUpdated; // 0x120(0x10)
	float VoteQueueRateLimit; // 0x130(0x04)
	char pad_134[0x4]; // 0x134(0x04)
	struct UGameplayVoteOptionComponent* LocallySelectedOption; // 0x138(0x08)
	char pad_140[0x8]; // 0x140(0x08)
	struct UVoteManagerComponent* AuthVoteManagerComponent; // 0x148(0x08)
	struct AGameplayVote* ActiveVote; // 0x150(0x08)
	enum class EVoteState CachedActiveVoteState; // 0x158(0x01)
	char pad_159[0x7]; // 0x159(0x07)
	struct UNotificationManager* NotificationManager; // 0x160(0x08)
	char pad_168[0x58]; // 0x168(0x58)
};

// Class ShooterGame.VoteManagerComponent
// Size: 0x138 (Inherited: 0xe8)
struct UVoteManagerComponent : UActorComponent {
	struct TArray<struct AGameplayVote*> AllowedVoteTypes; // 0xe8(0x10)
	struct UServerVoteTelemetryComponent* ServerVoteTelemetryComponent; // 0xf8(0x08)
	char pad_100[0x8]; // 0x100(0x08)
	struct FVoteQueue VoteQueue; // 0x108(0x18)
	struct TArray<struct FVoteRecord> PreviousVotes; // 0x120(0x10)
	char pad_130[0x8]; // 0x130(0x08)
};

// Class ShooterGame.WaitForEquipStateComponent
// Size: 0x2d0 (Inherited: 0x2c8)
struct UWaitForEquipStateComponent : UScriptStateComponent {
	bool bTriggersAbilityExecution; // 0x2c8(0x01)
	char pad_2C9[0x7]; // 0x2c9(0x07)
};

// Class ShooterGame.WaitForProgressModelCompleted_AsyncAction
// Size: 0x58 (Inherited: 0x38)
struct UWaitForProgressModelCompleted_AsyncAction : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate Completed; // 0x38(0x10)
	struct TScriptInterface<IProgressModel> ProgressModel; // 0x48(0x10)
};

// Class ShooterGame.WaitForResourcesStateComponent
// Size: 0x2c8 (Inherited: 0x2c8)
struct UWaitForResourcesStateComponent : UScriptStateComponent {
};

// Class ShooterGame.WaitForUsingUsableStateComponent
// Size: 0x2d0 (Inherited: 0x2c8)
struct UWaitForUsingUsableStateComponent : UScriptStateComponent {
	struct UUsableComponent* EquipRequestingComponent; // 0x2c8(0x08)
};

// Class ShooterGame.WalkAnimSlot1P
// Size: 0x38 (Inherited: 0x38)
struct UWalkAnimSlot1P : UAnimSlot1P {
};

// Class ShooterGame.WalkAnimSlotGun1P
// Size: 0x38 (Inherited: 0x38)
struct UWalkAnimSlotGun1P : UAnimSlotGun1P {
};

// Class ShooterGame.WallMesh
// Size: 0x6b0 (Inherited: 0x5f0)
struct UWallMesh : UProceduralMeshComponent {
	float WallHeight; // 0x5f0(0x04)
	float MaxWallHeightOffset; // 0x5f4(0x04)
	float MaxAnchorSeparation; // 0x5f8(0x04)
	float WallEndPadding; // 0x5fc(0x04)
	float WallBottomOffset; // 0x600(0x04)
	float ClientTargetEdgeLength; // 0x604(0x04)
	int32_t ClientNumSubdivisions; // 0x608(0x04)
	bool bClientGenerateCollision; // 0x60c(0x01)
	bool bServerGenerateCollision; // 0x60d(0x01)
	char pad_60E[0x2]; // 0x60e(0x02)
	float MaskedSideOffset; // 0x610(0x04)
	bool bUsePreciseMaskedSideOffset; // 0x614(0x01)
	char pad_615[0x3]; // 0x615(0x03)
	float MaskedTopOffset; // 0x618(0x04)
	char pad_61C[0x84]; // 0x61c(0x84)
	struct FMulticastInlineDelegate OnWallMeshGenerated; // 0x6a0(0x10)
};

// Class ShooterGame.WallPenetrationComponent
// Size: 0x178 (Inherited: 0xf8)
struct UWallPenetrationComponent : UProjectileCollisionResponseComponent {
	float StoppingDistanceMultiplier; // 0xf8(0x04)
	float PenetrationPowerMultiplier; // 0xfc(0x04)
	bool bApplyPostPenetrationAirDropoff; // 0x100(0x01)
	char pad_101[0x3]; // 0x101(0x03)
	float PostPenetrationAirDropoffDistance; // 0x104(0x04)
	struct FImpactEffects ImpactEffects[0x2]; // 0x108(0x50)
	char pad_158[0x2]; // 0x158(0x02)
	bool bImpactEffectsEnabled; // 0x15a(0x01)
	char pad_15B[0x1d]; // 0x15b(0x1d)
};

// Class ShooterGame.WallPenetrationDamageQuery
// Size: 0x30 (Inherited: 0x30)
struct UWallPenetrationDamageQuery : UInterface {
};

// Class ShooterGame.WallPenetrationTargetingStateComponent
// Size: 0x560 (Inherited: 0x458)
struct UWallPenetrationTargetingStateComponent : ULineTargetingStateComponent {
	float WallAngle; // 0x458(0x04)
	bool bUseAimVector; // 0x45c(0x01)
	char pad_45D[0x3]; // 0x45d(0x03)
	float MaximumPenetrationDepth; // 0x460(0x04)
	float MaximumAirGap; // 0x464(0x04)
	float EncroachRadius; // 0x468(0x04)
	float EncroachOffset; // 0x46c(0x04)
	enum class ECollisionChannel EncroachChannel; // 0x470(0x01)
	char pad_471[0x7]; // 0x471(0x07)
	struct FClassInclusionExclusionFilter EncroachFilter; // 0x478(0x50)
	char pad_4C8[0x98]; // 0x4c8(0x98)
};

// Class ShooterGame.WhileDisarmedStateComponent
// Size: 0x2c8 (Inherited: 0x2c8)
struct UWhileDisarmedStateComponent : UScriptStateComponent {
};

// Class ShooterGame.WhileUsingUsableStateComponent
// Size: 0x340 (Inherited: 0x2c8)
struct UWhileUsingUsableStateComponent : UScriptStateComponent {
	struct UStateComponent* CancelState; // 0x2c8(0x08)
	struct FScriptStateEffectInfo CancelEffectInfo; // 0x2d0(0x38)
	struct FScriptStateEffectInfo CompleteEffectInfo; // 0x308(0x38)
};

// Class ShooterGame.WhisperChatManager
// Size: 0x1a8 (Inherited: 0x80)
struct UWhisperChatManager : UInitSystem {
	struct FMulticastInlineDelegate OnWhisperEnabledUpdated; // 0x80(0x10)
	char pad_90[0x8]; // 0x90(0x08)
	struct UConfigManager* ConfigManager; // 0x98(0x08)
	struct UTextChatManagerV2* TextChatManager; // 0xa0(0x08)
	struct UFriendsModel* FriendsModel; // 0xa8(0x08)
	struct UPlatformPlayerManager* PlatformPlayerManager; // 0xb0(0x08)
	struct TMap<struct FString, struct UTextChatRoomV2*> Rooms; // 0xb8(0x50)
	struct TMap<struct FString, struct FDateTime> RecentSentWhispersTimes; // 0x108(0x50)
	struct TMap<struct FString, struct FDateTime> RecentReceivedWhispersTimes; // 0x158(0x50)
};

// Class ShooterGame.WidgetAnimationConductorNode
// Size: 0xf8 (Inherited: 0xa8)
struct UWidgetAnimationConductorNode : UAnimationConductorNodeBase {
	struct UUserWidget* Widget; // 0xa8(0x08)
	struct UWidgetAnimation* Animation; // 0xb0(0x08)
	struct FWidgetAnimationSettings Settings; // 0xb8(0x18)
	struct FName CueScopeName; // 0xd0(0x0c)
	bool bAllowUnscopedCues; // 0xdc(0x01)
	char pad_DD[0x3]; // 0xdd(0x03)
	struct UUMGSequencePlayer* SequencePlayer; // 0xe0(0x08)
	char pad_E8[0x8]; // 0xe8(0x08)
	struct UObject* CueSource; // 0xf0(0x08)
};

// Class ShooterGame.UIAutomationHelpers
// Size: 0x30 (Inherited: 0x30)
struct UUIAutomationHelpers : UObject {
};

// Class ShooterGame.WidgetAutomationExtensions
// Size: 0x30 (Inherited: 0x30)
struct UWidgetAutomationExtensions : UObject {
};

// Class ShooterGame.WidgetLayoutManager
// Size: 0x60 (Inherited: 0x30)
struct UWidgetLayoutManager : UObject {
	struct FMulticastInlineDelegate OnWidgetSelectionChanged; // 0x30(0x10)
	struct FMulticastInlineDelegate OnPresetIndexChanged; // 0x40(0x10)
	char pad_50[0x8]; // 0x50(0x08)
	struct UCustomWidgetLayoutData* CustomLayoutData; // 0x58(0x08)
};

// Class ShooterGame.WidgetPoolComponent
// Size: 0x138 (Inherited: 0xe8)
struct UWidgetPoolComponent : UActorComponent {
	struct TMap<struct UUserWidget*, struct FWidgetPool> WidgetPoolsByClass; // 0xe8(0x50)
};

// Class ShooterGame.WildcardBlueprintLibrary
// Size: 0x30 (Inherited: 0x30)
struct UWildcardBlueprintLibrary : UBlueprintFunctionLibrary {
};

// Class ShooterGame.WrapBoxList
// Size: 0x2b8 (Inherited: 0x298)
struct UWrapBoxList : UOrderedListSimpleWidgetContainerBase {
	struct FVector2D InnerSlotPadding; // 0x298(0x08)
	float WrapWidth; // 0x2a0(0x04)
	bool bExplicitWrapWidth; // 0x2a4(0x01)
	char pad_2A5[0x13]; // 0x2a5(0x13)
};

// Class ShooterGame.WrapBoxListSlot
// Size: 0x68 (Inherited: 0x40)
struct UWrapBoxListSlot : UOrderedListSimpleWidgetContainerSlot {
	struct FMargin Padding; // 0x40(0x10)
	bool bFillEmptySpace; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	float FillSpanWhenLessThan; // 0x54(0x04)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x58(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x59(0x01)
	char pad_5A[0xe]; // 0x5a(0x0e)
};

// Class ShooterGame.WrapBoxSlotConfigurer
// Size: 0x70 (Inherited: 0x50)
struct UWrapBoxSlotConfigurer : UListEntrySlotConfigurerBase {
	struct FMargin Padding; // 0x50(0x10)
	bool bFillEmptySpace; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	float FillSpanWhenLessThan; // 0x64(0x04)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x68(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x69(0x01)
	char pad_6A[0x6]; // 0x6a(0x06)
};

// Class ShooterGame.WrapperUserAction
// Size: 0x70 (Inherited: 0x58)
struct UWrapperUserAction : UUserActionBase {
	char pad_58[0x8]; // 0x58(0x08)
	struct TScriptInterface<IUserAction> UserAction; // 0x60(0x10)
};

// Class ShooterGame.XRayTarget
// Size: 0x3e8 (Inherited: 0x3d0)
struct AXRayTarget : AActor {
	struct URoundPersistenceComponent* Persistence; // 0x3d0(0x08)
	struct USceneComponent* SceneRoot; // 0x3d8(0x08)
	float Radius; // 0x3e0(0x04)
	char pad_3E4[0x4]; // 0x3e4(0x04)
};

// Class ShooterGame.ZoomFovComponent
// Size: 0x528 (Inherited: 0x528)
struct UZoomFovComponent : UZoomComponent {
};

// Class ShooterGame.ZoomManagerComponent
// Size: 0x110 (Inherited: 0xe8)
struct UZoomManagerComponent : UActorComponent {
	struct UZoomComponent* ZoomComponent; // 0xe8(0x08)
	struct FZoomTransitionSettings ZoomTransitionSettings; // 0xf0(0x14)
	char pad_104[0x4]; // 0x104(0x04)
	struct AShooterCharacter* CurrentOwningCharacter; // 0x108(0x08)
};

// Class ShooterGame.ZoomMultiplierComponent
// Size: 0x530 (Inherited: 0x528)
struct UZoomMultiplierComponent : UZoomComponent {
	enum class EZoomMultiplierType ZoomMultiplierType; // 0x528(0x01)
	char pad_529[0x7]; // 0x529(0x07)
};

