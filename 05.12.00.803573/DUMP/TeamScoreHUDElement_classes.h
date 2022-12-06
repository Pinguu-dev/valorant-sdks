// WidgetBlueprintGeneratedClass TeamScoreHUDElement.
// Size: 0x31d (Inherited: 0x2d8)
struct U : UCoordinatedHUDElement {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d8(0x08)
	struct UTextBlock* Score; // 0x2e0(0x08)
	struct UCoordinatedHUDModel* HUDModel; // 0x2e8(0x08)
	bool ; // 0x2f0(0x01)
	char pad_2F1[0x3]; // 0x2f1(0x03)
	struct FLinearColor DisplayColor; // 0x2f4(0x10)
	char pad_304[0x4]; // 0x304(0x04)
	struct UImage* TeamColor_1; // 0x308(0x08)
	struct FHUDVisibilityConfig ; // 0x310(0x0d)

	void (); // Function TeamScoreHUDElement.. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void UpdateWidget(); // Function TeamScoreHUDElement..UpdateWidget // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void UpdateVisibility(bool ); // Function TeamScoreHUDElement..UpdateVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void SetHUDModel(struct UCoordinatedHUDModel* HUDModel); // Function TeamScoreHUDElement..SetHUDModel // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void Construct(); // Function TeamScoreHUDElement..Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3322a60
	void _1(struct UGameStateHUDConfig* NewConfig); // Function TeamScoreHUDElement.._1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void OnPointsUpdated(); // Function TeamScoreHUDElement..OnPointsUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void _1(); // Function TeamScoreHUDElement.._1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void _1(struct AAresPlayerStateBase* NewValue); // Function TeamScoreHUDElement.._1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void _1(struct AShooterCharacter* NewValue); // Function TeamScoreHUDElement.._1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct AAresPlayerStateBase* NewValue); // Function TeamScoreHUDElement.. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (bool IsVisible); // Function TeamScoreHUDElement.. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct UGameStateHUDConfig* NewConfig); // Function TeamScoreHUDElement.. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (int32_t EntryPoint); // Function TeamScoreHUDElement.. // (Final|UbergraphFunction|HasDefaults) // @ game+0x3322a60
};

