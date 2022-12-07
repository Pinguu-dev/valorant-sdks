// WidgetBlueprintGeneratedClass SharedButtonMaster.
// Size: 0x4c1 (Inherited: 0x2c8)
struct U : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct UWidgetAnimation* Click; // 0x2d0(0x08)
	struct UWidgetAnimation* hover; // 0x2d8(0x08)
	struct UOverlay* ; // 0x2e0(0x08)
	struct UOverlay* ; // 0x2e8(0x08)
	struct UImage* ; // 0x2f0(0x08)
	struct UTextBlock* ; // 0x2f8(0x08)
	struct UTelemetryButton* Button; // 0x300(0x08)
	struct UScaleBox* ; // 0x308(0x08)
	struct UVerticalBox* ; // 0x310(0x08)
	struct UImage* ; // 0x318(0x08)
	struct UTextBlock* ; // 0x320(0x08)
	struct UImage* ; // 0x328(0x08)
	struct UImage* ; // 0x330(0x08)
	struct UScaleBox* ; // 0x338(0x08)
	struct UImage* ; // 0x340(0x08)
	struct UImage* ; // 0x348(0x08)
	struct UImage* ; // 0x350(0x08)
	struct FMulticastInlineDelegate ; // 0x358(0x10)
	struct FText ; // 0x368(0x18)
	struct FText ButtonText; // 0x380(0x18)
	struct UTexture2D* Icon; // 0x398(0x08)
	bool ; // 0x3a0(0x01)
	enum class SharedButtonStyles ButtonStyle; // 0x3a1(0x01)
	bool IsDisabled; // 0x3a2(0x01)
	char pad_3A3[0x5]; // 0x3a3(0x05)
	struct FSharedButtonStyle ; // 0x3a8(0x48)
	struct TMap<enum class SharedButtonStyles, struct FSharedButtonStyle> ; // 0x3f0(0x50)
	struct FSharedButtonStyle ; // 0x440(0x48)
	struct FLinearColor ; // 0x488(0x10)
	bool ; // 0x498(0x01)
	char pad_499[0x7]; // 0x499(0x07)
	struct FString ; // 0x4a0(0x10)
	struct FMargin ContentPadding; // 0x4b0(0x10)
	bool ; // 0x4c0(0x01)

	void _2(); // Function SharedButtonMaster.._2 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void _1(); // Function SharedButtonMaster.._1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct FLinearColor Color); // Function SharedButtonMaster.. // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (); // Function SharedButtonMaster.. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (bool , struct FString ); // Function SharedButtonMaster.. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct FLinearColor , bool Reset); // Function SharedButtonMaster.. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct FMargin Padding); // Function SharedButtonMaster.. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (); // Function SharedButtonMaster.. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (); // Function SharedButtonMaster.. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (); // Function SharedButtonMaster.. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (); // Function SharedButtonMaster.. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct FLinearColor Color); // Function SharedButtonMaster.. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct FSharedButtonStyle ); // Function SharedButtonMaster.. // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (enum class SharedButtonStyles Style); // Function SharedButtonMaster.. // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void SetDisabled(bool IsDisabled); // Function SharedButtonMaster..SetDisabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (bool Show); // Function SharedButtonMaster.. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void SetIcon(struct UTexture2D* Texture); // Function SharedButtonMaster..SetIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct FText Text); // Function SharedButtonMaster.. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct FText Text); // Function SharedButtonMaster.. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (); // Function SharedButtonMaster.. // (BlueprintEvent) // @ game+0x3322a90
	void (); // Function SharedButtonMaster.. // (BlueprintEvent) // @ game+0x3322a90
	void (); // Function SharedButtonMaster.. // (BlueprintEvent) // @ game+0x3322a90
	void PreConstruct(bool IsDesignTime); // Function SharedButtonMaster..PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3322a90
	void Construct(); // Function SharedButtonMaster..Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3322a90
	void (int32_t EntryPoint); // Function SharedButtonMaster.. // (Final|UbergraphFunction) // @ game+0x3322a90
	void (); // Function SharedButtonMaster.. // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
};

