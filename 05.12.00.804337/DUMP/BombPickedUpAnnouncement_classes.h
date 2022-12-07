// WidgetBlueprintGeneratedClass BombPickedUpAnnouncement.
// Size: 0x348 (Inherited: 0x2ce)
struct U : U {
	char pad_2CE[0x2]; // 0x2ce(0x02)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d0(0x08)
	struct UWidgetAnimation* ; // 0x2d8(0x08)
	struct UWidgetAnimation* ; // 0x2e0(0x08)
	struct UImage* ; // 0x2e8(0x08)
	struct UImage* ; // 0x2f0(0x08)
	struct U* BombIcon; // 0x2f8(0x08)
	struct UImage* BrushNormal; // 0x300(0x08)
	struct UImage* Ether; // 0x308(0x08)
	struct UTextBlock* ; // 0x310(0x08)
	struct UTextBlock* ; // 0x318(0x08)
	struct AShooterCharacter* Character; // 0x320(0x08)
	struct FText Text; // 0x328(0x18)
	struct AActor* ; // 0x340(0x08)

	void (); // Function BombPickedUpAnnouncement.. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct AActor* Actor, struct FText& ); // Function BombPickedUpAnnouncement.. // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct AShooterPlayerState* State, struct FText& Name); // Function BombPickedUpAnnouncement.. // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322a90
	void (struct UImage* Widget, struct UTexture* Texture); // Function BombPickedUpAnnouncement.. // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void Construct(); // Function BombPickedUpAnnouncement..Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3322a90
	void (); // Function BombPickedUpAnnouncement.. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (); // Function BombPickedUpAnnouncement.. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void Destruct(); // Function BombPickedUpAnnouncement..Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3322a90
	void (int32_t EntryPoint); // Function BombPickedUpAnnouncement.. // (Final|UbergraphFunction|HasDefaults) // @ game+0x3322a90
};

