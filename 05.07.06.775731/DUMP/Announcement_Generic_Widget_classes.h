// WidgetBlueprintGeneratedClass Announcement_Generic_Widget.Announcement_Generic_Widget_C
// Size: 0x340 (Inherited: 0x2ce)
struct UAnnouncement_Generic_Widget_C : UBaseAnnouncementWidget_C {
	char pad_2CE[0x2]; // 0x2ce(0x02)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d0(0x08)
	struct UWidgetAnimation* Anim_IN; // 0x2d8(0x08)
	struct UWidgetAnimation* Anim_OUT; // 0x2e0(0x08)
	struct UImage* bar_left; // 0x2e8(0x08)
	struct UImage* bar_right; // 0x2f0(0x08)
	struct UBombIcon_C* BombIcon; // 0x2f8(0x08)
	struct UImage* BrushNormal; // 0x300(0x08)
	struct UTextBlock* PrimaryText; // 0x308(0x08)
	struct UTextBlock* Sub_Text; // 0x310(0x08)
	struct AShooterCharacter* Character; // 0x318(0x08)
	struct FText Text; // 0x320(0x18)
	struct AActor* actorForLocationText; // 0x338(0x08)

	void get VolumeLocation(struct AActor* Actor, struct FText& calloutVolumeText); // Function Announcement_Generic_Widget.Announcement_Generic_Widget_C.get VolumeLocation // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void GetNameFromPlayerState(struct AShooterPlayerState* State, struct FText& Name); // Function Announcement_Generic_Widget.Announcement_Generic_Widget_C.GetNameFromPlayerState // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3511190
	void UpdateIcon(struct UImage* Widget, struct UTexture* Texture); // Function Announcement_Generic_Widget.Announcement_Generic_Widget_C.UpdateIcon // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void Construct(); // Function Announcement_Generic_Widget.Announcement_Generic_Widget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3511190
	void OnAnimatingIn(); // Function Announcement_Generic_Widget.Announcement_Generic_Widget_C.OnAnimatingIn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void OnAnimatingOut(); // Function Announcement_Generic_Widget.Announcement_Generic_Widget_C.OnAnimatingOut // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void ExecuteUbergraph_Announcement_Generic_Widget(int32_t EntryPoint); // Function Announcement_Generic_Widget.Announcement_Generic_Widget_C.ExecuteUbergraph_Announcement_Generic_Widget // (Final|UbergraphFunction|HasDefaults) // @ game+0x3511190
};

