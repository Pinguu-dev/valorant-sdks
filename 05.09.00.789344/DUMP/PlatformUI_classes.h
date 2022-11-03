// Class PlatformUI.PlatformUI
// Size: 0x448 (Inherited: 0x2c8)
struct UPlatformUI : UUserWidget {
	char pad_2C8[0x38]; // 0x2c8(0x38)
	struct FString SdkInstanceId; // 0x300(0x10)
	struct FLinearColor AccentColor; // 0x310(0x10)
	struct FLinearColor AccentColor2; // 0x320(0x10)
	struct FLinearColor CardOpenGradientStartColor; // 0x330(0x10)
	struct FLinearColor CardOpenGradientEndColor; // 0x340(0x10)
	struct FLinearColor LoadingFillGradientStartColor; // 0x350(0x10)
	struct FLinearColor LoadingFillGradientEndColor; // 0x360(0x10)
	struct UTexture* BackgroundTexture; // 0x370(0x08)
	struct UXamlAsset* GameLogoBig; // 0x378(0x08)
	struct UXamlAsset* GameLogoSmall; // 0x380(0x08)
	struct FString ProductName; // 0x388(0x10)
	char pad_398[0xb0]; // 0x398(0xb0)

	void InitInstance(); // Function PlatformUI.PlatformUI.InitInstance // (Final|Native|Public|BlueprintCallable) // @ game+0x1e96b40
};

// Class PlatformUI.XamlAsset
// Size: 0x40 (Inherited: 0x30)
struct UXamlAsset : UObject {
	struct FString String; // 0x30(0x10)
};

