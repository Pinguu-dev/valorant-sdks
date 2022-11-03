// WidgetBlueprintGeneratedClass BombIcon.BombIcon_C
// Size: 0x368 (Inherited: 0x2ce)
struct UBombIcon_C : UBaseAnnouncementWidget_C {
	char pad_2CE[0x2]; // 0x2ce(0x02)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d0(0x08)
	struct UWidgetAnimation* Ally_Defusing; // 0x2d8(0x08)
	struct UWidgetAnimation* Ally_Planting; // 0x2e0(0x08)
	struct UWidgetAnimation* FailedOrKilled; // 0x2e8(0x08)
	struct UWidgetAnimation* EnemyPlanted; // 0x2f0(0x08)
	struct UWidgetAnimation* AllyPlanted; // 0x2f8(0x08)
	struct UWidgetAnimation* AllyCharacterIcon; // 0x300(0x08)
	struct UWidgetAnimation* BombPickup; // 0x308(0x08)
	struct UImage* BGImg; // 0x310(0x08)
	struct UImage* brush1; // 0x318(0x08)
	struct UImage* CharacterIcon; // 0x320(0x08)
	struct UImage* KillOverlayImg; // 0x328(0x08)
	struct UImage* LeftBarImg; // 0x330(0x08)
	struct UImage* RightBarImg; // 0x338(0x08)
	struct UImage* SpikeRawTexture; // 0x340(0x08)
	struct UOverlay* TextOverlay; // 0x348(0x08)
	struct UTextBlock* TXT_Box; // 0x350(0x08)
	struct AShooterCharacter* Character; // 0x358(0x08)
	struct UObject* CharacterGlobals; // 0x360(0x08)

	void AssignCharacter(struct AShooterCharacter* InCharacter); // Function BombIcon.BombIcon_C.AssignCharacter // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void Construct(); // Function BombIcon.BombIcon_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x32f73d0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function BombIcon.BombIcon_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x32f73d0
	void PickupBomb(); // Function BombIcon.BombIcon_C.PickupBomb // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void AllyPlantingBomb(); // Function BombIcon.BombIcon_C.AllyPlantingBomb // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void AllyPlantedBomb(); // Function BombIcon.BombIcon_C.AllyPlantedBomb // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void EnemyPlantedBomb(); // Function BombIcon.BombIcon_C.EnemyPlantedBomb // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void BombSpotted(); // Function BombIcon.BombIcon_C.BombSpotted // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void Killed(); // Function BombIcon.BombIcon_C.Killed // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void AllyDefusing(); // Function BombIcon.BombIcon_C.AllyDefusing // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void ExecuteUbergraph_BombIcon(int32_t EntryPoint); // Function BombIcon.BombIcon_C.ExecuteUbergraph_BombIcon // (Final|UbergraphFunction|HasDefaults) // @ game+0x32f73d0
};

