// Class MRMesh.MeshReconstructorBase
// Size: 0x30 (Inherited: 0x30)
struct UMeshReconstructorBase : UObject {
};

// Class MRMesh.MockDataMeshTrackerComponent
// Size: 0x300 (Inherited: 0x290)
struct UMockDataMeshTrackerComponent : USceneComponent {
	struct FMulticastInlineDelegate OnMeshTrackerUpdated; // 0x288(0x10)
	bool ScanWorld; // 0x298(0x01)
	bool RequestNormals; // 0x299(0x01)
	bool RequestVertexConfidence; // 0x29a(0x01)
	enum class EMeshTrackerVertexColorMode VertexColorMode; // 0x29b(0x01)
	struct TArray<struct FColor> BlockVertexColors; // 0x2a0(0x10)
	struct FLinearColor VertexColorFromConfidenceZero; // 0x2b0(0x10)
	struct FLinearColor VertexColorFromConfidenceOne; // 0x2c0(0x10)
	float UpdateInterval; // 0x2d0(0x04)
	struct UMRMeshComponent* MRMesh; // 0x2d8(0x08)
	char pad_2E0[0x20]; // 0x2e0(0x20)
};

// Class MRMesh.MRMeshComponent
// Size: 0x600 (Inherited: 0x550)
struct UMRMeshComponent : UPrimitiveComponent {
	char pad_550[0x8]; // 0x550(0x08)
	struct UMaterialInterface* Material; // 0x558(0x08)
	struct UMaterialInterface* WireframeMaterial; // 0x560(0x08)
	bool bCreateMeshProxySections; // 0x568(0x01)
	bool bUpdateNavMeshOnMeshUpdate; // 0x569(0x01)
	bool bNeverCreateCollisionMesh; // 0x56a(0x01)
	char pad_56B[0x5]; // 0x56b(0x05)
	struct UBodySetup* CachedBodySetup; // 0x570(0x08)
	struct TArray<struct UBodySetup*> BodySetups; // 0x578(0x10)
	char pad_588[0x78]; // 0x588(0x78)
};

