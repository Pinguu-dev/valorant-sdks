// Class CableComponent.CableActor
// Size: 0x3d8 (Inherited: 0x3d0)
struct ACableActor : AActor {
	struct UCableComponent* CableComponent; // 0x3d0(0x08)
};

// Class CableComponent.CableComponent
// Size: 0x630 (Inherited: 0x590)
struct UCableComponent : UMeshComponent {
	bool bAttachStart; // 0x588(0x01)
	bool bAttachEnd; // 0x589(0x01)
	struct FComponentReference AttachEndTo; // 0x590(0x30)
	struct FName AttachEndToSocketName; // 0x5c0(0x0c)
	struct FVector EndLocation; // 0x5cc(0x0c)
	float CableLength; // 0x5d8(0x04)
	int32_t NumSegments; // 0x5dc(0x04)
	float SubstepTime; // 0x5e0(0x04)
	int32_t SolverIterations; // 0x5e4(0x04)
	bool bEnableStiffness; // 0x5e8(0x01)
	bool bUseSubstepping; // 0x5e9(0x01)
	bool bSkipCableUpdateWhenNotVisible; // 0x5ea(0x01)
	bool bSkipCableUpdateWhenNotOwnerRecentlyRendered; // 0x5eb(0x01)
	bool bEnableCollision; // 0x5ec(0x01)
	char pad_5EF[0x1]; // 0x5ef(0x01)
	float CollisionFriction; // 0x5f0(0x04)
	struct FVector CableForce; // 0x5f4(0x0c)
	float CableGravityScale; // 0x600(0x04)
	float CableWidth; // 0x604(0x04)
	int32_t NumSides; // 0x608(0x04)
	float TileMaterial; // 0x60c(0x04)
	char pad_610[0x20]; // 0x610(0x20)

	void SetAttachEndToComponent(struct USceneComponent* Component, struct FName SocketName); // Function CableComponent.CableComponent.SetAttachEndToComponent // (Final|Native|Public|BlueprintCallable) // @ game+0x244e520
	void SetAttachEndTo(struct AActor* Actor, struct FName ComponentProperty, struct FName SocketName); // Function CableComponent.CableComponent.SetAttachEndTo // (Final|Native|Public|BlueprintCallable) // @ game+0x244e3e0
	void GetCableParticleLocations(struct TArray<struct FVector>& Locations); // Function CableComponent.CableComponent.GetCableParticleLocations // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x244e330
	struct USceneComponent* GetAttachedComponent(); // Function CableComponent.CableComponent.GetAttachedComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x244e300
	struct AActor* GetAttachedActor(); // Function CableComponent.CableComponent.GetAttachedActor // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x244e2d0
};

