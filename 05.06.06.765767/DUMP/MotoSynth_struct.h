// ScriptStruct MotoSynth.MotoSynthRuntimeSettings
// Size: 0x68 (Inherited: 0x00)
struct FMotoSynthRuntimeSettings {
	bool bSynthToneEnabled; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float SynthToneVolume; // 0x04(0x04)
	float SynthToneFilterFrequency; // 0x08(0x04)
	int32_t SynthOctaveShift; // 0x0c(0x04)
	bool bGranularEngineEnabled; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float GranularEngineVolume; // 0x14(0x04)
	float GranularEnginePitchScale; // 0x18(0x04)
	int32_t NumSamplesToCrossfadeBetweenGrains; // 0x1c(0x04)
	int32_t NumGrainTableEntriesPerGrain; // 0x20(0x04)
	int32_t GrainTableRandomOffsetForConstantRPMs; // 0x24(0x04)
	int32_t GrainCrossfadeSamplesForConstantRPMs; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct UMotoSynthSource* AccelerationSource; // 0x30(0x08)
	struct UMotoSynthSource* DecelerationSource; // 0x38(0x08)
	bool bStereoWidenerEnabled; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	float StereoDelayMsec; // 0x44(0x04)
	float StereoFeedback; // 0x48(0x04)
	float StereoWidenerWetlevel; // 0x4c(0x04)
	float StereoWidenerDryLevel; // 0x50(0x04)
	float StereoWidenerDelayRatio; // 0x54(0x04)
	bool bStereoWidenerFilterEnabled; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	float StereoWidenerFilterFrequency; // 0x5c(0x04)
	float StereoWidenerFilterQ; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
};

// ScriptStruct MotoSynth.GrainTableEntry
// Size: 0x08 (Inherited: 0x00)
struct FGrainTableEntry {
	int32_t SampleIndex; // 0x00(0x04)
	float RPM; // 0x04(0x04)
};

