// Class WebBrowserWidget.WebBrowser
// Size: 0x1a0 (Inherited: 0x148)
struct UWebBrowser : UWidget {
	struct FMulticastInlineDelegate OnUrlChanged; // 0x148(0x10)
	struct FMulticastInlineDelegate OnBeforePopup; // 0x158(0x10)
	struct FMulticastInlineDelegate OnLoadError; // 0x168(0x10)
	struct FString InitialURL; // 0x178(0x10)
	bool bSupportsTransparency; // 0x188(0x01)
	char pad_189[0x17]; // 0x189(0x17)

	void OnUrlChanged__DelegateSignature(struct FText& Text); // DelegateFunction WebBrowserWidget.WebBrowser.OnUrlChanged__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x3520f50
	void OnLoadError__DelegateSignature(); // DelegateFunction WebBrowserWidget.WebBrowser.OnLoadError__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x3520f50
	void OnBeforePopup__DelegateSignature(struct FString URL, struct FString Frame); // DelegateFunction WebBrowserWidget.WebBrowser.OnBeforePopup__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x3520f50
	void LoadURL(struct FString NewURL); // Function WebBrowserWidget.WebBrowser.LoadURL // (Final|Native|Public|BlueprintCallable) // @ game+0x20d4660
	void LoadString(struct FString Contents, struct FString DummyURL); // Function WebBrowserWidget.WebBrowser.LoadString // (Final|Native|Public|BlueprintCallable) // @ game+0x20d44c0
	struct FString GetUrl(); // Function WebBrowserWidget.WebBrowser.GetUrl // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x20d4430
	struct FText GetTitleText(); // Function WebBrowserWidget.WebBrowser.GetTitleText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x20d43c0
	void ExecuteJavascript(struct FString ScriptText); // Function WebBrowserWidget.WebBrowser.ExecuteJavascript // (Final|Native|Public|BlueprintCallable) // @ game+0x20d4310
	void BindUObject(struct FString Name, struct UObject* Object, bool bIsPermanent); // Function WebBrowserWidget.WebBrowser.BindUObject // (Final|Native|Public|BlueprintCallable) // @ game+0x20d41d0
};

// Class WebBrowserWidget.WebBrowserAssetManager
// Size: 0x90 (Inherited: 0x30)
struct UWebBrowserAssetManager : UObject {
	struct TSoftObjectPtr<UMaterial> DefaultMaterial; // 0x30(0x30)
	char pad_60[0x30]; // 0x60(0x30)
};

