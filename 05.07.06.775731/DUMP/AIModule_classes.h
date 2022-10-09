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

	void SetSenseEnabled(struct UAISense* SenseClass, bool bEnable); // Function AIModule.AIPerceptionComponent.SetSenseEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x5784780
	void RequestStimuliListenerUpdate(); // Function AIModule.AIPerceptionComponent.RequestStimuliListenerUpdate // (Final|Native|Public|BlueprintCallable) // @ game+0x5784430
	void OnOwnerEndPlay(struct AActor* Actor, enum class EEndPlayReason EndPlayReason); // Function AIModule.AIPerceptionComponent.OnOwnerEndPlay // (Final|Native|Public) // @ game+0x5784250
	void GetPerceivedHostileActorsBySense(struct UAISense* SenseToUse, struct TArray<struct AActor*>& OutActors); // Function AIModule.AIPerceptionComponent.GetPerceivedHostileActorsBySense // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x57836a0
	void GetPerceivedHostileActors(struct TArray<struct AActor*>& OutActors); // Function AIModule.AIPerceptionComponent.GetPerceivedHostileActors // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x57835f0
	void GetPerceivedActors(struct UAISense* SenseToUse, struct TArray<struct AActor*>& OutActors); // Function AIModule.AIPerceptionComponent.GetPerceivedActors // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x57834f0
	void GetKnownPerceivedActors(struct UAISense* SenseToUse, struct TArray<struct AActor*>& OutActors); // Function AIModule.AIPerceptionComponent.GetKnownPerceivedActors // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x5783310
	void GetCurrentlyPerceivedActors(struct UAISense* SenseToUse, struct TArray<struct AActor*>& OutActors); // Function AIModule.AIPerceptionComponent.GetCurrentlyPerceivedActors // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x5783060
	bool GetActorsPerception(struct AActor* Actor, struct FActorPerceptionBlueprintInfo& Info); // Function AIModule.AIPerceptionComponent.GetActorsPerception // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5782cb0
	void ForgetAll(); // Function AIModule.AIPerceptionComponent.ForgetAll // (Final|Native|Public|BlueprintCallable) // @ game+0x5782be0
	bool CanActorBePerceived(struct AActor* Actor); // Function AIModule.AIPerceptionComponent.CanActorBePerceived // (Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x2ec9c00
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

	void ReportPerceptionEvent(struct UObject* WorldContextObject, struct UAISenseEvent* PerceptionEvent); // Function AIModule.AIPerceptionSystem.ReportPerceptionEvent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x578c350
	void ReportEvent(struct UAISenseEvent* PerceptionEvent); // Function AIModule.AIPerceptionSystem.ReportEvent // (Final|Native|Public|BlueprintCallable) // @ game+0x578c0d0
	bool RegisterPerceptionStimuliSource(struct UObject* WorldContextObject, struct UAISense* Sense, struct AActor* Target); // Function AIModule.AIPerceptionSystem.RegisterPerceptionStimuliSource // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x578bdc0
	void OnPerceptionStimuliSourceEndPlay(struct AActor* Actor, enum class EEndPlayReason EndPlayReason); // Function AIModule.AIPerceptionSystem.OnPerceptionStimuliSourceEndPlay // (Final|Native|Protected) // @ game+0x578bc60
	struct UAISense* GetSenseClassForStimulus(struct UObject* WorldContextObject, struct FAIStimulus& Stimulus); // Function AIModule.AIPerceptionSystem.GetSenseClassForStimulus // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x578bb10
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

	void AILoggingVerbose(); // Function AIModule.AISystem.AILoggingVerbose // (Exec|Native|Public) // @ game+0x2d4a500
	void AIIgnorePlayers(); // Function AIModule.AISystem.AIIgnorePlayers // (Exec|Native|Public) // @ game+0x2db7790
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

	bool UseBlackboard(struct UBlackboardData* BlackboardAsset, struct UBlackboardComponent*& BlackboardComponent); // Function AIModule.AIController.UseBlackboard // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5784da0
	void UnclaimTaskResource(struct UGameplayTaskResource* ResourceClass); // Function AIModule.AIController.UnclaimTaskResource // (Final|Native|Public|BlueprintCallable) // @ game+0x5784c00
	void SetPathFollowingComponent(struct UPathFollowingComponent* NewPFComponent); // Function AIModule.AIController.SetPathFollowingComponent // (Final|Native|Public|BlueprintCallable) // @ game+0x57846f0
	void SetMoveBlockDetection(bool bEnable); // Function AIModule.AIController.SetMoveBlockDetection // (Final|Native|Public|BlueprintCallable) // @ game+0x5784660
	bool RunBehaviorTree(struct UBehaviorTree* BTAsset); // Function AIModule.AIController.RunBehaviorTree // (Native|Public|BlueprintCallable) // @ game+0x5784450
	struct FRotator OverrideControlRotation(float DeltaTime, struct FRotator NewControlRotation); // Function AIModule.AIController.OverrideControlRotation // (Native|Event|Protected|HasDefaults|BlueprintEvent) // @ game+0x5784320
	void OnUsingBlackBoard(struct UBlackboardComponent* BlackboardComp, struct UBlackboardData* BlackboardAsset); // Function AIModule.AIController.OnUsingBlackBoard // (Event|Protected|BlueprintEvent) // @ game+0x3511190
	void OnGameplayTaskResourcesClaimed(struct FGameplayResourceSet NewlyClaimed, struct FGameplayResourceSet FreshlyReleased); // Function AIModule.AIController.OnGameplayTaskResourcesClaimed // (Native|Public) // @ game+0x57840a0
	enum class EPathFollowingRequestResult MoveToLocation(struct FVector& Dest, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bProjectDestinationToNavigation, bool bCanStrafe, struct UNavigationQueryFilter* FilterClass, bool bAllowPartialPath); // Function AIModule.AIController.MoveToLocation // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x5783e10
	enum class EPathFollowingRequestResult MoveToActor(struct AActor* Goal, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bCanStrafe, struct UNavigationQueryFilter* FilterClass, bool bAllowPartialPath); // Function AIModule.AIController.MoveToActor // (Final|Native|Public|BlueprintCallable) // @ game+0x5783bd0
	void K2_SetFocus(struct AActor* NewFocus); // Function AIModule.AIController.K2_SetFocus // (Final|Native|Public|BlueprintCallable) // @ game+0x5783a30
	void K2_SetFocalPoint(struct FVector FP); // Function AIModule.AIController.K2_SetFocalPoint // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x57839a0
	void K2_ClearFocus(); // Function AIModule.AIController.K2_ClearFocus // (Final|Native|Public|BlueprintCallable) // @ game+0x5783980
	bool HasPartialPath(); // Function AIModule.AIController.HasPartialPath // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x57837a0
	struct UPathFollowingComponent* GetPathFollowingComponent(); // Function AIModule.AIController.GetPathFollowingComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x57834d0
	enum class EPathFollowingStatus GetMoveStatus(); // Function AIModule.AIController.GetMoveStatus // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5783410
	struct FVector GetImmediateMoveDestination(); // Function AIModule.AIController.GetImmediateMoveDestination // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x57832d0
	struct AActor* GetFocusActor(); // Function AIModule.AIController.GetFocusActor // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x57832a0
	struct FVector GetFocalPointOnActor(struct AActor* Actor); // Function AIModule.AIController.GetFocalPointOnActor // (Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x57831e0
	struct FVector GetFocalPoint(); // Function AIModule.AIController.GetFocalPoint // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x57831a0
	struct FVector GetFinalMoveDestination(); // Function AIModule.AIController.GetFinalMoveDestination // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x5783160
	struct UAIPerceptionComponent* GetAIPerceptionComponent(); // Function AIModule.AIController.GetAIPerceptionComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x5782c90
	void ClaimTaskResource(struct UGameplayTaskResource* ResourceClass); // Function AIModule.AIController.ClaimTaskResource // (Final|Native|Public|BlueprintCallable) // @ game+0x5782970
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

	void OnNavDataRegistered(struct ANavigationData* NavData); // Function AIModule.PathFollowingComponent.OnNavDataRegistered // (Final|Native|Protected) // @ game+0x57beff0
	void OnActorBump(struct AActor* SelfActor, struct AActor* OtherActor, struct FVector NormalImpulse, struct FHitResult& Hit); // Function AIModule.PathFollowingComponent.OnActorBump // (Native|Public|HasOutParms|HasDefaults) // @ game+0x57bee40
	struct FVector GetPathDestination(); // Function AIModule.PathFollowingComponent.GetPathDestination // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x57beab0
	struct TArray<struct FVector> GetPathCorridorPoints(); // Function AIModule.PathFollowingComponent.GetPathCorridorPoints // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x57bea20
	enum class EPathFollowingAction GetPathActionType(); // Function AIModule.PathFollowingComponent.GetPathActionType // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x57be9f0
	int32_t FindClosestPathCorridorPoint(); // Function AIModule.PathFollowingComponent.FindClosestPathCorridorPoint // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x57be930
};

// Class AIModule.CrowdFollowingComponent
// Size: 0x2d0 (Inherited: 0x288)
struct UCrowdFollowingComponent : UPathFollowingComponent {
	char pad_288[0x18]; // 0x288(0x18)
	struct FVector CrowdAgentMoveDirection; // 0x2a0(0x0c)
	char pad_2AC[0x24]; // 0x2ac(0x24)

	void SuspendCrowdSteering(bool bSuspend); // Function AIModule.CrowdFollowingComponent.SuspendCrowdSteering // (Native|Public|BlueprintCallable) // @ game+0x57a75c0
};

// Class AIModule.AIAsyncTaskBlueprintProxy
// Size: 0x70 (Inherited: 0x30)
struct UAIAsyncTaskBlueprintProxy : UObject {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFail; // 0x40(0x10)
	char pad_50[0x20]; // 0x50(0x20)

	void OnMoveCompleted(struct FAIRequestID RequestID, enum class EPathFollowingResult MovementResult); // Function AIModule.AIAsyncTaskBlueprintProxy.OnMoveCompleted // (Final|Native|Public) // @ game+0x5784180
};

// Class AIModule.AIBlueprintHelperLibrary
// Size: 0x30 (Inherited: 0x30)
struct UAIBlueprintHelperLibrary : UBlueprintFunctionLibrary {

	void UnlockAIResourcesWithAnimation(struct UAnimInstance* AnimInstance, bool bUnlockMovement, bool UnlockAILogic); // Function AIModule.AIBlueprintHelperLibrary.UnlockAIResourcesWithAnimation // (Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable) // @ game+0x5784c90
	struct APawn* SpawnAIFromClass(struct UObject* WorldContextObject, struct APawn* PawnClass, struct UBehaviorTree* BehaviorTree, struct FVector Location, struct FRotator Rotation, bool bNoCollisionFail, struct AActor* Owner); // Function AIModule.AIBlueprintHelperLibrary.SpawnAIFromClass // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x57849d0
	void SimpleMoveToLocation(struct AController* Controller, struct FVector& Goal); // Function AIModule.AIBlueprintHelperLibrary.SimpleMoveToLocation // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x5784910
	void SimpleMoveToActor(struct AController* Controller, struct AActor* Goal); // Function AIModule.AIBlueprintHelperLibrary.SimpleMoveToActor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5784850
	void SendAIMessage(struct APawn* Target, struct FName Message, struct UObject* MessageSource, bool bSuccess); // Function AIModule.AIBlueprintHelperLibrary.SendAIMessage // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5784500
	void LockAIResourcesWithAnimation(struct UAnimInstance* AnimInstance, bool bLockMovement, bool LockAILogic); // Function AIModule.AIBlueprintHelperLibrary.LockAIResourcesWithAnimation // (Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable) // @ game+0x5783ac0
	bool IsValidAIRotation(struct FRotator Rotation); // Function AIModule.AIBlueprintHelperLibrary.IsValidAIRotation // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x57838f0
	bool IsValidAILocation(struct FVector Location); // Function AIModule.AIBlueprintHelperLibrary.IsValidAILocation // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x5783860
	bool IsValidAIDirection(struct FVector DirectionVector); // Function AIModule.AIBlueprintHelperLibrary.IsValidAIDirection // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x57837d0
	int32_t GetNextNavLinkIndex(struct AController* Controller); // Function AIModule.AIBlueprintHelperLibrary.GetNextNavLinkIndex // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x5783440
	struct TArray<struct FVector> GetCurrentPathPoints(struct AController* Controller); // Function AIModule.AIBlueprintHelperLibrary.GetCurrentPathPoints // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x5782f70
	int32_t GetCurrentPathIndex(struct AController* Controller); // Function AIModule.AIBlueprintHelperLibrary.GetCurrentPathIndex // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x5782ee0
	struct UNavigationPath* GetCurrentPath(struct AController* Controller); // Function AIModule.AIBlueprintHelperLibrary.GetCurrentPath // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x5782e50
	struct UBlackboardComponent* GetBlackboard(struct AActor* Target); // Function AIModule.AIBlueprintHelperLibrary.GetBlackboard // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x5782dc0
	struct AAIController* GetAIController(struct AActor* ControlledActor); // Function AIModule.AIBlueprintHelperLibrary.GetAIController // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x5782c00
	struct UAIAsyncTaskBlueprintProxy* CreateMoveToProxyObject(struct UObject* WorldContextObject, struct APawn* Pawn, struct FVector Destination, struct AActor* TargetActor, float AcceptanceRadius, bool bStopOnOverlap); // Function AIModule.AIBlueprintHelperLibrary.CreateMoveToProxyObject // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x5782a00
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

	void UnregisterFromSense(struct UAISense* SenseClass); // Function AIModule.AIPerceptionStimuliSourceComponent.UnregisterFromSense // (Final|Native|Public|BlueprintCallable) // @ game+0x578c650
	void UnregisterFromPerceptionSystem(); // Function AIModule.AIPerceptionStimuliSourceComponent.UnregisterFromPerceptionSystem // (Final|Native|Public|BlueprintCallable) // @ game+0x578c630
	void RegisterWithPerceptionSystem(); // Function AIModule.AIPerceptionStimuliSourceComponent.RegisterWithPerceptionSystem // (Final|Native|Public|BlueprintCallable) // @ game+0x578bec0
	void RegisterForSense(struct UAISense* SenseClass); // Function AIModule.AIPerceptionStimuliSourceComponent.RegisterForSense // (Final|Native|Public|BlueprintCallable) // @ game+0x578bd30
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

	float OnUpdate(struct TArray<struct UAISenseEvent*>& EventsToProcess); // Function AIModule.AISense_Blueprint.OnUpdate // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x3511190
	void OnListenerUpdated(struct AActor* ActorListener, struct UAIPerceptionComponent* PerceptionComponent); // Function AIModule.AISense_Blueprint.OnListenerUpdated // (Event|Public|BlueprintEvent) // @ game+0x3511190
	void OnListenerUnregistered(struct AActor* ActorListener, struct UAIPerceptionComponent* PerceptionComponent); // Function AIModule.AISense_Blueprint.OnListenerUnregistered // (Event|Public|BlueprintEvent) // @ game+0x3511190
	void OnListenerRegistered(struct AActor* ActorListener, struct UAIPerceptionComponent* PerceptionComponent); // Function AIModule.AISense_Blueprint.OnListenerRegistered // (Event|Public|BlueprintEvent) // @ game+0x3511190
	void K2_OnNewPawn(struct APawn* NewPawn); // Function AIModule.AISense_Blueprint.K2_OnNewPawn // (Event|Public|BlueprintEvent) // @ game+0x3511190
	void GetAllListenerComponents(struct TArray<struct UAIPerceptionComponent*>& ListenerComponents); // Function AIModule.AISense_Blueprint.GetAllListenerComponents // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x578ba60
	void GetAllListenerActors(struct TArray<struct AActor*>& ListenerActors); // Function AIModule.AISense_Blueprint.GetAllListenerActors // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x578b9b0
};

// Class AIModule.AISense_Damage
// Size: 0xa0 (Inherited: 0x90)
struct UAISense_Damage : UAISense {
	struct TArray<struct FAIDamageEvent> RegisteredEvents; // 0x90(0x10)

	void ReportDamageEvent(struct UObject* WorldContextObject, struct AActor* DamagedActor, struct AActor* Instigator, float DamageAmount, struct FVector EventLocation, struct FVector HitLocation); // Function AIModule.AISense_Damage.ReportDamageEvent // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x578bee0
};

// Class AIModule.AISense_Hearing
// Size: 0xf8 (Inherited: 0x90)
struct UAISense_Hearing : UAISense {
	struct TArray<struct FAINoiseEvent> NoiseEvents; // 0x90(0x10)
	float SpeedOfSoundSq; // 0xa0(0x04)
	char pad_A4[0x54]; // 0xa4(0x54)

	void ReportNoiseEvent(struct UObject* WorldContextObject, struct FVector NoiseLocation, float Loudness, struct AActor* Instigator, float MaxRange, struct FName Tag); // Function AIModule.AISense_Hearing.ReportNoiseEvent // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x578c160
};

// Class AIModule.AISense_Prediction
// Size: 0xa0 (Inherited: 0x90)
struct UAISense_Prediction : UAISense {
	struct TArray<struct FAIPredictionEvent> RegisteredEvents; // 0x90(0x10)

	void RequestPawnPredictionEvent(struct APawn* Requestor, struct AActor* PredictedActor, float PredictionTime); // Function AIModule.AISense_Prediction.RequestPawnPredictionEvent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x578c520
	void RequestControllerPredictionEvent(struct AAIController* Requestor, struct AActor* PredictedActor, float PredictionTime); // Function AIModule.AISense_Prediction.RequestControllerPredictionEvent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x578c410
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

	struct UAITask_MoveTo* AIMoveTo(struct AAIController* Controller, struct FVector GoalLocation, struct AActor* GoalActor, float AcceptanceRadius, enum class EAIOptionFlag StopOnOverlap, enum class EAIOptionFlag AcceptPartialPath, bool bUsePathfinding, bool bLockAILogic, bool bUseContinuosGoalTracking, enum class EAIOptionFlag ProjectGoalOnNavigation); // Function AIModule.AITask_MoveTo.AIMoveTo // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x5796f10
};

// Class AIModule.AITask_RunEQS
// Size: 0xf8 (Inherited: 0x78)
struct UAITask_RunEQS : UAITask {
	char pad_78[0x80]; // 0x78(0x80)

	struct UAITask_RunEQS* RunEQS(struct AAIController* Controller, struct UEnvQuery* QueryTemplate); // Function AIModule.AITask_RunEQS.RunEQS // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5797e90
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

	void StopLogic(struct FString Reason); // Function AIModule.BrainComponent.StopLogic // (Native|Public|BlueprintCallable) // @ game+0x57a1e00
	void StartLogic(); // Function AIModule.BrainComponent.StartLogic // (Native|Public|BlueprintCallable) // @ game+0x2ea7740
	void RestartLogic(); // Function AIModule.BrainComponent.RestartLogic // (Native|Public|BlueprintCallable) // @ game+0x30ab700
	bool IsRunning(); // Function AIModule.BrainComponent.IsRunning // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x57a0fb0
	bool IsPaused(); // Function AIModule.BrainComponent.IsPaused // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2e8fba0
};

// Class AIModule.BehaviorTreeComponent
// Size: 0x2c8 (Inherited: 0x140)
struct UBehaviorTreeComponent : UBrainComponent {
	char pad_140[0x20]; // 0x140(0x20)
	struct TArray<struct UBTNode*> NodeInstances; // 0x160(0x10)
	char pad_170[0x140]; // 0x170(0x140)
	struct UBehaviorTree* DefaultBehaviorTreeAsset; // 0x2b0(0x08)
	char pad_2B8[0x10]; // 0x2b8(0x10)

	void SetDynamicSubtree(struct FGameplayTag InjectTag, struct UBehaviorTree* BehaviorAsset); // Function AIModule.BehaviorTreeComponent.SetDynamicSubtree // (Native|Public|BlueprintCallable) // @ game+0x5797f60
	float GetTagCooldownEndTime(struct FGameplayTag CooldownTag); // Function AIModule.BehaviorTreeComponent.GetTagCooldownEndTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x57975e0
	void AddCooldownTagDuration(struct FGameplayTag CooldownTag, float CooldownDuration, bool bAddToExistingDuration); // Function AIModule.BehaviorTreeComponent.AddCooldownTagDuration // (Final|Native|Public|BlueprintCallable) // @ game+0x5797210
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

	struct UBlackboardData* GetBlackboardAsset(); // Function AIModule.BlackboardAssetProvider.GetBlackboardAsset // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2db6a50
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

	void SetValueAsVector(struct FName& KeyName, struct FVector VectorValue); // Function AIModule.BlackboardComponent.SetValueAsVector // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x5798950
	void SetValueAsString(struct FName& KeyName, struct FString StringValue); // Function AIModule.BlackboardComponent.SetValueAsString // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x57987f0
	void SetValueAsRotator(struct FName& KeyName, struct FRotator VectorValue); // Function AIModule.BlackboardComponent.SetValueAsRotator // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x57986f0
	void SetValueAsObject(struct FName& KeyName, struct UObject* ObjectValue); // Function AIModule.BlackboardComponent.SetValueAsObject // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5798600
	void SetValueAsName(struct FName& KeyName, struct FName NameValue); // Function AIModule.BlackboardComponent.SetValueAsName // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5798500
	void SetValueAsInt(struct FName& KeyName, int32_t IntValue); // Function AIModule.BlackboardComponent.SetValueAsInt // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5798410
	void SetValueAsFloat(struct FName& KeyName, float FloatValue); // Function AIModule.BlackboardComponent.SetValueAsFloat // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5798320
	void SetValueAsEnum(struct FName& KeyName, char EnumValue); // Function AIModule.BlackboardComponent.SetValueAsEnum // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5798230
	void SetValueAsClass(struct FName& KeyName, struct UObject* ClassValue); // Function AIModule.BlackboardComponent.SetValueAsClass // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5798140
	void SetValueAsBool(struct FName& KeyName, bool BoolValue); // Function AIModule.BlackboardComponent.SetValueAsBool // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5798050
	bool IsVectorValueSet(struct FName& KeyName); // Function AIModule.BlackboardComponent.IsVectorValueSet // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x5797de0
	struct FVector GetValueAsVector(struct FName& KeyName); // Function AIModule.BlackboardComponent.GetValueAsVector // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x5797d20
	struct FString GetValueAsString(struct FName& KeyName); // Function AIModule.BlackboardComponent.GetValueAsString // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x5797c30
	struct FRotator GetValueAsRotator(struct FName& KeyName); // Function AIModule.BlackboardComponent.GetValueAsRotator // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x5797b70
	struct UObject* GetValueAsObject(struct FName& KeyName); // Function AIModule.BlackboardComponent.GetValueAsObject // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x5797ac0
	struct FName GetValueAsName(struct FName& KeyName); // Function AIModule.BlackboardComponent.GetValueAsName // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x5797a00
	int32_t GetValueAsInt(struct FName& KeyName); // Function AIModule.BlackboardComponent.GetValueAsInt // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x5797950
	float GetValueAsFloat(struct FName& KeyName); // Function AIModule.BlackboardComponent.GetValueAsFloat // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x57978a0
	char GetValueAsEnum(struct FName& KeyName); // Function AIModule.BlackboardComponent.GetValueAsEnum // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x57977f0
	struct UObject* GetValueAsClass(struct FName& KeyName); // Function AIModule.BlackboardComponent.GetValueAsClass // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x5797740
	bool GetValueAsBool(struct FName& KeyName); // Function AIModule.BlackboardComponent.GetValueAsBool // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x5797690
	bool GetRotationFromEntry(struct FName& KeyName, struct FRotator& ResultRotation); // Function AIModule.BlackboardComponent.GetRotationFromEntry // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x57974e0
	bool GetLocationFromEntry(struct FName& KeyName, struct FVector& ResultLocation); // Function AIModule.BlackboardComponent.GetLocationFromEntry // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x57973e0
	void ClearValue(struct FName& KeyName); // Function AIModule.BlackboardComponent.ClearValue // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5797340
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

	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // Function AIModule.BTDecorator_BlueprintBase.ReceiveTickAI // (Event|Protected|BlueprintEvent) // @ game+0x3511190
	void ReceiveTick(struct AActor* OwnerActor, float DeltaSeconds); // Function AIModule.BTDecorator_BlueprintBase.ReceiveTick // (Event|Protected|BlueprintEvent) // @ game+0x3511190
	void ReceiveObserverDeactivatedAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivatedAI // (Event|Protected|BlueprintEvent) // @ game+0x3511190
	void ReceiveObserverDeactivated(struct AActor* OwnerActor); // Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivated // (Event|Protected|BlueprintEvent) // @ game+0x3511190
	void ReceiveObserverActivatedAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivatedAI // (Event|Protected|BlueprintEvent) // @ game+0x3511190
	void ReceiveObserverActivated(struct AActor* OwnerActor); // Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivated // (Event|Protected|BlueprintEvent) // @ game+0x3511190
	void ReceiveExecutionStartAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStartAI // (Event|Protected|BlueprintEvent) // @ game+0x3511190
	void ReceiveExecutionStart(struct AActor* OwnerActor); // Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStart // (Event|Protected|BlueprintEvent) // @ game+0x3511190
	void ReceiveExecutionFinishAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, enum class EBTNodeResult NodeResult); // Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinishAI // (Event|Protected|BlueprintEvent) // @ game+0x3511190
	void ReceiveExecutionFinish(struct AActor* OwnerActor, enum class EBTNodeResult NodeResult); // Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinish // (Event|Protected|BlueprintEvent) // @ game+0x3511190
	bool PerformConditionCheckAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function AIModule.BTDecorator_BlueprintBase.PerformConditionCheckAI // (Event|Protected|BlueprintEvent) // @ game+0x3511190
	bool PerformConditionCheck(struct AActor* OwnerActor); // Function AIModule.BTDecorator_BlueprintBase.PerformConditionCheck // (Event|Protected|BlueprintEvent) // @ game+0x3511190
	bool IsDecoratorObserverActive(); // Function AIModule.BTDecorator_BlueprintBase.IsDecoratorObserverActive // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x57a0f80
	bool IsDecoratorExecutionActive(); // Function AIModule.BTDecorator_BlueprintBase.IsDecoratorExecutionActive // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x57a0f50
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

	void StopUsingExternalEvent(struct UBTNode* NodeOwner); // Function AIModule.BTFunctionLibrary.StopUsingExternalEvent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x2d486e0
	void StartUsingExternalEvent(struct UBTNode* NodeOwner, struct AActor* OwningActor); // Function AIModule.BTFunctionLibrary.StartUsingExternalEvent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x30646f0
	void SetBlackboardValueAsVector(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, struct FVector Value); // Function AIModule.BTFunctionLibrary.SetBlackboardValueAsVector // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x57a1ca0
	void SetBlackboardValueAsString(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, struct FString Value); // Function AIModule.BTFunctionLibrary.SetBlackboardValueAsString // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x57a1af0
	void SetBlackboardValueAsRotator(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, struct FRotator Value); // Function AIModule.BTFunctionLibrary.SetBlackboardValueAsRotator // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x57a1990
	void SetBlackboardValueAsObject(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, struct UObject* Value); // Function AIModule.BTFunctionLibrary.SetBlackboardValueAsObject // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x57a1830
	void SetBlackboardValueAsName(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, struct FName Value); // Function AIModule.BTFunctionLibrary.SetBlackboardValueAsName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x57a16d0
	void SetBlackboardValueAsInt(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, int32_t Value); // Function AIModule.BTFunctionLibrary.SetBlackboardValueAsInt // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x57a1570
	void SetBlackboardValueAsFloat(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, float Value); // Function AIModule.BTFunctionLibrary.SetBlackboardValueAsFloat // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x57a1410
	void SetBlackboardValueAsEnum(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, char Value); // Function AIModule.BTFunctionLibrary.SetBlackboardValueAsEnum // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x57a12b0
	void SetBlackboardValueAsClass(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, struct UObject* Value); // Function AIModule.BTFunctionLibrary.SetBlackboardValueAsClass // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x57a1150
	void SetBlackboardValueAsBool(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, bool Value); // Function AIModule.BTFunctionLibrary.SetBlackboardValueAsBool // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x57a0ff0
	struct UBlackboardComponent* GetOwnersBlackboard(struct UBTNode* NodeOwner); // Function AIModule.BTFunctionLibrary.GetOwnersBlackboard // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x57a0ec0
	struct UBehaviorTreeComponent* GetOwnerComponent(struct UBTNode* NodeOwner); // Function AIModule.BTFunctionLibrary.GetOwnerComponent // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x57a0e30
	struct FVector GetBlackboardValueAsVector(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key); // Function AIModule.BTFunctionLibrary.GetBlackboardValueAsVector // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x57a0d00
	struct FString GetBlackboardValueAsString(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key); // Function AIModule.BTFunctionLibrary.GetBlackboardValueAsString // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x57a0ba0
	struct FRotator GetBlackboardValueAsRotator(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key); // Function AIModule.BTFunctionLibrary.GetBlackboardValueAsRotator // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x57a0a70
	struct UObject* GetBlackboardValueAsObject(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key); // Function AIModule.BTFunctionLibrary.GetBlackboardValueAsObject // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x57a0960
	struct FName GetBlackboardValueAsName(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key); // Function AIModule.BTFunctionLibrary.GetBlackboardValueAsName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x57a0830
	int32_t GetBlackboardValueAsInt(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key); // Function AIModule.BTFunctionLibrary.GetBlackboardValueAsInt // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x57a0720
	float GetBlackboardValueAsFloat(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key); // Function AIModule.BTFunctionLibrary.GetBlackboardValueAsFloat // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x57a0610
	char GetBlackboardValueAsEnum(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key); // Function AIModule.BTFunctionLibrary.GetBlackboardValueAsEnum // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x57a0500
	struct UObject* GetBlackboardValueAsClass(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key); // Function AIModule.BTFunctionLibrary.GetBlackboardValueAsClass // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x57a03f0
	bool GetBlackboardValueAsBool(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key); // Function AIModule.BTFunctionLibrary.GetBlackboardValueAsBool // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x57a02e0
	struct AActor* GetBlackboardValueAsActor(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key); // Function AIModule.BTFunctionLibrary.GetBlackboardValueAsActor // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x57a01d0
	void ClearBlackboardValueAsVector(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key); // Function AIModule.BTFunctionLibrary.ClearBlackboardValueAsVector // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x57a00d0
	void ClearBlackboardValue(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key); // Function AIModule.BTFunctionLibrary.ClearBlackboardValue // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x57a00d0
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

	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // Function AIModule.BTService_BlueprintBase.ReceiveTickAI // (Event|Protected|BlueprintEvent) // @ game+0x3511190
	void ReceiveTick(struct AActor* OwnerActor, float DeltaSeconds); // Function AIModule.BTService_BlueprintBase.ReceiveTick // (Event|Protected|BlueprintEvent) // @ game+0x3511190
	void ReceiveSearchStartAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function AIModule.BTService_BlueprintBase.ReceiveSearchStartAI // (Event|Protected|BlueprintEvent) // @ game+0x3511190
	void ReceiveSearchStart(struct AActor* OwnerActor); // Function AIModule.BTService_BlueprintBase.ReceiveSearchStart // (Event|Protected|BlueprintEvent) // @ game+0x3511190
	void ReceiveDeactivationAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function AIModule.BTService_BlueprintBase.ReceiveDeactivationAI // (Event|Protected|BlueprintEvent) // @ game+0x3511190
	void ReceiveDeactivation(struct AActor* OwnerActor); // Function AIModule.BTService_BlueprintBase.ReceiveDeactivation // (Event|Protected|BlueprintEvent) // @ game+0x3511190
	void ReceiveActivationAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function AIModule.BTService_BlueprintBase.ReceiveActivationAI // (Event|Protected|BlueprintEvent) // @ game+0x3511190
	void ReceiveActivation(struct AActor* OwnerActor); // Function AIModule.BTService_BlueprintBase.ReceiveActivation // (Event|Protected|BlueprintEvent) // @ game+0x3511190
	bool IsServiceActive(); // Function AIModule.BTService_BlueprintBase.IsServiceActive // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x57a73b0
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

	void SetFinishOnMessageWithId(struct FName MessageName, int32_t RequestID); // Function AIModule.BTTask_BlueprintBase.SetFinishOnMessageWithId // (Final|Native|Protected|BlueprintCallable) // @ game+0x57a74e0
	void SetFinishOnMessage(struct FName MessageName); // Function AIModule.BTTask_BlueprintBase.SetFinishOnMessage // (Final|Native|Protected|BlueprintCallable) // @ game+0x57a7440
	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // Function AIModule.BTTask_BlueprintBase.ReceiveTickAI // (Event|Protected|BlueprintEvent) // @ game+0x3511190
	void ReceiveTick(struct AActor* OwnerActor, float DeltaSeconds); // Function AIModule.BTTask_BlueprintBase.ReceiveTick // (Event|Protected|BlueprintEvent) // @ game+0x3511190
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function AIModule.BTTask_BlueprintBase.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x3511190
	void ReceiveExecute(struct AActor* OwnerActor); // Function AIModule.BTTask_BlueprintBase.ReceiveExecute // (Event|Protected|BlueprintEvent) // @ game+0x3511190
	void ReceiveAbortAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function AIModule.BTTask_BlueprintBase.ReceiveAbortAI // (Event|Protected|BlueprintEvent) // @ game+0x3511190
	void ReceiveAbort(struct AActor* OwnerActor); // Function AIModule.BTTask_BlueprintBase.ReceiveAbort // (Event|Protected|BlueprintEvent) // @ game+0x3511190
	bool IsTaskExecuting(); // Function AIModule.BTTask_BlueprintBase.IsTaskExecuting // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x57a7410
	bool IsTaskAborting(); // Function AIModule.BTTask_BlueprintBase.IsTaskAborting // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x57a73e0
	void FinishExecute(bool bSuccess); // Function AIModule.BTTask_BlueprintBase.FinishExecute // (Final|Native|Protected|BlueprintCallable) // @ game+0x57a7320
	void FinishAbort(); // Function AIModule.BTTask_BlueprintBase.FinishAbort // (Final|Native|Protected|BlueprintCallable) // @ game+0x57a7300
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

	void ProvideSingleLocation(struct UObject* QuerierObject, struct AActor* QuerierActor, struct FVector& ResultingLocation); // Function AIModule.EnvQueryContext_BlueprintBase.ProvideSingleLocation // (Event|Public|HasOutParms|HasDefaults|BlueprintEvent|Const) // @ game+0x3511190
	void ProvideSingleActor(struct UObject* QuerierObject, struct AActor* QuerierActor, struct AActor*& ResultingActor); // Function AIModule.EnvQueryContext_BlueprintBase.ProvideSingleActor // (Event|Public|HasOutParms|BlueprintEvent|Const) // @ game+0x3511190
	void ProvideLocationsSet(struct UObject* QuerierObject, struct AActor* QuerierActor, struct TArray<struct FVector>& ResultingLocationSet); // Function AIModule.EnvQueryContext_BlueprintBase.ProvideLocationsSet // (Event|Public|HasOutParms|BlueprintEvent|Const) // @ game+0x3511190
	void ProvideActorsSet(struct UObject* QuerierObject, struct AActor* QuerierActor, struct TArray<struct AActor*>& ResultingActorsSet); // Function AIModule.EnvQueryContext_BlueprintBase.ProvideActorsSet // (Event|Public|HasOutParms|BlueprintEvent|Const) // @ game+0x3511190
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

	struct UObject* GetQuerier(); // Function AIModule.EnvQueryGenerator_BlueprintBase.GetQuerier // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x57ae140
	void DoItemGeneration(struct TArray<struct FVector>& ContextLocations); // Function AIModule.EnvQueryGenerator_BlueprintBase.DoItemGeneration // (Event|Public|HasOutParms|BlueprintEvent|Const) // @ game+0x3511190
	void AddGeneratedVector(struct FVector GeneratedVector); // Function AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedVector // (Final|Native|Public|HasDefaults|BlueprintCallable|Const) // @ game+0x57ae010
	void AddGeneratedActor(struct AActor* GeneratedActor); // Function AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedActor // (Final|Native|Public|BlueprintCallable|Const) // @ game+0x57adf80
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

	void SetNamedParam(struct FName ParamName, float Value); // Function AIModule.EnvQueryInstanceBlueprintWrapper.SetNamedParam // (Final|Native|Public|BlueprintCallable) // @ game+0x57ae5a0
	struct TArray<struct FVector> GetResultsAsLocations(); // Function AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsLocations // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x57ae380
	struct TArray<struct AActor*> GetResultsAsActors(); // Function AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsActors // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x57ae2f0
	bool GetQueryResultsAsLocations(struct TArray<struct FVector>& ResultLocations); // Function AIModule.EnvQueryInstanceBlueprintWrapper.GetQueryResultsAsLocations // (Final|Native|Public|HasOutParms|BlueprintCallable|Const) // @ game+0x57ae230
	bool GetQueryResultsAsActors(struct TArray<struct AActor*>& ResultActors); // Function AIModule.EnvQueryInstanceBlueprintWrapper.GetQueryResultsAsActors // (Final|Native|Public|HasOutParms|BlueprintCallable|Const) // @ game+0x57ae170
	float GetItemScore(int32_t ItemIndex); // Function AIModule.EnvQueryInstanceBlueprintWrapper.GetItemScore // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x57ae0a0
	void EQSQueryDoneSignature__DelegateSignature(struct UEnvQueryInstanceBlueprintWrapper* QueryInstance, enum class EEnvQueryStatus QueryStatus); // DelegateFunction AIModule.EnvQueryInstanceBlueprintWrapper.EQSQueryDoneSignature__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x3511190
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

	struct UEnvQueryInstanceBlueprintWrapper* RunEQSQuery(struct UObject* WorldContextObject, struct UEnvQuery* QueryTemplate, struct UObject* Querier, enum class EEnvQueryRunMode RunMode, struct UEnvQueryInstanceBlueprintWrapper* WrapperClass); // Function AIModule.EnvQueryManager.RunEQSQuery // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x57ae410
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

	void SetSmartLinkEnabled(bool bEnabled); // Function AIModule.NavLinkProxy.SetSmartLinkEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x57b9860
	void ResumePathFollowing(struct AActor* Agent); // Function AIModule.NavLinkProxy.ResumePathFollowing // (Final|Native|Public|BlueprintCallable) // @ game+0x57b9700
	void ReceiveSmartLinkReached(struct AActor* Agent, struct FVector& Destination); // Function AIModule.NavLinkProxy.ReceiveSmartLinkReached // (Event|Public|HasOutParms|HasDefaults|BlueprintEvent) // @ game+0x3511190
	bool IsSmartLinkEnabled(); // Function AIModule.NavLinkProxy.IsSmartLinkEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x57b95d0
	bool HasMovingAgents(); // Function AIModule.NavLinkProxy.HasMovingAgents // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x57b95a0
};

// Class AIModule.NavLocalGridManager
// Size: 0x60 (Inherited: 0x30)
struct UNavLocalGridManager : UObject {
	char pad_30[0x30]; // 0x30(0x30)

	bool SetLocalNavigationGridDensity(struct UObject* WorldContextObject, float CellSize); // Function AIModule.NavLocalGridManager.SetLocalNavigationGridDensity // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x57b9790
	void RemoveLocalNavigationGrid(struct UObject* WorldContextObject, int32_t GridId, bool bRebuildGrids); // Function AIModule.NavLocalGridManager.RemoveLocalNavigationGrid // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x57b9600
	bool FindLocalNavigationGridPath(struct UObject* WorldContextObject, struct FVector& Start, struct FVector& End, struct TArray<struct FVector>& PathPoints); // Function AIModule.NavLocalGridManager.FindLocalNavigationGridPath // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x57b9400
	int32_t AddLocalNavigationGridForPoints(struct UObject* WorldContextObject, struct TArray<struct FVector>& Locations, int32_t Radius2D, float Height, bool bRebuildGrids); // Function AIModule.NavLocalGridManager.AddLocalNavigationGridForPoints // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x57b9210
	int32_t AddLocalNavigationGridForPoint(struct UObject* WorldContextObject, struct FVector& Location, int32_t Radius2D, float Height, bool bRebuildGrids); // Function AIModule.NavLocalGridManager.AddLocalNavigationGridForPoint // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x57b9050
	int32_t AddLocalNavigationGridForCapsule(struct UObject* WorldContextObject, struct FVector& Location, float CapsuleRadius, float CapsuleHalfHeight, int32_t Radius2D, float Height, bool bRebuildGrids); // Function AIModule.NavLocalGridManager.AddLocalNavigationGridForCapsule // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x57b8e30
	int32_t AddLocalNavigationGridForBox(struct UObject* WorldContextObject, struct FVector& Location, struct FVector Extent, struct FRotator Rotation, int32_t Radius2D, float Height, bool bRebuildGrids); // Function AIModule.NavLocalGridManager.AddLocalNavigationGridForBox // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x57b8bf0
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

	enum class EAIRequestPriority GetActionPriority(); // Function AIModule.PawnAction.GetActionPriority // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x2e3b5a0
	void Finish(enum class EPawnActionResult WithResult); // Function AIModule.PawnAction.Finish // (Native|Protected|BlueprintCallable) // @ game+0x57be960
	struct UPawnAction* CreateActionInstance(struct UObject* WorldContextObject, struct UPawnAction* ActionClass); // Function AIModule.PawnAction.CreateActionInstance // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x57be860
};

// Class AIModule.PawnAction_BlueprintBase
// Size: 0xa0 (Inherited: 0xa0)
struct UPawnAction_BlueprintBase : UPawnAction {

	void ActionTick(struct APawn* ControlledPawn, float DeltaSeconds); // Function AIModule.PawnAction_BlueprintBase.ActionTick // (Event|Public|BlueprintEvent) // @ game+0x3511190
	void ActionStart(struct APawn* ControlledPawn); // Function AIModule.PawnAction_BlueprintBase.ActionStart // (Event|Public|BlueprintEvent) // @ game+0x3511190
	void ActionResume(struct APawn* ControlledPawn); // Function AIModule.PawnAction_BlueprintBase.ActionResume // (Event|Public|BlueprintEvent) // @ game+0x3511190
	void ActionPause(struct APawn* ControlledPawn); // Function AIModule.PawnAction_BlueprintBase.ActionPause // (Event|Public|BlueprintEvent) // @ game+0x3511190
	void ActionFinished(struct APawn* ControlledPawn, enum class EPawnActionResult WithResult); // Function AIModule.PawnAction_BlueprintBase.ActionFinished // (Event|Public|BlueprintEvent) // @ game+0x3511190
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

	bool K2_PushAction(struct UPawnAction* NewAction, enum class EAIRequestPriority Priority, struct UObject* Instigator); // Function AIModule.PawnActionsComponent.K2_PushAction // (Final|Native|Public|BlueprintCallable) // @ game+0x57bed30
	bool K2_PerformAction(struct APawn* Pawn, struct UPawnAction* Action, enum class EAIRequestPriority Priority); // Function AIModule.PawnActionsComponent.K2_PerformAction // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x57bec30
	enum class EPawnActionAbortState K2_ForceAbortAction(struct UPawnAction* ActionToAbort); // Function AIModule.PawnActionsComponent.K2_ForceAbortAction // (Final|Native|Public|BlueprintCallable) // @ game+0x57beb90
	enum class EPawnActionAbortState K2_AbortAction(struct UPawnAction* ActionToAbort); // Function AIModule.PawnActionsComponent.K2_AbortAction // (Final|Native|Public|BlueprintCallable) // @ game+0x57beaf0
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

	void SetSensingUpdatesEnabled(bool bEnabled); // Function AIModule.PawnSensingComponent.SetSensingUpdatesEnabled // (BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x2fecb20
	void SetSensingInterval(float NewSensingInterval); // Function AIModule.PawnSensingComponent.SetSensingInterval // (BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x3141570
	void SetPeripheralVisionAngle(float NewPeripheralVisionAngle); // Function AIModule.PawnSensingComponent.SetPeripheralVisionAngle // (BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x57bf080
	void SeePawnDelegate__DelegateSignature(struct APawn* Pawn); // DelegateFunction AIModule.PawnSensingComponent.SeePawnDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x3511190
	void HearNoiseDelegate__DelegateSignature(struct APawn* Instigator, struct FVector& Location, float Volume); // DelegateFunction AIModule.PawnSensingComponent.HearNoiseDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms|HasDefaults) // @ game+0x3511190
	float GetPeripheralVisionCosine(); // Function AIModule.PawnSensingComponent.GetPeripheralVisionCosine // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2c983a0
	float GetPeripheralVisionAngle(); // Function AIModule.PawnSensingComponent.GetPeripheralVisionAngle // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2c98d90
};

// Class AIModule.VisualLoggerExtension
// Size: 0x30 (Inherited: 0x30)
struct UVisualLoggerExtension : UObject {
};

