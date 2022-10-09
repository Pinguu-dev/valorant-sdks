// WidgetBlueprintGeneratedClass Announcement_WaitingForPlayers.Announcement_WaitingForPlayers_C
// Size: 0x348 (Inherited: 0x2ce)
struct UAnnouncement_WaitingForPlayers_C : UBaseAnnouncementWidget_C {
	char pad_2CE[0x2]; // 0x2ce(0x02)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d0(0x08)
	struct UWidgetAnimation* Anim_IN_1; // 0x2d8(0x08)
	struct UWidgetAnimation* Anim_OUT; // 0x2e0(0x08)
	struct UWidgetAnimation* Anim_IN; // 0x2e8(0x08)
	struct UImage* bar_left; // 0x2f0(0x08)
	struct UImage* bar_right; // 0x2f8(0x08)
	struct UBorder* BrushNormal; // 0x300(0x08)
	struct UImage* Ether; // 0x308(0x08)
	struct UImage* LeftBar; // 0x310(0x08)
	struct UTextBlock* PrimaryText; // 0x318(0x08)
	struct UImage* RightBar; // 0x320(0x08)
	struct UTextBlock* SecondaryText; // 0x328(0x08)
	struct AShooterCharacter* Character; // 0x330(0x08)
	struct AActor* actorForLocationText; // 0x338(0x08)
	struct UMaterialInstance* Icon Material; // 0x340(0x08)

	void get VolumeLocation(struct AActor* Actor, struct FText& calloutVolumeText); // Function Announcement_WaitingForPlayers.Announcement_WaitingForPlayers_C.get VolumeLocation // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void GetNameFromPlayerState(struct AShooterPlayerState* State, struct FText& Name); // Function Announcement_WaitingForPlayers.Announcement_WaitingForPlayers_C.GetNameFromPlayerState // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3511190
	void UpdateIcon(struct UImage* Widget, struct UTexture* Texture); // Function Announcement_WaitingForPlayers.Announcement_WaitingForPlayers_C.UpdateIcon // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void Construct(); // Function Announcement_WaitingForPlayers.Announcement_WaitingForPlayers_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3511190
	void OnAnimatingIn(); // Function Announcement_WaitingForPlayers.Announcement_WaitingForPlayers_C.OnAnimatingIn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void OnAnimatingOut(); // Function Announcement_WaitingForPlayers.Announcement_WaitingForPlayers_C.OnAnimatingOut // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void Done(); // Function Announcement_WaitingForPlayers.Announcement_WaitingForPlayers_C.Done // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void ExecuteUbergraph_Announcement_WaitingForPlayers(int32_t EntryPoint); // Function Announcement_WaitingForPlayers.Announcement_WaitingForPlayers_C.ExecuteUbergraph_Announcement_WaitingForPlayers // (Final|UbergraphFunction) // @ game+0x3511190
};

