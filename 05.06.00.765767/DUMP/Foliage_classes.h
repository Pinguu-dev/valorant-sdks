// Class Foliage.FoliageInstancedStaticMeshComponent
// Size: 0x7c0 (Inherited: 0x790)
struct UFoliageInstancedStaticMeshComponent : UHierarchicalInstancedStaticMeshComponent {
	struct FMulticastInlineDelegate OnInstanceTakePointDamage; // 0x790(0x10)
	struct FMulticastInlineDelegate OnInstanceTakeRadialDamage; // 0x7a0(0x10)
	struct FGuid GenerationGuid; // 0x7b0(0x10)
};

// Class Foliage.FoliageStatistics
// Size: 0x30 (Inherited: 0x30)
struct UFoliageStatistics : UBlueprintFunctionLibrary {
};

// Class Foliage.FoliageType
// Size: 0x3c0 (Inherited: 0x30)
struct UFoliageType : UObject {
	struct FGuid UpdateGuid; // 0x30(0x10)
	float Density; // 0x40(0x04)
	float DensityAdjustmentFactor; // 0x44(0x04)
	float Radius; // 0x48(0x04)
	bool bSingleInstanceModeOverrideRadius; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	float SingleInstanceModeRadius; // 0x50(0x04)
	enum class EFoliageScaling Scaling; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
	struct FFloatInterval ScaleX; // 0x58(0x08)
	struct FFloatInterval ScaleY; // 0x60(0x08)
	struct FFloatInterval ScaleZ; // 0x68(0x08)
	struct FFoliageVertexColorChannelMask VertexColorMaskByChannel[0x4]; // 0x70(0x30)
	enum class FoliageVertexColorMask VertexColorMask; // 0xa0(0x01)
	char pad_A1[0x3]; // 0xa1(0x03)
	float VertexColorMaskThreshold; // 0xa4(0x04)
	char VertexColorMaskInvert : 1; // 0xa8(0x01)
	char pad_A8_1 : 7; // 0xa8(0x01)
	char pad_A9[0x3]; // 0xa9(0x03)
	struct FFloatInterval ZOffset; // 0xac(0x08)
	char AlignToNormal : 1; // 0xb4(0x01)
	char pad_B4_1 : 7; // 0xb4(0x01)
	char pad_B5[0x3]; // 0xb5(0x03)
	float AlignMaxAngle; // 0xb8(0x04)
	char RandomYaw : 1; // 0xbc(0x01)
	char pad_BC_1 : 7; // 0xbc(0x01)
	char pad_BD[0x3]; // 0xbd(0x03)
	float RandomPitchAngle; // 0xc0(0x04)
	struct FFloatInterval GroundSlopeAngle; // 0xc4(0x08)
	struct FFloatInterval Height; // 0xcc(0x08)
	char pad_D4[0x4]; // 0xd4(0x04)
	struct TArray<struct FName> LandscapeLayers; // 0xd8(0x10)
	float MinimumLayerWeight; // 0xe8(0x04)
	char pad_EC[0x4]; // 0xec(0x04)
	struct TArray<struct FName> ExclusionLandscapeLayers; // 0xf0(0x10)
	float MinimumExclusionLayerWeight; // 0x100(0x04)
	struct FName LandscapeLayer; // 0x104(0x0c)
	char CollisionWithWorld : 1; // 0x110(0x01)
	char pad_110_1 : 7; // 0x110(0x01)
	char pad_111[0x3]; // 0x111(0x03)
	struct FVector CollisionScale; // 0x114(0x0c)
	struct FBoxSphereBounds MeshBounds; // 0x120(0x1c)
	struct FVector LowBoundOriginRadius; // 0x13c(0x0c)
	enum class EComponentMobility Mobility; // 0x148(0x01)
	char pad_149[0x3]; // 0x149(0x03)
	struct FInt32Interval CullDistance; // 0x14c(0x08)
	char bEnableStaticLighting : 1; // 0x154(0x01)
	char CastShadow : 1; // 0x154(0x01)
	char bAffectDynamicIndirectLighting : 1; // 0x154(0x01)
	char bAffectDistanceFieldLighting : 1; // 0x154(0x01)
	char bCastDynamicShadow : 1; // 0x154(0x01)
	char bCastStaticShadow : 1; // 0x154(0x01)
	char bCastShadowAsTwoSided : 1; // 0x154(0x01)
	char bReceivesDecals : 1; // 0x154(0x01)
	char bOverrideLightMapRes : 1; // 0x155(0x01)
	char pad_155_1 : 7; // 0x155(0x01)
	char pad_156[0x2]; // 0x156(0x02)
	int32_t OverriddenLightMapRes; // 0x158(0x04)
	enum class ELightmapType LightmapType; // 0x15c(0x01)
	char pad_15D[0x3]; // 0x15d(0x03)
	char bUseAsOccluder : 1; // 0x160(0x01)
	char pad_160_1 : 7; // 0x160(0x01)
	char pad_161[0x7]; // 0x161(0x07)
	struct FBodyInstance BodyInstance; // 0x168(0x160)
	enum class EHasCustomNavigableGeometry CustomNavigableGeometry; // 0x2c8(0x01)
	struct FLightingChannels LightingChannels; // 0x2c9(0x01)
	char pad_2CA[0x2]; // 0x2ca(0x02)
	char bRenderCustomDepth : 1; // 0x2cc(0x01)
	char pad_2CC_1 : 7; // 0x2cc(0x01)
	char pad_2CD[0x3]; // 0x2cd(0x03)
	enum class ERendererStencilMask CustomDepthStencilWriteMask; // 0x2d0(0x01)
	char pad_2D1[0x3]; // 0x2d1(0x03)
	int32_t CustomDepthStencilValue; // 0x2d4(0x04)
	int32_t TranslucencySortPriority; // 0x2d8(0x04)
	float CollisionRadius; // 0x2dc(0x04)
	float ShadeRadius; // 0x2e0(0x04)
	int32_t NumSteps; // 0x2e4(0x04)
	float InitialSeedDensity; // 0x2e8(0x04)
	float AverageSpreadDistance; // 0x2ec(0x04)
	float SpreadVariance; // 0x2f0(0x04)
	int32_t SeedsPerStep; // 0x2f4(0x04)
	int32_t DistributionSeed; // 0x2f8(0x04)
	float MaxInitialSeedOffset; // 0x2fc(0x04)
	bool bCanGrowInShade; // 0x300(0x01)
	bool bSpawnsInShade; // 0x301(0x01)
	char pad_302[0x2]; // 0x302(0x02)
	float MaxInitialAge; // 0x304(0x04)
	float MaxAge; // 0x308(0x04)
	float OverlapPriority; // 0x30c(0x04)
	struct FFloatInterval ProceduralScale; // 0x310(0x08)
	struct FRuntimeFloatCurve ScaleCurve; // 0x318(0x88)
	int32_t ChangeCount; // 0x3a0(0x04)
	char ReapplyDensity : 1; // 0x3a4(0x01)
	char ReapplyRadius : 1; // 0x3a4(0x01)
	char ReapplyAlignToNormal : 1; // 0x3a4(0x01)
	char ReapplyRandomYaw : 1; // 0x3a4(0x01)
	char ReapplyScaling : 1; // 0x3a4(0x01)
	char ReapplyScaleX : 1; // 0x3a4(0x01)
	char ReapplyScaleY : 1; // 0x3a4(0x01)
	char ReapplyScaleZ : 1; // 0x3a4(0x01)
	char ReapplyRandomPitchAngle : 1; // 0x3a5(0x01)
	char ReapplyGroundSlope : 1; // 0x3a5(0x01)
	char ReapplyHeight : 1; // 0x3a5(0x01)
	char ReapplyLandscapeLayers : 1; // 0x3a5(0x01)
	char ReapplyZOffset : 1; // 0x3a5(0x01)
	char ReapplyCollisionWithWorld : 1; // 0x3a5(0x01)
	char ReapplyVertexColorMask : 1; // 0x3a5(0x01)
	char bEnableDensityScaling : 1; // 0x3a5(0x01)
	char bEnableDiscardOnLoad : 1; // 0x3a6(0x01)
	char pad_3A6_1 : 7; // 0x3a6(0x01)
	char pad_3A7[0x1]; // 0x3a7(0x01)
	struct TArray<struct URuntimeVirtualTexture*> RuntimeVirtualTextures; // 0x3a8(0x10)
	int32_t VirtualTextureCullMips; // 0x3b8(0x04)
	enum class ERuntimeVirtualTextureMainPassType VirtualTextureRenderPassType; // 0x3bc(0x01)
	char pad_3BD[0x3]; // 0x3bd(0x03)
};

// Class Foliage.FoliageType_Actor
// Size: 0x3d0 (Inherited: 0x3c0)
struct UFoliageType_Actor : UFoliageType {
	struct AActor* ActorClass; // 0x3c0(0x08)
	bool bShouldAttachToBaseComponent; // 0x3c8(0x01)
	char pad_3C9[0x7]; // 0x3c9(0x07)
};

// Class Foliage.FoliageType_InstancedStaticMesh
// Size: 0x3e0 (Inherited: 0x3c0)
struct UFoliageType_InstancedStaticMesh : UFoliageType {
	struct UStaticMesh* Mesh; // 0x3c0(0x08)
	struct TArray<struct UMaterialInterface*> OverrideMaterials; // 0x3c8(0x10)
	struct UFoliageInstancedStaticMeshComponent* ComponentClass; // 0x3d8(0x08)
};

// Class Foliage.InstancedFoliageActor
// Size: 0x420 (Inherited: 0x3d0)
struct AInstancedFoliageActor : AActor {
	char pad_3D0[0x50]; // 0x3d0(0x50)
};

// Class Foliage.InteractiveFoliageActor
// Size: 0x440 (Inherited: 0x3e0)
struct AInteractiveFoliageActor : AStaticMeshActor {
	struct UCapsuleComponent* CapsuleComponent; // 0x3e0(0x08)
	struct FVector TouchingActorEntryPosition; // 0x3e8(0x0c)
	struct FVector FoliageVelocity; // 0x3f4(0x0c)
	struct FVector FoliageForce; // 0x400(0x0c)
	struct FVector FoliagePosition; // 0x40c(0x0c)
	float FoliageDamageImpulseScale; // 0x418(0x04)
	float FoliageTouchImpulseScale; // 0x41c(0x04)
	float FoliageStiffness; // 0x420(0x04)
	float FoliageStiffnessQuadratic; // 0x424(0x04)
	float FoliageDamping; // 0x428(0x04)
	float MaxDamageImpulse; // 0x42c(0x04)
	float MaxTouchImpulse; // 0x430(0x04)
	float MaxForce; // 0x434(0x04)
	float Mass; // 0x438(0x04)
	char pad_43C[0x4]; // 0x43c(0x04)
};

// Class Foliage.InteractiveFoliageComponent
// Size: 0x600 (Inherited: 0x600)
struct UInteractiveFoliageComponent : UStaticMeshComponent {
};

// Class Foliage.ProceduralFoliageBlockingVolume
// Size: 0x410 (Inherited: 0x408)
struct AProceduralFoliageBlockingVolume : AVolume {
	struct AProceduralFoliageVolume* ProceduralFoliageVolume; // 0x408(0x08)
};

// Class Foliage.ProceduralFoliageComponent
// Size: 0x110 (Inherited: 0xe8)
struct UProceduralFoliageComponent : UActorComponent {
	struct UProceduralFoliageSpawner* FoliageSpawner; // 0xe8(0x08)
	float TileOverlap; // 0xf0(0x04)
	char pad_F4[0x4]; // 0xf4(0x04)
	struct AVolume* SpawningVolume; // 0xf8(0x08)
	struct FGuid ProceduralGuid; // 0x100(0x10)
};

// Class Foliage.ProceduralFoliageSpawner
// Size: 0x80 (Inherited: 0x30)
struct UProceduralFoliageSpawner : UObject {
	int32_t RandomSeed; // 0x30(0x04)
	float TileSize; // 0x34(0x04)
	int32_t NumUniqueTiles; // 0x38(0x04)
	float MinimumQuadTreeSize; // 0x3c(0x04)
	char pad_40[0x8]; // 0x40(0x08)
	struct TArray<struct FFoliageTypeObject> FoliageTypes; // 0x48(0x10)
	char pad_58[0x28]; // 0x58(0x28)
};

// Class Foliage.ProceduralFoliageTile
// Size: 0x170 (Inherited: 0x30)
struct UProceduralFoliageTile : UObject {
	struct UProceduralFoliageSpawner* FoliageSpawner; // 0x30(0x08)
	char pad_38[0xa0]; // 0x38(0xa0)
	struct TArray<struct FProceduralFoliageInstance> InstancesArray; // 0xd8(0x10)
	char pad_E8[0x88]; // 0xe8(0x88)
};

// Class Foliage.ProceduralFoliageVolume
// Size: 0x410 (Inherited: 0x408)
struct AProceduralFoliageVolume : AVolume {
	struct UProceduralFoliageComponent* ProceduralComponent; // 0x408(0x08)
};

