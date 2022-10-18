// Class MRMesh.MeshReconstructorBase
// Size: 0x30 (Inherited: 0x30)
struct UMeshReconstructorBase : UObject {

	void StopReconstruction(); // Function MRMesh.MeshReconstructorBase.StopReconstruction // (Native|Public|BlueprintCallable) // @ game+0x2e0a400
	void StartReconstruction(); // Function MRMesh.MeshReconstructorBase.StartReconstruction // (Native|Public|BlueprintCallable) // @ game+0x2d9d600
	void PauseReconstruction(); // Function MRMesh.MeshReconstructorBase.PauseReconstruction // (Native|Public|BlueprintCallable) // @ game+0x2dc33f0
	bool IsReconstructionStarted(); // Function MRMesh.MeshReconstructorBase.IsReconstructionStarted // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2f08e50
	bool IsReconstructionPaused(); // Function MRMesh.MeshReconstructorBase.IsReconstructionPaused // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2cedb20
	void DisconnectMRMesh(); // Function MRMesh.MeshReconstructorBase.DisconnectMRMesh // (Native|Public) // @ game+0x2d569b0
	void ConnectMRMesh(struct UMRMeshComponent* Mesh); // Function MRMesh.MeshReconstructorBase.ConnectMRMesh // (Native|Public) // @ game+0x3183490
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

	void OnMockDataMeshTrackerUpdated__DelegateSignature(int32_t Index, struct TArray<struct FVector>& Vertices, struct TArray<int32_t>& Triangles, struct TArray<struct FVector>& Normals, struct TArray<float>& Confidence); // DelegateFunction MRMesh.MockDataMeshTrackerComponent.OnMockDataMeshTrackerUpdated__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x3520f50
	void DisconnectMRMesh(struct UMRMeshComponent* InMRMeshPtr); // Function MRMesh.MockDataMeshTrackerComponent.DisconnectMRMesh // (Final|Native|Public|BlueprintCallable) // @ game+0x414f1b0
	void ConnectMRMesh(struct UMRMeshComponent* InMRMeshPtr); // Function MRMesh.MockDataMeshTrackerComponent.ConnectMRMesh // (Final|Native|Public|BlueprintCallable) // @ game+0x414f120
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

	void SetWireframeMaterial(struct UMaterialInterface* InMaterial); // Function MRMesh.MRMeshComponent.SetWireframeMaterial // (Native|Public|BlueprintCallable) // @ game+0x414f4c0
	void SetWireframeColor(struct FLinearColor& InColor); // Function MRMesh.MRMeshComponent.SetWireframeColor // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x414f430
	void SetUseWireframe(bool bUseWireframe); // Function MRMesh.MRMeshComponent.SetUseWireframe // (Final|Native|Public|BlueprintCallable) // @ game+0x414f3a0
	void SetEnableMeshOcclusion(bool bEnable); // Function MRMesh.MRMeshComponent.SetEnableMeshOcclusion // (Final|Native|Public|BlueprintCallable) // @ game+0x414f310
	bool IsConnected(); // Function MRMesh.MRMeshComponent.IsConnected // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x414f2d0
	struct FLinearColor GetWireframeColor(); // Function MRMesh.MRMeshComponent.GetWireframeColor // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x414f2a0
	bool GetUseWireframe(); // Function MRMesh.MRMeshComponent.GetUseWireframe // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x414f280
	bool GetEnableMeshOcclusion(); // Function MRMesh.MRMeshComponent.GetEnableMeshOcclusion // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x414f260
	void ForceNavMeshUpdate(); // Function MRMesh.MRMeshComponent.ForceNavMeshUpdate // (Final|Native|Public|BlueprintCallable) // @ game+0x414f240
	void Clear(); // Function MRMesh.MRMeshComponent.Clear // (Final|Native|Public|BlueprintCallable) // @ game+0x414f0f0
};

