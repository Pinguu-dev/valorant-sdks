// WidgetBlueprintGeneratedClass GenericTextTooltip.
// Size: 0x2fc (Inherited: 0x2c8)
struct U : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct U* GenericTooltipWrapper; // 0x2d0(0x08)
	struct UTextBlock* ; // 0x2d8(0x08)
	struct FText ; // 0x2e0(0x18)
	float ; // 0x2f8(0x04)

	void (float Delay); // Function GenericTextTooltip.. // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	enum class ESlateVisibility GetVisibility_1(); // Function GenericTextTooltip..GetVisibility_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322a60
	void SetText(struct FText ); // Function GenericTextTooltip..SetText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function GenericTextTooltip.. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void Construct(); // Function GenericTextTooltip..Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3322a60
	void (); // Function GenericTextTooltip.. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (int32_t EntryPoint); // Function GenericTextTooltip.. // (Final|UbergraphFunction) // @ game+0x3322a60
};

