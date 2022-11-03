// WidgetBlueprintGeneratedClass AnnotatedProgressBar.AnnotatedProgressBar_C
// Size: 0x332 (Inherited: 0x2c8)
struct UAnnotatedProgressBar_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct UImage* BG; // 0x2d0(0x08)
	struct UImage* blueGel; // 0x2d8(0x08)
	struct UImage* half; // 0x2e0(0x08)
	struct UHorizontalBox* HalfTicks; // 0x2e8(0x08)
	struct UInvalidationBox* InvalidationBox_AnnotatedProgressBar; // 0x2f0(0x08)
	struct UCanvasPanel* ParentCanvas; // 0x2f8(0x08)
	struct UProgressBar* ProgressBar_1; // 0x300(0x08)
	struct UOverlay* ProgressBarContainer; // 0x308(0x08)
	struct UImage* redGel; // 0x310(0x08)
	struct FMulticastInlineDelegate NewEventDispatcher_1; // 0x318(0x10)
	float Position Begin; // 0x328(0x04)
	float Position Factor; // 0x32c(0x04)
	bool ShowNumerals; // 0x330(0x01)
	bool ShowProgressIndicators; // 0x331(0x01)

	void SetInvalidationBoxCanCache(bool NewParam); // Function AnnotatedProgressBar.AnnotatedProgressBar_C.SetInvalidationBoxCanCache // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void SetProgress(float CurrentValue, float MaxValue); // Function AnnotatedProgressBar.AnnotatedProgressBar_C.SetProgress // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void Construct(); // Function AnnotatedProgressBar.AnnotatedProgressBar_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x32f73d0
	void ExecuteUbergraph_AnnotatedProgressBar(int32_t EntryPoint); // Function AnnotatedProgressBar.AnnotatedProgressBar_C.ExecuteUbergraph_AnnotatedProgressBar // (Final|UbergraphFunction) // @ game+0x32f73d0
	void NewEventDispatcher_0__DelegateSignature(); // Function AnnotatedProgressBar.AnnotatedProgressBar_C.NewEventDispatcher_0__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
};

