// WidgetBlueprintGeneratedClass BombDefusingAnnouncement.BombDefusingAnnouncement_C
// Size: 0x2f8 (Inherited: 0x2ce)
struct UBombDefusingAnnouncement_C : UBaseAnnouncementWidget_C {
	char pad_2CE[0x2]; // 0x2ce(0x02)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d0(0x08)
	struct UAnnotatedProgressBarNoNumerals_BombTest_C* AnnotatedProgressBarNoNumerals_BombTest; // 0x2d8(0x08)
	struct UBombIcon_C* BombIcon; // 0x2e0(0x08)
	bool bActive; // 0x2e8(0x01)
	char pad_2E9[0x7]; // 0x2e9(0x07)
	struct AShooterCharacter* Character; // 0x2f0(0x08)

	void ShouldBeVisibleForViewer(bool& Visible); // Function BombDefusingAnnouncement.BombDefusingAnnouncement_C.ShouldBeVisibleForViewer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function BombDefusingAnnouncement.BombDefusingAnnouncement_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3520f50
	void Construct(); // Function BombDefusingAnnouncement.BombDefusingAnnouncement_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3520f50
	void ExecuteUbergraph_BombDefusingAnnouncement(int32_t EntryPoint); // Function BombDefusingAnnouncement.BombDefusingAnnouncement_C.ExecuteUbergraph_BombDefusingAnnouncement // (Final|UbergraphFunction|HasDefaults) // @ game+0x3520f50
};

