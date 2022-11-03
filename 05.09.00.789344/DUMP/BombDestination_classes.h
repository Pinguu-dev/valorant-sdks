// BlueprintGeneratedClass BombDestination.BombDestination_C
// Size: 0x518 (Inherited: 0x400)
struct ABombDestination_C : AGameObject {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x400(0x08)
	struct UReplicationSleepComponent* ReplicationSleep; // 0x408(0x08)
	struct UStaticMeshComponent* StaticMesh2; // 0x410(0x08)
	struct UUsableComponent* Usable; // 0x418(0x08)
	struct AAresEquippable* BombEquippableClass; // 0x420(0x08)
	struct TArray<struct ABP_BombDestinationVolume_C*> RequiredPlantVolumes; // 0x428(0x10)
	bool L_FoundValidVolume; // 0x438(0x01)
	char pad_439[0x3]; // 0x439(0x03)
	float PlantRadius; // 0x43c(0x04)
	enum class BombSiteEnum BombSite; // 0x440(0x01)
	char pad_441[0x7]; // 0x441(0x07)
	struct TArray<struct ABombSiteEffectObject_C*> BombSiteEffectActors; // 0x448(0x10)
	struct TArray<struct ABombSiteEffectObject_C*> ActiveEffects; // 0x458(0x10)
	struct TArray<struct ABombSiteEffectObject_C*> DeferredEffectReferences; // 0x468(0x10)
	struct TArray<float> DeferredEffectTimes; // 0x478(0x10)
	struct TArray<int32_t> RemoveIndexes; // 0x488(0x10)
	struct FActiveGameplayEffectHandle BombBuffV2; // 0x498(0x08)
	struct TArray<struct UPrimitiveComponent*> DestinationZoneAsPrimitiveComponents; // 0x4a0(0x10)
	struct FMulticastInlineDelegate OnBombPlanted; // 0x4b0(0x10)
	struct APlantedBomb_C* PlantedBomb; // 0x4c0(0x08)
	struct APlantedBomb_C* PlantedBombClass; // 0x4c8(0x08)
	struct AAresEquippable* PreviousEquippable; // 0x4d0(0x08)
	bool bCanBeginPlant; // 0x4d8(0x01)
	char pad_4D9[0x7]; // 0x4d9(0x07)
	struct FTimerHandle EquipBombTimer; // 0x4e0(0x08)
	struct TArray<struct FVector> PossibleBombOffsets; // 0x4e8(0x10)
	struct TArray<struct AActor*> NewVar_1; // 0x4f8(0x10)
	float PlantStepDown; // 0x508(0x04)
	float PlantStepUp; // 0x50c(0x04)
	float BombHalfHeight; // 0x510(0x04)
	float BombRadius; // 0x514(0x04)

	bool IsValidFloorForPlanting(struct UCharacterMovementComponent* InCharacterMovement); // Function BombDestination.BombDestination_C.IsValidFloorForPlanting // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x32f73d0
	void SpawnPlantedBomb(struct AShooterCharacter* Character); // Function BombDestination.BombDestination_C.SpawnPlantedBomb // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void RefreshBombSiteActors(); // Function BombDestination.BombDestination_C.RefreshBombSiteActors // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void BndEvt__Usable_K2Node_ComponentBoundEvent_97_UsableComponentCanUseSignature__DelegateSignature(struct UUsableComponent* UsableComponent, struct UInteractableUserComponent* User); // Function BombDestination.BombDestination_C.BndEvt__Usable_K2Node_ComponentBoundEvent_97_UsableComponentCanUseSignature__DelegateSignature // (BlueprintEvent) // @ game+0x32f73d0
	void BndEvt__Usable_K2Node_ComponentBoundEvent_100_UsableComponentUseStarted__DelegateSignature(struct UInteractableUserComponent* User); // Function BombDestination.BombDestination_C.BndEvt__Usable_K2Node_ComponentBoundEvent_100_UsableComponentUseStarted__DelegateSignature // (BlueprintEvent) // @ game+0x32f73d0
	void BndEvt__Usable_K2Node_ComponentBoundEvent_104_UsableComponentUseSuccessful__DelegateSignature(struct UInteractableUserComponent* User); // Function BombDestination.BombDestination_C.BndEvt__Usable_K2Node_ComponentBoundEvent_104_UsableComponentUseSuccessful__DelegateSignature // (BlueprintEvent) // @ game+0x32f73d0
	void BndEvt__Usable_K2Node_ComponentBoundEvent_109_UsableComponentUseCanceled__DelegateSignature(struct UInteractableUserComponent* User, enum class EUsableCancelReason CancelReason); // Function BombDestination.BombDestination_C.BndEvt__Usable_K2Node_ComponentBoundEvent_109_UsableComponentUseCanceled__DelegateSignature // (BlueprintEvent) // @ game+0x32f73d0
	void ReceiveBeginPlay(); // Function BombDestination.BombDestination_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x32f73d0
	void MulticastActivateBombSiteEffects(struct FVector BombLocation); // Function BombDestination.BombDestination_C.MulticastActivateBombSiteEffects // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void OnAuthRoundBegin(); // Function BombDestination.BombDestination_C.OnAuthRoundBegin // (Event|Public|BlueprintEvent) // @ game+0x32f73d0
	void CleanupEffects(); // Function BombDestination.BombDestination_C.CleanupEffects // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void CreateEffect(struct ABombSiteEffectObject_C* EffectObject); // Function BombDestination.BombDestination_C.CreateEffect // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void MulticastCleanupActiveEffects(); // Function BombDestination.BombDestination_C.MulticastCleanupActiveEffects // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void AuthOnDefused(); // Function BombDestination.BombDestination_C.AuthOnDefused // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void OnDeferredEffectReady(); // Function BombDestination.BombDestination_C.OnDeferredEffectReady // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void Multicast Override Equippable(struct AAresEquippable* BombEquippableClass); // Function BombDestination.BombDestination_C.Multicast Override Equippable // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void ExecuteUbergraph_BombDestination(int32_t EntryPoint); // Function BombDestination.BombDestination_C.ExecuteUbergraph_BombDestination // (Final|UbergraphFunction|HasDefaults) // @ game+0x32f73d0
	void OnBombPlanted__DelegateSignature(struct AShooterCharacter* PlantingCharacter, enum class BombSiteEnum BombSite, struct APlantedBomb_C* PlantedBomb); // Function BombDestination.BombDestination_C.OnBombPlanted__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
};

