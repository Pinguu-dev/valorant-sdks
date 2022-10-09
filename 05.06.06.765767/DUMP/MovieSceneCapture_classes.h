// Class MovieSceneCapture.MovieSceneCaptureProtocolBase
// Size: 0x60 (Inherited: 0x30)
struct UMovieSceneCaptureProtocolBase : UObject {
	char pad_30[0x28]; // 0x30(0x28)
	enum class EMovieSceneCaptureProtocolState State; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
};

// Class MovieSceneCapture.MovieSceneAudioCaptureProtocolBase
// Size: 0x60 (Inherited: 0x60)
struct UMovieSceneAudioCaptureProtocolBase : UMovieSceneCaptureProtocolBase {
};

// Class MovieSceneCapture.NullAudioCaptureProtocol
// Size: 0x60 (Inherited: 0x60)
struct UNullAudioCaptureProtocol : UMovieSceneAudioCaptureProtocolBase {
};

// Class MovieSceneCapture.MasterAudioSubmixCaptureProtocol
// Size: 0x98 (Inherited: 0x60)
struct UMasterAudioSubmixCaptureProtocol : UMovieSceneAudioCaptureProtocolBase {
	struct FString Filename; // 0x60(0x10)
	char pad_70[0x28]; // 0x70(0x28)
};

// Class MovieSceneCapture.MovieSceneImageCaptureProtocolBase
// Size: 0x60 (Inherited: 0x60)
struct UMovieSceneImageCaptureProtocolBase : UMovieSceneCaptureProtocolBase {
};

// Class MovieSceneCapture.CompositionGraphCaptureProtocol
// Size: 0xd0 (Inherited: 0x60)
struct UCompositionGraphCaptureProtocol : UMovieSceneImageCaptureProtocolBase {
	struct FCompositionGraphCapturePasses IncludeRenderPasses; // 0x60(0x10)
	bool bCaptureFramesInHDR; // 0x70(0x01)
	char pad_71[0x3]; // 0x71(0x03)
	int32_t HDRCompressionQuality; // 0x74(0x04)
	enum class EHDRCaptureGamut CaptureGamut; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
	struct FSoftObjectPath PostProcessingMaterial; // 0x80(0x20)
	bool bDisableScreenPercentage; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
	struct UMaterialInterface* PostProcessingMaterialPtr; // 0xa8(0x08)
	char pad_B0[0x20]; // 0xb0(0x20)
};

// Class MovieSceneCapture.FrameGrabberProtocol
// Size: 0x70 (Inherited: 0x60)
struct UFrameGrabberProtocol : UMovieSceneImageCaptureProtocolBase {
	char pad_60[0x10]; // 0x60(0x10)
};

// Class MovieSceneCapture.ImageSequenceProtocol
// Size: 0xe0 (Inherited: 0x70)
struct UImageSequenceProtocol : UFrameGrabberProtocol {
	char pad_70[0x70]; // 0x70(0x70)
};

// Class MovieSceneCapture.CompressedImageSequenceProtocol
// Size: 0xe8 (Inherited: 0xe0)
struct UCompressedImageSequenceProtocol : UImageSequenceProtocol {
	int32_t CompressionQuality; // 0xe0(0x04)
	char pad_E4[0x4]; // 0xe4(0x04)
};

// Class MovieSceneCapture.ImageSequenceProtocol_BMP
// Size: 0xe0 (Inherited: 0xe0)
struct UImageSequenceProtocol_BMP : UImageSequenceProtocol {
};

// Class MovieSceneCapture.ImageSequenceProtocol_PNG
// Size: 0xe8 (Inherited: 0xe8)
struct UImageSequenceProtocol_PNG : UCompressedImageSequenceProtocol {
};

// Class MovieSceneCapture.ImageSequenceProtocol_JPG
// Size: 0xe8 (Inherited: 0xe8)
struct UImageSequenceProtocol_JPG : UCompressedImageSequenceProtocol {
};

// Class MovieSceneCapture.ImageSequenceProtocol_EXR
// Size: 0xf0 (Inherited: 0xe0)
struct UImageSequenceProtocol_EXR : UImageSequenceProtocol {
	bool bCompressed; // 0xe0(0x01)
	enum class EHDRCaptureGamut CaptureGamut; // 0xe1(0x01)
	char pad_E2[0xe]; // 0xe2(0x0e)
};

// Class MovieSceneCapture.MovieSceneCaptureInterface
// Size: 0x30 (Inherited: 0x30)
struct UMovieSceneCaptureInterface : UInterface {
};

// Class MovieSceneCapture.MovieSceneCapture
// Size: 0x238 (Inherited: 0x30)
struct UMovieSceneCapture : UObject {
	char pad_30[0x10]; // 0x30(0x10)
	struct FSoftClassPath ImageCaptureProtocolType; // 0x40(0x20)
	struct FSoftClassPath AudioCaptureProtocolType; // 0x60(0x20)
	struct UMovieSceneImageCaptureProtocolBase* ImageCaptureProtocol; // 0x80(0x08)
	struct UMovieSceneAudioCaptureProtocolBase* AudioCaptureProtocol; // 0x88(0x08)
	struct FMovieSceneCaptureSettings Settings; // 0x90(0x70)
	bool bUseSeparateProcess; // 0x100(0x01)
	bool bCloseEditorWhenCaptureStarts; // 0x101(0x01)
	char pad_102[0x6]; // 0x102(0x06)
	struct FString AdditionalCommandLineArguments; // 0x108(0x10)
	struct FString InheritedCommandLineArguments; // 0x118(0x10)
	char pad_128[0x110]; // 0x128(0x110)
};

// Class MovieSceneCapture.LevelCapture
// Size: 0x258 (Inherited: 0x238)
struct ULevelCapture : UMovieSceneCapture {
	bool bAutoStartCapture; // 0x238(0x01)
	char pad_239[0xb]; // 0x239(0x0b)
	struct FGuid PrerequisiteActorId; // 0x244(0x10)
	char pad_254[0x4]; // 0x254(0x04)
};

// Class MovieSceneCapture.MovieSceneCaptureEnvironment
// Size: 0x30 (Inherited: 0x30)
struct UMovieSceneCaptureEnvironment : UObject {
};

// Class MovieSceneCapture.UserDefinedCaptureProtocol
// Size: 0xe0 (Inherited: 0x60)
struct UUserDefinedCaptureProtocol : UMovieSceneImageCaptureProtocolBase {
	struct UWorld* World; // 0x60(0x08)
	char pad_68[0x78]; // 0x68(0x78)
};

// Class MovieSceneCapture.UserDefinedImageCaptureProtocol
// Size: 0xe8 (Inherited: 0xe0)
struct UUserDefinedImageCaptureProtocol : UUserDefinedCaptureProtocol {
	enum class EDesiredImageFormat Format; // 0xe0(0x01)
	bool bEnableCompression; // 0xe1(0x01)
	char pad_E2[0x2]; // 0xe2(0x02)
	int32_t CompressionQuality; // 0xe4(0x04)
};

// Class MovieSceneCapture.VideoCaptureProtocol
// Size: 0x88 (Inherited: 0x70)
struct UVideoCaptureProtocol : UFrameGrabberProtocol {
	bool bUseCompression; // 0x70(0x01)
	char pad_71[0x3]; // 0x71(0x03)
	float CompressionQuality; // 0x74(0x04)
	char pad_78[0x10]; // 0x78(0x10)
};

