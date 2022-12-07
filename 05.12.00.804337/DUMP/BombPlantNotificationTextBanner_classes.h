// WidgetBlueprintGeneratedClass BombPlantNotificationTextBanner.
// Size: 0x338 (Inherited: 0x320)
struct U : U {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UImage* Background; // 0x328(0x08)
	struct UTextBlock* Text; // 0x330(0x08)

	void PreConstruct(bool IsDesignTime); // Function BombPlantNotificationTextBanner..PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3322a90
	void (struct AShooterCharacter* Planter, enum class BombSiteEnum PlantSite); // Function BombPlantNotificationTextBanner.. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (enum class BombSiteEnum PlantSite); // Function BombPlantNotificationTextBanner.. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct FVector PlantLocation, struct AShooterCharacter* BombPlanter, enum class BombSiteEnum PlantSite); // Function BombPlantNotificationTextBanner.. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct AShooterCharacter* Planter); // Function BombPlantNotificationTextBanner.. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (int32_t EntryPoint); // Function BombPlantNotificationTextBanner.. // (Final|UbergraphFunction|HasDefaults) // @ game+0x3322a90
};

