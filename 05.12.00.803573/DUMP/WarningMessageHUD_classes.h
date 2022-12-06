// WidgetBlueprintGeneratedClass WarningMessageHUD.
// Size: 0x3a8 (Inherited: 0x2d8)
struct U : UCoordinatedHUDElement {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d8(0x08)
	struct UWidgetAnimation* ; // 0x2e0(0x08)
	struct UWidgetAnimation* ; // 0x2e8(0x08)
	struct UWidgetAnimation* ; // 0x2f0(0x08)
	struct UWidgetAnimation* ; // 0x2f8(0x08)
	struct UWidgetAnimation* ; // 0x300(0x08)
	struct UHorizontalBox* HorizontalBox_3; // 0x308(0x08)
	struct UImage* Image; // 0x310(0x08)
	struct UImage* Image_85; // 0x318(0x08)
	struct UScaleBox* ScaleBox_1; // 0x320(0x08)
	struct UTextBlock* TextBlock_2; // 0x328(0x08)
	struct UTextBlock* TextBlock_3; // 0x330(0x08)
	struct UTextBlock* TextBlock_6; // 0x338(0x08)
	int32_t LifeSpan; // 0x340(0x04)
	char pad_344[0x4]; // 0x344(0x04)
	struct FText ; // 0x348(0x18)
	struct FText ; // 0x360(0x18)
	struct FTimerHandle ; // 0x378(0x08)
	struct UAkAudioEvent* ; // 0x380(0x08)
	int32_t ; // 0x388(0x04)
	bool ; // 0x38c(0x01)
	bool ; // 0x38d(0x01)
	bool ; // 0x38e(0x01)
	bool ; // 0x38f(0x01)
	struct FText ; // 0x390(0x18)

	void (); // Function WarningMessageHUD.. // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	enum class ESlateVisibility (); // Function WarningMessageHUD.. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322a60
	void (int32_t LifeSpan, struct FText , struct FText , struct FText , struct UAkAudioEvent* AkEvent, bool , float , bool , bool ); // Function WarningMessageHUD.. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function WarningMessageHUD.. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void Destruct(); // Function WarningMessageHUD..Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3322a60
	void (struct FText , struct FText ); // Function WarningMessageHUD.. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct FSlateColor TintColor); // Function WarningMessageHUD.. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function WarningMessageHUD.. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void Construct(); // Function WarningMessageHUD..Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3322a60
	void (); // Function WarningMessageHUD.. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function WarningMessageHUD.. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function WarningMessageHUD.. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (int32_t EntryPoint); // Function WarningMessageHUD.. // (Final|UbergraphFunction|HasDefaults) // @ game+0x3322a60
};

