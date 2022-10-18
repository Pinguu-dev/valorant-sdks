// WidgetBlueprintGeneratedClass BombPickedUpAnnouncement.BombPickedUpAnnouncement_C
// Size: 0x348 (Inherited: 0x2ce)
struct UBombPickedUpAnnouncement_C : UBaseAnnouncementWidget_C {
	char pad_2CE[0x2]; // 0x2ce(0x02)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d0(0x08)
	struct UWidgetAnimation* Anim_IN; // 0x2d8(0x08)
	struct UWidgetAnimation* Anim_OUT; // 0x2e0(0x08)
	struct UImage* bar_left; // 0x2e8(0x08)
	struct UImage* bar_right; // 0x2f0(0x08)
	struct UBombIcon_C* BombIcon; // 0x2f8(0x08)
	struct UImage* BrushNormal; // 0x300(0x08)
	struct UImage* Ether; // 0x308(0x08)
	struct UTextBlock* PrimaryText; // 0x310(0x08)
	struct UTextBlock* Sub_Text; // 0x318(0x08)
	struct AShooterCharacter* Character; // 0x320(0x08)
	struct FText Text; // 0x328(0x18)
	struct AActor* actorForLocationText; // 0x340(0x08)

	void HandleCharacterUsablesChanged(); // Function BombPickedUpAnnouncement.BombPickedUpAnnouncement_C.HandleCharacterUsablesChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void get VolumeLocation(struct AActor* Actor, struct FText& calloutVolumeText); // Function BombPickedUpAnnouncement.BombPickedUpAnnouncement_C.get VolumeLocation // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void GetNameFromPlayerState(struct AShooterPlayerState* State, struct FText& Name); // Function BombPickedUpAnnouncement.BombPickedUpAnnouncement_C.GetNameFromPlayerState // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3520f50
	void UpdateIcon(struct UImage* Widget, struct UTexture* Texture); // Function BombPickedUpAnnouncement.BombPickedUpAnnouncement_C.UpdateIcon // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void Construct(); // Function BombPickedUpAnnouncement.BombPickedUpAnnouncement_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3520f50
	void OnAnimatingIn(); // Function BombPickedUpAnnouncement.BombPickedUpAnnouncement_C.OnAnimatingIn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void OnAnimatingOut(); // Function BombPickedUpAnnouncement.BombPickedUpAnnouncement_C.OnAnimatingOut // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void Destruct(); // Function BombPickedUpAnnouncement.BombPickedUpAnnouncement_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3520f50
	void ExecuteUbergraph_BombPickedUpAnnouncement(int32_t EntryPoint); // Function BombPickedUpAnnouncement.BombPickedUpAnnouncement_C.ExecuteUbergraph_BombPickedUpAnnouncement // (Final|UbergraphFunction|HasDefaults) // @ game+0x3520f50
};

