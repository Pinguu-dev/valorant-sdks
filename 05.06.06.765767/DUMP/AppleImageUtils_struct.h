// Enum AppleImageUtils.EAppleTextureType
enum class EAppleTextureType : uint8 {
	Unknown = 0,
	Image = 1,
	PixelBuffer = 2,
	Surface = 3,
	MetalTexture = 4,
	EAppleTextureType_MAX = 5
};

// Enum AppleImageUtils.ETextureRotationDirection
enum class ETextureRotationDirection : uint8 {
	None = 0,
	Left = 1,
	Right = 2,
	Down = 3,
	LeftMirrored = 4,
	RightMirrored = 5,
	DownMirrored = 6,
	UpMirrored = 7,
	ETextureRotationDirection_MAX = 8
};

// ScriptStruct AppleImageUtils.AppleImageUtilsImageConversionResult
// Size: 0x20 (Inherited: 0x00)
struct FAppleImageUtilsImageConversionResult {
	struct FString Error; // 0x00(0x10)
	struct TArray<char> ImageData; // 0x10(0x10)
};

