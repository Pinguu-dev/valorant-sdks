// Class ClothingSystemRuntimeInterface.ClothConfigBase
// Size: 0x30 (Inherited: 0x30)
struct UClothConfigBase : UObject {
};

// Class ClothingSystemRuntimeInterface.ClothingSimulationFactory
// Size: 0x30 (Inherited: 0x30)
struct UClothingSimulationFactory : UObject {
};

// Class ClothingSystemRuntimeInterface.ClothingSimulationInteractor
// Size: 0x38 (Inherited: 0x30)
struct UClothingSimulationInteractor : UObject {
	char pad_30[0x8]; // 0x30(0x08)
};

// Class ClothingSystemRuntimeInterface.ClothSharedSimConfigBase
// Size: 0x30 (Inherited: 0x30)
struct UClothSharedSimConfigBase : UObject {
};

// Class ClothingSystemRuntimeInterface.ClothingAssetBase
// Size: 0x50 (Inherited: 0x30)
struct UClothingAssetBase : UObject {
	struct FString ImportedFilePath; // 0x30(0x10)
	struct FGuid AssetGuid; // 0x40(0x10)
};

// Class ClothingSystemRuntimeInterface.ClothPhysicalMeshDataBase_Legacy
// Size: 0xe8 (Inherited: 0x30)
struct UClothPhysicalMeshDataBase_Legacy : UObject {
	struct TArray<struct FVector> Vertices; // 0x30(0x10)
	struct TArray<struct FVector> Normals; // 0x40(0x10)
	struct TArray<uint32_t> Indices; // 0x50(0x10)
	struct TArray<float> InverseMasses; // 0x60(0x10)
	struct TArray<struct FClothVertBoneData> BoneData; // 0x70(0x10)
	int32_t NumFixedVerts; // 0x80(0x04)
	int32_t MaxBoneWeights; // 0x84(0x04)
	struct TArray<uint32_t> SelfCollisionIndices; // 0x88(0x10)
	char pad_98[0x50]; // 0x98(0x50)
};

