// WidgetBlueprintGeneratedClass TimedStateDurationHUD.
// Size: 0x388 (Inherited: 0x2d8)
struct U : UCoordinatedHUDElement {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d8(0x08)
	struct UCanvasPanel* CanvasPanel; // 0x2e0(0x08)
	struct UTextBlock* Subtitle; // 0x2e8(0x08)
	struct UHorizontalBox* ; // 0x2f0(0x08)
	struct U* UniversalChargeBar; // 0x2f8(0x08)
	struct UVerticalBox* VerticalBox_1; // 0x300(0x08)
	struct UTimedStateComponent* ; // 0x308(0x08)
	struct FText TitleText; // 0x310(0x18)
	bool ; // 0x328(0x01)
	char pad_329[0x7]; // 0x329(0x07)
	struct FText ; // 0x330(0x18)
	bool ; // 0x348(0x01)
	bool ; // 0x349(0x01)
	char pad_34A[0x6]; // 0x34a(0x06)
	struct FMulticastInlineDelegate ; // 0x350(0x10)
	bool Ready; // 0x360(0x01)
	char pad_361[0x3]; // 0x361(0x03)
	float StartTimeStamp; // 0x364(0x04)
	bool ; // 0x368(0x01)
	char pad_369[0x3]; // 0x369(0x03)
	struct FWidgetTransform ; // 0x36c(0x1c)

	void (struct FLinearColor InColor); // Function TimedStateDurationHUD.. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct FWidgetTransform InTransform); // Function TimedStateDurationHUD.. // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	enum class ESlateVisibility GetVisibility_1(); // Function TimedStateDurationHUD..GetVisibility_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322a90
	enum class ESlateVisibility (); // Function TimedStateDurationHUD.. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322a90
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function TimedStateDurationHUD..Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3322a90
	void SetUp(struct UTimedStateComponent* State, struct FText Title, bool , struct FText , bool , struct FWidgetTransform , bool , float StartTimeOffset, bool ); // Function TimedStateDurationHUD..SetUp // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void Construct(); // Function TimedStateDurationHUD..Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3322a90
	void (); // Function TimedStateDurationHUD.. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (int32_t EntryPoint); // Function TimedStateDurationHUD.. // (Final|UbergraphFunction|HasDefaults) // @ game+0x3322a90
	void (); // Function TimedStateDurationHUD.. // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
};

