// WidgetBlueprintGeneratedClass BombDefusingAnnouncement.
// Size: 0x2f8 (Inherited: 0x2ce)
struct U : U {
	char pad_2CE[0x2]; // 0x2ce(0x02)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d0(0x08)
	struct U* AnnotatedProgressBarNoNumerals_BombTest; // 0x2d8(0x08)
	struct U* BombIcon; // 0x2e0(0x08)
	bool bActive; // 0x2e8(0x01)
	char pad_2E9[0x7]; // 0x2e9(0x07)
	struct AShooterCharacter* Character; // 0x2f0(0x08)

	void (bool& Visible); // Function BombDefusingAnnouncement.. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function BombDefusingAnnouncement..Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3322a90
	void Construct(); // Function BombDefusingAnnouncement..Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3322a90
	void (int32_t EntryPoint); // Function BombDefusingAnnouncement.. // (Final|UbergraphFunction|HasDefaults) // @ game+0x3322a90
};

