// WidgetBlueprintGeneratedClass KillBannerNotificationIcon.
// Size: 0x330 (Inherited: 0x310)
struct U : U {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x310(0x08)
	struct UOverlay* ; // 0x318(0x08)
	struct U* KillBanner; // 0x320(0x08)
	struct UKillBannerData_Parent_C* ; // 0x328(0x08)

	void (); // Function KillBannerNotificationIcon.. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct FKillBannerStruct& KillBannerStruct); // Function KillBannerNotificationIcon.. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322a90
	void SetHUDModel(struct UCoordinatedHUDModel* HUDModel); // Function KillBannerNotificationIcon..SetHUDModel // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void OnAnyPlayerKilled(struct AShooterPlayerState* KillerPlayerState, struct AShooterPlayerState* KilledPlayerState, int32_t KillNumberInRoundForKiller, int32_t KillNumberInRoundForKilled, struct UDamageResponse* Response, struct AAresEquippable* EquippableUsed, struct TArray<struct FAresAssist>& AssistsList); // Function KillBannerNotificationIcon..OnAnyPlayerKilled // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void PreConstruct(bool IsDesignTime); // Function KillBannerNotificationIcon..PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3322a90
	void (); // Function KillBannerNotificationIcon.. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void DisplayEditorPreview(); // Function KillBannerNotificationIcon..DisplayEditorPreview // (Event|Public|BlueprintEvent) // @ game+0x3322a90
	void (); // Function KillBannerNotificationIcon.. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (int32_t EntryPoint); // Function KillBannerNotificationIcon.. // (Final|UbergraphFunction|HasDefaults) // @ game+0x3322a90
};

