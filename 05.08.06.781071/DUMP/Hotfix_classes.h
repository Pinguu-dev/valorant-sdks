// Class Hotfix.OnlineHotfixManager
// Size: 0x228 (Inherited: 0x30)
struct UOnlineHotfixManager : UObject {
	char pad_30[0x1b8]; // 0x30(0x1b8)
	struct FString OssName; // 0x1e8(0x10)
	struct FString HotfixManagerClassName; // 0x1f8(0x10)
	struct FString DebugPrefix; // 0x208(0x10)
	struct TArray<struct UObject*> AssetsHotfixedFromIniFiles; // 0x218(0x10)

	void StartHotfixProcess(); // Function Hotfix.OnlineHotfixManager.StartHotfixProcess // (Native|Public|BlueprintCallable) // @ game+0x1f46450
};

// Class Hotfix.UpdateManager
// Size: 0x120 (Inherited: 0x30)
struct UUpdateManager : UObject {
	char pad_30[0x60]; // 0x30(0x60)
	float HotfixCheckCompleteDelay; // 0x90(0x04)
	float UpdateCheckCompleteDelay; // 0x94(0x04)
	float HotfixAvailabilityCheckCompleteDelay; // 0x98(0x04)
	float UpdateCheckAvailabilityCompleteDelay; // 0x9c(0x04)
	char pad_A0[0x4]; // 0xa0(0x04)
	int32_t AppSuspendedUpdateCheckTimeSeconds; // 0xa4(0x04)
	char pad_A8[0x8]; // 0xa8(0x08)
	bool bPlatformEnvironmentDetected; // 0xb0(0x01)
	bool bInitialUpdateFinished; // 0xb1(0x01)
	bool bCheckHotfixAvailabilityOnly; // 0xb2(0x01)
	enum class EUpdateState CurrentUpdateState; // 0xb3(0x01)
	int32_t WorstNumFilesPendingLoadViewed; // 0xb4(0x04)
	char pad_B8[0x4]; // 0xb8(0x04)
	enum class EHotfixResult LastHotfixResult; // 0xbc(0x01)
	char pad_BD[0x2b]; // 0xbd(0x2b)
	struct FDateTime LastUpdateCheck[0x2]; // 0xe8(0x10)
	enum class EUpdateCompletionStatus LastCompletionResult[0x2]; // 0xf8(0x02)
	char pad_FA[0x16]; // 0xfa(0x16)
	struct UEnum* UpdateStateEnum; // 0x110(0x08)
	struct UEnum* UpdateCompletionEnum; // 0x118(0x08)
};

