// Class AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy
// Size: 0xa0 (Inherited: 0x30)
struct UAppleImageUtilsBaseAsyncTaskBlueprintProxy : UObject {
	char pad_30[0x18]; // 0x30(0x18)
	struct FMulticastInlineDelegate OnSuccess; // 0x48(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x58(0x10)
	char pad_68[0x10]; // 0x68(0x10)
	struct FAppleImageUtilsImageConversionResult ConversionResult; // 0x78(0x20)
	char pad_98[0x8]; // 0x98(0x08)

	struct UAppleImageUtilsBaseAsyncTaskBlueprintProxy* CreateProxyObjectForConvertToTIFF(struct UTexture* SourceImage, bool bWantColor, bool bUseGpu, float Scale, enum class ETextureRotationDirection Rotate); // Function AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToTIFF // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1df0cd0
	struct UAppleImageUtilsBaseAsyncTaskBlueprintProxy* CreateProxyObjectForConvertToPNG(struct UTexture* SourceImage, bool bWantColor, bool bUseGpu, float Scale, enum class ETextureRotationDirection Rotate); // Function AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToPNG // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1df0b10
	struct UAppleImageUtilsBaseAsyncTaskBlueprintProxy* CreateProxyObjectForConvertToJPEG(struct UTexture* SourceImage, int32_t Quality, bool bWantColor, bool bUseGpu, float Scale, enum class ETextureRotationDirection Rotate); // Function AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToJPEG // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1df0930
	struct UAppleImageUtilsBaseAsyncTaskBlueprintProxy* CreateProxyObjectForConvertToHEIF(struct UTexture* SourceImage, int32_t Quality, bool bWantColor, bool bUseGpu, float Scale, enum class ETextureRotationDirection Rotate); // Function AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToHEIF // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1df0750
};

// Class AppleImageUtils.AppleImageInterface
// Size: 0x30 (Inherited: 0x30)
struct UAppleImageInterface : UInterface {
};

