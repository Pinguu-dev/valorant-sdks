// WidgetBlueprintGeneratedClass SignatureAbilityRechargedAnnouncementWidget.SignatureAbilityRechargedAnnouncementWidget_C
// Size: 0x328 (Inherited: 0x2ce)
struct USignatureAbilityRechargedAnnouncementWidget_C : UBaseAnnouncementWidget_C {
	char pad_2CE[0x2]; // 0x2ce(0x02)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d0(0x08)
	struct UWidgetAnimation* Anim_OUT; // 0x2d8(0x08)
	struct UWidgetAnimation* Anim_IN; // 0x2e0(0x08)
	struct UImage* Brush_Normal; // 0x2e8(0x08)
	struct UImage* Image_72; // 0x2f0(0x08)
	struct UImage* L; // 0x2f8(0x08)
	struct UTextBlock* PrimaryText; // 0x300(0x08)
	struct UImage* R; // 0x308(0x08)
	struct USizeBox* SizeBox_1; // 0x310(0x08)
	struct AShooterCharacter* Character; // 0x318(0x08)
	struct AActor* actorForLocationText; // 0x320(0x08)

	void AdjustLayoutForDevice(); // Function SignatureAbilityRechargedAnnouncementWidget.SignatureAbilityRechargedAnnouncementWidget_C.AdjustLayoutForDevice // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void get VolumeLocation(struct AActor* Actor, struct FText& calloutVolumeText); // Function SignatureAbilityRechargedAnnouncementWidget.SignatureAbilityRechargedAnnouncementWidget_C.get VolumeLocation // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void GetNameFromPlayerState(struct AShooterPlayerState* State, struct FText& Name); // Function SignatureAbilityRechargedAnnouncementWidget.SignatureAbilityRechargedAnnouncementWidget_C.GetNameFromPlayerState // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3511190
	void UpdateIcon(struct UImage* Widget, struct UTexture* Texture); // Function SignatureAbilityRechargedAnnouncementWidget.SignatureAbilityRechargedAnnouncementWidget_C.UpdateIcon // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void Construct(); // Function SignatureAbilityRechargedAnnouncementWidget.SignatureAbilityRechargedAnnouncementWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3511190
	void OnAnimatingIn(); // Function SignatureAbilityRechargedAnnouncementWidget.SignatureAbilityRechargedAnnouncementWidget_C.OnAnimatingIn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void OnAnimatingOut(); // Function SignatureAbilityRechargedAnnouncementWidget.SignatureAbilityRechargedAnnouncementWidget_C.OnAnimatingOut // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void ExecuteUbergraph_SignatureAbilityRechargedAnnouncementWidget(int32_t EntryPoint); // Function SignatureAbilityRechargedAnnouncementWidget.SignatureAbilityRechargedAnnouncementWidget_C.ExecuteUbergraph_SignatureAbilityRechargedAnnouncementWidget // (Final|UbergraphFunction) // @ game+0x3511190
};

