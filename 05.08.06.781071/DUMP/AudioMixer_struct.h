// Enum AudioMixer.EMusicalNoteName
enum class EMusicalNoteName : uint8 {
	C = 0,
	Db = 1,
	D = 2,
	Eb = 3,
	E = 4,
	F = 5,
	Gb = 6,
	G = 7,
	Ab = 8,
	A = 9,
	Bb = 10,
	B = 11,
	EMusicalNoteName_MAX = 12
};

// Enum AudioMixer.ESubmixEffectDynamicsChannelLinkMode
enum class ESubmixEffectDynamicsChannelLinkMode : uint8 {
	Disabled = 0,
	Average = 1,
	Peak = 2,
	Count = 3,
	ESubmixEffectDynamicsChannelLinkMode_MAX = 4
};

// Enum AudioMixer.ESubmixEffectDynamicsPeakMode
enum class ESubmixEffectDynamicsPeakMode : uint8 {
	MeanSquared = 0,
	RootMeanSquared = 1,
	Peak = 2,
	Count = 3,
	ESubmixEffectDynamicsPeakMode_MAX = 4
};

// Enum AudioMixer.ESubmixEffectDynamicsProcessorType
enum class ESubmixEffectDynamicsProcessorType : uint8 {
	Compressor = 0,
	Limiter = 1,
	Expander = 2,
	Gate = 3,
	Count = 4,
	ESubmixEffectDynamicsProcessorType_MAX = 5
};

// ScriptStruct AudioMixer.SubmixEffectDynamicsProcessorSettings
// Size: 0x50 (Inherited: 0x00)
struct FSubmixEffectDynamicsProcessorSettings {
	enum class ESubmixEffectDynamicsProcessorType DynamicsProcessorType; // 0x00(0x01)
	enum class ESubmixEffectDynamicsPeakMode PeakMode; // 0x01(0x01)
	enum class ESubmixEffectDynamicsChannelLinkMode LinkMode; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	float InputGainDb; // 0x04(0x04)
	float ThresholdDb; // 0x08(0x04)
	float Ratio; // 0x0c(0x04)
	float KneeBandwidthDb; // 0x10(0x04)
	float LookAheadMsec; // 0x14(0x04)
	float AttackTimeMsec; // 0x18(0x04)
	float ReleaseTimeMsec; // 0x1c(0x04)
	struct USoundSubmix* ExternalSubmix; // 0x20(0x08)
	char bChannelLinked : 1; // 0x28(0x01)
	char bAnalogMode : 1; // 0x28(0x01)
	char bKeyAudition : 1; // 0x28(0x01)
	char pad_28_3 : 5; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float KeyGainDb; // 0x2c(0x04)
	float OutputGainDb; // 0x30(0x04)
	struct FSubmixEffectDynamicProcessorFilterSettings KeyHighshelf; // 0x34(0x0c)
	struct FSubmixEffectDynamicProcessorFilterSettings KeyLowshelf; // 0x40(0x0c)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct AudioMixer.SubmixEffectDynamicProcessorFilterSettings
// Size: 0x0c (Inherited: 0x00)
struct FSubmixEffectDynamicProcessorFilterSettings {
	char bEnabled : 1; // 0x00(0x01)
	char pad_0_1 : 7; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Cutoff; // 0x04(0x04)
	float GainDb; // 0x08(0x04)
};

// ScriptStruct AudioMixer.SubmixEffectSubmixEQSettings
// Size: 0x10 (Inherited: 0x00)
struct FSubmixEffectSubmixEQSettings {
	struct TArray<struct FSubmixEffectEQBand> EQBands; // 0x00(0x10)
};

// ScriptStruct AudioMixer.SubmixEffectEQBand
// Size: 0x10 (Inherited: 0x00)
struct FSubmixEffectEQBand {
	float Frequency; // 0x00(0x04)
	float Bandwidth; // 0x04(0x04)
	float GainDb; // 0x08(0x04)
	char bEnabled : 1; // 0x0c(0x01)
	char pad_C_1 : 7; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct AudioMixer.SubmixEffectReverbSettings
// Size: 0x40 (Inherited: 0x00)
struct FSubmixEffectReverbSettings {
	bool bBypassEarlyReflections; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float ReflectionsDelay; // 0x04(0x04)
	float GainHF; // 0x08(0x04)
	float ReflectionsGain; // 0x0c(0x04)
	bool bBypassLateReflections; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float LateDelay; // 0x14(0x04)
	float DecayTime; // 0x18(0x04)
	float Density; // 0x1c(0x04)
	float Diffusion; // 0x20(0x04)
	float AirAbsorptionGainHF; // 0x24(0x04)
	float DecayHFRatio; // 0x28(0x04)
	float LateGain; // 0x2c(0x04)
	float Gain; // 0x30(0x04)
	float WetLevel; // 0x34(0x04)
	float DryLevel; // 0x38(0x04)
	bool bBypass; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
};

