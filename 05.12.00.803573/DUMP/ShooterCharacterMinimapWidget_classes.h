// WidgetBlueprintGeneratedClass ShooterCharacterMinimapWidget.
// Size: 0x628 (Inherited: 0x2f0)
struct U : UShooterCharacterMinimapWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2f0(0x08)
	struct UWidgetAnimation* ; // 0x2f8(0x08)
	struct UWidgetAnimation* ; // 0x300(0x08)
	struct UOverlay* ; // 0x308(0x08)
	struct UImage* ; // 0x310(0x08)
	struct UImage* ; // 0x318(0x08)
	struct UImage* ; // 0x320(0x08)
	struct UOverlay* ; // 0x328(0x08)
	struct UImage* ; // 0x330(0x08)
	struct UImage* ; // 0x338(0x08)
	struct UImage* ; // 0x340(0x08)
	struct UOverlay* ; // 0x348(0x08)
	struct UImage* ; // 0x350(0x08)
	struct UImage* ; // 0x358(0x08)
	struct UTextBlock* DebugText; // 0x360(0x08)
	struct UImage* ; // 0x368(0x08)
	struct UImage* ; // 0x370(0x08)
	struct UImage* ; // 0x378(0x08)
	struct UHorizontalBox* ; // 0x380(0x08)
	struct UImage* Image_49; // 0x388(0x08)
	struct UImage* Image_57; // 0x390(0x08)
	struct UOverlay* ; // 0x398(0x08)
	struct UImage* ; // 0x3a0(0x08)
	struct UImage* ; // 0x3a8(0x08)
	struct UOverlay* ; // 0x3b0(0x08)
	struct UImage* ; // 0x3b8(0x08)
	struct UImage* ; // 0x3c0(0x08)
	struct UWidgetSwitcher* ; // 0x3c8(0x08)
	struct UImage* ; // 0x3d0(0x08)
	struct UImage* ; // 0x3d8(0x08)
	float ; // 0x3e0(0x04)
	float ; // 0x3e4(0x04)
	struct FAresMinimapSlotConfig ; // 0x3e8(0x2c)
	struct FAresMinimapSlotConfig ; // 0x414(0x2c)
	struct FAresMinimapSlotConfig ; // 0x440(0x2c)
	struct FAresMinimapSlotConfig ; // 0x46c(0x2c)
	struct FAresMinimapSlotConfig ; // 0x498(0x2c)
	struct FAresMinimapSlotConfig ; // 0x4c4(0x2c)
	struct FAresMinimapSlotConfig ; // 0x4f0(0x2c)
	struct FAresMinimapSlotConfig ; // 0x51c(0x2c)
	struct TSet<struct UWidget*> ; // 0x548(0x50)
	enum class EAresMinimapRotationSpace ; // 0x598(0x01)
	char pad_599[0x3]; // 0x599(0x03)
	struct FVector ; // 0x59c(0x0c)
	enum class EAresMinimapSizeSpace ; // 0x5a8(0x01)
	char pad_5A9[0x3]; // 0x5a9(0x03)
	struct FAresMinimapSlotConfig ; // 0x5ac(0x2c)
	struct TMap<enum class EAresColorBlindMode, struct FLinearColor> ; // 0x5d8(0x50)

	void (bool ); // Function ShooterCharacterMinimapWidget.. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (enum class NonVerbalCommTypesEnum ); // Function ShooterCharacterMinimapWidget.. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct FAresMinimapSlotConfig Config); // Function ShooterCharacterMinimapWidget.. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function ShooterCharacterMinimapWidget.. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function ShooterCharacterMinimapWidget.. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void Construct(); // Function ShooterCharacterMinimapWidget..Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3322a60
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function ShooterCharacterMinimapWidget..Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3322a60
	void ReceiveSetState(); // Function ShooterCharacterMinimapWidget..ReceiveSetState // (Event|Public|BlueprintEvent) // @ game+0x3322a60
	void (enum class EAresIntSettingName SettingName, int32_t OldValue, int32_t NewValue); // Function ShooterCharacterMinimapWidget.. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (int32_t EntryPoint); // Function ShooterCharacterMinimapWidget.. // (Final|UbergraphFunction|HasDefaults) // @ game+0x3322a60
};

