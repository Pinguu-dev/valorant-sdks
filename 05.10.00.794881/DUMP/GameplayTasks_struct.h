// Enum GameplayTasks.ETaskResourceOverlapPolicy
enum class ETaskResourceOverlapPolicy : uint8 {
	StartOnTop = 0,
	StartAtEnd = 1,
	ETaskResourceOverlapPolicy_MAX = 2
};

// Enum GameplayTasks.EGameplayTaskRunResult
enum class EGameplayTaskRunResult : uint8 {
	Error = 0,
	Failed = 1,
	Success_Paused = 2,
	Success_Active = 3,
	Success_Finished = 4,
	EGameplayTaskRunResult_MAX = 5
};

// Enum GameplayTasks.EGameplayTaskState
enum class EGameplayTaskState : uint8 {
	Uninitialized = 0,
	AwaitingActivation = 1,
	Paused = 2,
	Active = 3,
	Finished = 4,
	EGameplayTaskState_MAX = 5
};

// ScriptStruct GameplayTasks.GameplayResourceSet
// Size: 0x02 (Inherited: 0x00)
struct FGameplayResourceSet {
	char pad_0[0x2]; // 0x00(0x02)
};

