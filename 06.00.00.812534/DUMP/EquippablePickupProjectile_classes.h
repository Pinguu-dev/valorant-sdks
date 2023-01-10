// BlueprintGeneratedClass EquippablePickupProjectile.EquippablePickupProjectile_C
// Size: 0x574 (Inherited: 0x500)
struct AEquippablePickupProjectile_C : AAresDroppedEquippable {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x500(0x08)
	struct URoundPersistenceComponent* RoundPersistence; // 0x508(0x08)
	struct UProjectileStopOnFloorComponent* ProjectileStopOnFloor; // 0x510(0x08)
	struct USphereComponent* Collision; // 0x518(0x08)
	struct USpawnActorProjectileEffectComponent* SpawnActorProjectileEffect; // 0x520(0x08)
	struct UProjectileBounceComponent* ProjectileBounce; // 0x528(0x08)
	struct UFiniteSpeedMovementComponent* FiniteSpeedMovement; // 0x530(0x08)
	struct AAresEquippable* MyEquippable_1; // 0x538(0x08)
	struct FRotator SpinSpeed; // 0x540(0x0c)
	struct FVector InitialStartLocation; // 0x54c(0x0c)
	float BombOffMapCheckDelay_Seconds; // 0x558(0x04)
	char pad_55C[0x4]; // 0x55c(0x04)
	struct UObject* BounceSound; // 0x560(0x08)
	struct FVector LastKnownOwnerWalkingLocation; // 0x568(0x0c)

	void StopGunSkinVO(struct UAresAudioComponent* AresAudioComponent, struct AGun_C* Gun, struct UAudBasePawnVOComponent_C* AudBasePawnVOComponent); // Function EquippablePickupProjectile.EquippablePickupProjectile_C.StopGunSkinVO // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3352280
	void BndEvt__Usable_K2Node_ComponentBoundEvent_0_UsableComponentCanUseSignature__DelegateSignature(struct UUsableComponent* UsableComponent, struct UInteractableUserComponent* User); // Function EquippablePickupProjectile.EquippablePickupProjectile_C.BndEvt__Usable_K2Node_ComponentBoundEvent_0_UsableComponentCanUseSignature__DelegateSignature // (BlueprintEvent) // @ game+0x3352280
	void BndEvt__Usable_K2Node_ComponentBoundEvent_1_UsableComponentUseSuccessful__DelegateSignature(struct UInteractableUserComponent* User); // Function EquippablePickupProjectile.EquippablePickupProjectile_C.BndEvt__Usable_K2Node_ComponentBoundEvent_1_UsableComponentUseSuccessful__DelegateSignature // (BlueprintEvent) // @ game+0x3352280
	void ReceiveBeginPlay(); // Function EquippablePickupProjectile.EquippablePickupProjectile_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x3352280
	void BndEvt__SpawnActorProjectileEffect_K2Node_ComponentBoundEvent_0_OnSpawnActorSignature__DelegateSignature(struct AActor* Actor); // Function EquippablePickupProjectile.EquippablePickupProjectile_C.BndEvt__SpawnActorProjectileEffect_K2Node_ComponentBoundEvent_0_OnSpawnActorSignature__DelegateSignature // (BlueprintEvent) // @ game+0x3352280
	void BndEvt__ProjectileBounce_K2Node_ComponentBoundEvent_1_OnProjectileBounceDelegate__DelegateSignature(struct FHitResult& ImpactResult, struct FVector& ImpactVelocity); // Function EquippablePickupProjectile.EquippablePickupProjectile_C.BndEvt__ProjectileBounce_K2Node_ComponentBoundEvent_1_OnProjectileBounceDelegate__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x3352280
	void AuthInitialize(struct AAresEquippable* DroppedEquippable, struct FVector DropVector); // Function EquippablePickupProjectile.EquippablePickupProjectile_C.AuthInitialize // (BlueprintAuthorityOnly|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x3352280
	void ReceiveTick(float DeltaSeconds); // Function EquippablePickupProjectile.EquippablePickupProjectile_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x3352280
	void ExecuteUbergraph_EquippablePickupProjectile(int32_t EntryPoint); // Function EquippablePickupProjectile.EquippablePickupProjectile_C.ExecuteUbergraph_EquippablePickupProjectile // (Final|UbergraphFunction|HasDefaults) // @ game+0x3352280
};

