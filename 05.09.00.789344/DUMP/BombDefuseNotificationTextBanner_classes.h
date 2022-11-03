// WidgetBlueprintGeneratedClass BombDefuseNotificationTextBanner.BombDefuseNotificationTextBanner_C
// Size: 0x338 (Inherited: 0x320)
struct UBombDefuseNotificationTextBanner_C : UBaseBombNotificationWidget_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UImage* Background; // 0x328(0x08)
	struct UTextBlock* Text; // 0x330(0x08)

	void PreConstruct(bool IsDesignTime); // Function BombDefuseNotificationTextBanner.BombDefuseNotificationTextBanner_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x32f73d0
	void HandleDefuseStart(struct AShooterCharacter* Defuser); // Function BombDefuseNotificationTextBanner.BombDefuseNotificationTextBanner_C.HandleDefuseStart // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void HandleDefuserKilled(struct AShooterCharacter* Defuser); // Function BombDefuseNotificationTextBanner.BombDefuseNotificationTextBanner_C.HandleDefuserKilled // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void HandleDefuseStop(); // Function BombDefuseNotificationTextBanner.BombDefuseNotificationTextBanner_C.HandleDefuseStop // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void ExecuteUbergraph_BombDefuseNotificationTextBanner(int32_t EntryPoint); // Function BombDefuseNotificationTextBanner.BombDefuseNotificationTextBanner_C.ExecuteUbergraph_BombDefuseNotificationTextBanner // (Final|UbergraphFunction|HasDefaults) // @ game+0x32f73d0
};

