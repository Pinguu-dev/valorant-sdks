// WidgetBlueprintGeneratedClass Announcement_BuyPhase.
// Size: 0x490 (Inherited: 0x2ce)
struct U : U {
	char pad_2CE[0x2]; // 0x2ce(0x02)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d0(0x08)
	struct UWidgetAnimation* ; // 0x2d8(0x08)
	struct UWidgetAnimation* ; // 0x2e0(0x08)
	struct UImage* ; // 0x2e8(0x08)
	struct UImage* ; // 0x2f0(0x08)
	struct UBorder* BrushNormal; // 0x2f8(0x08)
	struct UTextBlock* ; // 0x300(0x08)
	struct UImage* Circle; // 0x308(0x08)
	struct UImage* Ether; // 0x310(0x08)
	struct UImage* Image; // 0x318(0x08)
	struct UImage* ; // 0x320(0x08)
	struct UTextBlock* MoneyText; // 0x328(0x08)
	struct UTextBlock* ; // 0x330(0x08)
	struct UTextBlock* ; // 0x338(0x08)
	struct UImage* ; // 0x340(0x08)
	struct UTextBlock* ; // 0x348(0x08)
	struct UTextBlock* ; // 0x350(0x08)
	struct AShooterCharacter* Character; // 0x358(0x08)
	struct FText Text; // 0x360(0x18)
	struct AActor* ; // 0x378(0x08)
	struct FText Money; // 0x380(0x18)
	struct FText RoundNumber; // 0x398(0x18)
	struct FText Objective; // 0x3b0(0x18)
	struct FText ; // 0x3c8(0x18)
	struct FText ; // 0x3e0(0x18)
	struct UMaterialInstance* ; // 0x3f8(0x08)
	struct FSlateBrush Texture; // 0x400(0x90)

	void SetIcon(); // Function Announcement_BuyPhase..SetIcon // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct AActor* Actor, struct FText& ); // Function Announcement_BuyPhase.. // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct AShooterPlayerState* State, struct FText& Name); // Function Announcement_BuyPhase.. // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322a90
	void (struct UImage* Widget, struct UTexture* Texture); // Function Announcement_BuyPhase.. // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void Construct(); // Function Announcement_BuyPhase..Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3322a90
	void (); // Function Announcement_BuyPhase.. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (); // Function Announcement_BuyPhase.. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (int32_t EntryPoint); // Function Announcement_BuyPhase.. // (Final|UbergraphFunction|HasDefaults) // @ game+0x3322a90
};

