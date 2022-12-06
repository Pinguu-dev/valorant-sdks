// WidgetBlueprintGeneratedClass TimerHUDElement.
// Size: 0x335 (Inherited: 0x2d8)
struct U : UCoordinatedHUDElement {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d8(0x08)
	struct UImage* BackgroundImage; // 0x2e0(0x08)
	struct UImage* Center; // 0x2e8(0x08)
	struct UImage* Left; // 0x2f0(0x08)
	struct UImage* Right; // 0x2f8(0x08)
	struct UBorder* ; // 0x300(0x08)
	struct UHorizontalBox* ; // 0x308(0x08)
	struct UTextBlock* ; // 0x310(0x08)
	struct UTextBlock* ; // 0x318(0x08)
	struct UCoordinatedHUDModel* ; // 0x320(0x08)
	int32_t ; // 0x328(0x04)
	int32_t ; // 0x32c(0x04)
	int32_t ; // 0x330(0x04)
	bool ; // 0x334(0x01)

	void (); // Function TimerHUDElement.. // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void Construct(); // Function TimerHUDElement..Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3322a60
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function TimerHUDElement..Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3322a60
	void SetHUDModel(struct UCoordinatedHUDModel* HUDModel); // Function TimerHUDElement..SetHUDModel // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void _1(struct UGameStateHUDConfig* NewConfig); // Function TimerHUDElement.._1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void PulseTimer(); // Function TimerHUDElement..PulseTimer // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void OnInitialized(); // Function TimerHUDElement..OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3322a60
	void (int32_t EntryPoint); // Function TimerHUDElement.. // (Final|UbergraphFunction|HasDefaults) // @ game+0x3322a60
};

