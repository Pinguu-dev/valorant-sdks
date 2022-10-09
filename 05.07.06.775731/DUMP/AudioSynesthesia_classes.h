// Class AudioSynesthesia.AudioSynesthesiaNRTSettings
// Size: 0x30 (Inherited: 0x30)
struct UAudioSynesthesiaNRTSettings : UAudioAnalyzerNRTSettings {
};

// Class AudioSynesthesia.AudioSynesthesiaNRT
// Size: 0x80 (Inherited: 0x80)
struct UAudioSynesthesiaNRT : UAudioAnalyzerNRT {
};

// Class AudioSynesthesia.ConstantQNRTSettings
// Size: 0x50 (Inherited: 0x30)
struct UConstantQNRTSettings : UAudioSynesthesiaNRTSettings {
	float StartingFrequency; // 0x30(0x04)
	int32_t NumBands; // 0x34(0x04)
	float NumBandsPerOctave; // 0x38(0x04)
	float AnalysisPeriod; // 0x3c(0x04)
	bool bDownmixToMono; // 0x40(0x01)
	enum class EConstantQFFTSizeEnum FFTSize; // 0x41(0x01)
	enum class EFFTWindowType WindowType; // 0x42(0x01)
	enum class EAudioSpectrumType SpectrumType; // 0x43(0x01)
	float BandWidthStretch; // 0x44(0x04)
	enum class EConstantQNormalizationEnum CQTNormalization; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	float NoiseFloorDb; // 0x4c(0x04)
};

// Class AudioSynesthesia.ConstantQNRT
// Size: 0x88 (Inherited: 0x80)
struct UConstantQNRT : UAudioSynesthesiaNRT {
	struct UConstantQNRTSettings* Settings; // 0x80(0x08)

	void GetNormalizedChannelConstantQAtTime(float InSeconds, int32_t InChannel, struct TArray<float>& OutConstantQ); // Function AudioSynesthesia.ConstantQNRT.GetNormalizedChannelConstantQAtTime // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x24c86e0
	void GetChannelConstantQAtTime(float InSeconds, int32_t InChannel, struct TArray<float>& OutConstantQ); // Function AudioSynesthesia.ConstantQNRT.GetChannelConstantQAtTime // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x24c81b0
};

// Class AudioSynesthesia.LoudnessNRTSettings
// Size: 0x48 (Inherited: 0x30)
struct ULoudnessNRTSettings : UAudioSynesthesiaNRTSettings {
	float AnalysisPeriod; // 0x30(0x04)
	float MinimumFrequency; // 0x34(0x04)
	float MaximumFrequency; // 0x38(0x04)
	enum class ELoudnessNRTCurveTypeEnum CurveType; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	float NoiseFloorDb; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// Class AudioSynesthesia.LoudnessNRT
// Size: 0x88 (Inherited: 0x80)
struct ULoudnessNRT : UAudioSynesthesiaNRT {
	struct ULoudnessNRTSettings* Settings; // 0x80(0x08)

	void GetNormalizedLoudnessAtTime(float InSeconds, float& OutLoudness); // Function AudioSynesthesia.LoudnessNRT.GetNormalizedLoudnessAtTime // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x24c8b30
	void GetNormalizedChannelLoudnessAtTime(float InSeconds, int32_t InChannel, float& OutLoudness); // Function AudioSynesthesia.LoudnessNRT.GetNormalizedChannelLoudnessAtTime // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x24c8820
	void GetLoudnessAtTime(float InSeconds, float& OutLoudness); // Function AudioSynesthesia.LoudnessNRT.GetLoudnessAtTime // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x24c8600
	void GetChannelLoudnessAtTime(float InSeconds, int32_t InChannel, float& OutLoudness); // Function AudioSynesthesia.LoudnessNRT.GetChannelLoudnessAtTime // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x24c82f0
};

// Class AudioSynesthesia.OnsetNRTSettings
// Size: 0x48 (Inherited: 0x30)
struct UOnsetNRTSettings : UAudioSynesthesiaNRTSettings {
	bool bDownmixToMono; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float GranularityInSeconds; // 0x34(0x04)
	float Sensitivity; // 0x38(0x04)
	float MinimumFrequency; // 0x3c(0x04)
	float MaximumFrequency; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// Class AudioSynesthesia.OnsetNRT
// Size: 0x88 (Inherited: 0x80)
struct UOnsetNRT : UAudioSynesthesiaNRT {
	struct UOnsetNRTSettings* Settings; // 0x80(0x08)

	void GetNormalizedChannelOnsetsBetweenTimes(float InStartSeconds, float InEndSeconds, int32_t InChannel, struct TArray<float>& OutOnsetTimestamps, struct TArray<float>& OutOnsetStrengths); // Function AudioSynesthesia.OnsetNRT.GetNormalizedChannelOnsetsBetweenTimes // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x24c8940
	void GetChannelOnsetsBetweenTimes(float InStartSeconds, float InEndSeconds, int32_t InChannel, struct TArray<float>& OutOnsetTimestamps, struct TArray<float>& OutOnsetStrengths); // Function AudioSynesthesia.OnsetNRT.GetChannelOnsetsBetweenTimes // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x24c8410
};

