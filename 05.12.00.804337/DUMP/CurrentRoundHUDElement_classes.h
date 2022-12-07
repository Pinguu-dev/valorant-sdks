// WidgetBlueprintGeneratedClass CurrentRoundHUDElement.
// Size: 0x358 (Inherited: 0x2d8)
struct U : UCoordinatedHUDElement {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d8(0x08)
	struct UCoordinatedHUDModel* HUDModel; // 0x2e0(0x08)
	int32_t ; // 0x2e8(0x04)
	char pad_2EC[0x4]; // 0x2ec(0x04)
	struct UGamepadInputIconBase* ; // 0x2f0(0x08)
	struct UTextBlock* ; // 0x2f8(0x08)
	struct UTextBlock* ; // 0x300(0x08)
	struct UTextBlock* ; // 0x308(0x08)
	struct UOverlay* ; // 0x310(0x08)
	struct UBorder* NewVar_1; // 0x318(0x08)
	struct UBorder* ; // 0x320(0x08)
	struct UTextBlock* ; // 0x328(0x08)
	struct UHorizontalBox* ; // 0x330(0x08)
	struct UTextBlock* ; // 0x338(0x08)
	struct UCanvasPanel* ; // 0x340(0x08)
	struct USizeBox* ; // 0x348(0x08)
	struct UWidgetAnimation* ; // 0x350(0x08)

	void (struct UWidgetAnimation*& ); // Function CurrentRoundHUDElement.. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct USizeBox*& ); // Function CurrentRoundHUDElement.. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct UCanvasPanel*& ); // Function CurrentRoundHUDElement.. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct UTextBlock*& ); // Function CurrentRoundHUDElement.. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct UHorizontalBox*& ); // Function CurrentRoundHUDElement.. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct UTextBlock*& ); // Function CurrentRoundHUDElement.. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct UBorder*& ); // Function CurrentRoundHUDElement.. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct UOverlay*& ); // Function CurrentRoundHUDElement.. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct UTextBlock*& ); // Function CurrentRoundHUDElement.. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct UTextBlock*& ); // Function CurrentRoundHUDElement.. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct UTextBlock*& ); // Function CurrentRoundHUDElement.. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (); // Function CurrentRoundHUDElement.. // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	struct FText (struct ABaseGameState_C* BaseGameState); // Function CurrentRoundHUDElement.. // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322a90
	void (); // Function CurrentRoundHUDElement.. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (); // Function CurrentRoundHUDElement.. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (); // Function CurrentRoundHUDElement.. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (); // Function CurrentRoundHUDElement.. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct ABaseGameState_C*& BaseGameState); // Function CurrentRoundHUDElement.. // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void UpdateVisibility(); // Function CurrentRoundHUDElement..UpdateVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (); // Function CurrentRoundHUDElement.. // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void SetHUDModel(struct UCoordinatedHUDModel* HUDModel); // Function CurrentRoundHUDElement..SetHUDModel // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void _1(struct UGameStateHUDConfig* NewConfig); // Function CurrentRoundHUDElement.._1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void OnRoundNumberChanged(int32_t NewValue); // Function CurrentRoundHUDElement..OnRoundNumberChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void Construct(); // Function CurrentRoundHUDElement..Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3322a90
	void _1(struct AAresPlayerStateBase* NewValue); // Function CurrentRoundHUDElement.._1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void _1(); // Function CurrentRoundHUDElement.._1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void _1(bool ); // Function CurrentRoundHUDElement.._1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (); // Function CurrentRoundHUDElement.. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void OnMenuOpened(struct UMenuStackEntry* OpenedEntry); // Function CurrentRoundHUDElement..OnMenuOpened // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void OnMenuClosed(struct UMenuStackEntry* ClosedEntry); // Function CurrentRoundHUDElement..OnMenuClosed // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct AActor* NewViewTarget); // Function CurrentRoundHUDElement.. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void _1(struct UActionBindSet* ActionBindSet, int32_t BindIndex, enum class EActionBindChangeSource ChangeSource, struct FName Character); // Function CurrentRoundHUDElement.._1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (bool IsVisible); // Function CurrentRoundHUDElement.. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (); // Function CurrentRoundHUDElement.. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void OnInitialized(); // Function CurrentRoundHUDElement..OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3322a90
	void PreConstruct(bool IsDesignTime); // Function CurrentRoundHUDElement..PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3322a90
	void (struct FName& Setting); // Function CurrentRoundHUDElement.. // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void OnRoundEnd(int32_t RoundNumberEnded); // Function CurrentRoundHUDElement..OnRoundEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (int32_t EntryPoint); // Function CurrentRoundHUDElement.. // (Final|UbergraphFunction|HasDefaults) // @ game+0x3322a90
};

