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
};

// Class GameplayTasks.GameplayTask_ClaimResource
// Size: 0x70 (Inherited: 0x70)
struct UGameplayTask_ClaimResource : UGameplayTask {
};

// Class GameplayTasks.GameplayTask_SpawnActor
// Size: 0xb0 (Inherited: 0x70)
struct UGameplayTask_SpawnActor : UGameplayTask {
	struct FMulticastInlineDelegate Success; // 0x70(0x10)
	struct FMulticastInlineDelegate DidNotSpawn; // 0x80(0x10)
	char pad_90[0x18]; // 0x90(0x18)
	struct AActor* ClassToSpawn; // 0xa8(0x08)
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

