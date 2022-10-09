// Enum MediaAssets.EMediaWebcamCaptureDeviceFilter
enum class EMediaWebcamCaptureDeviceFilter : uint8 {
	None = 0,
	DepthSensor = 1,
	Front = 2,
	Rear = 4,
	Unknown = 8,
	EMediaWebcamCaptureDeviceFilter_MAX = 9
};

// Enum MediaAssets.EMediaVideoCaptureDeviceFilter
enum class EMediaVideoCaptureDeviceFilter : uint8 {
	None = 0,
	Card = 1,
	Software = 2,
	Unknown = 4,
	Webcam = 8,
	EMediaVideoCaptureDeviceFilter_MAX = 9
};

// Enum MediaAssets.EMediaAudioCaptureDeviceFilter
enum class EMediaAudioCaptureDeviceFilter : uint8 {
	None = 0,
	Card = 1,
	Microphone = 2,
	Software = 4,
	Unknown = 8,
	EMediaAudioCaptureDeviceFilter_MAX = 9
};

// Enum MediaAssets.EMediaPlayerTrack
enum class EMediaPlayerTrack : uint8 {
	Audio = 0,
	Caption = 1,
	Metadata = 2,
	Script = 3,
	Subtitle = 4,
	Text = 5,
	Video = 6,
	EMediaPlayerTrack_MAX = 7
};

// Enum MediaAssets.EMediaSoundComponentFFTSize
enum class EMediaSoundComponentFFTSize : uint8 {
	Min_65 = 0,
	Small_257 = 1,
	Medium_513 = 2,
	Large_1025 = 3,
	EMediaSoundComponentFFTSize_MAX = 4
};

// Enum MediaAssets.EMediaSoundChannels
enum class EMediaSoundChannels : uint8 {
	Mono = 0,
	Stereo = 1,
	Surround = 2,
	EMediaSoundChannels_MAX = 3
};

// Enum MediaAssets.MediaTextureOrientation
enum class MediaTextureOrientation : uint8 {
	MTORI_Original = 0,
	MTORI_CW90 = 1,
	MTORI_CW180 = 2,
	MTORI_CW270 = 3,
	MTORI_MAX = 4
};

// Enum MediaAssets.MediaTextureOutputFormat
enum class MediaTextureOutputFormat : uint8 {
	MTOF_Default = 0,
	MTOF_SRGB_LINOUT = 1,
	MTOF_MAX = 2
};

// ScriptStruct MediaAssets.MediaCaptureDevice
// Size: 0x28 (Inherited: 0x00)
struct FMediaCaptureDevice {
	struct FText DisplayName; // 0x00(0x18)
	struct FString URL; // 0x18(0x10)
};

// ScriptStruct MediaAssets.MediaSoundComponentSpectralData
// Size: 0x08 (Inherited: 0x00)
struct FMediaSoundComponentSpectralData {
	float FrequencyHz; // 0x00(0x04)
	float Magnitude; // 0x04(0x04)
};

