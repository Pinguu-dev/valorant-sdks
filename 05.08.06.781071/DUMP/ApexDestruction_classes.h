// Class ApexDestruction.DestructibleActor
// Size: 0x3e8 (Inherited: 0x3d0)
struct ADestructibleActor : AActor {
	struct UDestructibleComponent* DestructibleComponent; // 0x3d0(0x08)
	struct FMulticastInlineDelegate OnActorFracture; // 0x3d8(0x10)
};

// Class ApexDestruction.DestructibleComponent
// Size: 0x890 (Inherited: 0x7b0)
struct UDestructibleComponent : USkinnedMeshComponent {
	char pad_7B0[0x8]; // 0x7b0(0x08)
	char bFractureEffectOverride : 1; // 0x7b8(0x01)
	char pad_7B8_1 : 7; // 0x7b8(0x01)
	char pad_7B9[0x7]; // 0x7b9(0x07)
	struct TArray<struct FFractureEffect> FractureEffects; // 0x7c0(0x10)
	bool bEnableHardSleeping; // 0x7d0(0x01)
	char pad_7D1[0x3]; // 0x7d1(0x03)
	float LargeChunkThreshold; // 0x7d4(0x04)
	char pad_7D8[0x10]; // 0x7d8(0x10)
	struct FMulticastInlineDelegate OnComponentFracture; // 0x7e8(0x10)
	char pad_7F8[0x98]; // 0x7f8(0x98)

	void SetDestructibleMesh(struct UDestructibleMesh* NewMesh); // Function ApexDestruction.DestructibleComponent.SetDestructibleMesh // (Final|Native|Public|BlueprintCallable) // @ game+0x1d9f2e0
	struct UDestructibleMesh* GetDestructibleMesh(); // Function ApexDestruction.DestructibleComponent.GetDestructibleMesh // (Final|Native|Public|BlueprintCallable) // @ game+0x1d9f2b0
	void ApplyRadiusDamage(float BaseDamage, struct FVector& HurtOrigin, float DamageRadius, float ImpulseStrength, bool bFullDamage); // Function ApexDestruction.DestructibleComponent.ApplyRadiusDamage // (Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1d9f0d0
	void ApplyDamage(float DamageAmount, struct FVector& HitLocation, struct FVector& ImpulseDir, float ImpulseStrength); // Function ApexDestruction.DestructibleComponent.ApplyDamage // (Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1d9ef50
};

// Class ApexDestruction.DestructibleFractureSettings
// Size: 0xc0 (Inherited: 0x30)
struct UDestructibleFractureSettings : UObject {
	int32_t CellSiteCount; // 0x30(0x04)
	struct FFractureMaterial FractureMaterialDesc; // 0x34(0x24)
	int32_t RandomSeed; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct TArray<struct FVector> VoronoiSites; // 0x60(0x10)
	int32_t OriginalSubmeshCount; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	struct TArray<struct UMaterialInterface*> Materials; // 0x78(0x10)
	struct TArray<struct FDestructibleChunkParameters> ChunkParameters; // 0x88(0x10)
	char pad_98[0x28]; // 0x98(0x28)
};

// Class ApexDestruction.DestructibleMesh
// Size: 0x448 (Inherited: 0x3a8)
struct UDestructibleMesh : USkeletalMesh {
	struct FDestructibleParameters DefaultDestructibleParameters; // 0x3a8(0x88)
	struct TArray<struct FFractureEffect> FractureEffects; // 0x430(0x10)
	char pad_440[0x8]; // 0x440(0x08)
};

