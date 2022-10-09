// WidgetBlueprintGeneratedClass GenericTooltipWrapper.GenericTooltipWrapper_C
// Size: 0x318 (Inherited: 0x2c8)
struct UGenericTooltipWrapper_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct UWidgetAnimation* Fade; // 0x2d0(0x08)
	struct UWidgetAnimation* Intro; // 0x2d8(0x08)
	struct UBackgroundBlur* BackgroundBlur_173; // 0x2e0(0x08)
	struct UNamedSlot* Content; // 0x2e8(0x08)
	struct FString Subject; // 0x2f0(0x10)
	struct FText DisplayName; // 0x300(0x18)

	void PlayOutroAnimation(); // Function GenericTooltipWrapper.GenericTooltipWrapper_C.PlayOutroAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void Construct(); // Function GenericTooltipWrapper.GenericTooltipWrapper_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3511190
	void ExecuteUbergraph_GenericTooltipWrapper(int32_t EntryPoint); // Function GenericTooltipWrapper.GenericTooltipWrapper_C.ExecuteUbergraph_GenericTooltipWrapper // (Final|UbergraphFunction) // @ game+0x3511190
};

