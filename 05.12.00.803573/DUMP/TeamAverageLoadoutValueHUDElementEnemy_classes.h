// WidgetBlueprintGeneratedClass TeamAverageLoadoutValueHUDElementEnemy.
// Size: 0x324 (Inherited: 0x2d8)
struct U : UCoordinatedHUDElement {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d8(0x08)
	struct UWidgetAnimation* ; // 0x2e0(0x08)
	struct UOverlay* ; // 0x2e8(0x08)
	struct UImage* ; // 0x2f0(0x08)
	struct UImage* ; // 0x2f8(0x08)
	struct UTextBlock* Money; // 0x300(0x08)
	struct UCoordinatedHUDModel* HUDModel; // 0x308(0x08)
	bool ; // 0x310(0x01)
	char pad_311[0x3]; // 0x311(0x03)
	struct FLinearColor DisplayColor; // 0x314(0x10)

	void UpdateWidget(); // Function TeamAverageLoadoutValueHUDElementEnemy..UpdateWidget // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void UpdateVisibility(); // Function TeamAverageLoadoutValueHUDElementEnemy..UpdateVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void SetHUDModel(struct UCoordinatedHUDModel* HUDModel); // Function TeamAverageLoadoutValueHUDElementEnemy..SetHUDModel // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void Construct(); // Function TeamAverageLoadoutValueHUDElementEnemy..Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3322a60
	void _1(struct UGameStateHUDConfig* NewConfig); // Function TeamAverageLoadoutValueHUDElementEnemy.._1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void _1(); // Function TeamAverageLoadoutValueHUDElementEnemy.._1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void CustomEvent_1(); // Function TeamAverageLoadoutValueHUDElementEnemy..CustomEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void _1(); // Function TeamAverageLoadoutValueHUDElementEnemy.._1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void _1(struct AAresPlayerStateBase* NewValue); // Function TeamAverageLoadoutValueHUDElementEnemy.._1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void _1(struct AShooterCharacter* NewValue); // Function TeamAverageLoadoutValueHUDElementEnemy.._1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function TeamAverageLoadoutValueHUDElementEnemy.. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (int32_t EntryPoint); // Function TeamAverageLoadoutValueHUDElementEnemy.. // (Final|UbergraphFunction|HasDefaults) // @ game+0x3322a60
};

