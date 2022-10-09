// WidgetBlueprintGeneratedClass AnnotatedProgressBarNoNumerals_BombTest.AnnotatedProgressBarNoNumerals_BombTest_C
// Size: 0x348 (Inherited: 0x2c8)
struct UAnnotatedProgressBarNoNumerals_BombTest_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct UImage* bar_left; // 0x2d0(0x08)
	struct UImage* bar_right; // 0x2d8(0x08)
	struct UImage* BG; // 0x2e0(0x08)
	struct UImage* blueGel; // 0x2e8(0x08)
	struct UImage* half; // 0x2f0(0x08)
	struct UHorizontalBox* HalfTicks; // 0x2f8(0x08)
	struct UImage* Image_134; // 0x300(0x08)
	struct UImage* Image_136; // 0x308(0x08)
	struct UImage* Image_137; // 0x310(0x08)
	struct UImage* Image_138; // 0x318(0x08)
	struct UProgressBar* ProgressBar_1; // 0x320(0x08)
	struct UImage* redGel; // 0x328(0x08)
	struct FMulticastInlineDelegate NewEventDispatcher_1; // 0x330(0x10)
	float Position Begin; // 0x340(0x04)
	float Position Factor; // 0x344(0x04)

	void SetProgress(float CurrentValue, float MaxValue); // Function AnnotatedProgressBarNoNumerals_BombTest.AnnotatedProgressBarNoNumerals_BombTest_C.SetProgress // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void Construct(); // Function AnnotatedProgressBarNoNumerals_BombTest.AnnotatedProgressBarNoNumerals_BombTest_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3511190
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function AnnotatedProgressBarNoNumerals_BombTest.AnnotatedProgressBarNoNumerals_BombTest_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3511190
	void ExecuteUbergraph_AnnotatedProgressBarNoNumerals_BombTest(int32_t EntryPoint); // Function AnnotatedProgressBarNoNumerals_BombTest.AnnotatedProgressBarNoNumerals_BombTest_C.ExecuteUbergraph_AnnotatedProgressBarNoNumerals_BombTest // (Final|UbergraphFunction|HasDefaults) // @ game+0x3511190
	void NewEventDispatcher_0__DelegateSignature(); // Function AnnotatedProgressBarNoNumerals_BombTest.AnnotatedProgressBarNoNumerals_BombTest_C.NewEventDispatcher_0__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
};

