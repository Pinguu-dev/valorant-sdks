// Enum ApexDestruction.EImpactDamageOverride
enum class EImpactDamageOverride : uint8 {
	IDO_None = 0,
	IDO_On = 1,
	IDO_Off = 2,
	IDO_MAX = 3
};

// ScriptStruct ApexDestruction.DestructibleChunkParameters
// Size: 0x04 (Inherited: 0x00)
struct FDestructibleChunkParameters {
	bool bIsSupportChunk; // 0x00(0x01)
	bool bDoNotFracture; // 0x01(0x01)
	bool bDoNotDamage; // 0x02(0x01)
	bool bDoNotCrumble; // 0x03(0x01)
};

// ScriptStruct ApexDestruction.FractureMaterial
// Size: 0x24 (Inherited: 0x00)
struct FFractureMaterial {
	struct FVector2D UVScale; // 0x00(0x08)
	struct FVector2D UVOffset; // 0x08(0x08)
	struct FVector Tangent; // 0x10(0x0c)
	float UAngle; // 0x1c(0x04)
	int32_t InteriorElementIndex; // 0x20(0x04)
};

// ScriptStruct ApexDestruction.DestructibleParameters
// Size: 0x88 (Inherited: 0x00)
struct FDestructibleParameters {
	struct FDestructibleDamageParameters DamageParameters; // 0x00(0x1c)
	struct FDestructibleDebrisParameters DebrisParameters; // 0x1c(0x2c)
	struct FDestructibleAdvancedParameters AdvancedParameters; // 0x48(0x10)
	struct FDestructibleSpecialHierarchyDepths SpecialHierarchyDepths; // 0x58(0x14)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct TArray<struct FDestructibleDepthParameters> DepthParameters; // 0x70(0x10)
	struct FDestructibleParametersFlag Flags; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
};

// ScriptStruct ApexDestruction.DestructibleParametersFlag
// Size: 0x04 (Inherited: 0x00)
struct FDestructibleParametersFlag {
	char bAccumulateDamage : 1; // 0x00(0x01)
	char bAssetDefinedSupport : 1; // 0x00(0x01)
	char bWorldSupport : 1; // 0x00(0x01)
	char bDebrisTimeout : 1; // 0x00(0x01)
	char bDebrisMaxSeparation : 1; // 0x00(0x01)
	char bCrumbleSmallestChunks : 1; // 0x00(0x01)
	char bAccurateRaycasts : 1; // 0x00(0x01)
	char bUseValidBounds : 1; // 0x00(0x01)
	char bFormExtendedStructures : 1; // 0x01(0x01)
	char pad_1_1 : 7; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
};

// ScriptStruct ApexDestruction.DestructibleDepthParameters
// Size: 0x01 (Inherited: 0x00)
struct FDestructibleDepthParameters {
	enum class EImpactDamageOverride ImpactDamageOverride; // 0x00(0x01)
};

// ScriptStruct ApexDestruction.DestructibleSpecialHierarchyDepths
// Size: 0x14 (Inherited: 0x00)
struct FDestructibleSpecialHierarchyDepths {
	int32_t SupportDepth; // 0x00(0x04)
	int32_t MinimumFractureDepth; // 0x04(0x04)
	bool bEnableDebris; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32_t DebrisDepth; // 0x0c(0x04)
	int32_t EssentialDepth; // 0x10(0x04)
};

// ScriptStruct ApexDestruction.DestructibleAdvancedParameters
// Size: 0x10 (Inherited: 0x00)
struct FDestructibleAdvancedParameters {
	float DamageCap; // 0x00(0x04)
	float ImpactVelocityThreshold; // 0x04(0x04)
	float MaxChunkSpeed; // 0x08(0x04)
	float FractureImpulseScale; // 0x0c(0x04)
};

// ScriptStruct ApexDestruction.DestructibleDebrisParameters
// Size: 0x2c (Inherited: 0x00)
struct FDestructibleDebrisParameters {
	float DebrisLifetimeMin; // 0x00(0x04)
	float DebrisLifetimeMax; // 0x04(0x04)
	float DebrisMaxSeparationMin; // 0x08(0x04)
	float DebrisMaxSeparationMax; // 0x0c(0x04)
	struct FBox ValidBounds; // 0x10(0x1c)
};

// ScriptStruct ApexDestruction.DestructibleDamageParameters
// Size: 0x1c (Inherited: 0x00)
struct FDestructibleDamageParameters {
	float DamageThreshold; // 0x00(0x04)
	float DamageSpread; // 0x04(0x04)
	bool bEnableImpactDamage; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float ImpactDamage; // 0x0c(0x04)
	int32_t DefaultImpactDamageDepth; // 0x10(0x04)
	bool bCustomImpactResistance; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	float ImpactResistance; // 0x18(0x04)
};

