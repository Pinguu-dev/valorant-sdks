// BlueprintGeneratedClass BombPlantNotificationType.BombPlantNotificationType_C
// Size: 0x88 (Inherited: 0x80)
struct UBombPlantNotificationType_C : UBaseBombEventNotificationType_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x80(0x08)

	void HandleBombPlantStarted(struct AShooterCharacter* Planter, enum class BombSiteEnum PlantSite); // Function BombPlantNotificationType.BombPlantNotificationType_C.HandleBombPlantStarted // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void HandleBombPlantCanceled(enum class BombSiteEnum PlantSite); // Function BombPlantNotificationType.BombPlantNotificationType_C.HandleBombPlantCanceled // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void HandleBombPlanted(struct FVector PlantLocation, struct AShooterCharacter* BombPlanter, enum class BombSiteEnum PlantSite); // Function BombPlantNotificationType.BombPlantNotificationType_C.HandleBombPlanted // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void HandleBombPlanterKilled(struct AShooterCharacter* Planter); // Function BombPlantNotificationType.BombPlantNotificationType_C.HandleBombPlanterKilled // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void ExecuteUbergraph_BombPlantNotificationType(int32_t EntryPoint); // Function BombPlantNotificationType.BombPlantNotificationType_C.ExecuteUbergraph_BombPlantNotificationType // (Final|UbergraphFunction) // @ game+0x32f73d0
};

