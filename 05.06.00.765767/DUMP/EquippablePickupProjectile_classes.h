// BlueprintGeneratedClass EquippablePickupProjectile.EquippablePickupProjectile_C
// Size: 0x554 (Inherited: 0x4e0)
struct AEquippablePickupProjectile_C : AAresDroppedEquippable {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct URoundPersistenceComponent* RoundPersistence; // 0x4e8(0x08)
	struct UProjectileStopOnFloorComponent* ProjectileStopOnFloor; // 0x4f0(0x08)
	struct USphereComponent* Collision; // 0x4f8(0x08)
	struct USpawnActorProjectileEffectComponent* SpawnActorProjectileEffect; // 0x500(0x08)
	struct UProjectileBounceComponent* ProjectileBounce; // 0x508(0x08)
	struct UFiniteSpeedMovementComponent* FiniteSpeedMovement; // 0x510(0x08)
	struct AAresEquippable* MyEquippable_1; // 0x518(0x08)
	struct FRotator SpinSpeed; // 0x520(0x0c)
	struct FVector InitialStartLocation; // 0x52c(0x0c)
	float BombOffMapCheckDelay_Seconds; // 0x538(0x04)
	char pad_53C[0x4]; // 0x53c(0x04)
	struct UObject* BounceSound; // 0x540(0x08)
	struct FVector LastKnownOwnerWalkingLocation; // 0x548(0x0c)
};

