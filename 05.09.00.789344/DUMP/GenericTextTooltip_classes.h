// WidgetBlueprintGeneratedClass GenericTextTooltip.GenericTextTooltip_C
// Size: 0x2fc (Inherited: 0x2c8)
struct UGenericTextTooltip_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct UGenericTooltipWrapper_C* GenericTooltipWrapper; // 0x2d0(0x08)
	struct UTextBlock* TooltipTextBlock; // 0x2d8(0x08)
	struct FText TooltipTextContent; // 0x2e0(0x18)
	float AutoWrapWidth; // 0x2f8(0x04)

	void Fade(float Delay); // Function GenericTextTooltip.GenericTextTooltip_C.Fade // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	enum class ESlateVisibility GetVisibility_1(); // Function GenericTextTooltip.GenericTextTooltip_C.GetVisibility_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x32f73d0
	void SetText(struct FText NewContent); // Function GenericTextTooltip.GenericTextTooltip_C.SetText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void PlayOutroAnimation(); // Function GenericTextTooltip.GenericTextTooltip_C.PlayOutroAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void Construct(); // Function GenericTextTooltip.GenericTextTooltip_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x32f73d0
	void FadeEvent(); // Function GenericTextTooltip.GenericTextTooltip_C.FadeEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void ExecuteUbergraph_GenericTextTooltip(int32_t EntryPoint); // Function GenericTextTooltip.GenericTextTooltip_C.ExecuteUbergraph_GenericTextTooltip // (Final|UbergraphFunction) // @ game+0x32f73d0
};

