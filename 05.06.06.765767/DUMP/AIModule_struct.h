// Enum AIModule.EPathFollowingResult
enum class EPathFollowingResult : uint8 {
	Success = 0,
	Blocked = 1,
	OffPath = 2,
	Aborted = 3,
	Skipped_DEPRECATED = 4,
	Invalid = 5,
	EPathFollowingResult_MAX = 6
};

// Enum AIModule.EEnvQueryStatus
enum class EEnvQueryStatus : uint8 {
	Processing = 0,
	Success = 1,
	Failed = 2,
	Aborted = 3,
	OwnerLost = 4,
	MissingParam = 5,
	EEnvQueryStatus_MAX = 6
};

// Enum AIModule.EAISenseActorSize
enum class EAISenseActorSize : uint8 {
	AISize_Small = 0,
	AISize_Medium = 1,
	AISize_Large = 2,
	AISize_MAX = 3
};

// Enum AIModule.EAISenseNotifyType
enum class EAISenseNotifyType : uint8 {
	OnEveryPerception = 0,
	OnPerceptionChange = 1,
	EAISenseNotifyType_MAX = 2
};

// Enum AIModule.EAITaskPriority
enum class EAITaskPriority : uint8 {
	Lowest = 0,
	Low = 64,
	AutonomousAI = 127,
	High = 192,
	Ultimate = 254,
	EAITaskPriority_MAX = 255
};

// Enum AIModule.EGenericAICheck
enum class EGenericAICheck : uint8 {
	Less = 0,
	LessOrEqual = 1,
	Equal = 2,
	NotEqual = 3,
	GreaterOrEqual = 4,
	Greater = 5,
	IsTrue = 6,
	MAX = 7
};

// Enum AIModule.EAILockSource
enum class EAILockSource : uint8 {
	Animation = 0,
	Logic = 1,
	Script = 2,
	Gameplay = 3,
	MAX = 4
};

// Enum AIModule.EAIRequestPriority
enum class EAIRequestPriority : uint8 {
	SoftScript = 0,
	Logic = 1,
	HardScript = 2,
	Reaction = 3,
	Ultimate = 4,
	MAX = 5
};

// Enum AIModule.EPawnActionEventType
enum class EPawnActionEventType : uint8 {
	Invalid = 0,
	FailedToStart = 1,
	InstantAbort = 2,
	FinishedAborting = 3,
	FinishedExecution = 4,
	Push = 5,
	EPawnActionEventType_MAX = 6
};

// Enum AIModule.EPawnActionResult
enum class EPawnActionResult : uint8 {
	NotStarted = 0,
	InProgress = 1,
	Success = 2,
	Failed = 3,
	Aborted = 4,
	EPawnActionResult_MAX = 5
};

// Enum AIModule.EPawnActionAbortState
enum class EPawnActionAbortState : uint8 {
	NeverStarted = 0,
	NotBeingAborted = 1,
	MarkPendingAbort = 2,
	LatentAbortInProgress = 3,
	AbortDone = 4,
	MAX = 5
};

// Enum AIModule.FAIDistanceType
enum class FAIDistanceType : uint8 {
	Distance3D = 0,
	Distance2D = 1,
	DistanceZ = 2,
	MAX = 3
};

// Enum AIModule.EAIOptionFlag
enum class EAIOptionFlag : uint8 {
	Default = 0,
	Enable = 1,
	Disable = 2,
	MAX = 3
};

// Enum AIModule.EBTFlowAbortMode
enum class EBTFlowAbortMode : uint8 {
	None = 0,
	LowerPriority = 1,
	Self = 2,
	Both = 3,
	EBTFlowAbortMode_MAX = 4
};

// Enum AIModule.EBTNodeResult
enum class EBTNodeResult : uint8 {
	Succeeded = 0,
	Failed = 1,
	Aborted = 2,
	InProgress = 3,
	EBTNodeResult_MAX = 4
};

// Enum AIModule.ETextKeyOperation
enum class ETextKeyOperation : uint8 {
	Equal = 0,
	NotEqual = 1,
	Contain = 2,
	NotContain = 3,
	ETextKeyOperation_MAX = 4
};

// Enum AIModule.EArithmeticKeyOperation
enum class EArithmeticKeyOperation : uint8 {
	Equal = 0,
	NotEqual = 1,
	Less = 2,
	LessOrEqual = 3,
	Greater = 4,
	GreaterOrEqual = 5,
	EArithmeticKeyOperation_MAX = 6
};

// Enum AIModule.EBasicKeyOperation
enum class EBasicKeyOperation : uint8 {
	Set = 0,
	NotSet = 1,
	EBasicKeyOperation_MAX = 2
};

// Enum AIModule.EBTParallelMode
enum class EBTParallelMode : uint8 {
	AbortBackground = 0,
	WaitForBackground = 1,
	EBTParallelMode_MAX = 2
};

// Enum AIModule.EBTDecoratorLogic
enum class EBTDecoratorLogic : uint8 {
	Invalid = 0,
	Test = 1,
	And = 2,
	Or = 3,
	Not = 4,
	EBTDecoratorLogic_MAX = 5
};

// Enum AIModule.EBTChildIndex
enum class EBTChildIndex : uint8 {
	FirstNode = 0,
	TaskNode = 1,
	EBTChildIndex_MAX = 2
};

// Enum AIModule.EBTBlackboardRestart
enum class EBTBlackboardRestart : uint8 {
	ValueChange = 0,
	ResultChange = 1,
	EBTBlackboardRestart_MAX = 2
};

// Enum AIModule.EBlackBoardEntryComparison
enum class EBlackBoardEntryComparison : uint8 {
	Equal = 0,
	NotEqual = 1,
	EBlackBoardEntryComparison_MAX = 2
};

// Enum AIModule.EPathExistanceQueryType
enum class EPathExistanceQueryType : uint8 {
	NavmeshRaycast2D = 0,
	HierarchicalQuery = 1,
	RegularPathFinding = 2,
	EPathExistanceQueryType_MAX = 3
};

// Enum AIModule.EPointOnCircleSpacingMethod
enum class EPointOnCircleSpacingMethod : uint8 {
	BySpaceBetween = 0,
	ByNumberOfPoints = 1,
	EPointOnCircleSpacingMethod_MAX = 2
};

// Enum AIModule.EEQSNormalizationType
enum class EEQSNormalizationType : uint8 {
	Absolute = 0,
	RelativeToScores = 1,
	EEQSNormalizationType_MAX = 2
};

// Enum AIModule.EEnvTestDistance
enum class EEnvTestDistance : uint8 {
	Distance3D = 0,
	Distance2D = 1,
	DistanceZ = 2,
	DistanceAbsoluteZ = 3,
	EEnvTestDistance_MAX = 4
};

// Enum AIModule.EEnvTestDot
enum class EEnvTestDot : uint8 {
	Dot3D = 0,
	Dot2D = 1,
	EEnvTestDot_MAX = 2
};

// Enum AIModule.EEnvTestPathfinding
enum class EEnvTestPathfinding : uint8 {
	PathExist = 0,
	PathCost = 1,
	PathLength = 2,
	EEnvTestPathfinding_MAX = 3
};

// Enum AIModule.EEnvQueryTestClamping
enum class EEnvQueryTestClamping : uint8 {
	None = 0,
	SpecifiedValue = 1,
	FilterThreshold = 2,
	EEnvQueryTestClamping_MAX = 3
};

// Enum AIModule.EEnvDirection
enum class EEnvDirection : uint8 {
	TwoPoints = 0,
	Rotation = 1,
	EEnvDirection_MAX = 2
};

// Enum AIModule.EEnvOverlapShape
enum class EEnvOverlapShape : uint8 {
	Box = 0,
	Sphere = 1,
	Capsule = 2,
	EEnvOverlapShape_MAX = 3
};

// Enum AIModule.EEnvTraceShape
enum class EEnvTraceShape : uint8 {
	Line = 0,
	Box = 1,
	Sphere = 2,
	Capsule = 3,
	EEnvTraceShape_MAX = 4
};

// Enum AIModule.EEnvQueryTrace
enum class EEnvQueryTrace : uint8 {
	None = 0,
	Navigation = 1,
	Geometry = 2,
	NavigationOverLedges = 3,
	EEnvQueryTrace_MAX = 4
};

// Enum AIModule.EAIParamType
enum class EAIParamType : uint8 {
	Float = 0,
	Int = 1,
	Bool = 2,
	MAX = 3
};

// Enum AIModule.EEnvQueryParam
enum class EEnvQueryParam : uint8 {
	Float = 0,
	Int = 1,
	Bool = 2,
	EEnvQueryParam_MAX = 3
};

// Enum AIModule.EEnvQueryRunMode
enum class EEnvQueryRunMode : uint8 {
	SingleResult = 0,
	RandomBest5Pct = 1,
	RandomBest25Pct = 2,
	AllMatching = 3,
	EEnvQueryRunMode_MAX = 4
};

// Enum AIModule.EEnvTestScoreOperator
enum class EEnvTestScoreOperator : uint8 {
	AverageScore = 0,
	MinScore = 1,
	MaxScore = 2,
	Multiply = 3,
	EEnvTestScoreOperator_MAX = 4
};

// Enum AIModule.EEnvTestFilterOperator
enum class EEnvTestFilterOperator : uint8 {
	AllPass = 0,
	AnyPass = 1,
	EEnvTestFilterOperator_MAX = 2
};

// Enum AIModule.EEnvTestCost
enum class EEnvTestCost : uint8 {
	Low = 0,
	Medium = 1,
	High = 2,
	EEnvTestCost_MAX = 3
};

// Enum AIModule.EEnvTestWeight
enum class EEnvTestWeight : uint8 {
	None = 0,
	Square = 1,
	Inverse = 2,
	Unused = 3,
	Constant = 4,
	Skip = 5,
	EEnvTestWeight_MAX = 6
};

// Enum AIModule.EEnvTestScoreEquation
enum class EEnvTestScoreEquation : uint8 {
	Linear = 0,
	Square = 1,
	InverseLinear = 2,
	SquareRoot = 3,
	Constant = 4,
	EEnvTestScoreEquation_MAX = 5
};

// Enum AIModule.EEnvTestFilterType
enum class EEnvTestFilterType : uint8 {
	Minimum = 0,
	Maximum = 1,
	Range = 2,
	Match = 3,
	EEnvTestFilterType_MAX = 4
};

// Enum AIModule.EEnvTestPurpose
enum class EEnvTestPurpose : uint8 {
	Filter = 0,
	Score = 1,
	FilterAndScore = 2,
	EEnvTestPurpose_MAX = 3
};

// Enum AIModule.EEnvQueryHightlightMode
enum class EEnvQueryHightlightMode : uint8 {
	All = 0,
	Best5Pct = 1,
	Best25Pct = 2,
	EEnvQueryHightlightMode_MAX = 3
};

// Enum AIModule.ETeamAttitude
enum class ETeamAttitude : uint8 {
	Friendly = 0,
	Neutral = 1,
	Hostile = 2,
	ETeamAttitude_MAX = 3
};

// Enum AIModule.EPathFollowingRequestResult
enum class EPathFollowingRequestResult : uint8 {
	Failed = 0,
	AlreadyAtGoal = 1,
	RequestSuccessful = 2,
	EPathFollowingRequestResult_MAX = 3
};

// Enum AIModule.EPathFollowingAction
enum class EPathFollowingAction : uint8 {
	Error = 0,
	NoMove = 1,
	DirectMove = 2,
	PartialPath = 3,
	PathToGoal = 4,
	EPathFollowingAction_MAX = 5
};

// Enum AIModule.EPathFollowingStatus
enum class EPathFollowingStatus : uint8 {
	Idle = 0,
	Waiting = 1,
	Paused = 2,
	Moving = 3,
	EPathFollowingStatus_MAX = 4
};

// Enum AIModule.EPawnActionFailHandling
enum class EPawnActionFailHandling : uint8 {
	RequireSuccess = 0,
	IgnoreFailure = 1,
	EPawnActionFailHandling_MAX = 2
};

// Enum AIModule.EPawnSubActionTriggeringPolicy
enum class EPawnSubActionTriggeringPolicy : uint8 {
	CopyBeforeTriggering = 0,
	ReuseInstances = 1,
	EPawnSubActionTriggeringPolicy_MAX = 2
};

// Enum AIModule.EPawnActionMoveMode
enum class EPawnActionMoveMode : uint8 {
	UsePathfinding = 0,
	StraightLine = 1,
	EPawnActionMoveMode_MAX = 2
};

// ScriptStruct AIModule.AIRequestID
// Size: 0x04 (Inherited: 0x00)
struct FAIRequestID {
	uint32_t RequestID; // 0x00(0x04)
};

// ScriptStruct AIModule.AIStimulus
// Size: 0x48 (Inherited: 0x00)
struct FAIStimulus {
	float Age; // 0x00(0x04)
	float ExpirationAge; // 0x04(0x04)
	float Strength; // 0x08(0x04)
	struct FVector StimulusLocation; // 0x0c(0x0c)
	struct FVector ReceiverLocation; // 0x18(0x0c)
	struct FName Tag; // 0x24(0x0c)
	float InitialSensedTime; // 0x30(0x04)
	char pad_34[0x10]; // 0x34(0x10)
	char pad_44_0 : 1; // 0x44(0x01)
	char bSuccessfullySensed : 1; // 0x44(0x01)
	char pad_44_2 : 6; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
};

// ScriptStruct AIModule.ActorPerceptionUpdateInfo
// Size: 0x54 (Inherited: 0x00)
struct FActorPerceptionUpdateInfo {
	int32_t TargetId; // 0x00(0x04)
	struct TWeakObjectPtr<struct AActor> Target; // 0x04(0x08)
	struct FAIStimulus Stimulus; // 0x0c(0x48)
};

// ScriptStruct AIModule.AIDataProviderValue
// Size: 0x28 (Inherited: 0x00)
struct FAIDataProviderValue {
	char pad_0[0x10]; // 0x00(0x10)
	struct UAIDataProvider* DataBinding; // 0x10(0x08)
	struct FName DataField; // 0x18(0x0c)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct AIModule.AIDataProviderTypedValue
// Size: 0x38 (Inherited: 0x28)
struct FAIDataProviderTypedValue : FAIDataProviderValue {
	struct UObject* PropertyType; // 0x28(0x08)
	char pad_30[0x8]; // 0x30(0x08)
};

// ScriptStruct AIModule.AIDataProviderBoolValue
// Size: 0x40 (Inherited: 0x38)
struct FAIDataProviderBoolValue : FAIDataProviderTypedValue {
	bool DefaultValue; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// ScriptStruct AIModule.AIDataProviderFloatValue
// Size: 0x40 (Inherited: 0x38)
struct FAIDataProviderFloatValue : FAIDataProviderTypedValue {
	float DefaultValue; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct AIModule.AIDataProviderIntValue
// Size: 0x40 (Inherited: 0x38)
struct FAIDataProviderIntValue : FAIDataProviderTypedValue {
	int32_t DefaultValue; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct AIModule.AIDataProviderStructValue
// Size: 0x38 (Inherited: 0x28)
struct FAIDataProviderStructValue : FAIDataProviderValue {
	char pad_28[0x10]; // 0x28(0x10)
};

// ScriptStruct AIModule.ActorPerceptionBlueprintInfo
// Size: 0x20 (Inherited: 0x00)
struct FActorPerceptionBlueprintInfo {
	struct AActor* Target; // 0x00(0x08)
	struct TArray<struct FAIStimulus> LastSensedStimuli; // 0x08(0x10)
	enum class ETeamAttitude Attitude; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct AIModule.AISenseAffiliationFilter
// Size: 0x04 (Inherited: 0x00)
struct FAISenseAffiliationFilter {
	char bDetectEnemies : 1; // 0x00(0x01)
	char bDetectNeutrals : 1; // 0x00(0x01)
	char bDetectFriendlies : 1; // 0x00(0x01)
	char pad_0_3 : 5; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
};

// ScriptStruct AIModule.AIDamageEvent
// Size: 0x30 (Inherited: 0x00)
struct FAIDamageEvent {
	float Amount; // 0x00(0x04)
	struct FVector Location; // 0x04(0x0c)
	struct FVector HitLocation; // 0x10(0x0c)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct AActor* DamagedActor; // 0x20(0x08)
	struct AActor* Instigator; // 0x28(0x08)
};

// ScriptStruct AIModule.AINoiseEvent
// Size: 0x30 (Inherited: 0x00)
struct FAINoiseEvent {
	char pad_0[0x4]; // 0x00(0x04)
	struct FVector NoiseLocation; // 0x04(0x0c)
	float Loudness; // 0x10(0x04)
	float MaxRange; // 0x14(0x04)
	struct AActor* Instigator; // 0x18(0x08)
	struct FName Tag; // 0x20(0x0c)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct AIModule.AIPredictionEvent
// Size: 0x18 (Inherited: 0x00)
struct FAIPredictionEvent {
	struct AActor* Requestor; // 0x00(0x08)
	struct AActor* PredictedActor; // 0x08(0x08)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct AIModule.AISightEvent
// Size: 0x18 (Inherited: 0x00)
struct FAISightEvent {
	char pad_0[0x8]; // 0x00(0x08)
	struct AActor* SeenActor; // 0x08(0x08)
	struct AActor* Observer; // 0x10(0x08)
};

// ScriptStruct AIModule.AITeamStimulusEvent
// Size: 0x38 (Inherited: 0x00)
struct FAITeamStimulusEvent {
	char pad_0[0x28]; // 0x00(0x28)
	struct AActor* Broadcaster; // 0x28(0x08)
	struct AActor* Enemy; // 0x30(0x08)
};

// ScriptStruct AIModule.AITouchEvent
// Size: 0x20 (Inherited: 0x00)
struct FAITouchEvent {
	char pad_0[0x10]; // 0x00(0x10)
	struct AActor* TouchReceiver; // 0x10(0x08)
	struct AActor* OtherActor; // 0x18(0x08)
};

// ScriptStruct AIModule.IntervalCountdown
// Size: 0x08 (Inherited: 0x00)
struct FIntervalCountdown {
	float Interval; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
};

// ScriptStruct AIModule.AIMoveRequest
// Size: 0x40 (Inherited: 0x00)
struct FAIMoveRequest {
	struct AActor* GoalActor; // 0x00(0x08)
	char pad_8[0x38]; // 0x08(0x38)
};

// ScriptStruct AIModule.BehaviorTreeTemplateInfo
// Size: 0x18 (Inherited: 0x00)
struct FBehaviorTreeTemplateInfo {
	struct UBehaviorTree* Asset; // 0x00(0x08)
	struct UBTCompositeNode* Template; // 0x08(0x08)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct AIModule.BlackboardKeySelector
// Size: 0x30 (Inherited: 0x00)
struct FBlackboardKeySelector {
	struct TArray<struct UBlackboardKeyType*> AllowedTypes; // 0x00(0x10)
	struct FName SelectedKeyName; // 0x10(0x0c)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct UBlackboardKeyType* SelectedKeyType; // 0x20(0x08)
	char SelectedKeyID; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	char bNoneIsAllowedValue : 1; // 0x2c(0x01)
	char pad_2C_1 : 7; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
};

// ScriptStruct AIModule.BlackboardEntry
// Size: 0x20 (Inherited: 0x00)
struct FBlackboardEntry {
	struct FName EntryName; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UBlackboardKeyType* KeyType; // 0x10(0x08)
	char bInstanceSynced : 1; // 0x18(0x01)
	char pad_18_1 : 7; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct AIModule.BTCompositeChild
// Size: 0x30 (Inherited: 0x00)
struct FBTCompositeChild {
	struct UBTCompositeNode* ChildComposite; // 0x00(0x08)
	struct UBTTaskNode* ChildTask; // 0x08(0x08)
	struct TArray<struct UBTDecorator*> Decorators; // 0x10(0x10)
	struct TArray<struct FBTDecoratorLogic> DecoratorOps; // 0x20(0x10)
};

// ScriptStruct AIModule.BTDecoratorLogic
// Size: 0x04 (Inherited: 0x00)
struct FBTDecoratorLogic {
	enum class EBTDecoratorLogic Operation; // 0x00(0x01)
	char pad_1[0x1]; // 0x01(0x01)
	uint16_t Number; // 0x02(0x02)
};

// ScriptStruct AIModule.CrowdAvoidanceSamplingPattern
// Size: 0x20 (Inherited: 0x00)
struct FCrowdAvoidanceSamplingPattern {
	struct TArray<float> Angles; // 0x00(0x10)
	struct TArray<float> Radii; // 0x10(0x10)
};

// ScriptStruct AIModule.CrowdAvoidanceConfig
// Size: 0x1c (Inherited: 0x00)
struct FCrowdAvoidanceConfig {
	float VelocityBias; // 0x00(0x04)
	float DesiredVelocityWeight; // 0x04(0x04)
	float CurrentVelocityWeight; // 0x08(0x04)
	float SideBiasWeight; // 0x0c(0x04)
	float ImpactTimeWeight; // 0x10(0x04)
	float ImpactTimeRange; // 0x14(0x04)
	char CustomPatternIdx; // 0x18(0x01)
	char AdaptiveDivisions; // 0x19(0x01)
	char AdaptiveRings; // 0x1a(0x01)
	char AdaptiveDepth; // 0x1b(0x01)
};

// ScriptStruct AIModule.EnvQueryInstanceCache
// Size: 0x188 (Inherited: 0x00)
struct FEnvQueryInstanceCache {
	struct UEnvQuery* Template; // 0x00(0x08)
	char pad_8[0x180]; // 0x08(0x180)
};

// ScriptStruct AIModule.EnvQueryRequest
// Size: 0x68 (Inherited: 0x00)
struct FEnvQueryRequest {
	struct UEnvQuery* QueryTemplate; // 0x00(0x08)
	struct UObject* Owner; // 0x08(0x08)
	struct UWorld* World; // 0x10(0x08)
	char pad_18[0x50]; // 0x18(0x50)
};

// ScriptStruct AIModule.EQSParametrizedQueryExecutionRequest
// Size: 0x50 (Inherited: 0x00)
struct FEQSParametrizedQueryExecutionRequest {
	struct UEnvQuery* QueryTemplate; // 0x00(0x08)
	struct TArray<struct FAIDynamicParam> QueryConfig; // 0x08(0x10)
	struct FBlackboardKeySelector EQSQueryBlackboardKey; // 0x18(0x30)
	enum class EEnvQueryRunMode RunMode; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	char bUseBBKeyForQueryTemplate : 1; // 0x4c(0x01)
	char pad_4C_1 : 7; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
};

// ScriptStruct AIModule.AIDynamicParam
// Size: 0x48 (Inherited: 0x00)
struct FAIDynamicParam {
	struct FName ParamName; // 0x00(0x0c)
	enum class EAIParamType ParamType; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	float Value; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FBlackboardKeySelector BBKey; // 0x18(0x30)
};

// ScriptStruct AIModule.EnvQueryResult
// Size: 0x40 (Inherited: 0x00)
struct FEnvQueryResult {
	char pad_0[0x10]; // 0x00(0x10)
	struct UEnvQueryItemType* ItemType; // 0x10(0x08)
	char pad_18[0x14]; // 0x18(0x14)
	int32_t OptionIndex; // 0x2c(0x04)
	int32_t QueryID; // 0x30(0x04)
	char pad_34[0xc]; // 0x34(0x0c)
};

// ScriptStruct AIModule.EnvOverlapData
// Size: 0x20 (Inherited: 0x00)
struct FEnvOverlapData {
	float ExtentX; // 0x00(0x04)
	float ExtentY; // 0x04(0x04)
	float ExtentZ; // 0x08(0x04)
	struct FVector ShapeOffset; // 0x0c(0x0c)
	enum class ECollisionChannel OverlapChannel; // 0x18(0x01)
	enum class EEnvOverlapShape OverlapShape; // 0x19(0x01)
	char pad_1A[0x2]; // 0x1a(0x02)
	char bOnlyBlockingHits : 1; // 0x1c(0x01)
	char bOverlapComplex : 1; // 0x1c(0x01)
	char bSkipOverlapQuerier : 1; // 0x1c(0x01)
	char pad_1C_3 : 5; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct AIModule.EnvTraceData
// Size: 0x30 (Inherited: 0x00)
struct FEnvTraceData {
	int32_t VersionNum; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UNavigationQueryFilter* NavigationFilter; // 0x08(0x08)
	float ProjectDown; // 0x10(0x04)
	float ProjectUp; // 0x14(0x04)
	float ExtentX; // 0x18(0x04)
	float ExtentY; // 0x1c(0x04)
	float ExtentZ; // 0x20(0x04)
	float PostProjectionVerticalOffset; // 0x24(0x04)
	enum class ETraceTypeQuery TraceChannel; // 0x28(0x01)
	enum class ECollisionChannel SerializedChannel; // 0x29(0x01)
	enum class EEnvTraceShape TraceShape; // 0x2a(0x01)
	enum class EEnvQueryTrace TraceMode; // 0x2b(0x01)
	char bTraceComplex : 1; // 0x2c(0x01)
	char bOnlyBlockingHits : 1; // 0x2c(0x01)
	char bCanTraceOnNavMesh : 1; // 0x2c(0x01)
	char bCanTraceOnGeometry : 1; // 0x2c(0x01)
	char bCanDisableTrace : 1; // 0x2c(0x01)
	char bCanProjectDown : 1; // 0x2c(0x01)
	char pad_2C_6 : 2; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
};

// ScriptStruct AIModule.EnvDirection
// Size: 0x20 (Inherited: 0x00)
struct FEnvDirection {
	struct UEnvQueryContext* LineFrom; // 0x00(0x08)
	struct UEnvQueryContext* LineTo; // 0x08(0x08)
	struct UEnvQueryContext* Rotation; // 0x10(0x08)
	enum class EEnvDirection DirMode; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct AIModule.EnvNamedValue
// Size: 0x14 (Inherited: 0x00)
struct FEnvNamedValue {
	struct FName ParamName; // 0x00(0x0c)
	enum class EAIParamType ParamType; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	float Value; // 0x10(0x04)
};

// ScriptStruct AIModule.GenericTeamId
// Size: 0x01 (Inherited: 0x00)
struct FGenericTeamId {
	char TeamID; // 0x00(0x01)
};

// ScriptStruct AIModule.PawnActionStack
// Size: 0x08 (Inherited: 0x00)
struct FPawnActionStack {
	struct UPawnAction* TopAction; // 0x00(0x08)
};

// ScriptStruct AIModule.PawnActionEvent
// Size: 0x18 (Inherited: 0x00)
struct FPawnActionEvent {
	struct UPawnAction* Action; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)
};

