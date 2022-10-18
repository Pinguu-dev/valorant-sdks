// WidgetBlueprintGeneratedClass Shared_Keyboard_Prompt.Shared_Keyboard_Prompt_C
// Size: 0x350 (Inherited: 0x2c8)
struct UShared_Keyboard_Prompt_C : UDesignableUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct UImage* Keyboard_Bg; // 0x2d0(0x08)
	struct UImage* Keyboard_Outline; // 0x2d8(0x08)
	struct UImage* Keyboard_Toggle; // 0x2e0(0x08)
	struct UTextBlock* Text_Keybind; // 0x2e8(0x08)
	bool Background; // 0x2f0(0x01)
	bool Outline; // 0x2f1(0x01)
	bool Toggle; // 0x2f2(0x01)
	char pad_2F3[0x5]; // 0x2f3(0x05)
	struct FText Font_Text; // 0x2f8(0x18)
	struct FLinearColor Bacground_Color; // 0x310(0x10)
	struct FLinearColor Outline_Color; // 0x320(0x10)
	struct FLinearColor Toggle_Color; // 0x330(0x10)
	struct FLinearColor Font_Color; // 0x340(0x10)

	void SetToggle(bool Toggle); // Function Shared_Keyboard_Prompt.Shared_Keyboard_Prompt_C.SetToggle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void SetOutline(bool Outline); // Function Shared_Keyboard_Prompt.Shared_Keyboard_Prompt_C.SetOutline // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void SetBackground(bool Background); // Function Shared_Keyboard_Prompt.Shared_Keyboard_Prompt_C.SetBackground // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void Update Text(); // Function Shared_Keyboard_Prompt.Shared_Keyboard_Prompt_C.Update Text // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void Set image(); // Function Shared_Keyboard_Prompt.Shared_Keyboard_Prompt_C.Set image // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void PreConstruct(bool IsDesignTime); // Function Shared_Keyboard_Prompt.Shared_Keyboard_Prompt_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3520f50
	void Construct(); // Function Shared_Keyboard_Prompt.Shared_Keyboard_Prompt_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3520f50
	void OnSynchronizeProperties(); // Function Shared_Keyboard_Prompt.Shared_Keyboard_Prompt_C.OnSynchronizeProperties // (Event|Public|BlueprintEvent) // @ game+0x3520f50
	void SetKeyText(struct FText InText); // Function Shared_Keyboard_Prompt.Shared_Keyboard_Prompt_C.SetKeyText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void ExecuteUbergraph_Shared_Keyboard_Prompt(int32_t EntryPoint); // Function Shared_Keyboard_Prompt.Shared_Keyboard_Prompt_C.ExecuteUbergraph_Shared_Keyboard_Prompt // (Final|UbergraphFunction|HasDefaults) // @ game+0x3520f50
};

