// WidgetBlueprintGeneratedClass ShooterCharacterMinimapWidget.ShooterCharacterMinimapWidget_C
// Size: 0x628 (Inherited: 0x2f0)
struct UShooterCharacterMinimapWidget_C : UShooterCharacterMinimapWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2f0(0x08)
	struct UWidgetAnimation* CriticalCommPulse; // 0x2f8(0x08)
	struct UWidgetAnimation* CommPulse; // 0x300(0x08)
	struct UOverlay* AliveAlly; // 0x308(0x08)
	struct UImage* AliveAllyIcon; // 0x310(0x08)
	struct UImage* AliveEnemy; // 0x318(0x08)
	struct UImage* AliveEnemyBackground; // 0x320(0x08)
	struct UOverlay* AliveEnemyOverlay; // 0x328(0x08)
	struct UImage* AllyHoldingBomb; // 0x330(0x08)
	struct UImage* DeadAlly; // 0x338(0x08)
	struct UImage* DeadEnemy; // 0x340(0x08)
	struct UOverlay* Debug; // 0x348(0x08)
	struct UImage* DebugDead; // 0x350(0x08)
	struct UImage* DebugDot; // 0x358(0x08)
	struct UTextBlock* DebugText; // 0x360(0x08)
	struct UImage* DebugVisibility; // 0x368(0x08)
	struct UImage* Edge; // 0x370(0x08)
	struct UImage* FoWDebugMissingIcon; // 0x378(0x08)
	struct UHorizontalBox* FoWDebugStatuses; // 0x380(0x08)
	struct UImage* Image_49; // 0x388(0x08)
	struct UImage* Image_57; // 0x390(0x08)
	struct UOverlay* LocalPlayerAttacker; // 0x398(0x08)
	struct UImage* LocalPlayerAttackerIcon; // 0x3a0(0x08)
	struct UImage* LocalPlayerBackground; // 0x3a8(0x08)
	struct UOverlay* LocalPlayerDefender; // 0x3b0(0x08)
	struct UImage* LocalPlayerDefenderIcon; // 0x3b8(0x08)
	struct UImage* LocalPlayerIcon; // 0x3c0(0x08)
	struct UWidgetSwitcher* MinimapStates; // 0x3c8(0x08)
	struct UImage* MissingAliveEnemy; // 0x3d0(0x08)
	struct UImage* MissingDeadEnemy; // 0x3d8(0x08)
	float Missing Visible Lifetime; // 0x3e0(0x04)
	float Fadeout Time; // 0x3e4(0x04)
	struct FAresMinimapSlotConfig Local Player Slot; // 0x3e8(0x2c)
	struct FAresMinimapSlotConfig Alive Ally Slot; // 0x414(0x2c)
	struct FAresMinimapSlotConfig Ally Holding Bomb Slot; // 0x440(0x2c)
	struct FAresMinimapSlotConfig Dead Ally Slot; // 0x46c(0x2c)
	struct FAresMinimapSlotConfig Alive Enemy Slot; // 0x498(0x2c)
	struct FAresMinimapSlotConfig Dead Enemy Slot; // 0x4c4(0x2c)
	struct FAresMinimapSlotConfig Missing Alive Enemy Slot; // 0x4f0(0x2c)
	struct FAresMinimapSlotConfig Missing Dead Enemy Slot; // 0x51c(0x2c)
	struct TSet<struct UWidget*> Fade Out Widgets; // 0x548(0x50)
	enum class EAresMinimapRotationSpace Edge Rotation Space; // 0x598(0x01)
	char pad_599[0x3]; // 0x599(0x03)
	struct FVector Edge Size; // 0x59c(0x0c)
	enum class EAresMinimapSizeSpace Edge Size Space; // 0x5a8(0x01)
	char pad_5A9[0x3]; // 0x5a9(0x03)
	struct FAresMinimapSlotConfig Debug Slot; // 0x5ac(0x2c)
	struct TMap<enum class EAresColorBlindMode, struct FLinearColor> Accesibility Self Colors; // 0x5d8(0x50)

	void Voice Event(bool Speaking); // Function ShooterCharacterMinimapWidget.ShooterCharacterMinimapWidget_C.Voice Event // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void Comm Event(enum class NonVerbalCommTypesEnum Nonverbal Comm); // Function ShooterCharacterMinimapWidget.ShooterCharacterMinimapWidget_C.Comm Event // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void Set Slot From Config(struct FAresMinimapSlotConfig Config); // Function ShooterCharacterMinimapWidget.ShooterCharacterMinimapWidget_C.Set Slot From Config // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void Update Missing Opacity(); // Function ShooterCharacterMinimapWidget.ShooterCharacterMinimapWidget_C.Update Missing Opacity // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void Update Widget(); // Function ShooterCharacterMinimapWidget.ShooterCharacterMinimapWidget_C.Update Widget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void Construct(); // Function ShooterCharacterMinimapWidget.ShooterCharacterMinimapWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x32f73d0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function ShooterCharacterMinimapWidget.ShooterCharacterMinimapWidget_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x32f73d0
	void ReceiveSetState(); // Function ShooterCharacterMinimapWidget.ShooterCharacterMinimapWidget_C.ReceiveSetState // (Event|Public|BlueprintEvent) // @ game+0x32f73d0
	void UpdateAccessibilityColors(enum class EAresIntSettingName SettingName, int32_t OldValue, int32_t NewValue); // Function ShooterCharacterMinimapWidget.ShooterCharacterMinimapWidget_C.UpdateAccessibilityColors // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void ExecuteUbergraph_ShooterCharacterMinimapWidget(int32_t EntryPoint); // Function ShooterCharacterMinimapWidget.ShooterCharacterMinimapWidget_C.ExecuteUbergraph_ShooterCharacterMinimapWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x32f73d0
};

