// WidgetBlueprintGeneratedClass Shared_Keyboard_Prompt.
// Size: 0x350 (Inherited: 0x2c8)
struct U : UDesignableUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct UImage* ; // 0x2d0(0x08)
	struct UImage* ; // 0x2d8(0x08)
	struct UImage* ; // 0x2e0(0x08)
	struct UTextBlock* ; // 0x2e8(0x08)
	bool Background; // 0x2f0(0x01)
	bool ; // 0x2f1(0x01)
	bool Toggle; // 0x2f2(0x01)
	char pad_2F3[0x5]; // 0x2f3(0x05)
	struct FText ; // 0x2f8(0x18)
	struct FLinearColor ; // 0x310(0x10)
	struct FLinearColor ; // 0x320(0x10)
	struct FLinearColor Toggle_Color; // 0x330(0x10)
	struct FLinearColor ; // 0x340(0x10)

	void (bool Toggle); // Function Shared_Keyboard_Prompt.. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (bool ); // Function Shared_Keyboard_Prompt.. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (bool Background); // Function Shared_Keyboard_Prompt.. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function Shared_Keyboard_Prompt.. // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function Shared_Keyboard_Prompt.. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void PreConstruct(bool IsDesignTime); // Function Shared_Keyboard_Prompt..PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3322a60
	void Construct(); // Function Shared_Keyboard_Prompt..Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3322a60
	void OnSynchronizeProperties(); // Function Shared_Keyboard_Prompt..OnSynchronizeProperties // (Event|Public|BlueprintEvent) // @ game+0x3322a60
	void (struct FText InText); // Function Shared_Keyboard_Prompt.. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (int32_t EntryPoint); // Function Shared_Keyboard_Prompt.. // (Final|UbergraphFunction|HasDefaults) // @ game+0x3322a60
};

