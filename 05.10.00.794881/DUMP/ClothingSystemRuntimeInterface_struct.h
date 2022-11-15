// ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionData
// Size: 0x40 (Inherited: 0x00)
struct FClothCollisionData {
	struct TArray<struct FClothCollisionPrim_Sphere> Spheres; // 0x00(0x10)
	struct TArray<struct FClothCollisionPrim_SphereConnection> SphereConnections; // 0x10(0x10)
	struct TArray<struct FClothCollisionPrim_Convex> Convexes; // 0x20(0x10)
	struct TArray<struct FClothCollisionPrim_Box> Boxes; // 0x30(0x10)
};

// ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_Box
// Size: 0x30 (Inherited: 0x00)
struct FClothCollisionPrim_Box {
	struct FVector LocalPosition; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FQuat LocalRotation; // 0x10(0x10)
	struct FVector HalfExtents; // 0x20(0x0c)
	int32_t BoneIndex; // 0x2c(0x04)
};

// ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_Convex
// Size: 0x28 (Inherited: 0x00)
struct FClothCollisionPrim_Convex {
	struct TArray<struct FPlane> Planes; // 0x00(0x10)
	struct TArray<struct FVector> SurfacePoints; // 0x10(0x10)
	int32_t BoneIndex; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_SphereConnection
// Size: 0x08 (Inherited: 0x00)
struct FClothCollisionPrim_SphereConnection {
	int32_t SphereIndices[0x2]; // 0x00(0x08)
};

// ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_Sphere
// Size: 0x14 (Inherited: 0x00)
struct FClothCollisionPrim_Sphere {
	int32_t BoneIndex; // 0x00(0x04)
	float Radius; // 0x04(0x04)
	struct FVector LocalPosition; // 0x08(0x0c)
};

// ScriptStruct ClothingSystemRuntimeInterface.ClothVertBoneData
// Size: 0x4c (Inherited: 0x00)
struct FClothVertBoneData {
	int32_t NumInfluences; // 0x00(0x04)
	uint16_t BoneIndices[0xc]; // 0x04(0x18)
	float BoneWeights[0xc]; // 0x1c(0x30)
};

