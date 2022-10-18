// Class MotoSynth.MotoSynthPreset
// Size: 0x98 (Inherited: 0x30)
struct UMotoSynthPreset : UObject {
	struct FMotoSynthRuntimeSettings Settings; // 0x30(0x68)
};

// Class MotoSynth.MotoSynthSource
// Size: 0x100 (Inherited: 0x30)
struct UMotoSynthSource : UObject {
	bool bConvertTo8Bit; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float DownSampleFactor; // 0x34(0x04)
	struct FRuntimeFloatCurve RPMCurve; // 0x38(0x88)
	struct TArray<float> SourceData; // 0xc0(0x10)
	struct TArray<int16_t> SourceDataPCM; // 0xd0(0x10)
	int32_t SourceSampleRate; // 0xe0(0x04)
	char pad_E4[0x4]; // 0xe4(0x04)
	struct TArray<struct FGrainTableEntry> GrainTable; // 0xe8(0x10)
	char pad_F8[0x8]; // 0xf8(0x08)
};

// Class MotoSynth.SynthComponentMoto
// Size: 0x820 (Inherited: 0x760)
struct USynthComponentMoto : USynthComponent {
	struct UMotoSynthPreset* MotoSynthPreset; // 0x760(0x08)
	float RPM; // 0x768(0x04)
	char pad_76C[0xb4]; // 0x76c(0xb4)

	void SetSettings(struct FMotoSynthRuntimeSettings& InSettings); // Function MotoSynth.SynthComponentMoto.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x23d7830
	void SetRPM(float InRPM, float InTimeSec); // Function MotoSynth.SynthComponentMoto.SetRPM // (Final|Native|Public|BlueprintCallable) // @ game+0x23d7760
	bool IsEnabled(); // Function MotoSynth.SynthComponentMoto.IsEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x23d7730
	void GetRPMRange(float& OutMinRPM, float& OutMaxRPM); // Function MotoSynth.SynthComponentMoto.GetRPMRange // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x23d7650
};

