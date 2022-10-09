// WidgetBlueprintGeneratedClass BombPlantingAnnouncement.BombPlantingAnnouncement_C
// Size: 0x2f8 (Inherited: 0x2ce)
struct UBombPlantingAnnouncement_C : UBaseAnnouncementWidget_C {
	char pad_2CE[0x2]; // 0x2ce(0x02)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d0(0x08)
	struct UAnnotatedProgressBar_C* AnnotatedProgressBar; // 0x2d8(0x08)
	struct UImage* Backing; // 0x2e0(0x08)
	struct UBombIcon_C* BombIcon; // 0x2e8(0x08)
	struct AShooterCharacter* Character; // 0x2f0(0x08)

	void ShouldBeVisibleForViewer(bool& Visible); // Function BombPlantingAnnouncement.BombPlantingAnnouncement_C.ShouldBeVisibleForViewer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void Construct(); // Function BombPlantingAnnouncement.BombPlantingAnnouncement_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3511190
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function BombPlantingAnnouncement.BombPlantingAnnouncement_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3511190
	void ExecuteUbergraph_BombPlantingAnnouncement(int32_t EntryPoint); // Function BombPlantingAnnouncement.BombPlantingAnnouncement_C.ExecuteUbergraph_BombPlantingAnnouncement // (Final|UbergraphFunction|HasDefaults) // @ game+0x3511190
};

