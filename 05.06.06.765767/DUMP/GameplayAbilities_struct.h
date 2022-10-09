// Enum GameplayAbilities.EGameplayEffectGrantedAbilityRemovePolicy
enum class EGameplayEffectGrantedAbilityRemovePolicy : uint8 {
	CancelAbilityImmediately = 0,
	RemoveAbilityOnEnd = 1,
	DoNothing = 2,
	EGameplayEffectGrantedAbilityRemovePolicy_MAX = 3
};

// Enum GameplayAbilities.EGameplayEffectAttributeCaptureSource
enum class EGameplayEffectAttributeCaptureSource : uint8 {
	Source = 0,
	Target = 1,
	EGameplayEffectAttributeCaptureSource_MAX = 2
};

// Enum GameplayAbilities.EGameplayAbilityActivationMode
enum class EGameplayAbilityActivationMode : uint8 {
	Authority = 0,
	NonAuthority = 1,
	Predicting = 2,
	Confirmed = 3,
	Rejected = 4,
	EGameplayAbilityActivationMode_MAX = 5
};

// Enum GameplayAbilities.EAbilityGenericReplicatedEvent
enum class EAbilityGenericReplicatedEvent : uint8 {
	GenericConfirm = 0,
	GenericCancel = 1,
	InputPressed = 2,
	InputReleased = 3,
	GenericSignalFromClient = 4,
	GenericSignalFromServer = 5,
	GameCustom1 = 6,
	GameCustom2 = 7,
	GameCustom3 = 8,
	GameCustom4 = 9,
	GameCustom5 = 10,
	GameCustom6 = 11,
	MAX = 12
};

// Enum GameplayAbilities.EGameplayEffectReplicationMode
enum class EGameplayEffectReplicationMode : uint8 {
	Minimal = 0,
	Mixed = 1,
	Full = 2,
	EGameplayEffectReplicationMode_MAX = 3
};

// Enum GameplayAbilities.EAbilityTaskWaitState
enum class EAbilityTaskWaitState : uint8 {
	WaitingOnGame = 1,
	WaitingOnUser = 2,
	WaitingOnAvatar = 4,
	EAbilityTaskWaitState_MAX = 5
};

// Enum GameplayAbilities.ERootMotionMoveToActorTargetOffsetType
enum class ERootMotionMoveToActorTargetOffsetType : uint8 {
	AlignFromTargetToSource = 0,
	AlignToTargetForward = 1,
	AlignToWorldSpace = 2,
	ERootMotionMoveToActorTargetOffsetType_MAX = 3
};

// Enum GameplayAbilities.EAbilityTaskNetSyncType
enum class EAbilityTaskNetSyncType : uint8 {
	BothWait = 0,
	OnlyServerWait = 1,
	OnlyClientWait = 2,
	EAbilityTaskNetSyncType_MAX = 3
};

// Enum GameplayAbilities.EWaitAttributeChangeComparison
enum class EWaitAttributeChangeComparison : uint8 {
	None = 0,
	GreaterThan = 1,
	LessThan = 2,
	GreaterThanOrEqualTo = 3,
	LessThanOrEqualTo = 4,
	NotEqualTo = 5,
	ExactlyEqualTo = 6,
	MAX = 7
};

// Enum GameplayAbilities.EGameplayAbilityInputBinds
enum class EGameplayAbilityInputBinds : uint8 {
	Ability1 = 0,
	Ability2 = 1,
	Ability3 = 2,
	Ability4 = 3,
	Ability5 = 4,
	Ability6 = 5,
	Ability7 = 6,
	Ability8 = 7,
	Ability9 = 8,
	EGameplayAbilityInputBinds_MAX = 9
};

// Enum GameplayAbilities.ETargetDataFilterSelf
enum class ETargetDataFilterSelf : uint8 {
	TDFS_Any = 0,
	TDFS_NoSelf = 1,
	TDFS_NoOthers = 2,
	TDFS_MAX = 3
};

// Enum GameplayAbilities.EGameplayAbilityTargetingLocationType
enum class EGameplayAbilityTargetingLocationType : uint8 {
	LiteralTransform = 0,
	ActorTransform = 1,
	SocketTransform = 2,
	EGameplayAbilityTargetingLocationType_MAX = 3
};

// Enum GameplayAbilities.EGameplayTargetingConfirmation
enum class EGameplayTargetingConfirmation : uint8 {
	Instant = 0,
	UserConfirmed = 1,
	Custom = 2,
	CustomMulti = 3,
	EGameplayTargetingConfirmation_MAX = 4
};

// Enum GameplayAbilities.ERepAnimPositionMethod
enum class ERepAnimPositionMethod : uint8 {
	Position = 0,
	CurrentSectionId = 1,
	ERepAnimPositionMethod_MAX = 2
};

// Enum GameplayAbilities.EGameplayAbilityTriggerSource
enum class EGameplayAbilityTriggerSource : uint8 {
	GameplayEvent = 0,
	OwnedTagAdded = 1,
	OwnedTagPresent = 2,
	EGameplayAbilityTriggerSource_MAX = 3
};

// Enum GameplayAbilities.EGameplayAbilityReplicationPolicy
enum class EGameplayAbilityReplicationPolicy : uint8 {
	ReplicateNo = 0,
	ReplicateYes = 1,
	EGameplayAbilityReplicationPolicy_MAX = 2
};

// Enum GameplayAbilities.EGameplayAbilityNetSecurityPolicy
enum class EGameplayAbilityNetSecurityPolicy : uint8 {
	ClientOrServer = 0,
	ServerOnlyExecution = 1,
	ServerOnlyTermination = 2,
	ServerOnly = 3,
	EGameplayAbilityNetSecurityPolicy_MAX = 4
};

// Enum GameplayAbilities.EGameplayAbilityNetExecutionPolicy
enum class EGameplayAbilityNetExecutionPolicy : uint8 {
	LocalPredicted = 0,
	LocalOnly = 1,
	ServerInitiated = 2,
	ServerOnly = 3,
	EGameplayAbilityNetExecutionPolicy_MAX = 4
};

// Enum GameplayAbilities.EGameplayAbilityInstancingPolicy
enum class EGameplayAbilityInstancingPolicy : uint8 {
	NonInstanced = 0,
	InstancedPerActor = 1,
	InstancedPerExecution = 2,
	EGameplayAbilityInstancingPolicy_MAX = 3
};

// Enum GameplayAbilities.EGameplayCuePayloadType
enum class EGameplayCuePayloadType : uint8 {
	CueParameters = 0,
	FromSpec = 1,
	EGameplayCuePayloadType_MAX = 2
};

// Enum GameplayAbilities.EGameplayEffectPeriodInhibitionRemovedPolicy
enum class EGameplayEffectPeriodInhibitionRemovedPolicy : uint8 {
	NeverReset = 0,
	ResetPeriod = 1,
	ExecuteAndResetPeriod = 2,
	EGameplayEffectPeriodInhibitionRemovedPolicy_MAX = 3
};

// Enum GameplayAbilities.EGameplayEffectStackingExpirationPolicy
enum class EGameplayEffectStackingExpirationPolicy : uint8 {
	ClearEntireStack = 0,
	RemoveSingleStackAndRefreshDuration = 1,
	RefreshDuration = 2,
	EGameplayEffectStackingExpirationPolicy_MAX = 3
};

// Enum GameplayAbilities.EGameplayEffectStackingPeriodPolicy
enum class EGameplayEffectStackingPeriodPolicy : uint8 {
	ResetOnSuccessfulApplication = 0,
	NeverReset = 1,
	EGameplayEffectStackingPeriodPolicy_MAX = 2
};

// Enum GameplayAbilities.EGameplayEffectStackingDurationPolicy
enum class EGameplayEffectStackingDurationPolicy : uint8 {
	RefreshOnSuccessfulApplication = 0,
	NeverRefresh = 1,
	EGameplayEffectStackingDurationPolicy_MAX = 2
};

// Enum GameplayAbilities.EGameplayEffectDurationType
enum class EGameplayEffectDurationType : uint8 {
	Instant = 0,
	Infinite = 1,
	HasDuration = 2,
	EGameplayEffectDurationType_MAX = 3
};

// Enum GameplayAbilities.EGameplayEffectScopedModifierAggregatorType
enum class EGameplayEffectScopedModifierAggregatorType : uint8 {
	CapturedAttributeBacked = 0,
	Transient = 1,
	EGameplayEffectScopedModifierAggregatorType_MAX = 2
};

// Enum GameplayAbilities.EAttributeBasedFloatCalculationType
enum class EAttributeBasedFloatCalculationType : uint8 {
	AttributeMagnitude = 0,
	AttributeBaseValue = 1,
	AttributeBonusMagnitude = 2,
	AttributeMagnitudeEvaluatedUpToChannel = 3,
	EAttributeBasedFloatCalculationType_MAX = 4
};

// Enum GameplayAbilities.EGameplayEffectMagnitudeCalculation
enum class EGameplayEffectMagnitudeCalculation : uint8 {
	ScalableFloat = 0,
	AttributeBased = 1,
	CustomCalculationClass = 2,
	SetByCaller = 3,
	FloatCurve = 4,
	EGameplayEffectMagnitudeCalculation_MAX = 5
};

// Enum GameplayAbilities.EGameplayTagEventType
enum class EGameplayTagEventType : uint8 {
	NewOrRemoved = 0,
	AnyCountChange = 1,
	EGameplayTagEventType_MAX = 2
};

// Enum GameplayAbilities.EGameplayCueEvent
enum class EGameplayCueEvent : uint8 {
	OnActive = 0,
	WhileActive = 1,
	Executed = 2,
	Removed = 3,
	EGameplayCueEvent_MAX = 4
};

// Enum GameplayAbilities.EGameplayEffectStackingType
enum class EGameplayEffectStackingType : uint8 {
	None = 0,
	AggregateBySource = 1,
	AggregateByTarget = 2,
	EGameplayEffectStackingType_MAX = 3
};

// Enum GameplayAbilities.EGameplayModOp
enum class EGameplayModOp : uint8 {
	Additive = 0,
	Multiplicitive = 1,
	Division = 2,
	Override = 3,
	Minimum = 4,
	Maximum = 5,
	AddUnstacked = 6,
	MulUnstacked = 7,
	Max = 8,
	EGameplayModOp_MAX = 9
};

// Enum GameplayAbilities.EGameplayModEvaluationChannel
enum class EGameplayModEvaluationChannel : uint8 {
	Channel0 = 0,
	Channel1 = 1,
	Channel2 = 2,
	Channel3 = 3,
	Channel4 = 4,
	Channel5 = 5,
	Channel6 = 6,
	Channel7 = 7,
	Channel8 = 8,
	Channel9 = 9,
	Channel_MAX = 10,
	EGameplayModEvaluationChannel_MAX = 11
};

// ScriptStruct GameplayAbilities.ActiveGameplayEffect
// Size: 0x368 (Inherited: 0x0c)
struct FActiveGameplayEffect : FFastArraySerializerItem {
	char pad_C[0xc]; // 0x0c(0x0c)
	struct FGameplayEffectSpec Spec; // 0x18(0x298)
	struct FPredictionKey PredictionKey; // 0x2b0(0x10)
	float StartServerWorldTime; // 0x2c0(0x04)
	float CachedStartServerWorldTime; // 0x2c4(0x04)
	float StartWorldTime; // 0x2c8(0x04)
	bool bIsInhibited; // 0x2cc(0x01)
	char pad_2CD[0x9b]; // 0x2cd(0x9b)
};

// ScriptStruct GameplayAbilities.PredictionKey
// Size: 0x10 (Inherited: 0x00)
struct FPredictionKey {
	struct UPackageMap* PredictiveConnection; // 0x00(0x08)
	int16_t Current; // 0x08(0x02)
	int16_t Base; // 0x0a(0x02)
	bool bIsStale; // 0x0c(0x01)
	bool bIsServerInitiated; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
};

// ScriptStruct GameplayAbilities.GameplayEffectSpec
// Size: 0x298 (Inherited: 0x00)
struct FGameplayEffectSpec {
	struct UGameplayEffect* Def; // 0x00(0x08)
	struct TArray<struct FGameplayEffectModifiedAttribute> ModifiedAttributes; // 0x08(0x10)
	struct FGameplayEffectAttributeCaptureSpecContainer CapturedRelevantAttributes; // 0x18(0x28)
	char pad_40[0x10]; // 0x40(0x10)
	float Duration; // 0x50(0x04)
	float Period; // 0x54(0x04)
	float ChanceToApplyToTarget; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FTagContainerAggregator CapturedSourceTags; // 0x60(0x88)
	struct FTagContainerAggregator CapturedTargetTags; // 0xe8(0x88)
	struct FGameplayTagContainer DynamicGrantedTags; // 0x170(0x20)
	struct FGameplayTagContainer DynamicAssetTags; // 0x190(0x20)
	struct TArray<struct FModifierSpec> Modifiers; // 0x1b0(0x10)
	int32_t StackCount; // 0x1c0(0x04)
	char bCompletedSourceAttributeCapture : 1; // 0x1c4(0x01)
	char bCompletedTargetAttributeCapture : 1; // 0x1c4(0x01)
	char bDurationLocked : 1; // 0x1c4(0x01)
	char pad_1C4_3 : 5; // 0x1c4(0x01)
	char pad_1C5[0x3]; // 0x1c5(0x03)
	struct TArray<struct FGameplayAbilitySpecDef> GrantedAbilitySpecs; // 0x1c8(0x10)
	char pad_1D8[0xa0]; // 0x1d8(0xa0)
	struct FGameplayEffectContextHandle EffectContext; // 0x278(0x18)
	float Level; // 0x290(0x04)
	char pad_294[0x4]; // 0x294(0x04)
};

// ScriptStruct GameplayAbilities.GameplayEffectContextHandle
// Size: 0x18 (Inherited: 0x00)
struct FGameplayEffectContextHandle {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct GameplayAbilities.GameplayAbilitySpecDef
// Size: 0x98 (Inherited: 0x00)
struct FGameplayAbilitySpecDef {
	struct UGameplayAbility* Ability; // 0x00(0x08)
	struct FScalableFloat LevelScalableFloat; // 0x08(0x28)
	int32_t InputID; // 0x30(0x04)
	enum class EGameplayEffectGrantedAbilityRemovePolicy RemovalPolicy; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	struct UObject* SourceObject; // 0x38(0x08)
	char pad_40[0x50]; // 0x40(0x50)
	struct FGameplayAbilitySpecHandle AssignedHandle; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
};

// ScriptStruct GameplayAbilities.GameplayAbilitySpecHandle
// Size: 0x04 (Inherited: 0x00)
struct FGameplayAbilitySpecHandle {
	int32_t Handle; // 0x00(0x04)
};

// ScriptStruct GameplayAbilities.ScalableFloat
// Size: 0x28 (Inherited: 0x00)
struct FScalableFloat {
	float Value; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FCurveTableRowHandle Curve; // 0x08(0x18)
	char pad_20[0x8]; // 0x20(0x08)
};

// ScriptStruct GameplayAbilities.ModifierSpec
// Size: 0x04 (Inherited: 0x00)
struct FModifierSpec {
	float EvaluatedMagnitude; // 0x00(0x04)
};

// ScriptStruct GameplayAbilities.TagContainerAggregator
// Size: 0x88 (Inherited: 0x00)
struct FTagContainerAggregator {
	struct FGameplayTagContainer CapturedActorTags; // 0x00(0x20)
	struct FGameplayTagContainer CapturedSpecTags; // 0x20(0x20)
	struct FGameplayTagContainer ScopedTags; // 0x40(0x20)
	char pad_60[0x28]; // 0x60(0x28)
};

// ScriptStruct GameplayAbilities.GameplayEffectAttributeCaptureSpecContainer
// Size: 0x28 (Inherited: 0x00)
struct FGameplayEffectAttributeCaptureSpecContainer {
	struct TArray<struct FGameplayEffectAttributeCaptureSpec> SourceAttributes; // 0x00(0x10)
	struct TArray<struct FGameplayEffectAttributeCaptureSpec> TargetAttributes; // 0x10(0x10)
	bool bHasNonSnapshottedAttributes; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct GameplayAbilities.GameplayEffectAttributeCaptureSpec
// Size: 0x50 (Inherited: 0x00)
struct FGameplayEffectAttributeCaptureSpec {
	struct FGameplayEffectAttributeCaptureDefinition BackingDefinition; // 0x00(0x40)
	char pad_40[0x10]; // 0x40(0x10)
};

// ScriptStruct GameplayAbilities.GameplayEffectAttributeCaptureDefinition
// Size: 0x40 (Inherited: 0x00)
struct FGameplayEffectAttributeCaptureDefinition {
	struct FGameplayAttribute AttributeToCapture; // 0x00(0x38)
	enum class EGameplayEffectAttributeCaptureSource AttributeSource; // 0x38(0x01)
	bool bSnapshot; // 0x39(0x01)
	char pad_3A[0x6]; // 0x3a(0x06)
};

// ScriptStruct GameplayAbilities.GameplayAttribute
// Size: 0x38 (Inherited: 0x00)
struct FGameplayAttribute {
	struct FString AttributeName; // 0x00(0x10)
	struct TFieldPath<FProperty> Attribute; // 0x10(0x20)
	struct UStruct* AttributeOwner; // 0x30(0x08)
};

// ScriptStruct GameplayAbilities.GameplayEffectModifiedAttribute
// Size: 0x40 (Inherited: 0x00)
struct FGameplayEffectModifiedAttribute {
	struct FGameplayAttribute Attribute; // 0x00(0x38)
	float TotalMagnitude; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct GameplayAbilities.ActiveGameplayEffectHandle
// Size: 0x08 (Inherited: 0x00)
struct FActiveGameplayEffectHandle {
	int32_t Handle; // 0x00(0x04)
	bool bPassedFiltersAndWasExecuted; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct GameplayAbilities.GameplayEffectSpecHandle
// Size: 0x10 (Inherited: 0x00)
struct FGameplayEffectSpecHandle {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct GameplayAbilities.GameplayEffectRemovalInfo
// Size: 0x20 (Inherited: 0x00)
struct FGameplayEffectRemovalInfo {
	bool bPrematureRemoval; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t StackCount; // 0x04(0x04)
	struct FGameplayEffectContextHandle EffectContext; // 0x08(0x18)
};

// ScriptStruct GameplayAbilities.GameplayEventData
// Size: 0xb8 (Inherited: 0x00)
struct FGameplayEventData {
	struct FGameplayTag EventTag; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct AActor* Instigator; // 0x10(0x08)
	struct AActor* Target; // 0x18(0x08)
	struct UObject* OptionalObject; // 0x20(0x08)
	struct UObject* OptionalObject2; // 0x28(0x08)
	struct FGameplayEffectContextHandle ContextHandle; // 0x30(0x18)
	struct FGameplayTagContainer InstigatorTags; // 0x48(0x20)
	struct FGameplayTagContainer TargetTags; // 0x68(0x20)
	float EventMagnitude; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
	struct FGameplayAbilityTargetDataHandle TargetData; // 0x90(0x28)
};

// ScriptStruct GameplayAbilities.GameplayAbilityTargetDataHandle
// Size: 0x28 (Inherited: 0x00)
struct FGameplayAbilityTargetDataHandle {
	char pad_0[0x28]; // 0x00(0x28)
};

// ScriptStruct GameplayAbilities.GameplayAbilityActivationInfo
// Size: 0x18 (Inherited: 0x00)
struct FGameplayAbilityActivationInfo {
	enum class EGameplayAbilityActivationMode ActivationMode; // 0x00(0x01)
	char bCanBeEndedByOtherInstance : 1; // 0x01(0x01)
	char pad_1_1 : 7; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct FPredictionKey PredictionKeyWhenActivated; // 0x08(0x10)
};

// ScriptStruct GameplayAbilities.GameplayEffectQuery
// Size: 0x158 (Inherited: 0x00)
struct FGameplayEffectQuery {
	char pad_0[0x28]; // 0x00(0x28)
	struct FGameplayTagQuery OwningTagQuery; // 0x28(0x48)
	struct FGameplayTagQuery EffectTagQuery; // 0x70(0x48)
	struct FGameplayTagQuery SourceTagQuery; // 0xb8(0x48)
	struct FGameplayAttribute ModifyingAttribute; // 0x100(0x38)
	struct UObject* EffectSource; // 0x138(0x08)
	struct UGameplayEffect* EffectDefinition; // 0x140(0x08)
	char pad_148[0x10]; // 0x148(0x10)
};

// ScriptStruct GameplayAbilities.GameplayCueParameters
// Size: 0xc0 (Inherited: 0x00)
struct FGameplayCueParameters {
	float NormalizedMagnitude; // 0x00(0x04)
	float RawMagnitude; // 0x04(0x04)
	struct FGameplayEffectContextHandle EffectContext; // 0x08(0x18)
	struct FGameplayTag MatchedTagName; // 0x20(0x0c)
	struct FGameplayTag OriginalTag; // 0x2c(0x0c)
	struct FGameplayTagContainer AggregatedSourceTags; // 0x38(0x20)
	struct FGameplayTagContainer AggregatedTargetTags; // 0x58(0x20)
	struct FVector_NetQuantize10 Location; // 0x78(0x0c)
	struct FVector_NetQuantizeNormal Normal; // 0x84(0x0c)
	struct TWeakObjectPtr<struct AActor> Instigator; // 0x90(0x08)
	struct TWeakObjectPtr<struct AActor> EffectCauser; // 0x98(0x08)
	struct TWeakObjectPtr<struct UObject> SourceObject; // 0xa0(0x08)
	struct TWeakObjectPtr<struct UPhysicalMaterial> PhysicalMaterial; // 0xa8(0x08)
	int32_t GameplayEffectLevel; // 0xb0(0x04)
	int32_t AbilityLevel; // 0xb4(0x04)
	struct TWeakObjectPtr<struct USceneComponent> TargetAttachComponent; // 0xb8(0x08)
};

// ScriptStruct GameplayAbilities.GameplayEffectSpecForRPC
// Size: 0x78 (Inherited: 0x00)
struct FGameplayEffectSpecForRPC {
	struct UGameplayEffect* Def; // 0x00(0x08)
	struct TArray<struct FGameplayEffectModifiedAttribute> ModifiedAttributes; // 0x08(0x10)
	struct FGameplayEffectContextHandle EffectContext; // 0x18(0x18)
	struct FGameplayTagContainer AggregatedSourceTags; // 0x30(0x20)
	struct FGameplayTagContainer AggregatedTargetTags; // 0x50(0x20)
	float Level; // 0x70(0x04)
	float AbilityLevel; // 0x74(0x04)
};

// ScriptStruct GameplayAbilities.ServerAbilityRPCBatch
// Size: 0x48 (Inherited: 0x00)
struct FServerAbilityRPCBatch {
	struct FGameplayAbilitySpecHandle AbilitySpecHandle; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FPredictionKey PredictionKey; // 0x08(0x10)
	struct FGameplayAbilityTargetDataHandle TargetData; // 0x18(0x28)
	bool InputPressed; // 0x40(0x01)
	bool Ended; // 0x41(0x01)
	bool Started; // 0x42(0x01)
	char pad_43[0x5]; // 0x43(0x05)
};

// ScriptStruct GameplayAbilities.ReplicatedPredictionKeyMap
// Size: 0x118 (Inherited: 0x108)
struct FReplicatedPredictionKeyMap : FFastArraySerializer {
	struct TArray<struct FReplicatedPredictionKeyItem> PredictionKeys; // 0x108(0x10)
};

// ScriptStruct GameplayAbilities.ReplicatedPredictionKeyItem
// Size: 0x20 (Inherited: 0x0c)
struct FReplicatedPredictionKeyItem : FFastArraySerializerItem {
	char pad_C[0x4]; // 0x0c(0x04)
	struct FPredictionKey PredictionKey; // 0x10(0x10)
};

// ScriptStruct GameplayAbilities.MinimalReplicationTagCountMap
// Size: 0x60 (Inherited: 0x00)
struct FMinimalReplicationTagCountMap {
	char pad_0[0x50]; // 0x00(0x50)
	struct UAbilitySystemComponent* Owner; // 0x50(0x08)
	char pad_58[0x8]; // 0x58(0x08)
};

// ScriptStruct GameplayAbilities.ActiveGameplayCueContainer
// Size: 0x128 (Inherited: 0x108)
struct FActiveGameplayCueContainer : FFastArraySerializer {
	struct TArray<struct FActiveGameplayCue> GameplayCues; // 0x108(0x10)
	char pad_118[0x8]; // 0x118(0x08)
	struct UAbilitySystemComponent* Owner; // 0x120(0x08)
};

// ScriptStruct GameplayAbilities.ActiveGameplayCue
// Size: 0xf0 (Inherited: 0x0c)
struct FActiveGameplayCue : FFastArraySerializerItem {
	struct FGameplayTag GameplayCueTag; // 0x0c(0x0c)
	struct FPredictionKey PredictionKey; // 0x18(0x10)
	struct FGameplayCueParameters Parameters; // 0x28(0xc0)
	bool bPredictivelyRemoved; // 0xe8(0x01)
	char pad_E9[0x7]; // 0xe9(0x07)
};

// ScriptStruct GameplayAbilities.ActiveGameplayEffectsContainer
// Size: 0x478 (Inherited: 0x108)
struct FActiveGameplayEffectsContainer : FFastArraySerializer {
	char pad_108[0x28]; // 0x108(0x28)
	struct TArray<struct FActiveGameplayEffect> GameplayEffects_Internal; // 0x130(0x10)
	char pad_140[0x310]; // 0x140(0x310)
	struct TArray<struct UGameplayEffect*> ApplicationImmunityQueryEffects; // 0x450(0x10)
	char pad_460[0x18]; // 0x460(0x18)
};

// ScriptStruct GameplayAbilities.GameplayAbilityLocalAnimMontage
// Size: 0x28 (Inherited: 0x00)
struct FGameplayAbilityLocalAnimMontage {
	struct UAnimMontage* AnimMontage; // 0x00(0x08)
	bool PlayBit; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FPredictionKey PredictionKey; // 0x10(0x10)
	struct UGameplayAbility* AnimatingAbility; // 0x20(0x08)
};

// ScriptStruct GameplayAbilities.GameplayAbilityRepAnimMontage
// Size: 0x30 (Inherited: 0x00)
struct FGameplayAbilityRepAnimMontage {
	struct UAnimMontage* AnimMontage; // 0x00(0x08)
	float PlayRate; // 0x08(0x04)
	float Position; // 0x0c(0x04)
	float BlendTime; // 0x10(0x04)
	char NextSectionID; // 0x14(0x01)
	char bRepPosition : 1; // 0x15(0x01)
	char IsStopped : 1; // 0x15(0x01)
	char ForcePlayBit : 1; // 0x15(0x01)
	char SkipPositionCorrection : 1; // 0x15(0x01)
	char bSkipPlayRate : 1; // 0x15(0x01)
	char pad_15_5 : 3; // 0x15(0x01)
	char pad_16[0x2]; // 0x16(0x02)
	struct FPredictionKey PredictionKey; // 0x18(0x10)
	char SectionIdToPlay; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct GameplayAbilities.GameplayAbilitySpecContainer
// Size: 0x120 (Inherited: 0x108)
struct FGameplayAbilitySpecContainer : FFastArraySerializer {
	struct TArray<struct FGameplayAbilitySpec> Items; // 0x108(0x10)
	struct UAbilitySystemComponent* Owner; // 0x118(0x08)
};

// ScriptStruct GameplayAbilities.GameplayAbilitySpec
// Size: 0xe0 (Inherited: 0x0c)
struct FGameplayAbilitySpec : FFastArraySerializerItem {
	struct FGameplayAbilitySpecHandle Handle; // 0x0c(0x04)
	struct UGameplayAbility* Ability; // 0x10(0x08)
	int32_t Level; // 0x18(0x04)
	int32_t InputID; // 0x1c(0x04)
	struct UObject* SourceObject; // 0x20(0x08)
	char ActiveCount; // 0x28(0x01)
	char InputPressed : 1; // 0x29(0x01)
	char RemoveAfterActivation : 1; // 0x29(0x01)
	char PendingRemove : 1; // 0x29(0x01)
	char bActivateOnce : 1; // 0x29(0x01)
	char pad_29_4 : 4; // 0x29(0x01)
	char pad_2A[0x6]; // 0x2a(0x06)
	struct FGameplayAbilityActivationInfo ActivationInfo; // 0x30(0x18)
	struct FGameplayTagContainer DynamicAbilityTags; // 0x48(0x20)
	struct TArray<struct UGameplayAbility*> NonReplicatedInstances; // 0x68(0x10)
	struct TArray<struct UGameplayAbility*> ReplicatedInstances; // 0x78(0x10)
	struct FActiveGameplayEffectHandle GameplayEffectHandle; // 0x88(0x08)
	char pad_90[0x50]; // 0x90(0x50)
};

// ScriptStruct GameplayAbilities.AttributeDefaults
// Size: 0x10 (Inherited: 0x00)
struct FAttributeDefaults {
	struct UAttributeSet* Attributes; // 0x00(0x08)
	struct UDataTable* DefaultStartingTable; // 0x08(0x08)
};

// ScriptStruct GameplayAbilities.NetSerializeScriptStructCache
// Size: 0x10 (Inherited: 0x00)
struct FNetSerializeScriptStructCache {
	struct TArray<struct UScriptStruct*> ScriptStructs; // 0x00(0x10)
};

// ScriptStruct GameplayAbilities.AttributeMetaData
// Size: 0x30 (Inherited: 0x08)
struct FAttributeMetaData : FTableRowBase {
	float BaseValue; // 0x08(0x04)
	float MinValue; // 0x0c(0x04)
	float MaxValue; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString DerivedAttributeInfo; // 0x18(0x10)
	bool bCanStack; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct GameplayAbilities.GameplayAttributeData
// Size: 0x10 (Inherited: 0x00)
struct FGameplayAttributeData {
	char pad_0[0x8]; // 0x00(0x08)
	float BaseValue; // 0x08(0x04)
	float CurrentValue; // 0x0c(0x04)
};

// ScriptStruct GameplayAbilities.AbilityTriggerData
// Size: 0x10 (Inherited: 0x00)
struct FAbilityTriggerData {
	struct FGameplayTag TriggerTag; // 0x00(0x0c)
	enum class EGameplayAbilityTriggerSource TriggerSource; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct GameplayAbilities.GameplayAbilityBindInfo
// Size: 0x10 (Inherited: 0x00)
struct FGameplayAbilityBindInfo {
	enum class EGameplayAbilityInputBinds Command; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UGameplayAbility* GameplayAbilityClass; // 0x08(0x08)
};

// ScriptStruct GameplayAbilities.GameplayTargetDataFilterHandle
// Size: 0x10 (Inherited: 0x00)
struct FGameplayTargetDataFilterHandle {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct GameplayAbilities.GameplayTargetDataFilter
// Size: 0x20 (Inherited: 0x00)
struct FGameplayTargetDataFilter {
	char pad_0[0x8]; // 0x00(0x08)
	struct AActor* SelfActor; // 0x08(0x08)
	struct AActor* RequiredActorClass; // 0x10(0x08)
	enum class ETargetDataFilterSelf SelfFilter; // 0x18(0x01)
	bool bReverseFilter; // 0x19(0x01)
	char pad_1A[0x6]; // 0x1a(0x06)
};

// ScriptStruct GameplayAbilities.GameplayAbilityTargetData
// Size: 0x08 (Inherited: 0x00)
struct FGameplayAbilityTargetData {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct GameplayAbilities.GameplayAbilityTargetData_SingleTargetHit
// Size: 0xa0 (Inherited: 0x08)
struct FGameplayAbilityTargetData_SingleTargetHit : FGameplayAbilityTargetData {
	struct FHitResult HitResult; // 0x08(0x94)
	bool bHitReplaced; // 0x9c(0x01)
	char pad_9D[0x3]; // 0x9d(0x03)
};

// ScriptStruct GameplayAbilities.GameplayAbilityTargetData_ActorArray
// Size: 0xa0 (Inherited: 0x08)
struct FGameplayAbilityTargetData_ActorArray : FGameplayAbilityTargetData {
	char pad_8[0x8]; // 0x08(0x08)
	struct FGameplayAbilityTargetingLocationInfo SourceLocation; // 0x10(0x80)
	struct TArray<struct TWeakObjectPtr<struct AActor>> TargetActorArray; // 0x90(0x10)
};

// ScriptStruct GameplayAbilities.GameplayAbilityTargetingLocationInfo
// Size: 0x80 (Inherited: 0x00)
struct FGameplayAbilityTargetingLocationInfo {
	char pad_0[0x10]; // 0x00(0x10)
	enum class EGameplayAbilityTargetingLocationType LocationType; // 0x10(0x01)
	char pad_11[0xf]; // 0x11(0x0f)
	struct FTransform LiteralTransform; // 0x20(0x30)
	struct AActor* SourceActor; // 0x50(0x08)
	struct UMeshComponent* SourceComponent; // 0x58(0x08)
	struct UGameplayAbility* SourceAbility; // 0x60(0x08)
	struct FName SourceSocketName; // 0x68(0x0c)
	char pad_74[0xc]; // 0x74(0x0c)
};

// ScriptStruct GameplayAbilities.GameplayAbilityTargetData_LocationInfo
// Size: 0x110 (Inherited: 0x08)
struct FGameplayAbilityTargetData_LocationInfo : FGameplayAbilityTargetData {
	char pad_8[0x8]; // 0x08(0x08)
	struct FGameplayAbilityTargetingLocationInfo SourceLocation; // 0x10(0x80)
	struct FGameplayAbilityTargetingLocationInfo TargetLocation; // 0x90(0x80)
};

// ScriptStruct GameplayAbilities.GameplayAbilitySpecHandleAndPredictionKey
// Size: 0x08 (Inherited: 0x00)
struct FGameplayAbilitySpecHandleAndPredictionKey {
	struct FGameplayAbilitySpecHandle AbilityHandle; // 0x00(0x04)
	int32_t PredictionKeyAtCreation; // 0x04(0x04)
};

// ScriptStruct GameplayAbilities.AbilityTaskDebugMessage
// Size: 0x18 (Inherited: 0x00)
struct FAbilityTaskDebugMessage {
	struct UGameplayTask* FromTask; // 0x00(0x08)
	struct FString Message; // 0x08(0x10)
};

// ScriptStruct GameplayAbilities.AbilityEndedData
// Size: 0x10 (Inherited: 0x00)
struct FAbilityEndedData {
	struct UGameplayAbility* AbilityThatEnded; // 0x00(0x08)
	struct FGameplayAbilitySpecHandle AbilitySpecHandle; // 0x08(0x04)
	bool bReplicateEndAbility; // 0x0c(0x01)
	bool bWasCancelled; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
};

// ScriptStruct GameplayAbilities.GameplayAbilityActorInfo
// Size: 0x50 (Inherited: 0x00)
struct FGameplayAbilityActorInfo {
	char pad_0[0x8]; // 0x00(0x08)
	struct TWeakObjectPtr<struct AActor> OwnerActor; // 0x08(0x08)
	struct TWeakObjectPtr<struct AActor> AvatarActor; // 0x10(0x08)
	struct TWeakObjectPtr<struct APlayerController> PlayerController; // 0x18(0x08)
	struct TWeakObjectPtr<struct UAbilitySystemComponent> AbilitySystemComponent; // 0x20(0x08)
	struct TWeakObjectPtr<struct USkeletalMeshComponent> SkeletalMeshComponent; // 0x28(0x08)
	struct TWeakObjectPtr<struct UAnimInstance> AnimInstance; // 0x30(0x08)
	struct TWeakObjectPtr<struct UMovementComponent> MovementComponent; // 0x38(0x08)
	struct FName AffectedAnimInstanceTag; // 0x40(0x0c)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct GameplayAbilities.WorldReticleParameters
// Size: 0x0c (Inherited: 0x00)
struct FWorldReticleParameters {
	struct FVector AOEScale; // 0x00(0x0c)
};

// ScriptStruct GameplayAbilities.PreallocationInfo
// Size: 0x68 (Inherited: 0x00)
struct FPreallocationInfo {
	char pad_0[0x50]; // 0x00(0x50)
	struct TArray<struct AGameplayCueNotify_Actor*> ClassesNeedingPreallocation; // 0x50(0x10)
	char pad_60[0x8]; // 0x60(0x08)
};

// ScriptStruct GameplayAbilities.GameplayCuePendingExecute
// Size: 0x178 (Inherited: 0x00)
struct FGameplayCuePendingExecute {
	char pad_0[0x20]; // 0x00(0x20)
	struct FPredictionKey PredictionKey; // 0x20(0x10)
	enum class EGameplayCuePayloadType PayloadType; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct UAbilitySystemComponent* OwningComponent; // 0x38(0x08)
	struct FGameplayEffectSpecForRPC FromSpec; // 0x40(0x78)
	struct FGameplayCueParameters CueParameters; // 0xb8(0xc0)
};

// ScriptStruct GameplayAbilities.MinimalGameplayCueReplicationProxy
// Size: 0x240 (Inherited: 0x00)
struct FMinimalGameplayCueReplicationProxy {
	char pad_0[0x230]; // 0x00(0x230)
	struct UAbilitySystemComponent* Owner; // 0x230(0x08)
	char pad_238[0x8]; // 0x238(0x08)
};

// ScriptStruct GameplayAbilities.GameplayCueTag
// Size: 0x0c (Inherited: 0x00)
struct FGameplayCueTag {
	struct FGameplayTag GameplayCueTag; // 0x00(0x0c)
};

// ScriptStruct GameplayAbilities.GameplayCueObjectLibrary
// Size: 0x50 (Inherited: 0x00)
struct FGameplayCueObjectLibrary {
	struct TArray<struct FString> Paths; // 0x00(0x10)
	char pad_10[0x20]; // 0x10(0x20)
	struct UObjectLibrary* ActorObjectLibrary; // 0x30(0x08)
	struct UObjectLibrary* StaticObjectLibrary; // 0x38(0x08)
	struct UGameplayCueSet* CueSet; // 0x40(0x08)
	char pad_48[0x4]; // 0x48(0x04)
	bool bShouldSyncScan; // 0x4c(0x01)
	bool bShouldAsyncLoad; // 0x4d(0x01)
	bool bShouldSyncLoad; // 0x4e(0x01)
	bool bHasBeenInitialized; // 0x4f(0x01)
};

// ScriptStruct GameplayAbilities.GameplayCueNotifyData
// Size: 0x40 (Inherited: 0x00)
struct FGameplayCueNotifyData {
	struct FGameplayTag GameplayCueTag; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FSoftObjectPath GameplayCueNotifyObj; // 0x10(0x20)
	struct UObject* LoadedGameplayCueClass; // 0x30(0x08)
	char pad_38[0x8]; // 0x38(0x08)
};

// ScriptStruct GameplayAbilities.GameplayCueTranslationManager
// Size: 0x80 (Inherited: 0x00)
struct FGameplayCueTranslationManager {
	struct TArray<struct FGameplayCueTranslatorNode> TranslationLUT; // 0x00(0x10)
	struct TMap<struct FName, struct FGameplayCueTranslatorNodeIndex> TranslationNameToIndexMap; // 0x10(0x50)
	struct UGameplayTagsManager* TagManager; // 0x60(0x08)
	char pad_68[0x18]; // 0x68(0x18)
};

// ScriptStruct GameplayAbilities.GameplayCueTranslatorNodeIndex
// Size: 0x04 (Inherited: 0x00)
struct FGameplayCueTranslatorNodeIndex {
	int32_t Index; // 0x00(0x04)
};

// ScriptStruct GameplayAbilities.GameplayCueTranslatorNode
// Size: 0x80 (Inherited: 0x00)
struct FGameplayCueTranslatorNode {
	struct TArray<struct FGameplayCueTranslationLink> Links; // 0x00(0x10)
	struct FGameplayCueTranslatorNodeIndex CachedIndex; // 0x10(0x04)
	struct FGameplayTag CachedGameplayTag; // 0x14(0x0c)
	struct FName CachedGameplayTagName; // 0x20(0x0c)
	char pad_2C[0x54]; // 0x2c(0x54)
};

// ScriptStruct GameplayAbilities.GameplayCueTranslationLink
// Size: 0x18 (Inherited: 0x00)
struct FGameplayCueTranslationLink {
	struct UGameplayCueTranslator* RulesCDO; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)
};

// ScriptStruct GameplayAbilities.ActiveGameplayEffectQuery
// Size: 0x88 (Inherited: 0x00)
struct FActiveGameplayEffectQuery {
	char pad_0[0x88]; // 0x00(0x88)
};

// ScriptStruct GameplayAbilities.InheritedTagContainer
// Size: 0x60 (Inherited: 0x00)
struct FInheritedTagContainer {
	struct FGameplayTagContainer CombinedTags; // 0x00(0x20)
	struct FGameplayTagContainer Added; // 0x20(0x20)
	struct FGameplayTagContainer Removed; // 0x40(0x20)
};

// ScriptStruct GameplayAbilities.GameplayEffectCue
// Size: 0x60 (Inherited: 0x00)
struct FGameplayEffectCue {
	struct FGameplayAttribute MagnitudeAttribute; // 0x00(0x38)
	float MinLevel; // 0x38(0x04)
	float MaxLevel; // 0x3c(0x04)
	struct FGameplayTagContainer GameplayCueTags; // 0x40(0x20)
};

// ScriptStruct GameplayAbilities.GameplayModifierInfo
// Size: 0x370 (Inherited: 0x00)
struct FGameplayModifierInfo {
	struct FGameplayAttribute Attribute; // 0x00(0x38)
	enum class EGameplayModOp ModifierOp; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct FScalableFloat Magnitude; // 0x40(0x28)
	struct FGameplayEffectModifierMagnitude ModifierMagnitude; // 0x68(0x280)
	struct FGameplayModEvaluationChannelSettings EvaluationChannelSettings; // 0x2e8(0x01)
	char pad_2E9[0x7]; // 0x2e9(0x07)
	struct FGameplayTagRequirements SourceTags; // 0x2f0(0x40)
	struct FGameplayTagRequirements TargetTags; // 0x330(0x40)
};

// ScriptStruct GameplayAbilities.GameplayTagRequirements
// Size: 0x40 (Inherited: 0x00)
struct FGameplayTagRequirements {
	struct FGameplayTagContainer RequireTags; // 0x00(0x20)
	struct FGameplayTagContainer IgnoreTags; // 0x20(0x20)
};

// ScriptStruct GameplayAbilities.GameplayModEvaluationChannelSettings
// Size: 0x01 (Inherited: 0x00)
struct FGameplayModEvaluationChannelSettings {
	enum class EGameplayModEvaluationChannel Channel; // 0x00(0x01)
};

// ScriptStruct GameplayAbilities.GameplayEffectModifierMagnitude
// Size: 0x280 (Inherited: 0x00)
struct FGameplayEffectModifierMagnitude {
	enum class EGameplayEffectMagnitudeCalculation MagnitudeCalculationType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FScalableFloat ScalableFloatMagnitude; // 0x08(0x28)
	struct FAttributeBasedFloat AttributeBasedMagnitude; // 0x30(0x118)
	struct FCustomCalculationBasedFloat CustomMagnitude; // 0x148(0x98)
	struct FSetByCallerFloat SetByCallerMagnitude; // 0x1e0(0x18)
	struct FFloatCurveFloat FloatCurveMagnitude; // 0x1f8(0x88)
};

// ScriptStruct GameplayAbilities.FloatCurveFloat
// Size: 0x88 (Inherited: 0x00)
struct FFloatCurveFloat {
	struct FRuntimeFloatCurve Curve; // 0x00(0x88)
};

// ScriptStruct GameplayAbilities.SetByCallerFloat
// Size: 0x18 (Inherited: 0x00)
struct FSetByCallerFloat {
	struct FName DataName; // 0x00(0x0c)
	struct FGameplayTag DataTag; // 0x0c(0x0c)
};

// ScriptStruct GameplayAbilities.CustomCalculationBasedFloat
// Size: 0x98 (Inherited: 0x00)
struct FCustomCalculationBasedFloat {
	struct UGameplayModMagnitudeCalculation* CalculationClassMagnitude; // 0x00(0x08)
	struct FScalableFloat Coefficient; // 0x08(0x28)
	struct FScalableFloat PreMultiplyAdditiveValue; // 0x30(0x28)
	struct FScalableFloat PostMultiplyAdditiveValue; // 0x58(0x28)
	struct FCurveTableRowHandle FinalLookupCurve; // 0x80(0x18)
};

// ScriptStruct GameplayAbilities.AttributeBasedFloat
// Size: 0x118 (Inherited: 0x00)
struct FAttributeBasedFloat {
	struct FScalableFloat Coefficient; // 0x00(0x28)
	struct FScalableFloat PreMultiplyAdditiveValue; // 0x28(0x28)
	struct FScalableFloat PostMultiplyAdditiveValue; // 0x50(0x28)
	struct FGameplayEffectAttributeCaptureDefinition BackingAttribute; // 0x78(0x40)
	struct FCurveTableRowHandle AttributeCurve; // 0xb8(0x18)
	enum class EAttributeBasedFloatCalculationType AttributeCalculationType; // 0xd0(0x01)
	enum class EGameplayModEvaluationChannel FinalChannel; // 0xd1(0x01)
	char pad_D2[0x6]; // 0xd2(0x06)
	struct FGameplayTagContainer SourceTagFilter; // 0xd8(0x20)
	struct FGameplayTagContainer TargetTagFilter; // 0xf8(0x20)
};

// ScriptStruct GameplayAbilities.GameplayEffectExecutionDefinition
// Size: 0x58 (Inherited: 0x00)
struct FGameplayEffectExecutionDefinition {
	struct UGameplayEffectExecutionCalculation* CalculationClass; // 0x00(0x08)
	struct FGameplayTagContainer PassedInTags; // 0x08(0x20)
	struct TArray<struct FGameplayEffectExecutionScopedModifierInfo> CalculationModifiers; // 0x28(0x10)
	struct TArray<struct UGameplayEffect*> ConditionalGameplayEffectClasses; // 0x38(0x10)
	struct TArray<struct FConditionalGameplayEffect> ConditionalGameplayEffects; // 0x48(0x10)
};

// ScriptStruct GameplayAbilities.ConditionalGameplayEffect
// Size: 0x28 (Inherited: 0x00)
struct FConditionalGameplayEffect {
	struct UGameplayEffect* EffectClass; // 0x00(0x08)
	struct FGameplayTagContainer RequiredSourceTags; // 0x08(0x20)
};

// ScriptStruct GameplayAbilities.GameplayEffectExecutionScopedModifierInfo
// Size: 0x358 (Inherited: 0x00)
struct FGameplayEffectExecutionScopedModifierInfo {
	struct FGameplayEffectAttributeCaptureDefinition CapturedAttribute; // 0x00(0x40)
	struct FGameplayTag TransientAggregatorIdentifier; // 0x40(0x0c)
	enum class EGameplayEffectScopedModifierAggregatorType AggregatorType; // 0x4c(0x01)
	enum class EGameplayModOp ModifierOp; // 0x4d(0x01)
	char pad_4E[0x2]; // 0x4e(0x02)
	struct FGameplayEffectModifierMagnitude ModifierMagnitude; // 0x50(0x280)
	struct FGameplayModEvaluationChannelSettings EvaluationChannelSettings; // 0x2d0(0x01)
	char pad_2D1[0x7]; // 0x2d1(0x07)
	struct FGameplayTagRequirements SourceTags; // 0x2d8(0x40)
	struct FGameplayTagRequirements TargetTags; // 0x318(0x40)
};

// ScriptStruct GameplayAbilities.GameplayEffectCustomExecutionOutput
// Size: 0x18 (Inherited: 0x00)
struct FGameplayEffectCustomExecutionOutput {
	struct TArray<struct FGameplayModifierEvaluatedData> OutputModifiers; // 0x00(0x10)
	char bTriggerConditionalGameplayEffects : 1; // 0x10(0x01)
	char bHandledStackCountManually : 1; // 0x10(0x01)
	char bHandledGameplayCuesManually : 1; // 0x10(0x01)
	char pad_10_3 : 5; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct GameplayAbilities.GameplayModifierEvaluatedData
// Size: 0x50 (Inherited: 0x00)
struct FGameplayModifierEvaluatedData {
	struct FGameplayAttribute Attribute; // 0x00(0x38)
	enum class EGameplayModOp ModifierOp; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	float Magnitude; // 0x3c(0x04)
	struct FActiveGameplayEffectHandle Handle; // 0x40(0x08)
	bool IsValid; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// ScriptStruct GameplayAbilities.GameplayEffectCustomExecutionParameters
// Size: 0xf0 (Inherited: 0x00)
struct FGameplayEffectCustomExecutionParameters {
	char pad_0[0xf0]; // 0x00(0xf0)
};

// ScriptStruct GameplayAbilities.GameplayTagBlueprintPropertyMap
// Size: 0x20 (Inherited: 0x00)
struct FGameplayTagBlueprintPropertyMap {
	char pad_0[0x10]; // 0x00(0x10)
	struct TArray<struct FGameplayTagBlueprintPropertyMapping> PropertyMappings; // 0x10(0x10)
};

// ScriptStruct GameplayAbilities.GameplayTagBlueprintPropertyMapping
// Size: 0x58 (Inherited: 0x00)
struct FGameplayTagBlueprintPropertyMapping {
	struct FGameplayTag TagToMap; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TFieldPath<FProperty> PropertyToEdit; // 0x10(0x20)
	struct FName PropertyName; // 0x30(0x0c)
	struct FGuid PropertyGuid; // 0x3c(0x10)
	char pad_4C[0xc]; // 0x4c(0x0c)
};

// ScriptStruct GameplayAbilities.GameplayEffectContext
// Size: 0x70 (Inherited: 0x00)
struct FGameplayEffectContext {
	char pad_0[0x8]; // 0x00(0x08)
	struct TWeakObjectPtr<struct AActor> Instigator; // 0x08(0x08)
	struct TWeakObjectPtr<struct AActor> EffectCauser; // 0x10(0x08)
	struct TWeakObjectPtr<struct UGameplayAbility> AbilityCDO; // 0x18(0x08)
	struct TWeakObjectPtr<struct UGameplayAbility> AbilityInstanceNotReplicated; // 0x20(0x08)
	int32_t AbilityLevel; // 0x28(0x04)
	struct TWeakObjectPtr<struct UObject> SourceObject; // 0x2c(0x08)
	struct TWeakObjectPtr<struct UAbilitySystemComponent> InstigatorAbilitySystemComponent; // 0x34(0x08)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct TArray<struct TWeakObjectPtr<struct AActor>> Actors; // 0x40(0x10)
	char pad_50[0x10]; // 0x50(0x10)
	struct FVector WorldOrigin; // 0x60(0x0c)
	char bHasWorldOrigin : 1; // 0x6c(0x01)
	char bReplicateSourceObject : 1; // 0x6c(0x01)
	char pad_6C_2 : 6; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
};

// ScriptStruct GameplayAbilities.GameplayTagResponseTableEntry
// Size: 0x60 (Inherited: 0x00)
struct FGameplayTagResponseTableEntry {
	struct FGameplayTagReponsePair Positive; // 0x00(0x30)
	struct FGameplayTagReponsePair Negative; // 0x30(0x30)
};

// ScriptStruct GameplayAbilities.GameplayTagReponsePair
// Size: 0x30 (Inherited: 0x00)
struct FGameplayTagReponsePair {
	struct FGameplayTag Tag; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UGameplayEffect* ResponseGameplayEffect; // 0x10(0x08)
	struct TArray<struct UGameplayEffect*> ResponseGameplayEffects; // 0x18(0x10)
	int32_t SoftCountCap; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

