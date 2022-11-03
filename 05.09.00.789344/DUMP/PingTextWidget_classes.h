// WidgetBlueprintGeneratedClass PingTextWidget.PingTextWidget_C
// Size: 0x338 (Inherited: 0x2c8)
struct UPingTextWidget_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct UTextBlock* Distance; // 0x2d0(0x08)
	struct UTextBlock* Meters; // 0x2d8(0x08)
	struct UTextBlock* Region; // 0x2e0(0x08)
	struct UTextBlock* Subject; // 0x2e8(0x08)
	struct FText SubjectTextVariable; // 0x2f0(0x18)
	struct FText RegionTextVariable; // 0x308(0x18)
	struct FText DistanceTextVariable; // 0x320(0x18)

	void Construct(); // Function PingTextWidget.PingTextWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x32f73d0
	void PreConstruct(bool IsDesignTime); // Function PingTextWidget.PingTextWidget_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x32f73d0
	void ExecuteUbergraph_PingTextWidget(int32_t EntryPoint); // Function PingTextWidget.PingTextWidget_C.ExecuteUbergraph_PingTextWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x32f73d0
};

