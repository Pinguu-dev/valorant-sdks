// WidgetBlueprintGeneratedClass PlayerAliasInit.
// Size: 0x510 (Inherited: 0x2c8)
struct U : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct UTextBlock* ; // 0x2d0(0x08)
	struct UEditableTextBox* ; // 0x2d8(0x08)
	struct UTextBlock* ; // 0x2e0(0x08)
	struct UImage* Image_59; // 0x2e8(0x08)
	struct UImage* Image_201; // 0x2f0(0x08)
	struct UImage* Image_203; // 0x2f8(0x08)
	struct UImage* ; // 0x300(0x08)
	struct UImage* ; // 0x308(0x08)
	struct U* SharedButtonMaster; // 0x310(0x08)
	struct UEditableTextBox* ; // 0x318(0x08)
	struct UTextBlock* TextBlock_255; // 0x320(0x08)
	struct UImage* ; // 0x328(0x08)
	enum class EInputValidated ; // 0x330(0x01)
	char pad_331[0x3]; // 0x331(0x03)
	float ; // 0x334(0x04)
	struct FSlateBrush ; // 0x338(0x90)
	struct FSlateBrush ; // 0x3c8(0x90)
	struct FSlateBrush ; // 0x458(0x90)
	struct FText ; // 0x4e8(0x18)
	struct TArray<struct FString> ; // 0x500(0x10)

	bool _1(); // Function PlayerAliasInit.._1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322a60
	void (struct FPlayerAlias& PlayerAlias, bool& IsValid, struct FText& ); // Function PlayerAliasInit.. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322a60
	enum class ESlateVisibility _1(); // Function PlayerAliasInit.._1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322a60
	struct FText (enum class EPlayerAliasError ); // Function PlayerAliasInit.. // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322a60
	bool (); // Function PlayerAliasInit.. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322a60
	enum class ESlateVisibility _1(); // Function PlayerAliasInit.._1 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322a60
	struct FSlateBrush _1(); // Function PlayerAliasInit.._1 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322a60
	void (struct FText& Text); // Function PlayerAliasInit.. // (HasOutParms|BlueprintEvent) // @ game+0x3322a60
	void (); // Function PlayerAliasInit.. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function PlayerAliasInit.. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (enum class EPlayerAliasError Problem); // Function PlayerAliasInit.. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void OnInvalidOrError(enum class EPlayerAliasError Problem); // Function PlayerAliasInit..OnInvalidOrError // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function PlayerAliasInit.. // (BlueprintEvent) // @ game+0x3322a60
	void (int32_t EntryPoint); // Function PlayerAliasInit.. // (Final|UbergraphFunction|HasDefaults) // @ game+0x3322a60
};

