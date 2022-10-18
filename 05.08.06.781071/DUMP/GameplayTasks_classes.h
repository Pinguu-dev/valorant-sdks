// Class GameplayTasks.GameplayTasksComponent
// Size: 0x158 (Inherited: 0xe8)
struct UGameplayTasksComponent : UActorComponent {
	char pad_E8[0xc]; // 0xe8(0x0c)
	char pad_F4_0 : 1; // 0xf4(0x01)
	char bIsNetDirty : 1; // 0xf4(0x01)
	char pad_F4_2 : 6; // 0xf4(0x01)
	char pad_F5[0x3]; // 0xf5(0x03)
	struct TArray<struct UGameplayTask*> SimulatedTasks; // 0xf8(0x10)
	struct TArray<struct UGameplayTask*> TaskPriorityQueue; // 0x108(0x10)
	char pad_118[0x10]; // 0x118(0x10)
	struct TArray<struct UGameplayTask*> TickingTasks; // 0x128(0x10)
	struct TArray<struct UGameplayTask*> KnownTasks; // 0x138(0x10)
	struct FMulticastInlineDelegate OnClaimedResourcesChange; // 0x148(0x10)

	void OnRep_SimulatedTasks(); // Function GameplayTasks.GameplayTasksComponent.OnRep_SimulatedTasks // (Final|Native|Public) // @ game+0x56a8f20
	enum class EGameplayTaskRunResult K2_RunGameplayTask(struct TScriptInterface<IGameplayTaskOwnerInterface> TaskOwner, struct UGameplayTask* Task, char Priority, struct TArray<struct UGameplayTaskResource*> AdditionalRequiredResources, struct TArray<struct UGameplayTaskResource*> AdditionalClaimedResources); // Function GameplayTasks.GameplayTasksComponent.K2_RunGameplayTask // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x56a8cc0
};

// Class GameplayTasks.GameplayTask
// Size: 0x70 (Inherited: 0x30)
struct UGameplayTask : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct FName InstanceName; // 0x38(0x0c)
	char pad_44[0x2]; // 0x44(0x02)
	enum class ETaskResourceOverlapPolicy ResourceOverlapPolicy; // 0x46(0x01)
	char pad_47[0x21]; // 0x47(0x21)
	struct UGameplayTask* ChildTask; // 0x68(0x08)

	void ReadyForActivation(); // Function GameplayTasks.GameplayTask.ReadyForActivation // (Final|Native|Public|BlueprintCallable) // @ game+0x56a8f40
	void GenericGameplayTaskDelegate__DelegateSignature(); // DelegateFunction GameplayTasks.GameplayTask.GenericGameplayTaskDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x3520f50
	void EndTask(); // Function GameplayTasks.GameplayTask.EndTask // (Final|Native|Public|BlueprintCallable) // @ game+0x56a8bc0
};

// Class GameplayTasks.GameplayTask_ClaimResource
// Size: 0x70 (Inherited: 0x70)
struct UGameplayTask_ClaimResource : UGameplayTask {

	struct UGameplayTask_ClaimResource* ClaimResources(struct TScriptInterface<IGameplayTaskOwnerInterface> InTaskOwner, struct TArray<struct UGameplayTaskResource*> ResourceClasses, char Priority, struct FName TaskInstanceName); // Function GameplayTasks.GameplayTask_ClaimResource.ClaimResources // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x56a89d0
	struct UGameplayTask_ClaimResource* ClaimResource(struct TScriptInterface<IGameplayTaskOwnerInterface> InTaskOwner, struct UGameplayTaskResource* ResourceClass, char Priority, struct FName TaskInstanceName); // Function GameplayTasks.GameplayTask_ClaimResource.ClaimResource // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x56a8860
};

// Class GameplayTasks.GameplayTask_SpawnActor
// Size: 0xb0 (Inherited: 0x70)
struct UGameplayTask_SpawnActor : UGameplayTask {
	struct FMulticastInlineDelegate Success; // 0x70(0x10)
	struct FMulticastInlineDelegate DidNotSpawn; // 0x80(0x10)
	char pad_90[0x18]; // 0x90(0x18)
	struct AActor* ClassToSpawn; // 0xa8(0x08)

	struct UGameplayTask_SpawnActor* SpawnActor(struct TScriptInterface<IGameplayTaskOwnerInterface> TaskOwner, struct FVector SpawnLocation, struct FRotator SpawnRotation, struct AActor* Class, bool bSpawnOnlyOnAuthority); // Function GameplayTasks.GameplayTask_SpawnActor.SpawnActor // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x56a8f60
	void FinishSpawningActor(struct UObject* WorldContextObject, struct AActor* SpawnedActor); // Function GameplayTasks.GameplayTask_SpawnActor.FinishSpawningActor // (Native|Public|BlueprintCallable) // @ game+0x56a8be0
	bool BeginSpawningActor(struct UObject* WorldContextObject, struct AActor*& SpawnedActor); // Function GameplayTasks.GameplayTask_SpawnActor.BeginSpawningActor // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x56a8780
};

// Class GameplayTasks.GameplayTask_TimeLimitedExecution
// Size: 0xa0 (Inherited: 0x70)
struct UGameplayTask_TimeLimitedExecution : UGameplayTask {
	struct FMulticastInlineDelegate OnFinished; // 0x70(0x10)
	struct FMulticastInlineDelegate OnTimeExpired; // 0x80(0x10)
	char pad_90[0x10]; // 0x90(0x10)
};

// Class GameplayTasks.GameplayTask_WaitDelay
// Size: 0x88 (Inherited: 0x70)
struct UGameplayTask_WaitDelay : UGameplayTask {
	struct FMulticastInlineDelegate OnFinish; // 0x70(0x10)
	char pad_80[0x8]; // 0x80(0x08)

	struct UGameplayTask_WaitDelay* TaskWaitDelay(struct TScriptInterface<IGameplayTaskOwnerInterface> TaskOwner, float Time, char Priority); // Function GameplayTasks.GameplayTask_WaitDelay.TaskWaitDelay // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x56a9130
	void TaskDelayDelegate__DelegateSignature(); // DelegateFunction GameplayTasks.GameplayTask_WaitDelay.TaskDelayDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x3520f50
};

// Class GameplayTasks.GameplayTaskOwnerInterface
// Size: 0x30 (Inherited: 0x30)
struct UGameplayTaskOwnerInterface : UInterface {
};

// Class GameplayTasks.GameplayTaskResource
// Size: 0x40 (Inherited: 0x30)
struct UGameplayTaskResource : UObject {
	int32_t ManualResourceID; // 0x30(0x04)
	int8_t AutoResourceID; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	char bManuallySetID : 1; // 0x38(0x01)
	char pad_38_1 : 7; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

