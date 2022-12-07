// BlueprintGeneratedClass EquippablePickupProjectile.EquippablePickupProjectile_C
// Size: 0x574 (Inherited: 0x500)
struct AEquippablePickupProjectile_C : AAresDroppedEquippable {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x500(0x08)
	struct URoundPersistenceComponent* ; // 0x508(0x08)
	struct UProjectileStopOnFloorComponent* ; // 0x510(0x08)
	struct USphereComponent* Collision; // 0x518(0x08)
	struct USpawnActorProjectileEffectComponent* ; // 0x520(0x08)
	struct UProjectileBounceComponent* ; // 0x528(0x08)
	struct UFiniteSpeedMovementComponent* ; // 0x530(0x08)
	struct AAresEquippable* MyEquippable_1; // 0x538(0x08)
	struct FRotator ; // 0x540(0x0c)
	struct FVector ; // 0x54c(0x0c)
	float ; // 0x558(0x04)
	char pad_55C[0x4]; // 0x55c(0x04)
	struct UObject* ; // 0x560(0x08)
	struct FVector ; // 0x568(0x0c)

	void (struct UAresAudioComponent* AresAudioComponent, struct AGun_C* Gun, struct UAudBasePawnVOComponent_C* AudBasePawnVOComponent); // Function EquippablePickupProjectile.EquippablePickupProjectile_C. // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct UUsableComponent* UsableComponent, struct UInteractableUserComponent* User); // Function EquippablePickupProjectile.EquippablePickupProjectile_C. // (BlueprintEvent) // @ game+0x3322a90
	void (struct UInteractableUserComponent* User); // Function EquippablePickupProjectile.EquippablePickupProjectile_C. // (BlueprintEvent) // @ game+0x3322a90
	void ReceiveBeginPlay(); // Function EquippablePickupProjectile.EquippablePickupProjectile_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x3322a90
	void (struct AActor* Actor); // Function EquippablePickupProjectile.EquippablePickupProjectile_C. // (BlueprintEvent) // @ game+0x3322a90
	void (struct FHitResult& ImpactResult, struct FVector& ImpactVelocity); // Function EquippablePickupProjectile.EquippablePickupProjectile_C. // (HasOutParms|BlueprintEvent) // @ game+0x3322a90
	void AuthInitialize(struct AAresEquippable* DroppedEquippable, struct FVector DropVector); // Function EquippablePickupProjectile.EquippablePickupProjectile_C.AuthInitialize // (BlueprintAuthorityOnly|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void ReceiveTick(float DeltaSeconds); // Function EquippablePickupProjectile.EquippablePickupProjectile_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x3322a90
	void (int32_t EntryPoint); // Function EquippablePickupProjectile.EquippablePickupProjectile_C. // (Final|UbergraphFunction|HasDefaults) // @ game+0x3322a90
};

