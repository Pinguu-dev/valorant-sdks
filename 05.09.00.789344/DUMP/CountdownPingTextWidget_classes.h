// WidgetBlueprintGeneratedClass CountdownPingTextWidget.CountdownPingTextWidget_C
// Size: 0x310 (Inherited: 0x2c8)
struct UCountdownPingTextWidget_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct UWidgetSwitcher* MessageWidgetSwitcher; // 0x2d0(0x08)
	struct UTextBlock* NowText; // 0x2d8(0x08)
	struct UTextBlock* PushingInText; // 0x2e0(0x08)
	struct UTextBlock* PushingText; // 0x2e8(0x08)
	struct UTextBlock* SecondsText; // 0x2f0(0x08)
	struct FText SecondsTextVariable; // 0x2f8(0x18)

	void AdjustLayoutForDevice(); // Function CountdownPingTextWidget.CountdownPingTextWidget_C.AdjustLayoutForDevice // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void ResetWidget(); // Function CountdownPingTextWidget.CountdownPingTextWidget_C.ResetWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void SetRemainingSeconds(int32_t Seconds); // Function CountdownPingTextWidget.CountdownPingTextWidget_C.SetRemainingSeconds // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void PreConstruct(bool IsDesignTime); // Function CountdownPingTextWidget.CountdownPingTextWidget_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x32f73d0
	void Construct(); // Function CountdownPingTextWidget.CountdownPingTextWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x32f73d0
	void ExecuteUbergraph_CountdownPingTextWidget(int32_t EntryPoint); // Function CountdownPingTextWidget.CountdownPingTextWidget_C.ExecuteUbergraph_CountdownPingTextWidget // (Final|UbergraphFunction) // @ game+0x32f73d0
};

