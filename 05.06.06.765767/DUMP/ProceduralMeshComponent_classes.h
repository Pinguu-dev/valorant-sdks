// Class ProceduralMeshComponent.KismetProceduralMeshLibrary
// Size: 0x30 (Inherited: 0x30)
struct UKismetProceduralMeshLibrary : UBlueprintFunctionLibrary {
};

// Class ProceduralMeshComponent.ProceduralMeshComponent
// Size: 0x5f0 (Inherited: 0x590)
struct UProceduralMeshComponent : UMeshComponent {
	bool bUseComplexAsSimpleCollision; // 0x590(0x01)
	bool bUseAsyncCooking; // 0x591(0x01)
	char pad_592[0x6]; // 0x592(0x06)
	struct UBodySetup* ProcMeshBodySetup; // 0x598(0x08)
	struct TArray<struct FProcMeshSection> ProcMeshSections; // 0x5a0(0x10)
	struct TArray<struct FKConvexElem> CollisionConvexElems; // 0x5b0(0x10)
	struct FBoxSphereBounds LocalBounds; // 0x5c0(0x1c)
	char pad_5DC[0x4]; // 0x5dc(0x04)
	struct TArray<struct UBodySetup*> AsyncBodySetupQueue; // 0x5e0(0x10)
};

