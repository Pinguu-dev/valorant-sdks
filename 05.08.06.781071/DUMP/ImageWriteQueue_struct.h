// Enum ImageWriteQueue.EDesiredImageFormat
enum class EDesiredImageFormat : uint8 {
	PNG = 0,
	JPG = 1,
	BMP = 2,
	EXR = 3,
	EDesiredImageFormat_MAX = 4
};

// ScriptStruct ImageWriteQueue.ImageWriteOptions
// Size: 0x60 (Inherited: 0x00)
struct FImageWriteOptions {
	enum class EDesiredImageFormat Format; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FDelegate OnComplete; // 0x04(0x14)
	int32_t CompressionQuality; // 0x18(0x04)
	bool bOverwriteFile; // 0x1c(0x01)
	bool bAsync; // 0x1d(0x01)
	char pad_1E[0x42]; // 0x1e(0x42)
};

