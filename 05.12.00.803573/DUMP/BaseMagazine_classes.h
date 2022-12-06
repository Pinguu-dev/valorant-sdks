// BlueprintGeneratedClass BaseMagazine.BaseMagazine_C
// Size: 0x580 (Inherited: 0x568)
struct ABaseMagazine_C : ABaseEjectable_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x568(0x08)
	struct URotatingMovementComponent* ; // 0x570(0x08)
	bool ; // 0x578(0x01)
	char pad_579[0x3]; // 0x579(0x03)
	float ; // 0x57c(0x04)

	void GetFirstPersonMesh(struct USkeletalMeshComponent*& Mesh); // Function BaseMagazine.BaseMagazine_C.GetFirstPersonMesh // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void GetThirdPersonMesh(struct USkeletalMeshComponent*& Mesh); // Function BaseMagazine.BaseMagazine_C.GetThirdPersonMesh // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void GetFirstPersonCosmeticMesh(struct USkeletalMeshComponent*& Mesh); // Function BaseMagazine.BaseMagazine_C.GetFirstPersonCosmeticMesh // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void GetBulletComponent(struct UBulletComponent_C*& BulletComponent); // Function BaseMagazine.BaseMagazine_C.GetBulletComponent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void EventSpawned(); // Function BaseMagazine.BaseMagazine_C.EventSpawned // (Event|Public|BlueprintEvent) // @ game+0x3322a60
	void EventApplyRotationalVelocity(struct FRotator& rotRate); // Function BaseMagazine.BaseMagazine_C.EventApplyRotationalVelocity // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x3322a60
	void EventDespawned(); // Function BaseMagazine.BaseMagazine_C.EventDespawned // (Event|Public|BlueprintEvent) // @ game+0x3322a60
	void ReceiveBeginPlay(); // Function BaseMagazine.BaseMagazine_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x3322a60
	void (struct FHitResult& ImpactResult, struct FVector& ImpactVelocity); // Function BaseMagazine.BaseMagazine_C. // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct FHitResult& ImpactResult); // Function BaseMagazine.BaseMagazine_C. // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (int32_t EntryPoint); // Function BaseMagazine.BaseMagazine_C. // (Final|UbergraphFunction|HasDefaults) // @ game+0x3322a60
};

