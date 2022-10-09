// Class WebBrowserWidget.WebBrowser
// Size: 0x1a0 (Inherited: 0x148)
struct UWebBrowser : UWidget {
	struct FMulticastInlineDelegate OnUrlChanged; // 0x148(0x10)
	struct FMulticastInlineDelegate OnBeforePopup; // 0x158(0x10)
	struct FMulticastInlineDelegate OnLoadError; // 0x168(0x10)
	struct FString InitialURL; // 0x178(0x10)
	bool bSupportsTransparency; // 0x188(0x01)
	char pad_189[0x17]; // 0x189(0x17)
};

// Class WebBrowserWidget.WebBrowserAssetManager
// Size: 0x90 (Inherited: 0x30)
struct UWebBrowserAssetManager : UObject {
	struct TSoftObjectPtr<UMaterial> DefaultMaterial; // 0x30(0x30)
	char pad_60[0x30]; // 0x60(0x30)
};

