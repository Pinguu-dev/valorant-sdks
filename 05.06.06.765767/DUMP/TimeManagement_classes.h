// Class TimeManagement.FixedFrameRateCustomTimeStep
// Size: 0x38 (Inherited: 0x30)
struct UFixedFrameRateCustomTimeStep : UEngineCustomTimeStep {
	struct FFrameRate FixedFrameRate; // 0x30(0x08)
};

// Class TimeManagement.GenlockedCustomTimeStep
// Size: 0x38 (Inherited: 0x38)
struct UGenlockedCustomTimeStep : UFixedFrameRateCustomTimeStep {
};

// Class TimeManagement.GenlockedTimecodeProvider
// Size: 0x60 (Inherited: 0x38)
struct UGenlockedTimecodeProvider : UTimecodeProvider {
	bool bUseGenlockToCount; // 0x38(0x01)
	char pad_39[0x27]; // 0x39(0x27)
};

// Class TimeManagement.TimeManagementBlueprintLibrary
// Size: 0x30 (Inherited: 0x30)
struct UTimeManagementBlueprintLibrary : UBlueprintFunctionLibrary {
};

// Class TimeManagement.TimeSynchronizationSource
// Size: 0x38 (Inherited: 0x30)
struct UTimeSynchronizationSource : UObject {
	bool bUseForSynchronization; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	int32_t FrameOffset; // 0x34(0x04)
};

