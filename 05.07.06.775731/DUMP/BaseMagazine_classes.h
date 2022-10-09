// BlueprintGeneratedClass BaseMagazine.BaseMagazine_C
// Size: 0x580 (Inherited: 0x568)
struct ABaseMagazine_C : ABaseEjectable_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x568(0x08)
	struct URotatingMovementComponent* RotatingMovement; // 0x570(0x08)
	bool bDebugBounceVelocity; // 0x578(0x01)
	char pad_579[0x3]; // 0x579(0x03)
	float Rotational Velocity Init Scale; // 0x57c(0x04)

	void GetFirstPersonMesh(struct USkeletalMeshComponent*& Mesh); // Function BaseMagazine.BaseMagazine_C.GetFirstPersonMesh // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void GetThirdPersonMesh(struct USkeletalMeshComponent*& Mesh); // Function BaseMagazine.BaseMagazine_C.GetThirdPersonMesh // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void GetFirstPersonCosmeticMesh(struct USkeletalMeshComponent*& Mesh); // Function BaseMagazine.BaseMagazine_C.GetFirstPersonCosmeticMesh // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void GetBulletComponent(struct UBulletComponent_C*& BulletComponent); // Function BaseMagazine.BaseMagazine_C.GetBulletComponent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void EventSpawned(); // Function BaseMagazine.BaseMagazine_C.EventSpawned // (Event|Public|BlueprintEvent) // @ game+0x3511190
	void EventApplyRotationalVelocity(struct FRotator& rotRate); // Function BaseMagazine.BaseMagazine_C.EventApplyRotationalVelocity // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x3511190
	void EventDespawned(); // Function BaseMagazine.BaseMagazine_C.EventDespawned // (Event|Public|BlueprintEvent) // @ game+0x3511190
	void ReceiveBeginPlay(); // Function BaseMagazine.BaseMagazine_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x3511190
	void MagazineBounce(struct FHitResult& ImpactResult, struct FVector& ImpactVelocity); // Function BaseMagazine.BaseMagazine_C.MagazineBounce // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void MagazineStop(struct FHitResult& ImpactResult); // Function BaseMagazine.BaseMagazine_C.MagazineStop // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void ExecuteUbergraph_BaseMagazine(int32_t EntryPoint); // Function BaseMagazine.BaseMagazine_C.ExecuteUbergraph_BaseMagazine // (Final|UbergraphFunction|HasDefaults) // @ game+0x3511190
};

