// ScriptStruct PakFile.PakFaultSentinelContent
// Size: 0x30 (Inherited: 0x00)
struct FPakFaultSentinelContent {
	struct FString BuildVersion; // 0x00(0x10)
	struct TArray<struct FString> FaultedPakFiles; // 0x10(0x10)
	int64_t Time; // 0x20(0x08)
	bool FullScanExecuted; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

