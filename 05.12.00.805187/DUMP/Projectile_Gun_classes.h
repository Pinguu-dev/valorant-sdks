// BlueprintGeneratedClass Projectile_Gun.Projectile_Gun_C
// Size: 0x530 (Inherited: 0x4f0)
struct AProjectile_Gun_C : AProjectile {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4f0(0x08)
	struct UHitScanMovementComponent* HitScanMovement; // 0x4f8(0x08)
	struct UBulletWhizByComponent* BulletWhizByComponent; // 0x500(0x08)
	struct UTaggingComponent* TaggingComponent; // 0x508(0x08)
	struct UTracerProjectileEffectComponent* TracerProjectileEffectComponent; // 0x510(0x08)
	struct UDamageProjectileEffectComponent* DamageProjectileEffectComponent; // 0x518(0x08)
	struct UWallPenetrationComponent* WallPenetrationComponent; // 0x520(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x528(0x08)

	void ReceiveBeginPlay(); // Function Projectile_Gun.Projectile_Gun_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x3322b10
	void OnStopEvent_Event_1(); // Function Projectile_Gun.Projectile_Gun_C.OnStopEvent_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3322b10
	void ExecuteUbergraph_Projectile_Gun(int32_t EntryPoint); // Function Projectile_Gun.Projectile_Gun_C.ExecuteUbergraph_Projectile_Gun // (Final|UbergraphFunction) // @ game+0x3322b10
};

