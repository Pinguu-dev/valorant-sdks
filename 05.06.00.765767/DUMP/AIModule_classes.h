// Class AIModule.AIPerceptionComponent
// Size: 0x1d0 (Inherited: 0xe8)
struct UAIPerceptionComponent : UActorComponent {
	struct TArray<struct UAISenseConfig*> SensesConfig; // 0xe8(0x10)
	struct UAISense* DominantSense; // 0xf8(0x08)
	char pad_100[0x10]; // 0x100(0x10)
	struct AAIController* AIOwner; // 0x110(0x08)
	char pad_118[0x80]; // 0x118(0x80)
	struct FMulticastInlineDelegate OnPerceptionUpdated; // 0x198(0x10)
	struct FMulticastInlineDelegate OnTargetPerceptionUpdated; // 0x1a8(0x10)
	struct FMulticastInlineDelegate OnTargetPerceptionInfoUpdated; // 0x1b8(0x10)
	enum class EAISenseActorSize MinPerceivableSize; // 0x1c8(0x01)
	char pad_1C9[0x7]; // 0x1c9(0x07)
};

// Class AIModule.AISubsystem
// Size: 0x50 (Inherited: 0x30)
struct UAISubsystem : UObject {
	char pad_30[0x18]; // 0x30(0x18)
	struct UAISystem* AISystem; // 0x48(0x08)
};

// Class AIModule.AIPerceptionSystem
// Size: 0x148 (Inherited: 0x50)
struct UAIPerceptionSystem : UAISubsystem {
	char pad_50[0x50]; // 0x50(0x50)
	struct TArray<struct UAISense*> Senses; // 0xa0(0x10)
	float PerceptionAgingRate; // 0xb0(0x04)
	char pad_B4[0x94]; // 0xb4(0x94)
};

// Class AIModule.AISystem
// Size: 0x158 (Inherited: 0x70)
struct UAISystem : UAISystemBase {
	struct FSoftClassPath PerceptionSystemClassName; // 0x70(0x20)
	struct FSoftClassPath HotSpotManagerClassName; // 0x90(0x20)
	float AcceptanceRadius; // 0xb0(0x04)
	float PathfollowingRegularPathPointAcceptanceRadius; // 0xb4(0x04)
	float PathfollowingNavLinkAcceptanceRadius; // 0xb8(0x04)
	bool bFinishMoveOnGoalOverlap; // 0xbc(0x01)
	bool bAcceptPartialPaths; // 0xbd(0x01)
	bool bAllowStrafing; // 0xbe(0x01)
	bool bEnableBTAITasks; // 0xbf(0x01)
	bool bAllowControllersAsEQSQuerier; // 0xc0(0x01)
	bool bEnableDebuggerPlugin; // 0xc1(0x01)
	bool bForgetStaleActors; // 0xc2(0x01)
	bool bAddBlackboardSelfKey; // 0xc3(0x01)
	enum class ECollisionChannel DefaultSightCollisionChannel; // 0xc4(0x01)
	char pad_C5[0x3]; // 0xc5(0x03)
	struct UBehaviorTreeManager* BehaviorTreeManager; // 0xc8(0x08)
	struct UEnvQueryManager* EnvironmentQueryManager; // 0xd0(0x08)
	struct UAIPerceptionSystem* PerceptionSystem; // 0xd8(0x08)
	struct TArray<struct UAIAsyncTaskBlueprintProxy*> AllProxyObjects; // 0xe0(0x10)
	struct UAIHotSpotManager* HotSpotManager; // 0xf0(0x08)
	struct UNavLocalGridManager* NavLocalGrids; // 0xf8(0x08)
	char pad_100[0x58]; // 0x100(0x58)
};

// Class AIModule.AIController
// Size: 0x4f0 (Inherited: 0x458)
struct AAIController : AController {
	char pad_458[0x38]; // 0x458(0x38)
	char bStartAILogicOnPossess : 1; // 0x490(0x01)
	char bStopAILogicOnUnposses : 1; // 0x490(0x01)
	char pad_490_2 : 6; // 0x490(0x01)
	char pad_491[0x7]; // 0x491(0x07)
	struct UPathFollowingComponent* PathFollowingComponent; // 0x498(0x08)
	char bLOSflag : 1; // 0x4a0(0x01)
	char bSkipExtraLOSChecks : 1; // 0x4a0(0x01)
	char bAllowStrafe : 1; // 0x4a0(0x01)
	char bWantsPlayerState : 1; // 0x4a0(0x01)
	char bSetControlRotationFromPawnOrientation : 1; // 0x4a0(0x01)
	char pad_4A0_5 : 3; // 0x4a0(0x01)
	char pad_4A1[0x7]; // 0x4a1(0x07)
	struct UBrainComponent* BrainComponent; // 0x4a8(0x08)
	struct UAIPerceptionComponent* PerceptionComponent; // 0x4b0(0x08)
	struct UPawnActionsComponent* ActionsComp; // 0x4b8(0x08)
	struct UBlackboardComponent* Blackboard; // 0x4c0(0x08)
	struct UGameplayTasksComponent* CachedGameplayTasksComponent; // 0x4c8(0x08)
	struct UNavigationQueryFilter* DefaultNavigationFilterClass; // 0x4d0(0x08)
	struct FMulticastInlineDelegate ReceiveMoveCompleted; // 0x4d8(0x10)
	bool bPitchWithoutPawnTarget; // 0x4e8(0x01)
	char pad_4E9[0x7]; // 0x4e9(0x07)
};

// Class AIModule.BTNode
// Size: 0x60 (Inherited: 0x30)
struct UBTNode : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct FString NodeName; // 0x38(0x10)
	struct UBehaviorTree* TreeAsset; // 0x48(0x08)
	struct UBTCompositeNode* ParentNode; // 0x50(0x08)
	char pad_58[0x8]; // 0x58(0x08)
};

// Class AIModule.BTTaskNode
// Size: 0x78 (Inherited: 0x60)
struct UBTTaskNode : UBTNode {
	struct TArray<struct UBTService*> Services; // 0x60(0x10)
	char bIgnoreRestartSelf : 1; // 0x70(0x01)
	char pad_70_1 : 7; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
};

// Class AIModule.EnvQueryContext
// Size: 0x30 (Inherited: 0x30)
struct UEnvQueryContext : UObject {
};

// Class AIModule.EnvQueryNode
// Size: 0x38 (Inherited: 0x30)
struct UEnvQueryNode : UObject {
	int32_t VerNum; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class AIModule.EnvQueryTest
// Size: 0x238 (Inherited: 0x38)
struct UEnvQueryTest : UEnvQueryNode {
	int32_t TestOrder; // 0x38(0x04)
	enum class EEnvTestPurpose TestPurpose; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	struct FString TestComment; // 0x40(0x10)
	enum class EEnvTestFilterOperator MultipleContextFilterOp; // 0x50(0x01)
	enum class EEnvTestScoreOperator MultipleContextScoreOp; // 0x51(0x01)
	enum class EEnvTestFilterType FilterType; // 0x52(0x01)
	char pad_53[0x5]; // 0x53(0x05)
	struct FAIDataProviderBoolValue BoolValue; // 0x58(0x40)
	struct FAIDataProviderFloatValue FloatValueMin; // 0x98(0x40)
	struct FAIDataProviderFloatValue FloatValueMax; // 0xd8(0x40)
	char pad_118[0x1]; // 0x118(0x01)
	enum class EEnvTestScoreEquation ScoringEquation; // 0x119(0x01)
	enum class EEnvQueryTestClamping ClampMinType; // 0x11a(0x01)
	enum class EEnvQueryTestClamping ClampMaxType; // 0x11b(0x01)
	enum class EEQSNormalizationType NormalizationType; // 0x11c(0x01)
	char pad_11D[0x3]; // 0x11d(0x03)
	struct FAIDataProviderFloatValue ScoreClampMin; // 0x120(0x40)
	struct FAIDataProviderFloatValue ScoreClampMax; // 0x160(0x40)
	struct FAIDataProviderFloatValue ScoringFactor; // 0x1a0(0x40)
	struct FAIDataProviderFloatValue ReferenceValue; // 0x1e0(0x40)
	bool bDefineReferenceValue; // 0x220(0x01)
	char pad_221[0xf]; // 0x221(0x0f)
	char bWorkOnFloatValues : 1; // 0x230(0x01)
	char pad_230_1 : 7; // 0x230(0x01)
	char pad_231[0x7]; // 0x231(0x07)
};

// Class AIModule.PathFollowingComponent
// Size: 0x288 (Inherited: 0xe8)
struct UPathFollowingComponent : UActorComponent {
	char pad_E8[0x38]; // 0xe8(0x38)
	struct UNavMovementComponent* MovementComp; // 0x120(0x08)
	char pad_128[0x8]; // 0x128(0x08)
	struct ANavigationData* MyNavData; // 0x130(0x08)
	char pad_138[0x150]; // 0x138(0x150)
};

// Class AIModule.CrowdFollowingComponent
// Size: 0x2d0 (Inherited: 0x288)
struct UCrowdFollowingComponent : UPathFollowingComponent {
	char pad_288[0x18]; // 0x288(0x18)
	struct FVector CrowdAgentMoveDirection; // 0x2a0(0x0c)
	char pad_2AC[0x24]; // 0x2ac(0x24)
};

// Class AIModule.AIAsyncTaskBlueprintProxy
// Size: 0x70 (Inherited: 0x30)
struct UAIAsyncTaskBlueprintProxy : UObject {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFail; // 0x40(0x10)
	char pad_50[0x20]; // 0x50(0x20)
};

// Class AIModule.AIBlueprintHelperLibrary
// Size: 0x30 (Inherited: 0x30)
struct UAIBlueprintHelperLibrary : UBlueprintFunctionLibrary {
};

// Class AIModule.AIDataProvider
// Size: 0x30 (Inherited: 0x30)
struct UAIDataProvider : UObject {
};

// Class AIModule.AIDataProvider_QueryParams
// Size: 0x48 (Inherited: 0x30)
struct UAIDataProvider_QueryParams : UAIDataProvider {
	struct FName ParamName; // 0x30(0x0c)
	float FloatValue; // 0x3c(0x04)
	int32_t IntValue; // 0x40(0x04)
	bool BoolValue; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
};

// Class AIModule.AIDataProvider_Random
// Size: 0x58 (Inherited: 0x48)
struct UAIDataProvider_Random : UAIDataProvider_QueryParams {
	float Min; // 0x48(0x04)
	float Max; // 0x4c(0x04)
	char bInteger : 1; // 0x50(0x01)
	char pad_50_1 : 7; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// Class AIModule.AIHotSpotManager
// Size: 0x30 (Inherited: 0x30)
struct UAIHotSpotManager : UObject {
};

// Class AIModule.AIPerceptionListenerInterface
// Size: 0x30 (Inherited: 0x30)
struct UAIPerceptionListenerInterface : UInterface {
};

// Class AIModule.AIPerceptionStimuliSourceComponent
// Size: 0x108 (Inherited: 0xe8)
struct UAIPerceptionStimuliSourceComponent : UActorComponent {
	char bAutoRegisterAsSource : 1; // 0xe8(0x01)
	char pad_E8_1 : 7; // 0xe8(0x01)
	char pad_E9[0x7]; // 0xe9(0x07)
	struct TArray<struct UAISense*> RegisterAsSourceForSenses; // 0xf0(0x10)
	enum class EAISenseActorSize StimulusSize; // 0x100(0x01)
	char pad_101[0x7]; // 0x101(0x07)
};

// Class AIModule.AIResourceInterface
// Size: 0x30 (Inherited: 0x30)
struct UAIResourceInterface : UInterface {
};

// Class AIModule.AIResource_Movement
// Size: 0x40 (Inherited: 0x40)
struct UAIResource_Movement : UGameplayTaskResource {
};

// Class AIModule.AIResource_Logic
// Size: 0x40 (Inherited: 0x40)
struct UAIResource_Logic : UGameplayTaskResource {
};

// Class AIModule.AISense
// Size: 0x90 (Inherited: 0x30)
struct UAISense : UObject {
	float DefaultExpirationAge; // 0x30(0x04)
	enum class EAISenseNotifyType NotifyType; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	char bWantsNewPawnNotification : 1; // 0x38(0x01)
	char bAutoRegisterAllPawnsAsSources : 1; // 0x38(0x01)
	char pad_38_2 : 6; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct UAIPerceptionSystem* PerceptionSystemInstance; // 0x40(0x08)
	char pad_48[0x48]; // 0x48(0x48)
};

// Class AIModule.AISense_Blueprint
// Size: 0xb8 (Inherited: 0x90)
struct UAISense_Blueprint : UAISense {
	struct UUserDefinedStruct* ListenerDataType; // 0x90(0x08)
	struct TArray<struct UAIPerceptionComponent*> ListenerContainer; // 0x98(0x10)
	struct TArray<struct UAISenseEvent*> UnprocessedEvents; // 0xa8(0x10)
};

// Class AIModule.AISense_Damage
// Size: 0xa0 (Inherited: 0x90)
struct UAISense_Damage : UAISense {
	struct TArray<struct FAIDamageEvent> RegisteredEvents; // 0x90(0x10)
};

// Class AIModule.AISense_Hearing
// Size: 0xf8 (Inherited: 0x90)
struct UAISense_Hearing : UAISense {
	struct TArray<struct FAINoiseEvent> NoiseEvents; // 0x90(0x10)
	float SpeedOfSoundSq; // 0xa0(0x04)
	char pad_A4[0x54]; // 0xa4(0x54)
};

// Class AIModule.AISense_Prediction
// Size: 0xa0 (Inherited: 0x90)
struct UAISense_Prediction : UAISense {
	struct TArray<struct FAIPredictionEvent> RegisteredEvents; // 0x90(0x10)
};

// Class AIModule.AISense_Sight
// Size: 0x180 (Inherited: 0x90)
struct UAISense_Sight : UAISense {
	char pad_90[0xc8]; // 0x90(0xc8)
	int32_t MaxTracesPerTick; // 0x158(0x04)
	int32_t MinQueriesPerTimeSliceCheck; // 0x15c(0x04)
	double MaxTimeSlicePerTick; // 0x160(0x08)
	float HighImportanceQueryDistanceThreshold; // 0x168(0x04)
	char pad_16C[0x4]; // 0x16c(0x04)
	float MaxQueryImportance; // 0x170(0x04)
	float SightLimitQueryImportance; // 0x174(0x04)
	char pad_178[0x8]; // 0x178(0x08)
};

// Class AIModule.AISense_Team
// Size: 0xa0 (Inherited: 0x90)
struct UAISense_Team : UAISense {
	struct TArray<struct FAITeamStimulusEvent> RegisteredEvents; // 0x90(0x10)
};

// Class AIModule.AISense_Touch
// Size: 0xa0 (Inherited: 0x90)
struct UAISense_Touch : UAISense {
	struct TArray<struct FAITouchEvent> RegisteredEvents; // 0x90(0x10)
};

// Class AIModule.AISenseBlueprintListener
// Size: 0x110 (Inherited: 0x110)
struct UAISenseBlueprintListener : UUserDefinedStruct {
};

// Class AIModule.AISenseConfig
// Size: 0x50 (Inherited: 0x30)
struct UAISenseConfig : UObject {
	struct FColor DebugColor; // 0x30(0x04)
	float MaxAge; // 0x34(0x04)
	char bStartsEnabled : 1; // 0x38(0x01)
	char pad_38_1 : 7; // 0x38(0x01)
	char pad_39[0x17]; // 0x39(0x17)
};

// Class AIModule.AISenseConfig_Blueprint
// Size: 0x58 (Inherited: 0x50)
struct UAISenseConfig_Blueprint : UAISenseConfig {
	struct UAISense_Blueprint* Implementation; // 0x50(0x08)
};

// Class AIModule.AISenseConfig_Damage
// Size: 0x58 (Inherited: 0x50)
struct UAISenseConfig_Damage : UAISenseConfig {
	struct UAISense_Damage* Implementation; // 0x50(0x08)
};

// Class AIModule.AISenseConfig_Hearing
// Size: 0x68 (Inherited: 0x50)
struct UAISenseConfig_Hearing : UAISenseConfig {
	struct UAISense_Hearing* Implementation; // 0x50(0x08)
	float HearingRange; // 0x58(0x04)
	float LoSHearingRange; // 0x5c(0x04)
	char bUseLoSHearing : 1; // 0x60(0x01)
	char pad_60_1 : 7; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	struct FAISenseAffiliationFilter DetectionByAffiliation; // 0x64(0x04)
};

// Class AIModule.AISenseConfig_Prediction
// Size: 0x50 (Inherited: 0x50)
struct UAISenseConfig_Prediction : UAISenseConfig {
};

// Class AIModule.AISenseConfig_Sight
// Size: 0x78 (Inherited: 0x50)
struct UAISenseConfig_Sight : UAISenseConfig {
	struct UAISense_Sight* Implementation; // 0x50(0x08)
	bool bCanSeeThroughWalls; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	float SightRadius; // 0x5c(0x04)
	float LoseSightRadius; // 0x60(0x04)
	float PeripheralVisionAngleDegrees; // 0x64(0x04)
	struct FAISenseAffiliationFilter DetectionByAffiliation; // 0x68(0x04)
	float AutoSuccessRangeFromLastSeenLocation; // 0x6c(0x04)
	float PointOfViewBackwardOffset; // 0x70(0x04)
	float NearClippingRadius; // 0x74(0x04)
};

// Class AIModule.AISenseConfig_Team
// Size: 0x50 (Inherited: 0x50)
struct UAISenseConfig_Team : UAISenseConfig {
};

// Class AIModule.AISenseConfig_Touch
// Size: 0x50 (Inherited: 0x50)
struct UAISenseConfig_Touch : UAISenseConfig {
};

// Class AIModule.AISenseEvent
// Size: 0x30 (Inherited: 0x30)
struct UAISenseEvent : UObject {
};

// Class AIModule.AISenseEvent_Damage
// Size: 0x60 (Inherited: 0x30)
struct UAISenseEvent_Damage : UAISenseEvent {
	struct FAIDamageEvent Event; // 0x30(0x30)
};

// Class AIModule.AISenseEvent_Hearing
// Size: 0x60 (Inherited: 0x30)
struct UAISenseEvent_Hearing : UAISenseEvent {
	struct FAINoiseEvent Event; // 0x30(0x30)
};

// Class AIModule.AISightTargetInterface
// Size: 0x30 (Inherited: 0x30)
struct UAISightTargetInterface : UInterface {
};

// Class AIModule.AITask
// Size: 0x78 (Inherited: 0x70)
struct UAITask : UGameplayTask {
	struct AAIController* OwnerController; // 0x70(0x08)
};

// Class AIModule.AITask_LockLogic
// Size: 0x78 (Inherited: 0x78)
struct UAITask_LockLogic : UAITask {
};

// Class AIModule.AITask_MoveTo
// Size: 0x118 (Inherited: 0x78)
struct UAITask_MoveTo : UAITask {
	struct FMulticastInlineDelegate OnRequestFailed; // 0x78(0x10)
	struct FMulticastInlineDelegate OnMoveFinished; // 0x88(0x10)
	struct FAIMoveRequest MoveRequest; // 0x98(0x40)
	char pad_D8[0x40]; // 0xd8(0x40)
};

// Class AIModule.AITask_RunEQS
// Size: 0xf8 (Inherited: 0x78)
struct UAITask_RunEQS : UAITask {
	char pad_78[0x80]; // 0x78(0x80)
};

// Class AIModule.BehaviorTree
// Size: 0x70 (Inherited: 0x30)
struct UBehaviorTree : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct UBTCompositeNode* RootNode; // 0x38(0x08)
	struct UBlackboardData* BlackboardAsset; // 0x40(0x08)
	struct TArray<struct UBTDecorator*> RootDecorators; // 0x48(0x10)
	struct TArray<struct FBTDecoratorLogic> RootDecoratorOps; // 0x58(0x10)
	char pad_68[0x8]; // 0x68(0x08)
};

// Class AIModule.BrainComponent
// Size: 0x140 (Inherited: 0xe8)
struct UBrainComponent : UActorComponent {
	char pad_E8[0x8]; // 0xe8(0x08)
	struct UBlackboardComponent* BlackboardComp; // 0xf0(0x08)
	struct AAIController* AIOwner; // 0xf8(0x08)
	char pad_100[0x40]; // 0x100(0x40)
};

// Class AIModule.BehaviorTreeComponent
// Size: 0x2c8 (Inherited: 0x140)
struct UBehaviorTreeComponent : UBrainComponent {
	char pad_140[0x20]; // 0x140(0x20)
	struct TArray<struct UBTNode*> NodeInstances; // 0x160(0x10)
	char pad_170[0x140]; // 0x170(0x140)
	struct UBehaviorTree* DefaultBehaviorTreeAsset; // 0x2b0(0x08)
	char pad_2B8[0x10]; // 0x2b8(0x10)
};

// Class AIModule.BehaviorTreeManager
// Size: 0x58 (Inherited: 0x30)
struct UBehaviorTreeManager : UObject {
	int32_t MaxDebuggerSteps; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct TArray<struct FBehaviorTreeTemplateInfo> LoadedTemplates; // 0x38(0x10)
	struct TArray<struct UBehaviorTreeComponent*> ActiveComponents; // 0x48(0x10)
};

// Class AIModule.BehaviorTreeTypes
// Size: 0x30 (Inherited: 0x30)
struct UBehaviorTreeTypes : UObject {
};

// Class AIModule.BlackboardAssetProvider
// Size: 0x30 (Inherited: 0x30)
struct UBlackboardAssetProvider : UInterface {
};

// Class AIModule.BlackboardComponent
// Size: 0x1f0 (Inherited: 0xe8)
struct UBlackboardComponent : UActorComponent {
	struct UBrainComponent* BrainComp; // 0xe8(0x08)
	struct UBlackboardData* DefaultBlackboardAsset; // 0xf0(0x08)
	struct UBlackboardData* BlackboardAsset; // 0xf8(0x08)
	char pad_100[0x20]; // 0x100(0x20)
	struct TArray<struct UBlackboardKeyType*> KeyInstances; // 0x120(0x10)
	char pad_130[0xc0]; // 0x130(0xc0)
};

// Class AIModule.BlackboardData
// Size: 0x58 (Inherited: 0x38)
struct UBlackboardData : UDataAsset {
	struct UBlackboardData* Parent; // 0x38(0x08)
	struct TArray<struct FBlackboardEntry> Keys; // 0x40(0x10)
	char bHasSynchronizedKeys : 1; // 0x50(0x01)
	char pad_50_1 : 7; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// Class AIModule.BlackboardKeyType
// Size: 0x38 (Inherited: 0x30)
struct UBlackboardKeyType : UObject {
	char pad_30[0x8]; // 0x30(0x08)
};

// Class AIModule.BlackboardKeyType_Bool
// Size: 0x38 (Inherited: 0x38)
struct UBlackboardKeyType_Bool : UBlackboardKeyType {
};

// Class AIModule.BlackboardKeyType_Class
// Size: 0x40 (Inherited: 0x38)
struct UBlackboardKeyType_Class : UBlackboardKeyType {
	struct UObject* BaseClass; // 0x38(0x08)
};

// Class AIModule.BlackboardKeyType_Enum
// Size: 0x58 (Inherited: 0x38)
struct UBlackboardKeyType_Enum : UBlackboardKeyType {
	struct UEnum* EnumType; // 0x38(0x08)
	struct FString EnumName; // 0x40(0x10)
	char bIsEnumNameValid : 1; // 0x50(0x01)
	char pad_50_1 : 7; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// Class AIModule.BlackboardKeyType_Float
// Size: 0x38 (Inherited: 0x38)
struct UBlackboardKeyType_Float : UBlackboardKeyType {
};

// Class AIModule.BlackboardKeyType_Int
// Size: 0x38 (Inherited: 0x38)
struct UBlackboardKeyType_Int : UBlackboardKeyType {
};

// Class AIModule.BlackboardKeyType_Name
// Size: 0x38 (Inherited: 0x38)
struct UBlackboardKeyType_Name : UBlackboardKeyType {
};

// Class AIModule.BlackboardKeyType_NativeEnum
// Size: 0x50 (Inherited: 0x38)
struct UBlackboardKeyType_NativeEnum : UBlackboardKeyType {
	struct FString EnumName; // 0x38(0x10)
	struct UEnum* EnumType; // 0x48(0x08)
};

// Class AIModule.BlackboardKeyType_Object
// Size: 0x40 (Inherited: 0x38)
struct UBlackboardKeyType_Object : UBlackboardKeyType {
	struct UObject* BaseClass; // 0x38(0x08)
};

// Class AIModule.BlackboardKeyType_Rotator
// Size: 0x38 (Inherited: 0x38)
struct UBlackboardKeyType_Rotator : UBlackboardKeyType {
};

// Class AIModule.BlackboardKeyType_String
// Size: 0x48 (Inherited: 0x38)
struct UBlackboardKeyType_String : UBlackboardKeyType {
	struct FString StringValue; // 0x38(0x10)
};

// Class AIModule.BlackboardKeyType_Vector
// Size: 0x38 (Inherited: 0x38)
struct UBlackboardKeyType_Vector : UBlackboardKeyType {
};

// Class AIModule.BTAuxiliaryNode
// Size: 0x68 (Inherited: 0x60)
struct UBTAuxiliaryNode : UBTNode {
	char pad_60[0x8]; // 0x60(0x08)
};

// Class AIModule.BTCompositeNode
// Size: 0x98 (Inherited: 0x60)
struct UBTCompositeNode : UBTNode {
	struct TArray<struct FBTCompositeChild> Children; // 0x60(0x10)
	struct TArray<struct UBTService*> Services; // 0x70(0x10)
	char pad_80[0x10]; // 0x80(0x10)
	char bApplyDecoratorScope : 1; // 0x90(0x01)
	char pad_90_1 : 7; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
};

// Class AIModule.BTComposite_Selector
// Size: 0x98 (Inherited: 0x98)
struct UBTComposite_Selector : UBTCompositeNode {
};

// Class AIModule.BTComposite_Sequence
// Size: 0x98 (Inherited: 0x98)
struct UBTComposite_Sequence : UBTCompositeNode {
};

// Class AIModule.BTComposite_SimpleParallel
// Size: 0xa0 (Inherited: 0x98)
struct UBTComposite_SimpleParallel : UBTCompositeNode {
	enum class EBTParallelMode FinishMode; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
};

// Class AIModule.BTDecorator
// Size: 0x70 (Inherited: 0x68)
struct UBTDecorator : UBTAuxiliaryNode {
	char pad_68_0 : 7; // 0x68(0x01)
	char bInverseCondition : 1; // 0x68(0x01)
	char pad_69[0x3]; // 0x69(0x03)
	enum class EBTFlowAbortMode FlowAbortMode; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
};

// Class AIModule.BTDecorator_BlackboardBase
// Size: 0xa0 (Inherited: 0x70)
struct UBTDecorator_BlackboardBase : UBTDecorator {
	struct FBlackboardKeySelector BlackboardKey; // 0x70(0x30)
};

// Class AIModule.BTDecorator_Blackboard
// Size: 0xd0 (Inherited: 0xa0)
struct UBTDecorator_Blackboard : UBTDecorator_BlackboardBase {
	int32_t IntValue; // 0xa0(0x04)
	float FloatValue; // 0xa4(0x04)
	struct FString StringValue; // 0xa8(0x10)
	struct FString CachedDescription; // 0xb8(0x10)
	char OperationType; // 0xc8(0x01)
	enum class EBTBlackboardRestart NotifyObserver; // 0xc9(0x01)
	char pad_CA[0x6]; // 0xca(0x06)
};

// Class AIModule.BTDecorator_BlueprintBase
// Size: 0xa8 (Inherited: 0x70)
struct UBTDecorator_BlueprintBase : UBTDecorator {
	struct AAIController* AIOwner; // 0x70(0x08)
	struct AActor* ActorOwner; // 0x78(0x08)
	struct TArray<struct FName> ObservedKeyNames; // 0x80(0x10)
	char pad_90[0x10]; // 0x90(0x10)
	char bShowPropertyDetails : 1; // 0xa0(0x01)
	char bCheckConditionOnlyBlackBoardChanges : 1; // 0xa0(0x01)
	char bIsObservingBB : 1; // 0xa0(0x01)
	char pad_A0_3 : 5; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
};

// Class AIModule.BTDecorator_CheckGameplayTagsOnActor
// Size: 0xd8 (Inherited: 0x70)
struct UBTDecorator_CheckGameplayTagsOnActor : UBTDecorator {
	struct FBlackboardKeySelector ActorToCheck; // 0x70(0x30)
	enum class EGameplayContainerMatchType TagsToMatch; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
	struct FGameplayTagContainer GameplayTags; // 0xa8(0x20)
	struct FString CachedDescription; // 0xc8(0x10)
};

// Class AIModule.BTDecorator_CompareBBEntries
// Size: 0xd8 (Inherited: 0x70)
struct UBTDecorator_CompareBBEntries : UBTDecorator {
	enum class EBlackBoardEntryComparison Operator; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
	struct FBlackboardKeySelector BlackboardKeyA; // 0x78(0x30)
	struct FBlackboardKeySelector BlackboardKeyB; // 0xa8(0x30)
};

// Class AIModule.BTDecorator_ConditionalLoop
// Size: 0xd0 (Inherited: 0xd0)
struct UBTDecorator_ConditionalLoop : UBTDecorator_Blackboard {
};

// Class AIModule.BTDecorator_ConeCheck
// Size: 0x110 (Inherited: 0x70)
struct UBTDecorator_ConeCheck : UBTDecorator {
	float ConeHalfAngle; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	struct FBlackboardKeySelector ConeOrigin; // 0x78(0x30)
	struct FBlackboardKeySelector ConeDirection; // 0xa8(0x30)
	struct FBlackboardKeySelector Observed; // 0xd8(0x30)
	char pad_108[0x8]; // 0x108(0x08)
};

// Class AIModule.BTDecorator_Cooldown
// Size: 0x78 (Inherited: 0x70)
struct UBTDecorator_Cooldown : UBTDecorator {
	float CoolDownTime; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
};

// Class AIModule.BTDecorator_DoesPathExist
// Size: 0xe0 (Inherited: 0x70)
struct UBTDecorator_DoesPathExist : UBTDecorator {
	struct FBlackboardKeySelector BlackboardKeyA; // 0x70(0x30)
	struct FBlackboardKeySelector BlackboardKeyB; // 0xa0(0x30)
	char bUseSelf : 1; // 0xd0(0x01)
	char pad_D0_1 : 7; // 0xd0(0x01)
	char pad_D1[0x3]; // 0xd1(0x03)
	enum class EPathExistanceQueryType PathQueryType; // 0xd4(0x01)
	char pad_D5[0x3]; // 0xd5(0x03)
	struct UNavigationQueryFilter* FilterClass; // 0xd8(0x08)
};

// Class AIModule.BTDecorator_ForceSuccess
// Size: 0x70 (Inherited: 0x70)
struct UBTDecorator_ForceSuccess : UBTDecorator {
};

// Class AIModule.BTDecorator_IsAtLocation
// Size: 0xf0 (Inherited: 0xa0)
struct UBTDecorator_IsAtLocation : UBTDecorator_BlackboardBase {
	float AcceptableRadius; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)
	struct FAIDataProviderFloatValue ParametrizedAcceptableRadius; // 0xa8(0x40)
	enum class FAIDistanceType GeometricDistanceType; // 0xe8(0x01)
	char pad_E9[0x3]; // 0xe9(0x03)
	char bUseParametrizedRadius : 1; // 0xec(0x01)
	char bUseNavAgentGoalLocation : 1; // 0xec(0x01)
	char bPathFindingBasedTest : 1; // 0xec(0x01)
	char pad_EC_3 : 5; // 0xec(0x01)
	char pad_ED[0x3]; // 0xed(0x03)
};

// Class AIModule.BTDecorator_IsBBEntryOfClass
// Size: 0xa8 (Inherited: 0xa0)
struct UBTDecorator_IsBBEntryOfClass : UBTDecorator_BlackboardBase {
	struct UObject* TestClass; // 0xa0(0x08)
};

// Class AIModule.BTDecorator_KeepInCone
// Size: 0xe0 (Inherited: 0x70)
struct UBTDecorator_KeepInCone : UBTDecorator {
	float ConeHalfAngle; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	struct FBlackboardKeySelector ConeOrigin; // 0x78(0x30)
	struct FBlackboardKeySelector Observed; // 0xa8(0x30)
	char bUseSelfAsOrigin : 1; // 0xd8(0x01)
	char bUseSelfAsObserved : 1; // 0xd8(0x01)
	char pad_D8_2 : 6; // 0xd8(0x01)
	char pad_D9[0x7]; // 0xd9(0x07)
};

// Class AIModule.BTDecorator_Loop
// Size: 0x80 (Inherited: 0x70)
struct UBTDecorator_Loop : UBTDecorator {
	int32_t NumLoops; // 0x70(0x04)
	bool bInfiniteLoop; // 0x74(0x01)
	char pad_75[0x3]; // 0x75(0x03)
	float InfiniteLoopTimeoutTime; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
};

// Class AIModule.BTDecorator_ReachedMoveGoal
// Size: 0x70 (Inherited: 0x70)
struct UBTDecorator_ReachedMoveGoal : UBTDecorator {
};

// Class AIModule.BTDecorator_SetTagCooldown
// Size: 0x88 (Inherited: 0x70)
struct UBTDecorator_SetTagCooldown : UBTDecorator {
	struct FGameplayTag CooldownTag; // 0x70(0x0c)
	float CooldownDuration; // 0x7c(0x04)
	bool bAddToExistingDuration; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
};

// Class AIModule.BTDecorator_TagCooldown
// Size: 0x88 (Inherited: 0x70)
struct UBTDecorator_TagCooldown : UBTDecorator {
	struct FGameplayTag CooldownTag; // 0x70(0x0c)
	float CooldownDuration; // 0x7c(0x04)
	bool bAddToExistingDuration; // 0x80(0x01)
	bool bActivatesCooldown; // 0x81(0x01)
	char pad_82[0x6]; // 0x82(0x06)
};

// Class AIModule.BTDecorator_TimeLimit
// Size: 0x78 (Inherited: 0x70)
struct UBTDecorator_TimeLimit : UBTDecorator {
	float TimeLimit; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
};

// Class AIModule.BTFunctionLibrary
// Size: 0x30 (Inherited: 0x30)
struct UBTFunctionLibrary : UBlueprintFunctionLibrary {
};

// Class AIModule.BTService
// Size: 0x78 (Inherited: 0x68)
struct UBTService : UBTAuxiliaryNode {
	float Interval; // 0x68(0x04)
	float RandomDeviation; // 0x6c(0x04)
	char bCallTickOnSearchStart : 1; // 0x70(0x01)
	char bRestartTimerOnEachActivation : 1; // 0x70(0x01)
	char pad_70_2 : 6; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
};

// Class AIModule.BTService_BlackboardBase
// Size: 0xa8 (Inherited: 0x78)
struct UBTService_BlackboardBase : UBTService {
	struct FBlackboardKeySelector BlackboardKey; // 0x78(0x30)
};

// Class AIModule.BTService_BlueprintBase
// Size: 0xa0 (Inherited: 0x78)
struct UBTService_BlueprintBase : UBTService {
	struct AAIController* AIOwner; // 0x78(0x08)
	struct AActor* ActorOwner; // 0x80(0x08)
	char pad_88[0x10]; // 0x88(0x10)
	char bShowPropertyDetails : 1; // 0x98(0x01)
	char bShowEventDetails : 1; // 0x98(0x01)
	char pad_98_2 : 6; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
};

// Class AIModule.BTService_DefaultFocus
// Size: 0xb0 (Inherited: 0xa8)
struct UBTService_DefaultFocus : UBTService_BlackboardBase {
	char FocusPriority; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
};

// Class AIModule.BTService_RunEQS
// Size: 0x108 (Inherited: 0xa8)
struct UBTService_RunEQS : UBTService_BlackboardBase {
	struct FEQSParametrizedQueryExecutionRequest EQSRequest; // 0xa8(0x50)
	char pad_F8[0x10]; // 0xf8(0x10)
};

// Class AIModule.BTTask_BlackboardBase
// Size: 0xa8 (Inherited: 0x78)
struct UBTTask_BlackboardBase : UBTTaskNode {
	struct FBlackboardKeySelector BlackboardKey; // 0x78(0x30)
};

// Class AIModule.BTTask_BlueprintBase
// Size: 0xb0 (Inherited: 0x78)
struct UBTTask_BlueprintBase : UBTTaskNode {
	struct AAIController* AIOwner; // 0x78(0x08)
	struct AActor* ActorOwner; // 0x80(0x08)
	struct FIntervalCountdown TickInterval; // 0x88(0x08)
	char pad_90[0x18]; // 0x90(0x18)
	char bShowPropertyDetails : 1; // 0xa8(0x01)
	char pad_A8_1 : 7; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
};

// Class AIModule.BTTask_FinishWithResult
// Size: 0x80 (Inherited: 0x78)
struct UBTTask_FinishWithResult : UBTTaskNode {
	enum class EBTNodeResult Result; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
};

// Class AIModule.BTTask_GameplayTaskBase
// Size: 0x80 (Inherited: 0x78)
struct UBTTask_GameplayTaskBase : UBTTaskNode {
	char bWaitForGameplayTask : 1; // 0x78(0x01)
	char pad_78_1 : 7; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
};

// Class AIModule.BTTask_MakeNoise
// Size: 0x80 (Inherited: 0x78)
struct UBTTask_MakeNoise : UBTTaskNode {
	float Loudnes; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
};

// Class AIModule.BTTask_MoveTo
// Size: 0xc0 (Inherited: 0xa8)
struct UBTTask_MoveTo : UBTTask_BlackboardBase {
	float AcceptableRadius; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
	struct UNavigationQueryFilter* FilterClass; // 0xb0(0x08)
	float ObservedBlackboardValueTolerance; // 0xb8(0x04)
	char bObserveBlackboardValue : 1; // 0xbc(0x01)
	char bAllowStrafe : 1; // 0xbc(0x01)
	char bAllowPartialPath : 1; // 0xbc(0x01)
	char bTrackMovingGoal : 1; // 0xbc(0x01)
	char bProjectGoalLocation : 1; // 0xbc(0x01)
	char bReachTestIncludesAgentRadius : 1; // 0xbc(0x01)
	char bReachTestIncludesGoalRadius : 1; // 0xbc(0x01)
	char bStopOnOverlap : 1; // 0xbc(0x01)
	char bStopOnOverlapNeedsUpdate : 1; // 0xbd(0x01)
	char pad_BD_1 : 7; // 0xbd(0x01)
	char pad_BE[0x2]; // 0xbe(0x02)
};

// Class AIModule.BTTask_MoveDirectlyToward
// Size: 0xc8 (Inherited: 0xc0)
struct UBTTask_MoveDirectlyToward : UBTTask_MoveTo {
	char bDisablePathUpdateOnGoalLocationChange : 1; // 0xc0(0x01)
	char bProjectVectorGoalToNavigation : 1; // 0xc0(0x01)
	char bUpdatedDeprecatedProperties : 1; // 0xc0(0x01)
	char pad_C0_3 : 5; // 0xc0(0x01)
	char pad_C1[0x7]; // 0xc1(0x07)
};

// Class AIModule.BTTask_PawnActionBase
// Size: 0x78 (Inherited: 0x78)
struct UBTTask_PawnActionBase : UBTTaskNode {
};

// Class AIModule.BTTask_PlayAnimation
// Size: 0xb8 (Inherited: 0x78)
struct UBTTask_PlayAnimation : UBTTaskNode {
	struct UAnimationAsset* AnimationToPlay; // 0x78(0x08)
	char bLooping : 1; // 0x80(0x01)
	char bNonBlocking : 1; // 0x80(0x01)
	char pad_80_2 : 6; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
	struct UBehaviorTreeComponent* MyOwnerComp; // 0x88(0x08)
	struct USkeletalMeshComponent* CachedSkelMesh; // 0x90(0x08)
	char pad_98[0x20]; // 0x98(0x20)
};

// Class AIModule.BTTask_PlaySound
// Size: 0x80 (Inherited: 0x78)
struct UBTTask_PlaySound : UBTTaskNode {
	struct USoundCue* SoundToPlay; // 0x78(0x08)
};

// Class AIModule.BTTask_PushPawnAction
// Size: 0x80 (Inherited: 0x78)
struct UBTTask_PushPawnAction : UBTTask_PawnActionBase {
	struct UPawnAction* Action; // 0x78(0x08)
};

// Class AIModule.BTTask_RotateToFaceBBEntry
// Size: 0xb0 (Inherited: 0xa8)
struct UBTTask_RotateToFaceBBEntry : UBTTask_BlackboardBase {
	float Precision; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
};

// Class AIModule.BTTask_RunBehavior
// Size: 0x80 (Inherited: 0x78)
struct UBTTask_RunBehavior : UBTTaskNode {
	struct UBehaviorTree* BehaviorAsset; // 0x78(0x08)
};

// Class AIModule.BTTask_RunBehaviorDynamic
// Size: 0x98 (Inherited: 0x78)
struct UBTTask_RunBehaviorDynamic : UBTTaskNode {
	struct FGameplayTag InjectionTag; // 0x78(0x0c)
	char pad_84[0x4]; // 0x84(0x04)
	struct UBehaviorTree* DefaultBehaviorAsset; // 0x88(0x08)
	struct UBehaviorTree* BehaviorAsset; // 0x90(0x08)
};

// Class AIModule.BTTask_RunEQSQuery
// Size: 0x170 (Inherited: 0xa8)
struct UBTTask_RunEQSQuery : UBTTask_BlackboardBase {
	struct UEnvQuery* QueryTemplate; // 0xa8(0x08)
	struct TArray<struct FEnvNamedValue> QueryParams; // 0xb0(0x10)
	struct TArray<struct FAIDynamicParam> QueryConfig; // 0xc0(0x10)
	enum class EEnvQueryRunMode RunMode; // 0xd0(0x01)
	char pad_D1[0x7]; // 0xd1(0x07)
	struct FBlackboardKeySelector EQSQueryBlackboardKey; // 0xd8(0x30)
	bool bUseBBKey; // 0x108(0x01)
	char pad_109[0x7]; // 0x109(0x07)
	struct FEQSParametrizedQueryExecutionRequest EQSRequest; // 0x110(0x50)
	char pad_160[0x10]; // 0x160(0x10)
};

// Class AIModule.BTTask_SetTagCooldown
// Size: 0x90 (Inherited: 0x78)
struct UBTTask_SetTagCooldown : UBTTaskNode {
	struct FGameplayTag CooldownTag; // 0x78(0x0c)
	bool bAddToExistingDuration; // 0x84(0x01)
	char pad_85[0x3]; // 0x85(0x03)
	float CooldownDuration; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
};

// Class AIModule.BTTask_Wait
// Size: 0x80 (Inherited: 0x78)
struct UBTTask_Wait : UBTTaskNode {
	float WaitTime; // 0x78(0x04)
	float RandomDeviation; // 0x7c(0x04)
};

// Class AIModule.BTTask_WaitBlackboardTime
// Size: 0xb0 (Inherited: 0x80)
struct UBTTask_WaitBlackboardTime : UBTTask_Wait {
	struct FBlackboardKeySelector BlackboardKey; // 0x80(0x30)
};

// Class AIModule.CrowdAgentInterface
// Size: 0x30 (Inherited: 0x30)
struct UCrowdAgentInterface : UInterface {
};

// Class AIModule.CrowdManager
// Size: 0xf8 (Inherited: 0x30)
struct UCrowdManager : UCrowdManagerBase {
	struct ANavigationData* MyNavData; // 0x30(0x08)
	struct TArray<struct FCrowdAvoidanceConfig> AvoidanceConfig; // 0x38(0x10)
	struct TArray<struct FCrowdAvoidanceSamplingPattern> SamplingPatterns; // 0x48(0x10)
	int32_t MaxAgents; // 0x58(0x04)
	float MaxAgentRadius; // 0x5c(0x04)
	int32_t MaxAvoidedAgents; // 0x60(0x04)
	int32_t MaxAvoidedWalls; // 0x64(0x04)
	float NavmeshCheckInterval; // 0x68(0x04)
	float PathOptimizationInterval; // 0x6c(0x04)
	float SeparationDirClamp; // 0x70(0x04)
	float PathOffsetRadiusMultiplier; // 0x74(0x04)
	char pad_78_0 : 4; // 0x78(0x01)
	char bResolveCollisions : 1; // 0x78(0x01)
	char pad_78_5 : 3; // 0x78(0x01)
	char pad_79[0x7f]; // 0x79(0x7f)
};

// Class AIModule.DetourCrowdAIController
// Size: 0x4f0 (Inherited: 0x4f0)
struct ADetourCrowdAIController : AAIController {
};

// Class AIModule.EnvQuery
// Size: 0x58 (Inherited: 0x38)
struct UEnvQuery : UDataAsset {
	struct FName QueryName; // 0x38(0x0c)
	char pad_44[0x4]; // 0x44(0x04)
	struct TArray<struct UEnvQueryOption*> Options; // 0x48(0x10)
};

// Class AIModule.EnvQueryContext_BlueprintBase
// Size: 0x38 (Inherited: 0x30)
struct UEnvQueryContext_BlueprintBase : UEnvQueryContext {
	char pad_30[0x8]; // 0x30(0x08)
};

// Class AIModule.EnvQueryContext_Item
// Size: 0x30 (Inherited: 0x30)
struct UEnvQueryContext_Item : UEnvQueryContext {
};

// Class AIModule.EnvQueryContext_Querier
// Size: 0x30 (Inherited: 0x30)
struct UEnvQueryContext_Querier : UEnvQueryContext {
};

// Class AIModule.EnvQueryDebugHelpers
// Size: 0x30 (Inherited: 0x30)
struct UEnvQueryDebugHelpers : UObject {
};

// Class AIModule.EnvQueryGenerator
// Size: 0x58 (Inherited: 0x38)
struct UEnvQueryGenerator : UEnvQueryNode {
	struct FString OptionName; // 0x38(0x10)
	struct UEnvQueryItemType* ItemType; // 0x48(0x08)
	char bAutoSortTests : 1; // 0x50(0x01)
	char pad_50_1 : 7; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// Class AIModule.EnvQueryGenerator_ActorsOfClass
// Size: 0xe8 (Inherited: 0x58)
struct UEnvQueryGenerator_ActorsOfClass : UEnvQueryGenerator {
	struct AActor* SearchedActorClass; // 0x58(0x08)
	struct FAIDataProviderBoolValue GenerateOnlyActorsInRadius; // 0x60(0x40)
	struct FAIDataProviderFloatValue SearchRadius; // 0xa0(0x40)
	struct UEnvQueryContext* SearchCenter; // 0xe0(0x08)
};

// Class AIModule.EnvQueryGenerator_BlueprintBase
// Size: 0x88 (Inherited: 0x58)
struct UEnvQueryGenerator_BlueprintBase : UEnvQueryGenerator {
	struct FText GeneratorsActionDescription; // 0x58(0x18)
	struct UEnvQueryContext* Context; // 0x70(0x08)
	struct UEnvQueryItemType* GeneratedItemType; // 0x78(0x08)
	char pad_80[0x8]; // 0x80(0x08)
};

// Class AIModule.EnvQueryGenerator_Composite
// Size: 0x78 (Inherited: 0x58)
struct UEnvQueryGenerator_Composite : UEnvQueryGenerator {
	struct TArray<struct UEnvQueryGenerator*> Generators; // 0x58(0x10)
	char bAllowDifferentItemTypes : 1; // 0x68(0x01)
	char bHasMatchingItemType : 1; // 0x68(0x01)
	char pad_68_2 : 6; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
	struct UEnvQueryItemType* ForcedItemType; // 0x70(0x08)
};

// Class AIModule.EnvQueryGenerator_ProjectedPoints
// Size: 0x88 (Inherited: 0x58)
struct UEnvQueryGenerator_ProjectedPoints : UEnvQueryGenerator {
	struct FEnvTraceData ProjectionData; // 0x58(0x30)
};

// Class AIModule.EnvQueryGenerator_Cone
// Size: 0x198 (Inherited: 0x88)
struct UEnvQueryGenerator_Cone : UEnvQueryGenerator_ProjectedPoints {
	struct FAIDataProviderFloatValue AlignedPointsDistance; // 0x88(0x40)
	struct FAIDataProviderFloatValue ConeDegrees; // 0xc8(0x40)
	struct FAIDataProviderFloatValue AngleStep; // 0x108(0x40)
	struct FAIDataProviderFloatValue Range; // 0x148(0x40)
	struct UEnvQueryContext* CenterActor; // 0x188(0x08)
	char bIncludeContextLocation : 1; // 0x190(0x01)
	char pad_190_1 : 7; // 0x190(0x01)
	char pad_191[0x7]; // 0x191(0x07)
};

// Class AIModule.EnvQueryGenerator_CurrentLocation
// Size: 0x60 (Inherited: 0x58)
struct UEnvQueryGenerator_CurrentLocation : UEnvQueryGenerator {
	struct UEnvQueryContext* QueryContext; // 0x58(0x08)
};

// Class AIModule.EnvQueryGenerator_Donut
// Size: 0x200 (Inherited: 0x88)
struct UEnvQueryGenerator_Donut : UEnvQueryGenerator_ProjectedPoints {
	struct FAIDataProviderFloatValue InnerRadius; // 0x88(0x40)
	struct FAIDataProviderFloatValue OuterRadius; // 0xc8(0x40)
	struct FAIDataProviderIntValue NumberOfRings; // 0x108(0x40)
	struct FAIDataProviderIntValue PointsPerRing; // 0x148(0x40)
	struct FEnvDirection ArcDirection; // 0x188(0x20)
	struct FAIDataProviderFloatValue ArcAngle; // 0x1a8(0x40)
	bool bUseSpiralPattern; // 0x1e8(0x01)
	char pad_1E9[0x7]; // 0x1e9(0x07)
	struct UEnvQueryContext* Center; // 0x1f0(0x08)
	char bDefineArc : 1; // 0x1f8(0x01)
	char pad_1F8_1 : 7; // 0x1f8(0x01)
	char pad_1F9[0x7]; // 0x1f9(0x07)
};

// Class AIModule.EnvQueryGenerator_OnCircle
// Size: 0x240 (Inherited: 0x88)
struct UEnvQueryGenerator_OnCircle : UEnvQueryGenerator_ProjectedPoints {
	struct FAIDataProviderFloatValue CircleRadius; // 0x88(0x40)
	struct FAIDataProviderFloatValue SpaceBetween; // 0xc8(0x40)
	struct FAIDataProviderIntValue NumberOfPoints; // 0x108(0x40)
	enum class EPointOnCircleSpacingMethod PointOnCircleSpacingMethod; // 0x148(0x01)
	char pad_149[0x7]; // 0x149(0x07)
	struct FEnvDirection ArcDirection; // 0x150(0x20)
	struct FAIDataProviderFloatValue ArcAngle; // 0x170(0x40)
	float AngleRadians; // 0x1b0(0x04)
	char pad_1B4[0x4]; // 0x1b4(0x04)
	struct UEnvQueryContext* CircleCenter; // 0x1b8(0x08)
	bool bIgnoreAnyContextActorsWhenGeneratingCircle; // 0x1c0(0x01)
	char pad_1C1[0x7]; // 0x1c1(0x07)
	struct FAIDataProviderFloatValue CircleCenterZOffset; // 0x1c8(0x40)
	struct FEnvTraceData TraceData; // 0x208(0x30)
	char bDefineArc : 1; // 0x238(0x01)
	char pad_238_1 : 7; // 0x238(0x01)
	char pad_239[0x7]; // 0x239(0x07)
};

// Class AIModule.EnvQueryGenerator_SimpleGrid
// Size: 0x110 (Inherited: 0x88)
struct UEnvQueryGenerator_SimpleGrid : UEnvQueryGenerator_ProjectedPoints {
	struct FAIDataProviderFloatValue GridSize; // 0x88(0x40)
	struct FAIDataProviderFloatValue SpaceBetween; // 0xc8(0x40)
	struct UEnvQueryContext* GenerateAround; // 0x108(0x08)
};

// Class AIModule.EnvQueryGenerator_PathingGrid
// Size: 0x198 (Inherited: 0x110)
struct UEnvQueryGenerator_PathingGrid : UEnvQueryGenerator_SimpleGrid {
	struct FAIDataProviderBoolValue PathToItem; // 0x110(0x40)
	struct UNavigationQueryFilter* NavigationFilter; // 0x150(0x08)
	struct FAIDataProviderFloatValue ScanRangeMultiplier; // 0x158(0x40)
};

// Class AIModule.EnvQueryInstanceBlueprintWrapper
// Size: 0x80 (Inherited: 0x30)
struct UEnvQueryInstanceBlueprintWrapper : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	int32_t QueryID; // 0x38(0x04)
	char pad_3C[0x24]; // 0x3c(0x24)
	struct UEnvQueryItemType* ItemType; // 0x60(0x08)
	int32_t OptionIndex; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct FMulticastInlineDelegate OnQueryFinishedEvent; // 0x70(0x10)
};

// Class AIModule.EnvQueryItemType
// Size: 0x38 (Inherited: 0x30)
struct UEnvQueryItemType : UObject {
	char pad_30[0x8]; // 0x30(0x08)
};

// Class AIModule.EnvQueryItemType_VectorBase
// Size: 0x38 (Inherited: 0x38)
struct UEnvQueryItemType_VectorBase : UEnvQueryItemType {
};

// Class AIModule.EnvQueryItemType_ActorBase
// Size: 0x38 (Inherited: 0x38)
struct UEnvQueryItemType_ActorBase : UEnvQueryItemType_VectorBase {
};

// Class AIModule.EnvQueryItemType_Actor
// Size: 0x38 (Inherited: 0x38)
struct UEnvQueryItemType_Actor : UEnvQueryItemType_ActorBase {
};

// Class AIModule.EnvQueryItemType_Direction
// Size: 0x38 (Inherited: 0x38)
struct UEnvQueryItemType_Direction : UEnvQueryItemType_VectorBase {
};

// Class AIModule.EnvQueryItemType_Point
// Size: 0x38 (Inherited: 0x38)
struct UEnvQueryItemType_Point : UEnvQueryItemType_VectorBase {
};

// Class AIModule.EnvQueryManager
// Size: 0x158 (Inherited: 0x50)
struct UEnvQueryManager : UAISubsystem {
	char pad_50[0x70]; // 0x50(0x70)
	struct TArray<struct FEnvQueryInstanceCache> InstanceCache; // 0xc0(0x10)
	struct TArray<struct UEnvQueryContext*> LocalContexts; // 0xd0(0x10)
	struct TArray<struct UEnvQueryInstanceBlueprintWrapper*> GCShieldedWrappers; // 0xe0(0x10)
	char pad_F0[0x54]; // 0xf0(0x54)
	float MaxAllowedTestingTime; // 0x144(0x04)
	bool bTestQueriesUsingBreadth; // 0x148(0x01)
	char pad_149[0x3]; // 0x149(0x03)
	int32_t QueryCountWarningThreshold; // 0x14c(0x04)
	double QueryCountWarningInterval; // 0x150(0x08)
};

// Class AIModule.EnvQueryOption
// Size: 0x48 (Inherited: 0x30)
struct UEnvQueryOption : UObject {
	struct UEnvQueryGenerator* Generator; // 0x30(0x08)
	struct TArray<struct UEnvQueryTest*> Tests; // 0x38(0x10)
};

// Class AIModule.EnvQueryTest_Distance
// Size: 0x248 (Inherited: 0x238)
struct UEnvQueryTest_Distance : UEnvQueryTest {
	enum class EEnvTestDistance TestMode; // 0x238(0x01)
	char pad_239[0x7]; // 0x239(0x07)
	struct UEnvQueryContext* DistanceTo; // 0x240(0x08)
};

// Class AIModule.EnvQueryTest_Dot
// Size: 0x280 (Inherited: 0x238)
struct UEnvQueryTest_Dot : UEnvQueryTest {
	struct FEnvDirection LineA; // 0x238(0x20)
	struct FEnvDirection LineB; // 0x258(0x20)
	enum class EEnvTestDot TestMode; // 0x278(0x01)
	bool bAbsoluteValue; // 0x279(0x01)
	char pad_27A[0x6]; // 0x27a(0x06)
};

// Class AIModule.EnvQueryTest_GameplayTags
// Size: 0x2a8 (Inherited: 0x238)
struct UEnvQueryTest_GameplayTags : UEnvQueryTest {
	struct FGameplayTagQuery TagQueryToMatch; // 0x238(0x48)
	bool bUpdatedToUseQuery; // 0x280(0x01)
	enum class EGameplayContainerMatchType TagsToMatch; // 0x281(0x01)
	char pad_282[0x6]; // 0x282(0x06)
	struct FGameplayTagContainer GameplayTags; // 0x288(0x20)
};

// Class AIModule.EnvQueryTest_Overlap
// Size: 0x260 (Inherited: 0x238)
struct UEnvQueryTest_Overlap : UEnvQueryTest {
	struct FEnvOverlapData OverlapData; // 0x238(0x20)
	struct UEnvQueryContext* CollisionIgnoreContext; // 0x258(0x08)
};

// Class AIModule.EnvQueryTest_Pathfinding
// Size: 0x2e0 (Inherited: 0x238)
struct UEnvQueryTest_Pathfinding : UEnvQueryTest {
	enum class EEnvTestPathfinding TestMode; // 0x238(0x01)
	char pad_239[0x7]; // 0x239(0x07)
	struct UEnvQueryContext* Context; // 0x240(0x08)
	struct FAIDataProviderBoolValue PathFromContext; // 0x248(0x40)
	struct FAIDataProviderBoolValue SkipUnreachable; // 0x288(0x40)
	struct UNavigationQueryFilter* FilterClass; // 0x2c8(0x08)
	bool bProjectToNavmesh; // 0x2d0(0x01)
	char pad_2D1[0x3]; // 0x2d1(0x03)
	struct FVector NavMeshProjectionExtents; // 0x2d4(0x0c)
};

// Class AIModule.EnvQueryTest_PathfindingBatch
// Size: 0x320 (Inherited: 0x2e0)
struct UEnvQueryTest_PathfindingBatch : UEnvQueryTest_Pathfinding {
	struct FAIDataProviderFloatValue ScanRangeMultiplier; // 0x2e0(0x40)
};

// Class AIModule.EnvQueryTest_Project
// Size: 0x268 (Inherited: 0x238)
struct UEnvQueryTest_Project : UEnvQueryTest {
	struct FEnvTraceData ProjectionData; // 0x238(0x30)
};

// Class AIModule.EnvQueryTest_Random
// Size: 0x238 (Inherited: 0x238)
struct UEnvQueryTest_Random : UEnvQueryTest {
};

// Class AIModule.EnvQueryTest_Trace
// Size: 0x330 (Inherited: 0x238)
struct UEnvQueryTest_Trace : UEnvQueryTest {
	struct FEnvTraceData TraceData; // 0x238(0x30)
	struct FAIDataProviderBoolValue TraceFromContext; // 0x268(0x40)
	struct FAIDataProviderFloatValue ItemHeightOffset; // 0x2a8(0x40)
	struct FAIDataProviderFloatValue ContextHeightOffset; // 0x2e8(0x40)
	struct UEnvQueryContext* Context; // 0x328(0x08)
};

// Class AIModule.EnvQueryTest_Volume
// Size: 0x250 (Inherited: 0x238)
struct UEnvQueryTest_Volume : UEnvQueryTest {
	struct UEnvQueryContext* VolumeContext; // 0x238(0x08)
	struct AVolume* VolumeClass; // 0x240(0x08)
	char bDoComplexVolumeTest : 1; // 0x248(0x01)
	char pad_248_1 : 7; // 0x248(0x01)
	char pad_249[0x7]; // 0x249(0x07)
};

// Class AIModule.EnvQueryTypes
// Size: 0x30 (Inherited: 0x30)
struct UEnvQueryTypes : UObject {
};

// Class AIModule.EQSQueryResultSourceInterface
// Size: 0x30 (Inherited: 0x30)
struct UEQSQueryResultSourceInterface : UInterface {
};

// Class AIModule.EQSRenderingComponent
// Size: 0x580 (Inherited: 0x550)
struct UEQSRenderingComponent : UPrimitiveComponent {
	char pad_550[0x30]; // 0x550(0x30)
};

// Class AIModule.EQSTestingPawn
// Size: 0x710 (Inherited: 0x670)
struct AEQSTestingPawn : ACharacter {
	struct UEnvQuery* QueryTemplate; // 0x670(0x08)
	struct TArray<struct FEnvNamedValue> QueryParams; // 0x678(0x10)
	struct TArray<struct FAIDynamicParam> QueryConfig; // 0x688(0x10)
	float TimeLimitPerStep; // 0x698(0x04)
	int32_t StepToDebugDraw; // 0x69c(0x04)
	enum class EEnvQueryHightlightMode HighlightMode; // 0x6a0(0x01)
	char pad_6A1[0x3]; // 0x6a1(0x03)
	char bDrawLabels : 1; // 0x6a4(0x01)
	char bDrawFailedItems : 1; // 0x6a4(0x01)
	char bReRunQueryOnlyOnFinishedMove : 1; // 0x6a4(0x01)
	char bShouldBeVisibleInGame : 1; // 0x6a4(0x01)
	char bTickDuringGame : 1; // 0x6a4(0x01)
	char pad_6A4_5 : 3; // 0x6a4(0x01)
	char pad_6A5[0x3]; // 0x6a5(0x03)
	enum class EEnvQueryRunMode QueryingMode; // 0x6a8(0x01)
	char pad_6A9[0x7]; // 0x6a9(0x07)
	struct FNavAgentProperties NavAgentProperties; // 0x6b0(0x38)
	char pad_6E8[0x28]; // 0x6e8(0x28)
};

// Class AIModule.GenericTeamAgentInterface
// Size: 0x30 (Inherited: 0x30)
struct UGenericTeamAgentInterface : UInterface {
};

// Class AIModule.GridPathAIController
// Size: 0x4f0 (Inherited: 0x4f0)
struct AGridPathAIController : AAIController {
};

// Class AIModule.GridPathFollowingComponent
// Size: 0x2b8 (Inherited: 0x288)
struct UGridPathFollowingComponent : UPathFollowingComponent {
	struct UNavLocalGridManager* GridManager; // 0x288(0x08)
	char pad_290[0x28]; // 0x290(0x28)
};

// Class AIModule.NavFilter_AIControllerDefault
// Size: 0x50 (Inherited: 0x50)
struct UNavFilter_AIControllerDefault : UNavigationQueryFilter {
};

// Class AIModule.NavLinkProxy
// Size: 0x420 (Inherited: 0x3d0)
struct ANavLinkProxy : AActor {
	char pad_3D0[0x10]; // 0x3d0(0x10)
	struct TArray<struct FNavigationLink> PointLinks; // 0x3e0(0x10)
	struct TArray<struct FNavigationSegmentLink> SegmentLinks; // 0x3f0(0x10)
	struct UNavLinkCustomComponent* SmartLinkComp; // 0x400(0x08)
	bool bSmartLinkIsRelevant; // 0x408(0x01)
	char pad_409[0x7]; // 0x409(0x07)
	struct FMulticastInlineDelegate OnSmartLinkReached; // 0x410(0x10)
};

// Class AIModule.NavLocalGridManager
// Size: 0x60 (Inherited: 0x30)
struct UNavLocalGridManager : UObject {
	char pad_30[0x30]; // 0x30(0x30)
};

// Class AIModule.PathFollowingManager
// Size: 0x30 (Inherited: 0x30)
struct UPathFollowingManager : UObject {
};

// Class AIModule.PawnAction
// Size: 0xa0 (Inherited: 0x30)
struct UPawnAction : UObject {
	struct UPawnAction* ChildAction; // 0x30(0x08)
	struct UPawnAction* ParentAction; // 0x38(0x08)
	struct UPawnActionsComponent* OwnerComponent; // 0x40(0x08)
	struct UObject* Instigator; // 0x48(0x08)
	struct UBrainComponent* BrainComp; // 0x50(0x08)
	char pad_58[0x30]; // 0x58(0x30)
	char bAllowNewSameClassInstance : 1; // 0x88(0x01)
	char bReplaceActiveSameClassInstance : 1; // 0x88(0x01)
	char bShouldPauseMovement : 1; // 0x88(0x01)
	char bAlwaysNotifyOnFinished : 1; // 0x88(0x01)
	char pad_88_4 : 4; // 0x88(0x01)
	char pad_89[0x17]; // 0x89(0x17)
};

// Class AIModule.PawnAction_BlueprintBase
// Size: 0xa0 (Inherited: 0xa0)
struct UPawnAction_BlueprintBase : UPawnAction {
};

// Class AIModule.PawnAction_Move
// Size: 0xf0 (Inherited: 0xa0)
struct UPawnAction_Move : UPawnAction {
	struct AActor* GoalActor; // 0xa0(0x08)
	struct FVector GoalLocation; // 0xa8(0x0c)
	float AcceptableRadius; // 0xb4(0x04)
	struct UNavigationQueryFilter* FilterClass; // 0xb8(0x08)
	char bAllowStrafe : 1; // 0xc0(0x01)
	char bFinishOnOverlap : 1; // 0xc0(0x01)
	char bUsePathfinding : 1; // 0xc0(0x01)
	char bAllowPartialPath : 1; // 0xc0(0x01)
	char bProjectGoalToNavigation : 1; // 0xc0(0x01)
	char bUpdatePathToGoal : 1; // 0xc0(0x01)
	char bAbortChildActionOnPathChange : 1; // 0xc0(0x01)
	char pad_C0_7 : 1; // 0xc0(0x01)
	char pad_C1[0x2f]; // 0xc1(0x2f)
};

// Class AIModule.PawnAction_Repeat
// Size: 0xc0 (Inherited: 0xa0)
struct UPawnAction_Repeat : UPawnAction {
	struct UPawnAction* ActionToRepeat; // 0xa0(0x08)
	struct UPawnAction* RecentActionCopy; // 0xa8(0x08)
	enum class EPawnActionFailHandling ChildFailureHandlingMode; // 0xb0(0x01)
	char pad_B1[0xf]; // 0xb1(0x0f)
};

// Class AIModule.PawnAction_Sequence
// Size: 0xc8 (Inherited: 0xa0)
struct UPawnAction_Sequence : UPawnAction {
	struct TArray<struct UPawnAction*> ActionSequence; // 0xa0(0x10)
	enum class EPawnActionFailHandling ChildFailureHandlingMode; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)
	struct UPawnAction* RecentActionCopy; // 0xb8(0x08)
	char pad_C0[0x8]; // 0xc0(0x08)
};

// Class AIModule.PawnAction_Wait
// Size: 0xb0 (Inherited: 0xa0)
struct UPawnAction_Wait : UPawnAction {
	float TimeToWait; // 0xa0(0x04)
	char pad_A4[0xc]; // 0xa4(0x0c)
};

// Class AIModule.PawnActionsComponent
// Size: 0x120 (Inherited: 0xe8)
struct UPawnActionsComponent : UActorComponent {
	struct APawn* ControlledPawn; // 0xe8(0x08)
	struct TArray<struct FPawnActionStack> ActionStacks; // 0xf0(0x10)
	struct TArray<struct FPawnActionEvent> ActionEvents; // 0x100(0x10)
	struct UPawnAction* CurrentAction; // 0x110(0x08)
	char pad_118[0x8]; // 0x118(0x08)
};

// Class AIModule.PawnSensingComponent
// Size: 0x130 (Inherited: 0xe8)
struct UPawnSensingComponent : UActorComponent {
	float HearingThreshold; // 0xe8(0x04)
	float LOSHearingThreshold; // 0xec(0x04)
	float SightRadius; // 0xf0(0x04)
	float SensingInterval; // 0xf4(0x04)
	float HearingMaxSoundAge; // 0xf8(0x04)
	char bEnableSensingUpdates : 1; // 0xfc(0x01)
	char bOnlySensePlayers : 1; // 0xfc(0x01)
	char bSeePawns : 1; // 0xfc(0x01)
	char bHearNoises : 1; // 0xfc(0x01)
	char pad_FC_4 : 4; // 0xfc(0x01)
	char pad_FD[0xb]; // 0xfd(0x0b)
	struct FMulticastInlineDelegate OnSeePawn; // 0x108(0x10)
	struct FMulticastInlineDelegate OnHearNoise; // 0x118(0x10)
	float PeripheralVisionAngle; // 0x128(0x04)
	float PeripheralVisionCosine; // 0x12c(0x04)
};

// Class AIModule.VisualLoggerExtension
// Size: 0x30 (Inherited: 0x30)
struct UVisualLoggerExtension : UObject {
};

