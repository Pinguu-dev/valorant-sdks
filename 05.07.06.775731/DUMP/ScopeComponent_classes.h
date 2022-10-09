// BlueprintGeneratedClass ScopeComponent.ScopeComponent_C
// Size: 0x120 (Inherited: 0xe8)
struct UScopeComponent_C : UActorComponent {
	char pad_E8[0x8]; // 0xe8(0x08)
	struct FTransform ScopeTransformComponentSpace; // 0xf0(0x30)

	void Draw Position(struct FVector Position, struct FString Name, struct FLinearColor Color); // Function ScopeComponent.ScopeComponent_C.Draw Position // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void ReceivedScopeMesh(struct UMeshComponent* Mesh1PScope, struct UMeshComponent* Mesh1PGun, struct FName GunSocketName, struct FTransform& GunSocketTransform); // Function ScopeComponent.ScopeComponent_C.ReceivedScopeMesh // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
};

