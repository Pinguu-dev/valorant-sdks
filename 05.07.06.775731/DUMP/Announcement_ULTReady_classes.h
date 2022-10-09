// WidgetBlueprintGeneratedClass Announcement_ULTReady.Announcement_ULTReady_C
// Size: 0x480 (Inherited: 0x2ce)
struct UAnnouncement_ULTReady_C : UBaseAnnouncementWidget_C {
	char pad_2CE[0x2]; // 0x2ce(0x02)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d0(0x08)
	struct UWidgetAnimation* Anim_OUT_1; // 0x2d8(0x08)
	struct UWidgetAnimation* Anim_IN_1; // 0x2e0(0x08)
	struct UImage* bar_left; // 0x2e8(0x08)
	struct UImage* bar_right; // 0x2f0(0x08)
	struct UBorder* BrushNormal; // 0x2f8(0x08)
	struct UImage* Ether; // 0x300(0x08)
	struct UImage* LeftBar; // 0x308(0x08)
	struct UTextBlock* PrimaryText; // 0x310(0x08)
	struct UImage* RightBar; // 0x318(0x08)
	struct UTextBlock* SecondaryText; // 0x320(0x08)
	struct UImage* ULTIconImage; // 0x328(0x08)
	struct AShooterCharacter* Character; // 0x330(0x08)
	struct FText Secondary_text; // 0x338(0x18)
	struct AActor* actorForLocationText; // 0x350(0x08)
	struct FText Money; // 0x358(0x18)
	struct FText RoundNumber; // 0x370(0x18)
	struct FText Objective; // 0x388(0x18)
	struct FText SideSwap; // 0x3a0(0x18)
	struct FText UltName; // 0x3b8(0x18)
	struct UMaterialInstance* Icon Material; // 0x3d0(0x08)
	struct FSlateBrush UltIcon; // 0x3d8(0x90)
	struct FText Primary_text; // 0x468(0x18)

	void SetIcon(); // Function Announcement_ULTReady.Announcement_ULTReady_C.SetIcon // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void get VolumeLocation(struct AActor* Actor, struct FText& calloutVolumeText); // Function Announcement_ULTReady.Announcement_ULTReady_C.get VolumeLocation // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void GetNameFromPlayerState(struct AShooterPlayerState* State, struct FText& Name); // Function Announcement_ULTReady.Announcement_ULTReady_C.GetNameFromPlayerState // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3511190
	void UpdateIcon(struct UImage* Widget, struct UTexture* Texture); // Function Announcement_ULTReady.Announcement_ULTReady_C.UpdateIcon // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void Construct(); // Function Announcement_ULTReady.Announcement_ULTReady_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3511190
	void OnAnimatingIn(); // Function Announcement_ULTReady.Announcement_ULTReady_C.OnAnimatingIn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void OnAnimatingOut(); // Function Announcement_ULTReady.Announcement_ULTReady_C.OnAnimatingOut // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void ExecuteUbergraph_Announcement_ULTReady(int32_t EntryPoint); // Function Announcement_ULTReady.Announcement_ULTReady_C.ExecuteUbergraph_Announcement_ULTReady // (Final|UbergraphFunction) // @ game+0x3511190
};

