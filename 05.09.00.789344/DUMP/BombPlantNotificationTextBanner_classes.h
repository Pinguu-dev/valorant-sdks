// WidgetBlueprintGeneratedClass BombPlantNotificationTextBanner.BombPlantNotificationTextBanner_C
// Size: 0x338 (Inherited: 0x320)
struct UBombPlantNotificationTextBanner_C : UBaseBombNotificationWidget_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UImage* Background; // 0x328(0x08)
	struct UTextBlock* Text; // 0x330(0x08)

	void PreConstruct(bool IsDesignTime); // Function BombPlantNotificationTextBanner.BombPlantNotificationTextBanner_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x32f73d0
	void HandleBombPlantStarted(struct AShooterCharacter* Planter, enum class BombSiteEnum PlantSite); // Function BombPlantNotificationTextBanner.BombPlantNotificationTextBanner_C.HandleBombPlantStarted // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void HandleBombPlantCanceled(enum class BombSiteEnum PlantSite); // Function BombPlantNotificationTextBanner.BombPlantNotificationTextBanner_C.HandleBombPlantCanceled // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void HandleBombPlanted(struct FVector PlantLocation, struct AShooterCharacter* BombPlanter, enum class BombSiteEnum PlantSite); // Function BombPlantNotificationTextBanner.BombPlantNotificationTextBanner_C.HandleBombPlanted // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void HandleBombPlanterKilled(struct AShooterCharacter* Planter); // Function BombPlantNotificationTextBanner.BombPlantNotificationTextBanner_C.HandleBombPlanterKilled // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void ExecuteUbergraph_BombPlantNotificationTextBanner(int32_t EntryPoint); // Function BombPlantNotificationTextBanner.BombPlantNotificationTextBanner_C.ExecuteUbergraph_BombPlantNotificationTextBanner // (Final|UbergraphFunction|HasDefaults) // @ game+0x32f73d0
};

