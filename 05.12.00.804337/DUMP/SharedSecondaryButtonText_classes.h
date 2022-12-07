// WidgetBlueprintGeneratedClass SharedSecondaryButtonText.
// Size: 0x450 (Inherited: 0x2c8)
struct U : UDesignableUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct UWidgetAnimation* ; // 0x2d0(0x08)
	struct UWidgetAnimation* Default; // 0x2d8(0x08)
	struct UWidgetAnimation* Disabled; // 0x2e0(0x08)
	struct UWidgetAnimation* hover; // 0x2e8(0x08)
	struct UImage* BG; // 0x2f0(0x08)
	struct UImage* Border; // 0x2f8(0x08)
	struct UTelemetryButton* Button; // 0x300(0x08)
	struct UImage* ; // 0x308(0x08)
	struct UImage* ; // 0x310(0x08)
	struct UImage* ; // 0x318(0x08)
	struct UImage* ; // 0x320(0x08)
	struct UOverlay* Overlay_1; // 0x328(0x08)
	struct UImage* ; // 0x330(0x08)
	struct UImage* ; // 0x338(0x08)
	struct UImage* ; // 0x340(0x08)
	struct UImage* ; // 0x348(0x08)
	struct UTextBlock* TextBlockHover; // 0x350(0x08)
	struct UTextBlock* TextBlockNormal; // 0x358(0x08)
	struct UMenuAnchor* ; // 0x360(0x08)
	struct FLinearColor ; // 0x368(0x10)
	struct FText ButtonText; // 0x378(0x18)
	struct FText ; // 0x390(0x18)
	struct FMulticastInlineDelegate OnClicked; // 0x3a8(0x10)
	struct FMulticastInlineDelegate OnHovered; // 0x3b8(0x10)
	struct FMulticastInlineDelegate OnUnhovered; // 0x3c8(0x10)
	struct FMulticastInlineDelegate OnPressed; // 0x3d8(0x10)
	bool Enabled; // 0x3e8(0x01)
	bool ; // 0x3e9(0x01)
	bool ; // 0x3ea(0x01)
	char pad_3EB[0x5]; // 0x3eb(0x05)
	struct FMulticastInlineDelegate OnDisabled; // 0x3f0(0x10)
	struct FMulticastInlineDelegate OnReleased; // 0x400(0x10)
	struct UTexture2D* Icon; // 0x410(0x08)
	bool Hovered; // 0x418(0x01)
	bool ; // 0x419(0x01)
	char pad_41A[0x6]; // 0x41a(0x06)
	struct UAkAudioEvent* ; // 0x420(0x08)
	struct UAkAudioEvent* ; // 0x428(0x08)
	bool ; // 0x430(0x01)
	char pad_431[0x7]; // 0x431(0x07)
	struct FString ActionTarget; // 0x438(0x10)
	struct UAkAudioEvent* ; // 0x448(0x08)

	void (struct FString Target); // Function SharedSecondaryButtonText.. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct FText ); // Function SharedSecondaryButtonText.. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	struct UWidget* _1(); // Function SharedSecondaryButtonText.._1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (bool IsSelected); // Function SharedSecondaryButtonText.. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (); // Function SharedSecondaryButtonText.. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (); // Function SharedSecondaryButtonText.. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (bool ); // Function SharedSecondaryButtonText.. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (); // Function SharedSecondaryButtonText.. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (bool IsEnabled); // Function SharedSecondaryButtonText.. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct FText ButtonText); // Function SharedSecondaryButtonText.. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void Construct(); // Function SharedSecondaryButtonText..Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3322a90
	void OnSynchronizeProperties(); // Function SharedSecondaryButtonText..OnSynchronizeProperties // (Event|Public|BlueprintEvent) // @ game+0x3322a90
	void (); // Function SharedSecondaryButtonText.. // (BlueprintEvent) // @ game+0x3322a90
	void (); // Function SharedSecondaryButtonText.. // (BlueprintEvent) // @ game+0x3322a90
	void (); // Function SharedSecondaryButtonText.. // (BlueprintEvent) // @ game+0x3322a90
	void (); // Function SharedSecondaryButtonText.. // (BlueprintEvent) // @ game+0x3322a90
	void (); // Function SharedSecondaryButtonText.. // (BlueprintEvent) // @ game+0x3322a90
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function SharedSecondaryButtonText..OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x3322a90
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function SharedSecondaryButtonText..OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x3322a90
	void PreConstruct(bool IsDesignTime); // Function SharedSecondaryButtonText..PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3322a90
	void (int32_t EntryPoint); // Function SharedSecondaryButtonText.. // (Final|UbergraphFunction|HasDefaults) // @ game+0x3322a90
	void (struct U* ); // Function SharedSecondaryButtonText.. // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct U* NewParam); // Function SharedSecondaryButtonText.. // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct U* ); // Function SharedSecondaryButtonText.. // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct U* ); // Function SharedSecondaryButtonText.. // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct U* ); // Function SharedSecondaryButtonText.. // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct U* ); // Function SharedSecondaryButtonText.. // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
};

