// ScriptStruct WebBrowser.WebJSCallbackBase
// Size: 0x20 (Inherited: 0x00)
struct FWebJSCallbackBase {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct WebBrowser.WebJSResponse
// Size: 0x20 (Inherited: 0x20)
struct FWebJSResponse : FWebJSCallbackBase {
};

// ScriptStruct WebBrowser.WebJSFunction
// Size: 0x20 (Inherited: 0x20)
struct FWebJSFunction : FWebJSCallbackBase {
};

