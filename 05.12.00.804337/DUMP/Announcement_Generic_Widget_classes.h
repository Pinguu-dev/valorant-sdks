// WidgetBlueprintGeneratedClass Announcement_Generic_Widget.
// Size: 0x340 (Inherited: 0x2ce)
struct U : U {
	char pad_2CE[0x2]; // 0x2ce(0x02)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d0(0x08)
	struct UWidgetAnimation* ; // 0x2d8(0x08)
	struct UWidgetAnimation* ; // 0x2e0(0x08)
	struct UImage* ; // 0x2e8(0x08)
	struct UImage* ; // 0x2f0(0x08)
	struct U* BombIcon; // 0x2f8(0x08)
	struct UImage* BrushNormal; // 0x300(0x08)
	struct UTextBlock* ; // 0x308(0x08)
	struct UTextBlock* ; // 0x310(0x08)
	struct AShooterCharacter* Character; // 0x318(0x08)
	struct FText Text; // 0x320(0x18)
	struct AActor* ; // 0x338(0x08)

	void (struct AActor* Actor, struct FText& ); // Function Announcement_Generic_Widget.. // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct AShooterPlayerState* State, struct FText& Name); // Function Announcement_Generic_Widget.. // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322a90
	void (struct UImage* Widget, struct UTexture* Texture); // Function Announcement_Generic_Widget.. // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void Construct(); // Function Announcement_Generic_Widget..Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3322a90
	void (); // Function Announcement_Generic_Widget.. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (); // Function Announcement_Generic_Widget.. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (int32_t EntryPoint); // Function Announcement_Generic_Widget.. // (Final|UbergraphFunction|HasDefaults) // @ game+0x3322a90
};

