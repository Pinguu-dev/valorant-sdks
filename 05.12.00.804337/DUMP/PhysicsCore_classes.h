// Class PhysicsCore.PhysicalMaterial
// Size: 0x88 (Inherited: 0x30)
struct UPhysicalMaterial : UObject {
	float Friction; // 0x30(0x04)
	float StaticFriction; // 0x34(0x04)
	enum class EFrictionCombineMode FrictionCombineMode; // 0x38(0x01)
	bool bOverrideFrictionCombineMode; // 0x39(0x01)
	char pad_3A[0x2]; // 0x3a(0x02)
	float Restitution; // 0x3c(0x04)
	enum class EFrictionCombineMode RestitutionCombineMode; // 0x40(0x01)
	bool bOverrideRestitutionCombineMode; // 0x41(0x01)
	char pad_42[0x2]; // 0x42(0x02)
	float Density; // 0x44(0x04)
	float SleepLinearVelocityThreshold; // 0x48(0x04)
	float SleepAngularVelocityThreshold; // 0x4c(0x04)
	int32_t SleepCounterThreshold; // 0x50(0x04)
	float RaiseMassToPower; // 0x54(0x04)
	float DestructibleDamageThresholdScale; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct UPhysicalMaterialPropertyBase* PhysicalMaterialProperty; // 0x60(0x08)
	enum class EPhysicalSurface SurfaceType; // 0x68(0x01)
	enum class EPhysicalSurface AudioSurfaceType; // 0x69(0x01)
	char pad_6A[0x1e]; // 0x6a(0x1e)
};

// Class PhysicsCore.BodySetupCore
// Size: 0x50 (Inherited: 0x30)
struct UBodySetupCore : UObject {
	struct FName BoneName; // 0x30(0x0c)
	enum class EPhysicsType PhysicsType; // 0x3c(0x01)
	enum class ECollisionTraceFlag CollisionTraceFlag; // 0x3d(0x01)
	enum class EBodyCollisionResponse CollisionReponse; // 0x3e(0x01)
	char pad_3F[0x11]; // 0x3f(0x11)
};

// Class PhysicsCore.ChaosPhysicalMaterial
// Size: 0x50 (Inherited: 0x30)
struct UChaosPhysicalMaterial : UObject {
	float Friction; // 0x30(0x04)
	float StaticFriction; // 0x34(0x04)
	float Restitution; // 0x38(0x04)
	float LinearEtherDrag; // 0x3c(0x04)
	float AngularEtherDrag; // 0x40(0x04)
	float SleepingLinearVelocityThreshold; // 0x44(0x04)
	float SleepingAngularVelocityThreshold; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// Class PhysicsCore.PhysicalMaterialPropertyBase
// Size: 0x30 (Inherited: 0x30)
struct UPhysicalMaterialPropertyBase : UObject {
};

// Class PhysicsCore.PhysicsSettingsCore
// Size: 0xf0 (Inherited: 0x48)
struct UPhysicsSettingsCore : UDeveloperSettings {
	float DefaultGravityZ; // 0x48(0x04)
	float DefaultTerminalVelocity; // 0x4c(0x04)
	float DefaultFluidFriction; // 0x50(0x04)
	int32_t SimulateScratchMemorySize; // 0x54(0x04)
	int32_t RagdollAggregateThreshold; // 0x58(0x04)
	float TriangleMeshTriangleMinAreaThreshold; // 0x5c(0x04)
	bool bEnableShapeSharing; // 0x60(0x01)
	bool bEnablePCM; // 0x61(0x01)
	bool bEnableStabilization; // 0x62(0x01)
	bool bWarnMissingLocks; // 0x63(0x01)
	bool bEnable2DPhysics; // 0x64(0x01)
	bool bDefaultHasComplexCollision; // 0x65(0x01)
	char pad_66[0x2]; // 0x66(0x02)
	float BounceThresholdVelocity; // 0x68(0x04)
	enum class EFrictionCombineMode FrictionCombineMode; // 0x6c(0x01)
	enum class EFrictionCombineMode RestitutionCombineMode; // 0x6d(0x01)
	char pad_6E[0x2]; // 0x6e(0x02)
	float MaxAngularVelocity; // 0x70(0x04)
	float MaxDepenetrationVelocity; // 0x74(0x04)
	float ContactOffsetMultiplier; // 0x78(0x04)
	float MinContactOffset; // 0x7c(0x04)
	float MaxContactOffset; // 0x80(0x04)
	bool bSimulateSkeletalMeshOnDedicatedServer; // 0x84(0x01)
	enum class ECollisionTraceFlag DefaultShapeComplexity; // 0x85(0x01)
	char pad_86[0x2]; // 0x86(0x02)
	struct FChaosSolverConfiguration SolverOptions; // 0x88(0x68)
};

