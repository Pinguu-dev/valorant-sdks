// WidgetBlueprintGeneratedClass AnnotatedProgressBar.
// Size: 0x332 (Inherited: 0x2c8)
struct U : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct UImage* BG; // 0x2d0(0x08)
	struct UImage* ; // 0x2d8(0x08)
	struct UImage* ; // 0x2e0(0x08)
	struct UHorizontalBox* ; // 0x2e8(0x08)
	struct UInvalidationBox* ; // 0x2f0(0x08)
	struct UCanvasPanel* ; // 0x2f8(0x08)
	struct UProgressBar* ProgressBar_1; // 0x300(0x08)
	struct UOverlay* ; // 0x308(0x08)
	struct UImage* ; // 0x310(0x08)
	struct FMulticastInlineDelegate NewEventDispatcher_1; // 0x318(0x10)
	float ; // 0x328(0x04)
	float ; // 0x32c(0x04)
	bool ; // 0x330(0x01)
	bool ; // 0x331(0x01)

	void (bool NewParam); // Function AnnotatedProgressBar.. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void SetProgress(float CurrentValue, float MaxValue); // Function AnnotatedProgressBar..SetProgress // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void Construct(); // Function AnnotatedProgressBar..Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3322a60
	void (int32_t EntryPoint); // Function AnnotatedProgressBar.. // (Final|UbergraphFunction) // @ game+0x3322a60
	void NewEventDispatcher_0__DelegateSignature(); // Function AnnotatedProgressBar..NewEventDispatcher_0__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
};

