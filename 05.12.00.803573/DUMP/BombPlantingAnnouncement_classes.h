// WidgetBlueprintGeneratedClass BombPlantingAnnouncement.
// Size: 0x2f8 (Inherited: 0x2ce)
struct U : U {
	char pad_2CE[0x2]; // 0x2ce(0x02)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d0(0x08)
	struct U* AnnotatedProgressBar; // 0x2d8(0x08)
	struct UImage* Backing; // 0x2e0(0x08)
	struct U* BombIcon; // 0x2e8(0x08)
	struct AShooterCharacter* Character; // 0x2f0(0x08)

	void (bool& Visible); // Function BombPlantingAnnouncement.. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void Construct(); // Function BombPlantingAnnouncement..Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3322a60
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function BombPlantingAnnouncement..Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3322a60
	void (int32_t EntryPoint); // Function BombPlantingAnnouncement.. // (Final|UbergraphFunction|HasDefaults) // @ game+0x3322a60
};

