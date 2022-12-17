// Class PlatformUI.BinaryAsset
// Size: 0x40 (Inherited: 0x30)
struct UBinaryAsset : UObject {
	struct TArray<char> Asset; // 0x30(0x10)
};

// Class PlatformUI.PlatformUI
// Size: 0x320 (Inherited: 0x2c8)
struct UPlatformUI : UUserWidget {
	struct FString SdkInstanceId; // 0x2c8(0x10)
	char pad_2D8[0x48]; // 0x2d8(0x48)
};

// Class PlatformUI.PlatformUIFRE
// Size: 0x448 (Inherited: 0x320)
struct UPlatformUIFRE : UPlatformUI {
	struct FLinearColor AccentColor; // 0x320(0x10)
	struct FLinearColor AccentColor2; // 0x330(0x10)
	struct FLinearColor CardOpenGradientStartColor; // 0x340(0x10)
	struct FLinearColor CardOpenGradientEndColor; // 0x350(0x10)
	struct FLinearColor LoadingFillGradientStartColor; // 0x360(0x10)
	struct FLinearColor LoadingFillGradientEndColor; // 0x370(0x10)
	struct UTexture* BackgroundTexture; // 0x380(0x08)
	struct UXamlAsset* GameLogoBig; // 0x388(0x08)
	struct UXamlAsset* GameLogoSmall; // 0x390(0x08)
	struct FString ProductName; // 0x398(0x10)
	char pad_3A8[0xa0]; // 0x3a8(0xa0)
};

// Class PlatformUI.PlatformUIPrimaryDataAsset
// Size: 0x88 (Inherited: 0x38)
struct UPlatformUIPrimaryDataAsset : UPrimaryDataAsset {
	struct TMap<struct FString, struct UObject*> Assets; // 0x38(0x50)
};

// Class PlatformUI.XamlAsset
// Size: 0x40 (Inherited: 0x30)
struct UXamlAsset : UObject {
	struct FString String; // 0x30(0x10)
};

