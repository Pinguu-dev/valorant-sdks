// Class AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy
// Size: 0xa0 (Inherited: 0x30)
struct UAppleImageUtilsBaseAsyncTaskBlueprintProxy : UObject {
	char pad_30[0x18]; // 0x30(0x18)
	struct FMulticastInlineDelegate OnSuccess; // 0x48(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x58(0x10)
	char pad_68[0x10]; // 0x68(0x10)
	struct FAppleImageUtilsImageConversionResult ConversionResult; // 0x78(0x20)
	char pad_98[0x8]; // 0x98(0x08)
};

// Class AppleImageUtils.AppleImageInterface
// Size: 0x30 (Inherited: 0x30)
struct UAppleImageInterface : UInterface {
};

