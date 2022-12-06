// WidgetBlueprintGeneratedClass TeamAverageLoadoutValueHUDElement.
// Size: 0x30c (Inherited: 0x2d8)
struct U : UCoordinatedHUDElement {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d8(0x08)
	struct UInvalidationBox* ; // 0x2e0(0x08)
	struct UTextBlock* Money; // 0x2e8(0x08)
	struct UCoordinatedHUDModel* HUDModel; // 0x2f0(0x08)
	bool ; // 0x2f8(0x01)
	char pad_2F9[0x3]; // 0x2f9(0x03)
	struct FLinearColor DisplayColor; // 0x2fc(0x10)

	void UpdateWidget(); // Function TeamAverageLoadoutValueHUDElement..UpdateWidget // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void UpdateVisibility(); // Function TeamAverageLoadoutValueHUDElement..UpdateVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void Construct(); // Function TeamAverageLoadoutValueHUDElement..Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3322a60
	void SetHUDModel(struct UCoordinatedHUDModel* HUDModel); // Function TeamAverageLoadoutValueHUDElement..SetHUDModel // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void _1(struct UGameStateHUDConfig* NewConfig); // Function TeamAverageLoadoutValueHUDElement.._1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void _1(); // Function TeamAverageLoadoutValueHUDElement.._1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void CustomEvent_1(); // Function TeamAverageLoadoutValueHUDElement..CustomEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void _1(); // Function TeamAverageLoadoutValueHUDElement.._1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void _1(struct AAresPlayerStateBase* NewValue); // Function TeamAverageLoadoutValueHUDElement.._1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void _1(struct AShooterCharacter* NewValue); // Function TeamAverageLoadoutValueHUDElement.._1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function TeamAverageLoadoutValueHUDElement.. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (int32_t EntryPoint); // Function TeamAverageLoadoutValueHUDElement.. // (Final|UbergraphFunction) // @ game+0x3322a60
};

