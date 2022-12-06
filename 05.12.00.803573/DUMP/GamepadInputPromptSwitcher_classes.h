// WidgetBlueprintGeneratedClass GamepadInputPromptSwitcher.
// Size: 0x2f8 (Inherited: 0x2c8)
struct U : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct UNamedSlot* ; // 0x2d0(0x08)
	struct UNamedSlot* ; // 0x2d8(0x08)
	struct UWidgetSwitcher* switcher; // 0x2e0(0x08)
	struct TScriptInterface<IInputMethodInterface> InputMethodInterface; // 0x2e8(0x10)

	void (); // Function GamepadInputPromptSwitcher.. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct UObject* Source); // Function GamepadInputPromptSwitcher.. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void OnInitialized(); // Function GamepadInputPromptSwitcher..OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3322a60
	void (int32_t EntryPoint); // Function GamepadInputPromptSwitcher.. // (Final|UbergraphFunction) // @ game+0x3322a60
};

