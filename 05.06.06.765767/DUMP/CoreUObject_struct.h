// Enum CoreUObject.EInterpCurveMode
enum class EInterpCurveMode : uint8 {
	CIM_Linear = 0,
	CIM_CurveAuto = 1,
	CIM_Constant = 2,
	CIM_CurveUser = 3,
	CIM_CurveBreak = 4,
	CIM_CurveAutoClamped = 5,
	CIM_MAX = 6
};

// Enum CoreUObject.ERangeBoundTypes
enum class ERangeBoundTypes : uint8 {
	Exclusive = 0,
	Inclusive = 1,
	Open = 2,
	ERangeBoundTypes_MAX = 3
};

// Enum CoreUObject.ELocalizedTextSourceCategory
enum class ELocalizedTextSourceCategory : uint8 {
	Game = 0,
	Engine = 1,
	Editor = 2,
	ELocalizedTextSourceCategory_MAX = 3
};

// Enum CoreUObject.EAutomationEventType
enum class EAutomationEventType : uint8 {
	Info = 0,
	Warning = 1,
	Error = 2,
	EAutomationEventType_MAX = 3
};

// Enum CoreUObject.EStringMeasurementUnits
enum class EStringMeasurementUnits : uint8 {
	CodeUnits_UTF16 = 0,
	CodeUnits_UTF8 = 1,
	CodePoints = 2,
	EStringMeasurementUnits_MAX = 3
};

// Enum CoreUObject.EMouseCursor
enum class EMouseCursor : uint8 {
	None = 0,
	Default = 1,
	TextEditBeam = 2,
	ResizeLeftRight = 3,
	ResizeUpDown = 4,
	ResizeSouthEast = 5,
	ResizeSouthWest = 6,
	CardinalCross = 7,
	Crosshairs = 8,
	Hand = 9,
	GrabHand = 10,
	GrabHandClosed = 11,
	SlashedCircle = 12,
	EyeDropper = 13,
	EMouseCursor_MAX = 14
};

// Enum CoreUObject.ELifetimeCondition
enum class ELifetimeCondition : uint8 {
	COND_None = 0,
	COND_InitialOnly = 1,
	COND_OwnerOnly = 2,
	COND_SkipOwner = 3,
	COND_SimulatedOnly = 4,
	COND_AutonomousOnly = 5,
	COND_SimulatedOrPhysics = 6,
	COND_InitialOrOwner = 7,
	COND_Custom = 8,
	COND_ReplayOrOwner = 9,
	COND_ReplayOnly = 10,
	COND_SimulatedOnlyNoReplay = 11,
	COND_SimulatedOrPhysicsNoReplay = 12,
	COND_SkipReplay = 13,
	COND_Never = 15,
	COND_Max = 16,
	COND_Max = 17
};

// Enum CoreUObject.EDataValidationResult
enum class EDataValidationResult : uint8 {
	Invalid = 0,
	Valid = 1,
	NotValidated = 2,
	EDataValidationResult_MAX = 3
};

// Enum CoreUObject.EAppMsgType
enum class EAppMsgType : uint8 {
	Ok = 0,
	YesNo = 1,
	OkCancel = 2,
	YesNoCancel = 3,
	CancelRetryContinue = 4,
	YesNoYesAllNoAll = 5,
	YesNoYesAllNoAllCancel = 6,
	YesNoYesAll = 7,
	EAppMsgType_MAX = 8
};

// Enum CoreUObject.EAppReturnType
enum class EAppReturnType : uint8 {
	No = 0,
	Yes = 1,
	YesAll = 2,
	NoAll = 3,
	Cancel = 4,
	Ok = 5,
	Retry = 6,
	Continue = 7,
	EAppReturnType_MAX = 8
};

// Enum CoreUObject.EPropertyAccessChangeNotifyMode
enum class EPropertyAccessChangeNotifyMode : uint8 {
	Default = 0,
	Never = 1,
	Always = 2,
	EPropertyAccessChangeNotifyMode_MAX = 3
};

// Enum CoreUObject.EUnit
enum class EUnit : uint8 {
	Micrometers = 0,
	Millimeters = 1,
	Centimeters = 2,
	Meters = 3,
	Kilometers = 4,
	Inches = 5,
	Feet = 6,
	Yards = 7,
	Miles = 8,
	Lightyears = 9,
	Degrees = 10,
	Radians = 11,
	MetersPerSecond = 12,
	KilometersPerHour = 13,
	MilesPerHour = 14,
	Celsius = 15,
	Farenheit = 16,
	Kelvin = 17,
	Micrograms = 18,
	Milligrams = 19,
	Grams = 20,
	Kilograms = 21,
	MetricTons = 22,
	Ounces = 23,
	Pounds = 24,
	Stones = 25,
	Newtons = 26,
	PoundsForce = 27,
	KilogramsForce = 28,
	Hertz = 29,
	Kilohertz = 30,
	Megahertz = 31,
	Gigahertz = 32,
	RevolutionsPerMinute = 33,
	Bytes = 34,
	Kilobytes = 35,
	Megabytes = 36,
	Gigabytes = 37,
	Terabytes = 38,
	Lumens = 39,
	Milliseconds = 43,
	Seconds = 44,
	Minutes = 45,
	Hours = 46,
	Days = 47,
	Months = 48,
	Years = 49,
	Multiplier = 52,
	Percentage = 51,
	Unspecified = 53,
	EUnit_MAX = 54
};

// Enum CoreUObject.EPixelFormat
enum class EPixelFormat : uint8 {
	PF_Unknown = 0,
	PF_A32B32G32R32F = 1,
	PF_B8G8R8A8 = 2,
	PF_G8 = 3,
	PF_G16 = 4,
	PF_DXT1 = 5,
	PF_DXT3 = 6,
	PF_DXT5 = 7,
	PF_UYVY = 8,
	PF_FloatRGB = 9,
	PF_FloatRGBA = 10,
	PF_DepthStencil = 11,
	PF_ShadowDepth = 12,
	PF_R32_FLOAT = 13,
	PF_G16R16 = 14,
	PF_G16R16F = 15,
	PF_G16R16F_FILTER = 16,
	PF_G32R32F = 17,
	PF_A2B10G10R10 = 18,
	PF_A16B16G16R16 = 19,
	PF_D24 = 20,
	PF_R16F = 21,
	PF_R16F_FILTER = 22,
	PF_BC5 = 23,
	PF_V8U8 = 24,
	PF_A1 = 25,
	PF_FloatR11G11B10 = 26,
	PF_A8 = 27,
	PF_R32_UINT = 28,
	PF_R32_SINT = 29,
	PF_PVRTC2 = 30,
	PF_PVRTC4 = 31,
	PF_R16_UINT = 32,
	PF_R16_SINT = 33,
	PF_R16G16B16A16_UINT = 34,
	PF_R16G16B16A16_SINT = 35,
	PF_R5G6B5_UNORM = 36,
	PF_R8G8B8A8 = 37,
	PF_A8R8G8B8 = 38,
	PF_BC4 = 39,
	PF_R8G8 = 40,
	PF_ATC_RGB = 41,
	PF_ATC_RGBA_E = 42,
	PF_ATC_RGBA_I = 43,
	PF_X24_G8 = 44,
	PF_ETC1 = 45,
	PF_ETC2_RGB = 46,
	PF_ETC2_RGBA = 47,
	PF_R32G32B32A32_UINT = 48,
	PF_R16G16_UINT = 49,
	PF_ASTC_4x4 = 50,
	PF_ASTC_6x6 = 51,
	PF_ASTC_8x8 = 52,
	PF_ASTC_10x10 = 53,
	PF_ASTC_12x12 = 54,
	PF_BC6H = 55,
	PF_BC7 = 56,
	PF_R8_UINT = 57,
	PF_L8 = 58,
	PF_XGXR8 = 59,
	PF_R8G8B8A8_UINT = 60,
	PF_R8G8B8A8_SNORM = 61,
	PF_R16G16B16A16_UNORM = 62,
	PF_R16G16B16A16_SNORM = 63,
	PF_PLATFORM_HDR_1 = 64,
	PF_PLATFORM_HDR_2 = 65,
	PF_PLATFORM_HDR_3 = 66,
	PF_NV12 = 67,
	PF_R32G32_UINT = 68,
	PF_ETC2_R11_EAC = 69,
	PF_ETC2_RG11_EAC = 70,
	PF_MAX = 72
};

// Enum CoreUObject.EAxis
enum class EAxis : uint8 {
	None = 0,
	X = 1,
	Y = 2,
	Z = 3,
	EAxis_MAX = 4
};

// Enum CoreUObject.ELogTimes
enum class ELogTimes : uint8 {
	None = 0,
	UTC = 1,
	SinceGStartTime = 2,
	Local = 3,
	ELogTimes_MAX = 4
};

// Enum CoreUObject.ESearchDir
enum class ESearchDir : uint8 {
	FromStart = 0,
	FromEnd = 1,
	ESearchDir_MAX = 2
};

// Enum CoreUObject.ESearchCase
enum class ESearchCase : uint8 {
	CaseSensitive = 0,
	IgnoreCase = 1,
	ESearchCase_MAX = 2
};

// ScriptStruct CoreUObject.JoinabilitySettings
// Size: 0x18 (Inherited: 0x00)
struct FJoinabilitySettings {
	struct FName SessionName; // 0x00(0x0c)
	bool bPublicSearchable; // 0x0c(0x01)
	bool bAllowInvites; // 0x0d(0x01)
	bool bJoinViaPresence; // 0x0e(0x01)
	bool bJoinViaPresenceFriendsOnly; // 0x0f(0x01)
	int32_t MaxPlayers; // 0x10(0x04)
	int32_t MaxPartySize; // 0x14(0x04)
};

// ScriptStruct CoreUObject.UniqueNetIdWrapper
// Size: 0x01 (Inherited: 0x00)
struct FUniqueNetIdWrapper {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct CoreUObject.Guid
// Size: 0x10 (Inherited: 0x00)
struct FGuid {
	int32_t A; // 0x00(0x04)
	int32_t B; // 0x04(0x04)
	int32_t C; // 0x08(0x04)
	int32_t D; // 0x0c(0x04)
};

// ScriptStruct CoreUObject.Vector
// Size: 0x0c (Inherited: 0x00)
struct FVector {
	float X; // 0x00(0x04)
	float Y; // 0x04(0x04)
	float Z; // 0x08(0x04)
};

// ScriptStruct CoreUObject.Vector4
// Size: 0x10 (Inherited: 0x00)
struct FVector4 {
	float X; // 0x00(0x04)
	float Y; // 0x04(0x04)
	float Z; // 0x08(0x04)
	float W; // 0x0c(0x04)
};

// ScriptStruct CoreUObject.Vector2D
// Size: 0x08 (Inherited: 0x00)
struct FVector2D {
	float X; // 0x00(0x04)
	float Y; // 0x04(0x04)
};

// ScriptStruct CoreUObject.TwoVectors
// Size: 0x18 (Inherited: 0x00)
struct FTwoVectors {
	struct FVector v1; // 0x00(0x0c)
	struct FVector v2; // 0x0c(0x0c)
};

// ScriptStruct CoreUObject.Plane
// Size: 0x10 (Inherited: 0x0c)
struct FPlane : FVector {
	float W; // 0x0c(0x04)
};

// ScriptStruct CoreUObject.Rotator
// Size: 0x0c (Inherited: 0x00)
struct FRotator {
	float Pitch; // 0x00(0x04)
	float Yaw; // 0x04(0x04)
	float Roll; // 0x08(0x04)
};

// ScriptStruct CoreUObject.Quat
// Size: 0x10 (Inherited: 0x00)
struct FQuat {
	float X; // 0x00(0x04)
	float Y; // 0x04(0x04)
	float Z; // 0x08(0x04)
	float W; // 0x0c(0x04)
};

// ScriptStruct CoreUObject.PackedNormal
// Size: 0x04 (Inherited: 0x00)
struct FPackedNormal {
	char X; // 0x00(0x01)
	char Y; // 0x01(0x01)
	char Z; // 0x02(0x01)
	char W; // 0x03(0x01)
};

// ScriptStruct CoreUObject.PackedRGB10A2N
// Size: 0x04 (Inherited: 0x00)
struct FPackedRGB10A2N {
	int32_t Packed; // 0x00(0x04)
};

// ScriptStruct CoreUObject.PackedRGBA16N
// Size: 0x08 (Inherited: 0x00)
struct FPackedRGBA16N {
	int32_t XY; // 0x00(0x04)
	int32_t ZW; // 0x04(0x04)
};

// ScriptStruct CoreUObject.IntPoint
// Size: 0x08 (Inherited: 0x00)
struct FIntPoint {
	int32_t X; // 0x00(0x04)
	int32_t Y; // 0x04(0x04)
};

// ScriptStruct CoreUObject.IntVector
// Size: 0x0c (Inherited: 0x00)
struct FIntVector {
	int32_t X; // 0x00(0x04)
	int32_t Y; // 0x04(0x04)
	int32_t Z; // 0x08(0x04)
};

// ScriptStruct CoreUObject.Color
// Size: 0x04 (Inherited: 0x00)
struct FColor {
	char B; // 0x00(0x01)
	char G; // 0x01(0x01)
	char R; // 0x02(0x01)
	char A; // 0x03(0x01)
};

// ScriptStruct CoreUObject.LinearColor
// Size: 0x10 (Inherited: 0x00)
struct FLinearColor {
	float R; // 0x00(0x04)
	float G; // 0x04(0x04)
	float B; // 0x08(0x04)
	float A; // 0x0c(0x04)
};

// ScriptStruct CoreUObject.Box
// Size: 0x1c (Inherited: 0x00)
struct FBox {
	struct FVector Min; // 0x00(0x0c)
	struct FVector Max; // 0x0c(0x0c)
	char IsValid; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
};

// ScriptStruct CoreUObject.Box2D
// Size: 0x14 (Inherited: 0x00)
struct FBox2D {
	struct FVector2D Min; // 0x00(0x08)
	struct FVector2D Max; // 0x08(0x08)
	char bIsValid; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
};

// ScriptStruct CoreUObject.BoxSphereBounds
// Size: 0x1c (Inherited: 0x00)
struct FBoxSphereBounds {
	struct FVector Origin; // 0x00(0x0c)
	struct FVector BoxExtent; // 0x0c(0x0c)
	float SphereRadius; // 0x18(0x04)
};

// ScriptStruct CoreUObject.OrientedBox
// Size: 0x3c (Inherited: 0x00)
struct FOrientedBox {
	struct FVector Center; // 0x00(0x0c)
	struct FVector AxisX; // 0x0c(0x0c)
	struct FVector AxisY; // 0x18(0x0c)
	struct FVector AxisZ; // 0x24(0x0c)
	float ExtentX; // 0x30(0x04)
	float ExtentY; // 0x34(0x04)
	float ExtentZ; // 0x38(0x04)
};

// ScriptStruct CoreUObject.Matrix
// Size: 0x40 (Inherited: 0x00)
struct FMatrix {
	struct FPlane XPlane; // 0x00(0x10)
	struct FPlane YPlane; // 0x10(0x10)
	struct FPlane ZPlane; // 0x20(0x10)
	struct FPlane WPlane; // 0x30(0x10)
};

// ScriptStruct CoreUObject.InterpCurvePointFloat
// Size: 0x14 (Inherited: 0x00)
struct FInterpCurvePointFloat {
	float InVal; // 0x00(0x04)
	float OutVal; // 0x04(0x04)
	float ArriveTangent; // 0x08(0x04)
	float LeaveTangent; // 0x0c(0x04)
	enum class EInterpCurveMode InterpMode; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
};

// ScriptStruct CoreUObject.InterpCurveFloat
// Size: 0x18 (Inherited: 0x00)
struct FInterpCurveFloat {
	struct TArray<struct FInterpCurvePointFloat> Points; // 0x00(0x10)
	bool bIsLooped; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float LoopKeyOffset; // 0x14(0x04)
};

// ScriptStruct CoreUObject.InterpCurvePointVector2D
// Size: 0x20 (Inherited: 0x00)
struct FInterpCurvePointVector2D {
	float InVal; // 0x00(0x04)
	struct FVector2D OutVal; // 0x04(0x08)
	struct FVector2D ArriveTangent; // 0x0c(0x08)
	struct FVector2D LeaveTangent; // 0x14(0x08)
	enum class EInterpCurveMode InterpMode; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct CoreUObject.InterpCurveVector2D
// Size: 0x18 (Inherited: 0x00)
struct FInterpCurveVector2D {
	struct TArray<struct FInterpCurvePointVector2D> Points; // 0x00(0x10)
	bool bIsLooped; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float LoopKeyOffset; // 0x14(0x04)
};

// ScriptStruct CoreUObject.InterpCurvePointVector
// Size: 0x2c (Inherited: 0x00)
struct FInterpCurvePointVector {
	float InVal; // 0x00(0x04)
	struct FVector OutVal; // 0x04(0x0c)
	struct FVector ArriveTangent; // 0x10(0x0c)
	struct FVector LeaveTangent; // 0x1c(0x0c)
	enum class EInterpCurveMode InterpMode; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
};

// ScriptStruct CoreUObject.InterpCurveVector
// Size: 0x18 (Inherited: 0x00)
struct FInterpCurveVector {
	struct TArray<struct FInterpCurvePointVector> Points; // 0x00(0x10)
	bool bIsLooped; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float LoopKeyOffset; // 0x14(0x04)
};

// ScriptStruct CoreUObject.InterpCurvePointQuat
// Size: 0x50 (Inherited: 0x00)
struct FInterpCurvePointQuat {
	float InVal; // 0x00(0x04)
	char pad_4[0xc]; // 0x04(0x0c)
	struct FQuat OutVal; // 0x10(0x10)
	struct FQuat ArriveTangent; // 0x20(0x10)
	struct FQuat LeaveTangent; // 0x30(0x10)
	enum class EInterpCurveMode InterpMode; // 0x40(0x01)
	char pad_41[0xf]; // 0x41(0x0f)
};

// ScriptStruct CoreUObject.InterpCurveQuat
// Size: 0x18 (Inherited: 0x00)
struct FInterpCurveQuat {
	struct TArray<struct FInterpCurvePointQuat> Points; // 0x00(0x10)
	bool bIsLooped; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float LoopKeyOffset; // 0x14(0x04)
};

// ScriptStruct CoreUObject.InterpCurvePointTwoVectors
// Size: 0x50 (Inherited: 0x00)
struct FInterpCurvePointTwoVectors {
	float InVal; // 0x00(0x04)
	struct FTwoVectors OutVal; // 0x04(0x18)
	struct FTwoVectors ArriveTangent; // 0x1c(0x18)
	struct FTwoVectors LeaveTangent; // 0x34(0x18)
	enum class EInterpCurveMode InterpMode; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
};

// ScriptStruct CoreUObject.InterpCurveTwoVectors
// Size: 0x18 (Inherited: 0x00)
struct FInterpCurveTwoVectors {
	struct TArray<struct FInterpCurvePointTwoVectors> Points; // 0x00(0x10)
	bool bIsLooped; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float LoopKeyOffset; // 0x14(0x04)
};

// ScriptStruct CoreUObject.InterpCurvePointLinearColor
// Size: 0x38 (Inherited: 0x00)
struct FInterpCurvePointLinearColor {
	float InVal; // 0x00(0x04)
	struct FLinearColor OutVal; // 0x04(0x10)
	struct FLinearColor ArriveTangent; // 0x14(0x10)
	struct FLinearColor LeaveTangent; // 0x24(0x10)
	enum class EInterpCurveMode InterpMode; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
};

// ScriptStruct CoreUObject.InterpCurveLinearColor
// Size: 0x18 (Inherited: 0x00)
struct FInterpCurveLinearColor {
	struct TArray<struct FInterpCurvePointLinearColor> Points; // 0x00(0x10)
	bool bIsLooped; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float LoopKeyOffset; // 0x14(0x04)
};

// ScriptStruct CoreUObject.Transform
// Size: 0x30 (Inherited: 0x00)
struct FTransform {
	struct FQuat Rotation; // 0x00(0x10)
	struct FVector Translation; // 0x10(0x0c)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FVector Scale3D; // 0x20(0x0c)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct CoreUObject.RandomStream
// Size: 0x18 (Inherited: 0x00)
struct FRandomStream {
	char pad_0[0x10]; // 0x00(0x10)
	int32_t InitialSeed; // 0x10(0x04)
	int32_t Seed; // 0x14(0x04)
};

// ScriptStruct CoreUObject.DateTime
// Size: 0x08 (Inherited: 0x00)
struct FDateTime {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct CoreUObject.FrameNumber
// Size: 0x04 (Inherited: 0x00)
struct FFrameNumber {
	int32_t Value; // 0x00(0x04)
};

// ScriptStruct CoreUObject.FrameRate
// Size: 0x08 (Inherited: 0x00)
struct FFrameRate {
	int32_t Numerator; // 0x00(0x04)
	int32_t Denominator; // 0x04(0x04)
};

// ScriptStruct CoreUObject.FrameTime
// Size: 0x08 (Inherited: 0x00)
struct FFrameTime {
	struct FFrameNumber FrameNumber; // 0x00(0x04)
	float SubFrame; // 0x04(0x04)
};

// ScriptStruct CoreUObject.QualifiedFrameTime
// Size: 0x10 (Inherited: 0x00)
struct FQualifiedFrameTime {
	struct FFrameTime Time; // 0x00(0x08)
	struct FFrameRate Rate; // 0x08(0x08)
};

// ScriptStruct CoreUObject.Timecode
// Size: 0x14 (Inherited: 0x00)
struct FTimecode {
	int32_t Hours; // 0x00(0x04)
	int32_t Minutes; // 0x04(0x04)
	int32_t Seconds; // 0x08(0x04)
	int32_t Frames; // 0x0c(0x04)
	bool bDropFrameFormat; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
};

// ScriptStruct CoreUObject.Timespan
// Size: 0x08 (Inherited: 0x00)
struct FTimespan {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct CoreUObject.SoftObjectPath
// Size: 0x20 (Inherited: 0x00)
struct FSoftObjectPath {
	struct FName AssetPathName; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString SubPathString; // 0x10(0x10)
};

// ScriptStruct CoreUObject.SoftClassPath
// Size: 0x20 (Inherited: 0x20)
struct FSoftClassPath : FSoftObjectPath {
};

// ScriptStruct CoreUObject.PrimaryAssetType
// Size: 0x0c (Inherited: 0x00)
struct FPrimaryAssetType {
	struct FName Name; // 0x00(0x0c)
};

// ScriptStruct CoreUObject.PrimaryAssetId
// Size: 0x18 (Inherited: 0x00)
struct FPrimaryAssetId {
	struct FPrimaryAssetType PrimaryAssetType; // 0x00(0x0c)
	struct FName PrimaryAssetName; // 0x0c(0x0c)
};

// ScriptStruct CoreUObject.FallbackStruct
// Size: 0x01 (Inherited: 0x00)
struct FFallbackStruct {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct CoreUObject.FloatRangeBound
// Size: 0x08 (Inherited: 0x00)
struct FFloatRangeBound {
	enum class ERangeBoundTypes Type; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Value; // 0x04(0x04)
};

// ScriptStruct CoreUObject.FloatRange
// Size: 0x10 (Inherited: 0x00)
struct FFloatRange {
	struct FFloatRangeBound LowerBound; // 0x00(0x08)
	struct FFloatRangeBound UpperBound; // 0x08(0x08)
};

// ScriptStruct CoreUObject.Int32RangeBound
// Size: 0x08 (Inherited: 0x00)
struct FInt32RangeBound {
	enum class ERangeBoundTypes Type; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t Value; // 0x04(0x04)
};

// ScriptStruct CoreUObject.Int32Range
// Size: 0x10 (Inherited: 0x00)
struct FInt32Range {
	struct FInt32RangeBound LowerBound; // 0x00(0x08)
	struct FInt32RangeBound UpperBound; // 0x08(0x08)
};

// ScriptStruct CoreUObject.FrameNumberRangeBound
// Size: 0x08 (Inherited: 0x00)
struct FFrameNumberRangeBound {
	enum class ERangeBoundTypes Type; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FFrameNumber Value; // 0x04(0x04)
};

// ScriptStruct CoreUObject.FrameNumberRange
// Size: 0x10 (Inherited: 0x00)
struct FFrameNumberRange {
	struct FFrameNumberRangeBound LowerBound; // 0x00(0x08)
	struct FFrameNumberRangeBound UpperBound; // 0x08(0x08)
};

// ScriptStruct CoreUObject.FloatInterval
// Size: 0x08 (Inherited: 0x00)
struct FFloatInterval {
	float Min; // 0x00(0x04)
	float Max; // 0x04(0x04)
};

// ScriptStruct CoreUObject.Int32Interval
// Size: 0x08 (Inherited: 0x00)
struct FInt32Interval {
	int32_t Min; // 0x00(0x04)
	int32_t Max; // 0x04(0x04)
};

// ScriptStruct CoreUObject.PolyglotTextData
// Size: 0xb8 (Inherited: 0x00)
struct FPolyglotTextData {
	enum class ELocalizedTextSourceCategory Category; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString NativeCulture; // 0x08(0x10)
	struct FString Namespace; // 0x18(0x10)
	struct FString Key; // 0x28(0x10)
	struct FString NativeString; // 0x38(0x10)
	struct TMap<struct FString, struct FString> LocalizedStrings; // 0x48(0x50)
	bool bIsMinimalPatch; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
	struct FText CachedText; // 0xa0(0x18)
};

// ScriptStruct CoreUObject.AutomationEvent
// Size: 0x38 (Inherited: 0x00)
struct FAutomationEvent {
	enum class EAutomationEventType Type; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString Message; // 0x08(0x10)
	struct FString Context; // 0x18(0x10)
	struct FGuid Artifact; // 0x28(0x10)
};

// ScriptStruct CoreUObject.AutomationExecutionEntry
// Size: 0x58 (Inherited: 0x00)
struct FAutomationExecutionEntry {
	struct FAutomationEvent Event; // 0x00(0x38)
	struct FString Filename; // 0x38(0x10)
	int32_t LineNumber; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct FDateTime Timestamp; // 0x50(0x08)
};

// ScriptStruct CoreUObject.ARFilter
// Size: 0x100 (Inherited: 0x00)
struct FARFilter {
	struct TArray<struct FName> PackageNames; // 0x00(0x10)
	struct TArray<struct FName> PackagePaths; // 0x10(0x10)
	struct TArray<struct FName> ObjectPaths; // 0x20(0x10)
	struct TArray<struct FName> ClassNames; // 0x30(0x10)
	char pad_40[0x50]; // 0x40(0x50)
	struct TSet<struct FName> RecursiveClassesExclusionSet; // 0x90(0x50)
	bool bRecursivePaths; // 0xe0(0x01)
	bool bRecursiveClasses; // 0xe1(0x01)
	bool bIncludeOnlyOnDiskAssets; // 0xe2(0x01)
	char pad_E3[0x1d]; // 0xe3(0x1d)
};

// ScriptStruct CoreUObject.AssetBundleEntry
// Size: 0x38 (Inherited: 0x00)
struct FAssetBundleEntry {
	struct FPrimaryAssetId BundleScope; // 0x00(0x18)
	struct FName BundleName; // 0x18(0x0c)
	char pad_24[0x4]; // 0x24(0x04)
	struct TArray<struct FSoftObjectPath> BundleAssets; // 0x28(0x10)
};

// ScriptStruct CoreUObject.AssetBundleData
// Size: 0x10 (Inherited: 0x00)
struct FAssetBundleData {
	struct TArray<struct FAssetBundleEntry> Bundles; // 0x00(0x10)
};

// ScriptStruct CoreUObject.AssetData
// Size: 0x68 (Inherited: 0x00)
struct FAssetData {
	struct FName ObjectPath; // 0x00(0x0c)
	struct FName PackageName; // 0x0c(0x0c)
	struct FName PackagePath; // 0x18(0x0c)
	struct FName AssetName; // 0x24(0x0c)
	struct FName AssetClass; // 0x30(0x0c)
	char pad_3C[0x2c]; // 0x3c(0x2c)
};

// ScriptStruct CoreUObject.UnicodeStringLength
// Size: 0x08 (Inherited: 0x00)
struct FUnicodeStringLength {
	enum class EStringMeasurementUnits Units; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t Length; // 0x04(0x04)
};

