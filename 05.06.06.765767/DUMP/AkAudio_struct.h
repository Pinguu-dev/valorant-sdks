// Enum AkAudio.EAkCallbackType
enum class EAkCallbackType : uint8 {
	EndOfEvent = 0,
	Marker = 2,
	Duration = 3,
	Starvation = 5,
	MusicPlayStarted = 7,
	MusicSyncBeat = 8,
	MusicSyncBar = 9,
	MusicSyncEntry = 10,
	MusicSyncExit = 11,
	MusicSyncGrid = 12,
	MusicSyncUserCue = 13,
	MusicSyncPoint = 14,
	MIDIEvent = 16,
	EAkCallbackType_MAX = 17
};

// Enum AkAudio.EAkResult
enum class EAkResult : uint8 {
	NotImplemented = 0,
	Success = 1,
	Fail = 2,
	PartialSuccess = 3,
	NotCompatible = 4,
	AlreadyConnected = 5,
	InvalidFile = 7,
	AudioFileHeaderTooLarge = 8,
	MaxReached = 9,
	InvalidID = 14,
	IDNotFound = 15,
	InvalidInstanceID = 16,
	NoMoreData = 17,
	InvalidStateGroup = 20,
	ChildAlreadyHasAParent = 21,
	InvalidLanguage = 22,
	CannotAddItseflAsAChild = 23,
	InvalidParameter = 31,
	ElementAlreadyInList = 35,
	PathNotFound = 36,
	PathNoVertices = 37,
	PathNotRunning = 38,
	PathNotPaused = 39,
	PathNodeAlreadyInList = 40,
	PathNodeNotInList = 41,
	DataNeeded = 43,
	NoDataNeeded = 44,
	DataReady = 45,
	NoDataReady = 46,
	InsufficientMemory = 52,
	Cancelled = 53,
	UnknownBankID = 54,
	BankReadError = 56,
	InvalidSwitchType = 57,
	FormatNotReady = 63,
	WrongBankVersion = 64,
	FileNotFound = 66,
	DeviceNotReady = 67,
	BankAlreadyLoaded = 69,
	RenderedFX = 71,
	ProcessNeeded = 72,
	ProcessDone = 73,
	MemManagerNotInitialized = 74,
	StreamMgrNotInitialized = 75,
	SSEInstructionsNotSupported = 76,
	Busy = 77,
	UnsupportedChannelConfig = 78,
	PluginMediaNotAvailable = 79,
	MustBeVirtualized = 80,
	CommandTooLarge = 81,
	RejectedByFilter = 82,
	InvalidCustomPlatformName = 83,
	DLLCannotLoad = 84,
	DLLPathNotFound = 85,
	NoJavaVM = 86,
	OpenSLError = 87,
	PluginNotRegistered = 88,
	DataAlignmentError = 89,
	EAkResult_MAX = 90
};

// Enum AkAudio.EAkAndroidAudioAPI
enum class EAkAndroidAudioAPI : uint8 {
	AAudio = 0,
	OpenSL_ES = 1,
	EAkAndroidAudioAPI_MAX = 2
};

// Enum AkAudio.EAkAudioEventDurationType
enum class EAkAudioEventDurationType : uint8 {
	Unknown = 0,
	OneShot = 1,
	Infinite = 2,
	Mixed = 3,
	EAkAudioEventDurationType_MAX = 4
};

// Enum AkAudio.EAkAudioSessionMode
enum class EAkAudioSessionMode : uint8 {
	Default = 0,
	VoiceChat = 1,
	GameChat = 2,
	VideoRecording = 3,
	Measurement = 4,
	MoviePlayback = 5,
	VideoChat = 6,
	EAkAudioSessionMode_MAX = 7
};

// Enum AkAudio.EAkAudioSessionCategoryOptions
enum class EAkAudioSessionCategoryOptions : uint8 {
	MixWithOthers = 0,
	DuckOthers = 1,
	AllowBluetooth = 2,
	DefaultToSpeaker = 3,
	EAkAudioSessionCategoryOptions_MAX = 4
};

// Enum AkAudio.EAkAudioSessionCategory
enum class EAkAudioSessionCategory : uint8 {
	Ambient = 0,
	SoloAmbient = 1,
	PlayAndRecord = 2,
	EAkAudioSessionCategory_MAX = 3
};

// Enum AkAudio.EAkAudioChannel
enum class EAkAudioChannel : uint8 {
	AkChannelFrontLeft = 0,
	AkChannelFrontRight = 1,
	AkChannelFrontCenter = 2,
	AkChannelLowFrequency = 3,
	AkChannelBackLeft = 4,
	AkChannelBackRight = 5,
	AkChannelPlaceholder1 = 6,
	AkChannelPlaceholder2 = 7,
	AkChannelBackCenter = 8,
	AkChannelSideLeft = 9,
	AkChannelSideRight = 10,
	AkChannelTop = 11,
	EAkAudioChannel_MAX = 12
};

// Enum AkAudio.EReflectionFilterBits
enum class EReflectionFilterBits : uint8 {
	Wall = 0,
	Ceiling = 1,
	Floor = 2,
	EReflectionFilterBits_MAX = 3
};

// Enum AkAudio.AkCodecId
enum class AkCodecId : uint8 {
	Bank = 0,
	PCM = 1,
	ADPCM = 2,
	XMA = 3,
	Vorbis = 4,
	WiiADPCM = 5,
	PCMEX = 7,
	ExternalSource = 8,
	XWMA = 9,
	AAC = 10,
	FilePackage = 11,
	ATRAC9 = 12,
	VAG = 13,
	ProfilerCapture = 14,
	AnalysisFile = 15,
	MIDI = 16,
	OpusNX = 17,
	CAF = 18,
	AkOpus = 19,
	AkCodecId_MAX = 20
};

// Enum AkAudio.EAkMidiCcValues
enum class EAkMidiCcValues : uint8 {
	AkMidiCcBankSelectCoarse = 0,
	AkMidiCcModWheelCoarse = 1,
	AkMidiCcBreathCtrlCoarse = 2,
	AkMidiCcCtrl3Coarse = 3,
	AkMidiCcFootPedalCoarse = 4,
	AkMidiCcPortamentoCoarse = 5,
	AkMidiCcDataEntryCoarse = 6,
	AkMidiCcVolumeCoarse = 7,
	AkMidiCcBalanceCoarse = 8,
	AkMidiCcCtrl9Coarse = 9,
	AkMidiCcPanPositionCoarse = 10,
	AkMidiCcExpressionCoarse = 11,
	AkMidiCcEffectCtrl1Coarse = 12,
	AkMidiCcEffectCtrl2Coarse = 13,
	AkMidiCcCtrl14Coarse = 14,
	AkMidiCcCtrl15Coarse = 15,
	AkMidiCcGenSlider1 = 16,
	AkMidiCcGenSlider2 = 17,
	AkMidiCcGenSlider3 = 18,
	AkMidiCcGenSlider4 = 19,
	AkMidiCcCtrl20Coarse = 20,
	AkMidiCcCtrl21Coarse = 21,
	AkMidiCcCtrl22Coarse = 22,
	AkMidiCcCtrl23Coarse = 23,
	AkMidiCcCtrl24Coarse = 24,
	AkMidiCcCtrl25Coarse = 25,
	AkMidiCcCtrl26Coarse = 26,
	AkMidiCcCtrl27Coarse = 27,
	AkMidiCcCtrl28Coarse = 28,
	AkMidiCcCtrl29Coarse = 29,
	AkMidiCcCtrl30Coarse = 30,
	AkMidiCcCtrl31Coarse = 31,
	AkMidiCcBankSelectFine = 32,
	AkMidiCcModWheelFine = 33,
	AkMidiCcBreathCtrlFine = 34,
	AkMidiCcCtrl3Fine = 35,
	AkMidiCcFootPedalFine = 36,
	AkMidiCcPortamentoFine = 37,
	AkMidiCcDataEntryFine = 38,
	AkMidiCcVolumeFine = 39,
	AkMidiCcBalanceFine = 40,
	AkMidiCcCtrl9Fine = 41,
	AkMidiCcPanPositionFine = 42,
	AkMidiCcExpressionFine = 43,
	AkMidiCcEffectCtrl1Fine = 44,
	AkMidiCcEffectCtrl2Fine = 45,
	AkMidiCcCtrl14Fine = 46,
	AkMidiCcCtrl15Fine = 47,
	AkMidiCcCtrl20Fine = 52,
	AkMidiCcCtrl21Fine = 53,
	AkMidiCcCtrl22Fine = 54,
	AkMidiCcCtrl23Fine = 55,
	AkMidiCcCtrl24Fine = 56,
	AkMidiCcCtrl25Fine = 57,
	AkMidiCcCtrl26Fine = 58,
	AkMidiCcCtrl27Fine = 59,
	AkMidiCcCtrl28Fine = 60,
	AkMidiCcCtrl29Fine = 61,
	AkMidiCcCtrl30Fine = 62,
	AkMidiCcCtrl31Fine = 63,
	AkMidiCcHoldPedal = 64,
	AkMidiCcPortamentoOnOff = 65,
	AkMidiCcSustenutoPedal = 66,
	AkMidiCcSoftPedal = 67,
	AkMidiCcLegatoPedal = 68,
	AkMidiCcHoldPedal2 = 69,
	AkMidiCcSoundVariation = 70,
	AkMidiCcSoundTimbre = 71,
	AkMidiCcSoundReleaseTime = 72,
	AkMidiCcSoundAttackTime = 73,
	AkMidiCcSoundBrightness = 74,
	AkMidiCcSoundCtrl6 = 75,
	AkMidiCcSoundCtrl7 = 76,
	AkMidiCcSoundCtrl8 = 77,
	AkMidiCcSoundCtrl9 = 78,
	AkMidiCcSoundCtrl10 = 79,
	AkMidiCcGeneralButton1 = 80,
	AkMidiCcGeneralButton2 = 81,
	AkMidiCcGeneralButton3 = 82,
	AkMidiCcGeneralButton4 = 83,
	AkMidiCcReverbLevel = 91,
	AkMidiCcTremoloLevel = 92,
	AkMidiCcChorusLevel = 93,
	AkMidiCcCelesteLevel = 94,
	AkMidiCcPhaserLevel = 95,
	AkMidiCcDataButtonP1 = 96,
	AkMidiCcDataButtonM1 = 97,
	AkMidiCcNonRegisterCoarse = 98,
	AkMidiCcNonRegisterFine = 99,
	AkMidiCcAllSoundOff = 120,
	AkMidiCcAllControllersOff = 121,
	AkMidiCcLocalKeyboard = 122,
	AkMidiCcAllNotesOff = 123,
	AkMidiCcOmniModeOff = 124,
	AkMidiCcOmniModeOn = 125,
	AkMidiCcOmniMonophonicOn = 126,
	AkMidiCcOmniPolyphonicOn = 127,
	EAkMidiCcValues_MAX = 128
};

// Enum AkAudio.EAkMidiEventType
enum class EAkMidiEventType : uint8 {
	AkMidiEventTypeInvalid = 0,
	AkMidiEventTypeNoteOff = 128,
	AkMidiEventTypeNoteOn = 144,
	AkMidiEventTypeNoteAftertouch = 160,
	AkMidiEventTypeController = 176,
	AkMidiEventTypeProgramChange = 192,
	AkMidiEventTypeChannelAftertouch = 208,
	AkMidiEventTypePitchBend = 224,
	AkMidiEventTypeSysex = 240,
	AkMidiEventTypeEscape = 247,
	AkMidiEventTypeMeta = 255,
	EAkMidiEventType_MAX = 256
};

// Enum AkAudio.ERTPCValueType
enum class ERTPCValueType : uint8 {
	Default = 0,
	Global = 1,
	GameObject = 2,
	PlayingID = 3,
	Unavailable = 4,
	ERTPCValueType_MAX = 5
};

// Enum AkAudio.EAkCurveInterpolation
enum class EAkCurveInterpolation : uint8 {
	Log3 = 0,
	Sine = 1,
	Log1 = 2,
	InvSCurve = 3,
	Linear = 4,
	SCurve = 5,
	Exp1 = 6,
	SineRecip = 7,
	Exp3 = 8,
	LastFadeCurve = 8,
	Constant = 9,
	EAkCurveInterpolation_MAX = 10
};

// Enum AkAudio.AkActionOnEventType
enum class AkActionOnEventType : uint8 {
	Stop = 0,
	Pause = 1,
	Resume = 2,
	Break = 3,
	ReleaseEnvelope = 4,
	AkActionOnEventType_MAX = 5
};

// Enum AkAudio.AkMultiPositionType
enum class AkMultiPositionType : uint8 {
	SingleSource = 0,
	MultiSources = 1,
	MultiDirections = 2,
	AkMultiPositionType_MAX = 3
};

// Enum AkAudio.AkSpeakerConfiguration
enum class AkSpeakerConfiguration : int32 {
	Ak_Speaker_Front_Left = 1,
	Ak_Speaker_Front_Right = 2,
	Ak_Speaker_Front_Center = 4,
	Ak_Speaker_Low_Frequency = 8,
	Ak_Speaker_Back_Left = 16,
	Ak_Speaker_Back_Right = 32,
	Ak_Speaker_Back_Center = 256,
	Ak_Speaker_Side_Left = 512,
	Ak_Speaker_Side_Right = 1024,
	Ak_Speaker_Top = 2048,
	Ak_Speaker_Height_Front_Left = 4096,
	Ak_Speaker_Height_Front_Center = 8192,
	Ak_Speaker_Height_Front_Right = 16384,
	Ak_Speaker_Height_Back_Left = 32768,
	Ak_Speaker_Height_Back_Center = 65536,
	Ak_Speaker_Height_Back_Right = 131072,
	Ak_Speaker_MAX = 131073
};

// Enum AkAudio.AkChannelConfiguration
enum class AkChannelConfiguration : uint8 {
	Ak_Parent = 0,
	Ak_LFE = 1,
	Ak_1_1 = 2,
	Ak_2_1 = 3,
	Ak_2_2 = 4,
	Ak_3_1 = 5,
	Ak_3_2 = 6,
	Ak_4_1 = 7,
	Ak_4_2 = 8,
	Ak_5_1 = 9,
	Ak_5_2 = 10,
	Ak_7_2 = 11,
	Ak_5_1_3 = 12,
	Ak_7_1_3 = 13,
	Ak_7_1_5 = 14,
	Ak_Auro_9_2 = 15,
	Ak_Auro_10_2 = 16,
	Ak_Auro_11_2 = 17,
	Ak_Auro_13_2 = 18,
	Ak_Ambisonics_1st_order = 19,
	Ak_Ambisonics_2nd_order = 20,
	Ak_Ambisonics_3rd_order = 21,
	Ak_MAX = 22
};

// Enum AkAudio.AkAcousticPortalState
enum class AkAcousticPortalState : uint8 {
	Closed = 0,
	Open = 1,
	AkAcousticPortalState_MAX = 2
};

// Enum AkAudio.PanningRule
enum class PanningRule : uint8 {
	PanningRule_Speakers = 0,
	PanningRule_Headphones = 1,
	PanningRule_MAX = 2
};

// Enum AkAudio.AkMeshType
enum class AkMeshType : uint8 {
	StaticMesh = 0,
	CollisionMesh = 1,
	AkMeshType_MAX = 2
};

// Enum AkAudio.EAkHololensAudioAPI
enum class EAkHololensAudioAPI : uint8 {
	Wasapi = 0,
	XAudio2 = 1,
	DirectSound = 2,
	EAkHololensAudioAPI_MAX = 3
};

// Enum AkAudio.EAkCommSystem
enum class EAkCommSystem : uint8 {
	Socket = 0,
	HTCS = 1,
	EAkCommSystem_MAX = 2
};

// Enum AkAudio.EAkChannelMask
enum class EAkChannelMask : uint8 {
	FrontLeft = 0,
	FrontRight = 1,
	FrontCenter = 2,
	LowFrequency = 3,
	BackLeft = 4,
	BackRight = 5,
	BackCenter = 8,
	SideLeft = 9,
	SideRight = 10,
	Top = 11,
	HeightFrontLeft = 12,
	HeightFrontCenter = 13,
	HeightFrontRight = 14,
	HeightBackLeft = 15,
	HeightBackCenter = 16,
	HeightBackRight = 17,
	EAkChannelMask_MAX = 18
};

// Enum AkAudio.EAkChannelConfigType
enum class EAkChannelConfigType : uint8 {
	Anonymous = 0,
	Standard = 1,
	Ambisonic = 2,
	EAkChannelConfigType_MAX = 3
};

// Enum AkAudio.EAkDiffractionFlags
enum class EAkDiffractionFlags : uint8 {
	UseBuiltInParam = 0,
	UseObstruction = 1,
	CalcEmitterVirtualPosition = 3,
	EAkDiffractionFlags_MAX = 4
};

// Enum AkAudio.EAkPanningRule
enum class EAkPanningRule : uint8 {
	Speakers = 0,
	Headphones = 1,
	EAkPanningRule_MAX = 2
};

// Enum AkAudio.EAkWindowsAudioAPI
enum class EAkWindowsAudioAPI : uint8 {
	Wasapi = 0,
	XAudio2 = 1,
	DirectSound = 2,
	EAkWindowsAudioAPI_MAX = 3
};

// ScriptStruct AkAudio.AKWaapiJsonObject
// Size: 0x10 (Inherited: 0x00)
struct FAKWaapiJsonObject {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct AkAudio.AkWaapiSubscriptionId
// Size: 0x08 (Inherited: 0x00)
struct FAkWaapiSubscriptionId {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct AkAudio.AkAmbSoundCheckpointRecord
// Size: 0x01 (Inherited: 0x00)
struct FAkAmbSoundCheckpointRecord {
	bool bCurrentlyPlaying; // 0x00(0x01)
};

// ScriptStruct AkAudio.AkAdvancedInitializationSettings
// Size: 0x34 (Inherited: 0x00)
struct FAkAdvancedInitializationSettings {
	uint32_t IO_MemorySize; // 0x00(0x04)
	uint32_t IO_Granularity; // 0x04(0x04)
	float TargetAutoStreamBufferLength; // 0x08(0x04)
	bool UseStreamCache; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	uint32_t MaximumPinnedBytesInCache; // 0x10(0x04)
	bool EnableGameSyncPreparation; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	uint32_t ContinuousPlaybackLookAhead; // 0x18(0x04)
	uint32_t MonitorQueuePoolSize; // 0x1c(0x04)
	uint32_t MaximumHardwareTimeoutMs; // 0x20(0x04)
	bool DebugOutOfRangeCheckEnabled; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	float DebugOutOfRangeLimit; // 0x28(0x04)
	struct FAkAdvancedSpatialAudioSettings SpatialAudioSettings; // 0x2c(0x08)
};

// ScriptStruct AkAudio.AkAdvancedSpatialAudioSettings
// Size: 0x08 (Inherited: 0x00)
struct FAkAdvancedSpatialAudioSettings {
	float DiffractionShadowAttenuationFactor; // 0x00(0x04)
	float DiffractionShadowDegrees; // 0x04(0x04)
};

// ScriptStruct AkAudio.AkAdvancedInitializationSettingsWithMultiCoreRendering
// Size: 0x38 (Inherited: 0x34)
struct FAkAdvancedInitializationSettingsWithMultiCoreRendering : FAkAdvancedInitializationSettings {
	bool EnableMultiCoreRendering; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
};

// ScriptStruct AkAudio.AkAndroidAdvancedInitializationSettings
// Size: 0x40 (Inherited: 0x38)
struct FAkAndroidAdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering {
	uint32_t AudioAPI; // 0x38(0x04)
	bool RoundFrameSizeToHardwareSize; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
};

// ScriptStruct AkAudio.AkAudioSession
// Size: 0x0c (Inherited: 0x00)
struct FAkAudioSession {
	enum class EAkAudioSessionCategory AudioSessionCategory; // 0x00(0x04)
	uint32_t AudioSessionCategoryOptions; // 0x04(0x04)
	enum class EAkAudioSessionMode AudioSessionMode; // 0x08(0x04)
};

// ScriptStruct AkAudio.AkChannelEmitter
// Size: 0x1c (Inherited: 0x00)
struct FAkChannelEmitter {
	struct FVector Position; // 0x00(0x0c)
	struct FRotator Rotation; // 0x0c(0x0c)
	int32_t Channels; // 0x18(0x04)
};

// ScriptStruct AkAudio.AkExternalSourceInfo
// Size: 0x38 (Inherited: 0x00)
struct FAkExternalSourceInfo {
	struct FString ExternalSrcName; // 0x00(0x10)
	enum class AkCodecId CodecID; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FString Filename; // 0x18(0x10)
	struct UAkExternalMediaAsset* ExternalSourceAsset; // 0x28(0x08)
	bool IsStreamed; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct AkAudio.AkSegmentInfo
// Size: 0x24 (Inherited: 0x00)
struct FAkSegmentInfo {
	int32_t CurrentPosition; // 0x00(0x04)
	int32_t PreEntryDuration; // 0x04(0x04)
	int32_t ActiveDuration; // 0x08(0x04)
	int32_t PostExitDuration; // 0x0c(0x04)
	int32_t RemainingLookAheadTime; // 0x10(0x04)
	float BeatDuration; // 0x14(0x04)
	float BarDuration; // 0x18(0x04)
	float GridDuration; // 0x1c(0x04)
	float GridOffset; // 0x20(0x04)
};

// ScriptStruct AkAudio.AkMidiEventBase
// Size: 0x02 (Inherited: 0x00)
struct FAkMidiEventBase {
	enum class EAkMidiEventType Type; // 0x00(0x01)
	char Chan; // 0x01(0x01)
};

// ScriptStruct AkAudio.AkMidiProgramChange
// Size: 0x03 (Inherited: 0x02)
struct FAkMidiProgramChange : FAkMidiEventBase {
	char ProgramNum; // 0x02(0x01)
};

// ScriptStruct AkAudio.AkMidiChannelAftertouch
// Size: 0x03 (Inherited: 0x02)
struct FAkMidiChannelAftertouch : FAkMidiEventBase {
	char Value; // 0x02(0x01)
};

// ScriptStruct AkAudio.AkMidiNoteAftertouch
// Size: 0x04 (Inherited: 0x02)
struct FAkMidiNoteAftertouch : FAkMidiEventBase {
	char Note; // 0x02(0x01)
	char Value; // 0x03(0x01)
};

// ScriptStruct AkAudio.AkMidiPitchBend
// Size: 0x08 (Inherited: 0x02)
struct FAkMidiPitchBend : FAkMidiEventBase {
	char ValueLsb; // 0x02(0x01)
	char ValueMsb; // 0x03(0x01)
	int32_t FullValue; // 0x04(0x04)
};

// ScriptStruct AkAudio.AkMidiCc
// Size: 0x04 (Inherited: 0x02)
struct FAkMidiCc : FAkMidiEventBase {
	enum class EAkMidiCcValues Cc; // 0x02(0x01)
	char Value; // 0x03(0x01)
};

// ScriptStruct AkAudio.AkMidiNoteOnOff
// Size: 0x04 (Inherited: 0x02)
struct FAkMidiNoteOnOff : FAkMidiEventBase {
	char Note; // 0x02(0x01)
	char Velocity; // 0x03(0x01)
};

// ScriptStruct AkAudio.AkMidiGeneric
// Size: 0x04 (Inherited: 0x02)
struct FAkMidiGeneric : FAkMidiEventBase {
	char Param1; // 0x02(0x01)
	char Param2; // 0x03(0x01)
};

// ScriptStruct AkAudio.AkChannelMask
// Size: 0x04 (Inherited: 0x00)
struct FAkChannelMask {
	int32_t ChannelMask; // 0x00(0x04)
};

// ScriptStruct AkAudio.AkGeometrySurfaceOverride
// Size: 0x10 (Inherited: 0x00)
struct FAkGeometrySurfaceOverride {
	struct UAkAcousticTexture* AcousticTexture; // 0x00(0x08)
	char bEnableOcclusionOverride : 1; // 0x08(0x01)
	char pad_8_1 : 7; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float OcclusionValue; // 0x0c(0x04)
};

// ScriptStruct AkAudio.AkGeometryData
// Size: 0x50 (Inherited: 0x00)
struct FAkGeometryData {
	struct TArray<struct FVector> Vertices; // 0x00(0x10)
	struct TArray<struct FAkAcousticSurface> Surfaces; // 0x10(0x10)
	struct TArray<struct FAkTriangle> Triangles; // 0x20(0x10)
	struct TArray<struct UPhysicalMaterial*> ToOverrideAcousticTexture; // 0x30(0x10)
	struct TArray<struct UPhysicalMaterial*> ToOverrideOcclusion; // 0x40(0x10)
};

// ScriptStruct AkAudio.AkTriangle
// Size: 0x08 (Inherited: 0x00)
struct FAkTriangle {
	uint16_t Point0; // 0x00(0x02)
	uint16_t Point1; // 0x02(0x02)
	uint16_t Point2; // 0x04(0x02)
	uint16_t Surface; // 0x06(0x02)
};

// ScriptStruct AkAudio.AkAcousticSurface
// Size: 0x18 (Inherited: 0x00)
struct FAkAcousticSurface {
	uint32_t Texture; // 0x00(0x04)
	float Occlusion; // 0x04(0x04)
	struct FString Name; // 0x08(0x10)
};

// ScriptStruct AkAudio.AkHololensAdvancedInitializationSettings
// Size: 0x40 (Inherited: 0x38)
struct FAkHololensAdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering {
	uint32_t AudioAPI; // 0x38(0x04)
	bool GlobalFocus; // 0x3c(0x01)
	bool UseHeadMountedDisplayAudioDevice; // 0x3d(0x01)
	char pad_3E[0x2]; // 0x3e(0x02)
};

// ScriptStruct AkAudio.AkPluginInfo
// Size: 0x28 (Inherited: 0x00)
struct FAkPluginInfo {
	struct FString Name; // 0x00(0x10)
	uint32_t PluginID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString DLL; // 0x18(0x10)
};

// ScriptStruct AkAudio.AkCommonInitializationSettings
// Size: 0x60 (Inherited: 0x00)
struct FAkCommonInitializationSettings {
	uint32_t MaximumNumberOfMemoryPools; // 0x00(0x04)
	uint32_t MaximumNumberOfPositioningPaths; // 0x04(0x04)
	uint32_t CommandQueueSize; // 0x08(0x04)
	uint32_t SamplesPerFrame; // 0x0c(0x04)
	struct FAkMainOutputSettings MainOutputSettings; // 0x10(0x28)
	float StreamingLookAheadRatio; // 0x38(0x04)
	uint16_t NumberOfRefillsInVoice; // 0x3c(0x02)
	char pad_3E[0x2]; // 0x3e(0x02)
	struct FAkSpatialAudioSettings SpatialAudioSettings; // 0x40(0x20)
};

// ScriptStruct AkAudio.AkSpatialAudioSettings
// Size: 0x20 (Inherited: 0x00)
struct FAkSpatialAudioSettings {
	uint32_t MaxSoundPropagationDepth; // 0x00(0x04)
	uint32_t DiffractionFlags; // 0x04(0x04)
	float MovementThreshold; // 0x08(0x04)
	uint32_t NumberOfPrimaryRays; // 0x0c(0x04)
	uint32_t ReflectionOrder; // 0x10(0x04)
	bool EnableDiffractionOnReflections; // 0x14(0x01)
	bool EnableDirectPathDiffraction; // 0x15(0x01)
	char pad_16[0x2]; // 0x16(0x02)
	float MaximumPathLength; // 0x18(0x04)
	bool EnableTransmission; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct AkAudio.AkMainOutputSettings
// Size: 0x28 (Inherited: 0x00)
struct FAkMainOutputSettings {
	struct FString AudioDeviceShareset; // 0x00(0x10)
	uint32_t DeviceID; // 0x10(0x04)
	enum class EAkPanningRule PanningRule; // 0x14(0x04)
	enum class EAkChannelConfigType ChannelConfigType; // 0x18(0x04)
	uint32_t ChannelMask; // 0x1c(0x04)
	uint32_t NumberOfChannels; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct AkAudio.AkCommonInitializationSettingsWithSampleRate
// Size: 0x68 (Inherited: 0x60)
struct FAkCommonInitializationSettingsWithSampleRate : FAkCommonInitializationSettings {
	uint32_t SampleRate; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
};

// ScriptStruct AkAudio.AkCommunicationSettings
// Size: 0x20 (Inherited: 0x00)
struct FAkCommunicationSettings {
	uint32_t PoolSize; // 0x00(0x04)
	uint16_t DiscoveryBroadcastPort; // 0x04(0x02)
	uint16_t CommandPort; // 0x06(0x02)
	uint16_t NotificationPort; // 0x08(0x02)
	char pad_A[0x6]; // 0x0a(0x06)
	struct FString NetworkName; // 0x10(0x10)
};

// ScriptStruct AkAudio.AkCommunicationSettingsWithCommSelection
// Size: 0x28 (Inherited: 0x20)
struct FAkCommunicationSettingsWithCommSelection : FAkCommunicationSettings {
	enum class EAkCommSystem CommunicationSystem; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct AkAudio.AkCommunicationSettingsWithSystemInitialization
// Size: 0x28 (Inherited: 0x20)
struct FAkCommunicationSettingsWithSystemInitialization : FAkCommunicationSettings {
	bool InitializeSystemComms; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct AkAudio.AkBoolPropertyToControl
// Size: 0x10 (Inherited: 0x00)
struct FAkBoolPropertyToControl {
	struct FString ItemProperty; // 0x00(0x10)
};

// ScriptStruct AkAudio.AkPropertyToControl
// Size: 0x10 (Inherited: 0x00)
struct FAkPropertyToControl {
	struct FString ItemProperty; // 0x00(0x10)
};

// ScriptStruct AkAudio.AkPS4AdvancedInitializationSettings
// Size: 0x40 (Inherited: 0x38)
struct FAkPS4AdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering {
	uint32_t ACPBatchBufferSize; // 0x38(0x04)
	bool UseHardwareCodecLowLatencyMode; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
};

// ScriptStruct AkAudio.AkGeometrySurfacePropertiesToMap
// Size: 0x38 (Inherited: 0x00)
struct FAkGeometrySurfacePropertiesToMap {
	struct TSoftObjectPtr<UAkAcousticTexture> AcousticTexture; // 0x00(0x30)
	float OcclusionValue; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct AkAudio.AkWwiseItemToControl
// Size: 0x40 (Inherited: 0x00)
struct FAkWwiseItemToControl {
	struct FAkWwiseObjectDetails ItemPicked; // 0x00(0x30)
	struct FString ItemPath; // 0x30(0x10)
};

// ScriptStruct AkAudio.AkWwiseObjectDetails
// Size: 0x30 (Inherited: 0x00)
struct FAkWwiseObjectDetails {
	struct FString ItemName; // 0x00(0x10)
	struct FString ItemPath; // 0x10(0x10)
	struct FString ItemId; // 0x20(0x10)
};

// ScriptStruct AkAudio.AkPoly
// Size: 0x10 (Inherited: 0x00)
struct FAkPoly {
	struct UAkAcousticTexture* Texture; // 0x00(0x08)
	float Occlusion; // 0x08(0x04)
	bool EnableSurface; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct AkAudio.AkWaapiFieldNames
// Size: 0x10 (Inherited: 0x00)
struct FAkWaapiFieldNames {
	struct FString FieldName; // 0x00(0x10)
};

// ScriptStruct AkAudio.AkWaapiUri
// Size: 0x10 (Inherited: 0x00)
struct FAkWaapiUri {
	struct FString Uri; // 0x00(0x10)
};

// ScriptStruct AkAudio.AkWindowsAdvancedInitializationSettings
// Size: 0x40 (Inherited: 0x38)
struct FAkWindowsAdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering {
	uint32_t AudioAPI; // 0x38(0x04)
	bool GlobalFocus; // 0x3c(0x01)
	bool UseHeadMountedDisplayAudioDevice; // 0x3d(0x01)
	char pad_3E[0x2]; // 0x3e(0x02)
};

// ScriptStruct AkAudio.AkXboxOneApuHeapInitializationSettings
// Size: 0x08 (Inherited: 0x00)
struct FAkXboxOneApuHeapInitializationSettings {
	uint32_t CachedSize; // 0x00(0x04)
	uint32_t NonCachedSize; // 0x04(0x04)
};

// ScriptStruct AkAudio.AkXboxOneAdvancedInitializationSettings
// Size: 0x3c (Inherited: 0x38)
struct FAkXboxOneAdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering {
	uint16_t MaximumNumberOfXMAVoices; // 0x38(0x02)
	bool UseHardwareCodecLowLatencyMode; // 0x3a(0x01)
	char pad_3B[0x1]; // 0x3b(0x01)
};

// ScriptStruct AkAudio.AkAudioEventTrackKey
// Size: 0x20 (Inherited: 0x00)
struct FAkAudioEventTrackKey {
	float Time; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UAkAudioEvent* AkAudioEvent; // 0x08(0x08)
	struct FString EventName; // 0x10(0x10)
};

// ScriptStruct AkAudio.MovieSceneAkAudioEventTemplate
// Size: 0x28 (Inherited: 0x20)
struct FMovieSceneAkAudioEventTemplate : FMovieSceneEvalTemplate {
	struct UMovieSceneAkAudioEventSection* Section; // 0x20(0x08)
};

// ScriptStruct AkAudio.MovieSceneAkAudioRTPCTemplate
// Size: 0x28 (Inherited: 0x20)
struct FMovieSceneAkAudioRTPCTemplate : FMovieSceneEvalTemplate {
	struct UMovieSceneAkAudioRTPCSection* Section; // 0x20(0x08)
};

// ScriptStruct AkAudio.MovieSceneFloatChannelSerializationHelper
// Size: 0x30 (Inherited: 0x00)
struct FMovieSceneFloatChannelSerializationHelper {
	enum class ERichCurveExtrapolation PreInfinityExtrap; // 0x00(0x01)
	enum class ERichCurveExtrapolation PostInfinityExtrap; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct TArray<int32_t> Times; // 0x08(0x10)
	struct TArray<struct FMovieSceneFloatValueSerializationHelper> Values; // 0x18(0x10)
	float DefaultValue; // 0x28(0x04)
	bool bHasDefaultValue; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
};

// ScriptStruct AkAudio.MovieSceneFloatValueSerializationHelper
// Size: 0x1c (Inherited: 0x00)
struct FMovieSceneFloatValueSerializationHelper {
	float Value; // 0x00(0x04)
	enum class ERichCurveInterpMode InterpMode; // 0x04(0x01)
	enum class ERichCurveTangentMode TangentMode; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
	struct FMovieSceneTangentDataSerializationHelper Tangent; // 0x08(0x14)
};

// ScriptStruct AkAudio.MovieSceneTangentDataSerializationHelper
// Size: 0x14 (Inherited: 0x00)
struct FMovieSceneTangentDataSerializationHelper {
	float ArriveTangent; // 0x00(0x04)
	float LeaveTangent; // 0x04(0x04)
	enum class ERichCurveTangentWeightMode TangentWeightMode; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float ArriveTangentWeight; // 0x0c(0x04)
	float LeaveTangentWeight; // 0x10(0x04)
};

