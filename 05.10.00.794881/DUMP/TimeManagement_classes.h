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

	struct FFrameTime TransformTime(struct FFrameTime& SourceTime, struct FFrameRate& SourceRate, struct FFrameRate& DestinationRate); // Function TimeManagement.TimeManagementBlueprintLibrary.TransformTime // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x4256c60
	struct FFrameNumber Subtract_FrameNumberInteger(struct FFrameNumber A, int32_t B); // Function TimeManagement.TimeManagementBlueprintLibrary.Subtract_FrameNumberInteger // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x4256ba0
	struct FFrameNumber Subtract_FrameNumberFrameNumber(struct FFrameNumber A, struct FFrameNumber B); // Function TimeManagement.TimeManagementBlueprintLibrary.Subtract_FrameNumberFrameNumber // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x4256ae0
	struct FFrameTime SnapFrameTimeToRate(struct FFrameTime& SourceTime, struct FFrameRate& SourceRate, struct FFrameRate& SnapToRate); // Function TimeManagement.TimeManagementBlueprintLibrary.SnapFrameTimeToRate // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x4256990
	struct FFrameTime Multiply_SecondsFrameRate(float TimeInSeconds, struct FFrameRate& FrameRate); // Function TimeManagement.TimeManagementBlueprintLibrary.Multiply_SecondsFrameRate // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x42568b0
	struct FFrameNumber Multiply_FrameNumberInteger(struct FFrameNumber A, int32_t B); // Function TimeManagement.TimeManagementBlueprintLibrary.Multiply_FrameNumberInteger // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x42567f0
	bool IsValid_MultipleOf(struct FFrameRate& InFrameRate, struct FFrameRate& OtherFramerate); // Function TimeManagement.TimeManagementBlueprintLibrary.IsValid_MultipleOf // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x42566f0
	bool IsValid_Framerate(struct FFrameRate& InFrameRate); // Function TimeManagement.TimeManagementBlueprintLibrary.IsValid_Framerate // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x4256650
	struct FFrameRate GetTimecodeFrameRate(); // Function TimeManagement.TimeManagementBlueprintLibrary.GetTimecodeFrameRate // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x4256610
	struct FTimecode GetTimecode(); // Function TimeManagement.TimeManagementBlueprintLibrary.GetTimecode // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x42565d0
	struct FFrameNumber Divide_FrameNumberInteger(struct FFrameNumber A, int32_t B); // Function TimeManagement.TimeManagementBlueprintLibrary.Divide_FrameNumberInteger // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x4256510
	struct FString Conv_TimecodeToString(struct FTimecode& InTimecode, bool bForceSignDisplay); // Function TimeManagement.TimeManagementBlueprintLibrary.Conv_TimecodeToString // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x42563d0
	float Conv_QualifiedFrameTimeToSeconds(struct FQualifiedFrameTime& InFrameTime); // Function TimeManagement.TimeManagementBlueprintLibrary.Conv_QualifiedFrameTimeToSeconds // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x4256320
	float Conv_FrameRateToSeconds(struct FFrameRate& InFrameRate); // Function TimeManagement.TimeManagementBlueprintLibrary.Conv_FrameRateToSeconds // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x4256280
	int32_t Conv_FrameNumberToInteger(struct FFrameNumber& InFrameNumber); // Function TimeManagement.TimeManagementBlueprintLibrary.Conv_FrameNumberToInteger // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x42561f0
	struct FFrameNumber Add_FrameNumberInteger(struct FFrameNumber A, int32_t B); // Function TimeManagement.TimeManagementBlueprintLibrary.Add_FrameNumberInteger // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x4256130
	struct FFrameNumber Add_FrameNumberFrameNumber(struct FFrameNumber A, struct FFrameNumber B); // Function TimeManagement.TimeManagementBlueprintLibrary.Add_FrameNumberFrameNumber // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x4256070
};

// Class TimeManagement.TimeSynchronizationSource
// Size: 0x38 (Inherited: 0x30)
struct UTimeSynchronizationSource : UObject {
	bool bUseForSynchronization; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	int32_t FrameOffset; // 0x34(0x04)
};

