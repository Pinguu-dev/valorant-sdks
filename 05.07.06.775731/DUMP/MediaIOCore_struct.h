// Enum MediaIOCore.EFileMediaOutputPixelFormat
enum class EFileMediaOutputPixelFormat : uint8 {
	B8G8R8A8 = 0,
	FloatRGBA = 1,
	EFileMediaOutputPixelFormat_MAX = 2
};

// Enum MediaIOCore.EMediaCaptureCroppingType
enum class EMediaCaptureCroppingType : uint8 {
	None = 0,
	Center = 1,
	TopLeft = 2,
	Custom = 3,
	EMediaCaptureCroppingType_MAX = 4
};

// Enum MediaIOCore.EMediaCaptureState
enum class EMediaCaptureState : uint8 {
	Error = 0,
	Capturing = 1,
	Preparing = 2,
	StopRequested = 3,
	Stopped = 4,
	EMediaCaptureState_MAX = 5
};

// Enum MediaIOCore.EMediaIOReferenceType
enum class EMediaIOReferenceType : uint8 {
	FreeRun = 0,
	External = 1,
	Input = 2,
	EMediaIOReferenceType_MAX = 3
};

// Enum MediaIOCore.EMediaIOOutputType
enum class EMediaIOOutputType : uint8 {
	Fill = 0,
	FillAndKey = 1,
	EMediaIOOutputType_MAX = 2
};

// Enum MediaIOCore.EMediaIOInputType
enum class EMediaIOInputType : uint8 {
	Fill = 0,
	FillAndKey = 1,
	EMediaIOInputType_MAX = 2
};

// Enum MediaIOCore.EMediaIOTimecodeFormat
enum class EMediaIOTimecodeFormat : uint8 {
	None = 0,
	LTC = 1,
	VITC = 2,
	EMediaIOTimecodeFormat_MAX = 3
};

// Enum MediaIOCore.EMediaIOStandardType
enum class EMediaIOStandardType : uint8 {
	Progressive = 0,
	Interlaced = 1,
	ProgressiveSegmentedFrame = 2,
	EMediaIOStandardType_MAX = 3
};

// Enum MediaIOCore.EMediaIOQuadLinkTransportType
enum class EMediaIOQuadLinkTransportType : uint8 {
	SquareDivision = 0,
	TwoSampleInterleave = 1,
	EMediaIOQuadLinkTransportType_MAX = 2
};

// Enum MediaIOCore.EMediaIOTransportType
enum class EMediaIOTransportType : uint8 {
	SingleLink = 0,
	DualLink = 1,
	QuadLink = 2,
	HDMI = 3,
	EMediaIOTransportType_MAX = 4
};

// ScriptStruct MediaIOCore.MediaCaptureOptions
// Size: 0x10 (Inherited: 0x00)
struct FMediaCaptureOptions {
	enum class EMediaCaptureCroppingType Crop; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FIntPoint CustomCapturePoint; // 0x04(0x08)
	bool bResizeSourceBuffer; // 0x0c(0x01)
	bool bSkipFrameWhenRunningExpensiveTasks; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
};

// ScriptStruct MediaIOCore.MediaIOOutputConfiguration
// Size: 0x54 (Inherited: 0x00)
struct FMediaIOOutputConfiguration {
	struct FMediaIOConfiguration MediaConfiguration; // 0x00(0x44)
	enum class EMediaIOOutputType OutputType; // 0x44(0x04)
	int32_t KeyPortIdentifier; // 0x48(0x04)
	enum class EMediaIOReferenceType OutputReference; // 0x4c(0x04)
	int32_t ReferencePortIdentifier; // 0x50(0x04)
};

// ScriptStruct MediaIOCore.MediaIOConfiguration
// Size: 0x44 (Inherited: 0x00)
struct FMediaIOConfiguration {
	bool bIsInput; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FMediaIOConnection MediaConnection; // 0x04(0x28)
	struct FMediaIOMode MediaMode; // 0x2c(0x18)
};

// ScriptStruct MediaIOCore.MediaIOMode
// Size: 0x18 (Inherited: 0x00)
struct FMediaIOMode {
	struct FFrameRate FrameRate; // 0x00(0x08)
	struct FIntPoint Resolution; // 0x08(0x08)
	enum class EMediaIOStandardType Standard; // 0x10(0x04)
	int32_t DeviceModeIdentifier; // 0x14(0x04)
};

// ScriptStruct MediaIOCore.MediaIOConnection
// Size: 0x28 (Inherited: 0x00)
struct FMediaIOConnection {
	struct FMediaIODevice Device; // 0x00(0x10)
	struct FName protocol; // 0x10(0x0c)
	enum class EMediaIOTransportType TransportType; // 0x1c(0x04)
	enum class EMediaIOQuadLinkTransportType QuadTransportType; // 0x20(0x04)
	int32_t PortIdentifier; // 0x24(0x04)
};

// ScriptStruct MediaIOCore.MediaIODevice
// Size: 0x10 (Inherited: 0x00)
struct FMediaIODevice {
	struct FName DeviceName; // 0x00(0x0c)
	int32_t DeviceIdentifier; // 0x0c(0x04)
};

// ScriptStruct MediaIOCore.MediaIOInputConfiguration
// Size: 0x4c (Inherited: 0x00)
struct FMediaIOInputConfiguration {
	struct FMediaIOConfiguration MediaConfiguration; // 0x00(0x44)
	enum class EMediaIOInputType InputType; // 0x44(0x04)
	int32_t KeyPortIdentifier; // 0x48(0x04)
};

