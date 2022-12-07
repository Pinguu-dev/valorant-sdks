// WidgetBlueprintGeneratedClass SharedButtonText1.
// Size: 0x3b8 (Inherited: 0x2c8)
struct U : UDesignableUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct UImage* ; // 0x2d0(0x08)
	struct UButton* Button; // 0x2d8(0x08)
	struct UImage* ; // 0x2e0(0x08)
	struct UTextBlock* ; // 0x2e8(0x08)
	struct UOverlay* DisabledState; // 0x2f0(0x08)
	struct UWidgetSwitcher* ; // 0x2f8(0x08)
	struct UTextBlock* ; // 0x300(0x08)
	struct UOverlay* EnabledState; // 0x308(0x08)
	struct UImage* hover; // 0x310(0x08)
	struct UImage* Image_2; // 0x318(0x08)
	struct UImage* Image_3; // 0x320(0x08)
	struct UImage* Image_4; // 0x328(0x08)
	struct UImage* ; // 0x330(0x08)
	struct UImage* ; // 0x338(0x08)
	struct FText ButtonText; // 0x340(0x18)
	struct FMulticastInlineDelegate OnClicked; // 0x358(0x10)
	struct FMulticastInlineDelegate OnHovered; // 0x368(0x10)
	struct FMulticastInlineDelegate OnUnhovered; // 0x378(0x10)
	struct FMulticastInlineDelegate OnPressed; // 0x388(0x10)
	bool Enabled; // 0x398(0x01)
	char pad_399[0x7]; // 0x399(0x07)
	struct UAkAudioEvent* ; // 0x3a0(0x08)
	struct UAkAudioEvent* ; // 0x3a8(0x08)
	struct UAkAudioEvent* ; // 0x3b0(0x08)

	void (struct FText ButtonText); // Function SharedButtonText1.. // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (bool ); // Function SharedButtonText1.. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (); // Function SharedButtonText1.. // (BlueprintEvent) // @ game+0x3322a90
	void (); // Function SharedButtonText1.. // (BlueprintEvent) // @ game+0x3322a90
	void Construct(); // Function SharedButtonText1..Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3322a90
	void (); // Function SharedButtonText1.. // (BlueprintEvent) // @ game+0x3322a90
	void (); // Function SharedButtonText1.. // (BlueprintEvent) // @ game+0x3322a90
	void OnSynchronizeProperties(); // Function SharedButtonText1..OnSynchronizeProperties // (Event|Public|BlueprintEvent) // @ game+0x3322a90
	void (int32_t EntryPoint); // Function SharedButtonText1.. // (Final|UbergraphFunction) // @ game+0x3322a90
	void (struct U* NewParam); // Function SharedButtonText1.. // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct U* ); // Function SharedButtonText1.. // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct U* ); // Function SharedButtonText1.. // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct U* ); // Function SharedButtonText1.. // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
};

