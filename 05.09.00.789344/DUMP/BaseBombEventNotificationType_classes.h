// BlueprintGeneratedClass BaseBombEventNotificationType.BaseBombEventNotificationType_C
// Size: 0x80 (Inherited: 0x70)
struct UBaseBombEventNotificationType_C : UBaseGameplayNotificationType_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x70(0x08)
	struct UComp_BombEvents_C* BombEventsComp; // 0x78(0x08)

	void UnbindBombEvents(); // Function BaseBombEventNotificationType.BaseBombEventNotificationType_C.UnbindBombEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void BindBombEvents(); // Function BaseBombEventNotificationType.BaseBombEventNotificationType_C.BindBombEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void HandleBombPlantStarted(struct AShooterCharacter* Planter, enum class BombSiteEnum PlantSite); // Function BaseBombEventNotificationType.BaseBombEventNotificationType_C.HandleBombPlantStarted // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void HandleBombPlantCanceled(enum class BombSiteEnum PlantSite); // Function BaseBombEventNotificationType.BaseBombEventNotificationType_C.HandleBombPlantCanceled // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void HandleBombPlanted(struct FVector PlantLocation, struct AShooterCharacter* BombPlanter, enum class BombSiteEnum PlantSite); // Function BaseBombEventNotificationType.BaseBombEventNotificationType_C.HandleBombPlanted // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void HandleBombPlanterKilled(struct AShooterCharacter* Planter); // Function BaseBombEventNotificationType.BaseBombEventNotificationType_C.HandleBombPlanterKilled // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void SetHUDModel(struct UCoordinatedHUDModel* InHUDModel); // Function BaseBombEventNotificationType.BaseBombEventNotificationType_C.SetHUDModel // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void HandleBombPickedUp(struct AShooterCharacter* NewBombHolder); // Function BaseBombEventNotificationType.BaseBombEventNotificationType_C.HandleBombPickedUp // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void HandleBombDropped(struct AShooterCharacter* OldBombHolder); // Function BaseBombEventNotificationType.BaseBombEventNotificationType_C.HandleBombDropped // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void HandleDefuserKilled(struct AShooterCharacter* Defuser); // Function BaseBombEventNotificationType.BaseBombEventNotificationType_C.HandleDefuserKilled // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void HandleBombCarrierKilled(struct AShooterCharacter* OldCarrier); // Function BaseBombEventNotificationType.BaseBombEventNotificationType_C.HandleBombCarrierKilled // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void HandleDefuseStart(struct AShooterCharacter* Defuser); // Function BaseBombEventNotificationType.BaseBombEventNotificationType_C.HandleDefuseStart // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void HandleDefuseStop(); // Function BaseBombEventNotificationType.BaseBombEventNotificationType_C.HandleDefuseStop // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void ExecuteUbergraph_BaseBombEventNotificationType(int32_t EntryPoint); // Function BaseBombEventNotificationType.BaseBombEventNotificationType_C.ExecuteUbergraph_BaseBombEventNotificationType // (Final|UbergraphFunction) // @ game+0x32f73d0
};

