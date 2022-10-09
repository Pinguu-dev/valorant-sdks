// Class ClothingSystemRuntimeCommon.ClothConfigCommon
// Size: 0x30 (Inherited: 0x30)
struct UClothConfigCommon : UClothConfigBase {
};

// Class ClothingSystemRuntimeCommon.ClothSharedConfigCommon
// Size: 0x30 (Inherited: 0x30)
struct UClothSharedConfigCommon : UClothConfigCommon {
};

// Class ClothingSystemRuntimeCommon.ClothingAssetCustomData
// Size: 0x30 (Inherited: 0x30)
struct UClothingAssetCustomData : UObject {
};

// Class ClothingSystemRuntimeCommon.ClothingAssetCommon
// Size: 0x1f8 (Inherited: 0x50)
struct UClothingAssetCommon : UClothingAssetBase {
	struct UPhysicsAsset* PhysicsAsset; // 0x50(0x08)
	struct TMap<struct FName, struct UClothConfigBase*> ClothConfigs; // 0x58(0x50)
	struct UClothConfigBase* ClothSharedSimConfig; // 0xa8(0x08)
	struct UClothConfigBase* ClothSimConfig; // 0xb0(0x08)
	struct UClothConfigBase* ChaosClothSimConfig; // 0xb8(0x08)
	struct TArray<struct UClothLODDataCommon_Legacy*> ClothLODData; // 0xc0(0x10)
	struct TArray<struct FClothLODDataCommon> LODData; // 0xd0(0x10)
	struct TArray<int32_t> LodMap; // 0xe0(0x10)
	struct TArray<struct FName> UsedBoneNames; // 0xf0(0x10)
	struct TArray<int32_t> UsedBoneIndices; // 0x100(0x10)
	int32_t ReferenceBoneIndex; // 0x110(0x04)
	char pad_114[0x4]; // 0x114(0x04)
	struct UClothingAssetCustomData* CustomData; // 0x118(0x08)
	struct FClothConfig_Legacy ClothConfig; // 0x120(0xd4)
	char pad_1F4[0x4]; // 0x1f4(0x04)
};

// Class ClothingSystemRuntimeCommon.ClothLODDataCommon_Legacy
// Size: 0x190 (Inherited: 0x30)
struct UClothLODDataCommon_Legacy : UObject {
	struct UClothPhysicalMeshDataBase_Legacy* PhysicalMeshData; // 0x30(0x08)
	struct FClothPhysicalMeshData ClothPhysicalMeshData; // 0x38(0xf8)
	struct FClothCollisionData CollisionData; // 0x130(0x40)
	char pad_170[0x20]; // 0x170(0x20)
};

