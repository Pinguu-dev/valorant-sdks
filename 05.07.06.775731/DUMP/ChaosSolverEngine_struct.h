// Enum ChaosSolverEngine.EClusterConnectionTypeEnum
enum class EClusterConnectionTypeEnum : uint8 {
	Chaos_PointImplicit = 0,
	Chaos_DelaunayTriangulation = 1,
	Chaos_MinimalSpanningSubsetDelaunayTriangulation = 2,
	Chaos_PointImplicitAugmentedWithMinimalDelaunay = 3,
	Chaos_None = 4,
	Chaos_EClsuterCreationParameters_Max = 5,
	Chaos_MAX = 6
};

// ScriptStruct ChaosSolverEngine.ChaosPhysicsCollisionInfo
// Size: 0x70 (Inherited: 0x00)
struct FChaosPhysicsCollisionInfo {
	struct UPrimitiveComponent* Component; // 0x00(0x08)
	struct UPrimitiveComponent* OtherComponent; // 0x08(0x08)
	struct FVector Location; // 0x10(0x0c)
	struct FVector Normal; // 0x1c(0x0c)
	struct FVector AccumulatedImpulse; // 0x28(0x0c)
	struct FVector Velocity; // 0x34(0x0c)
	struct FVector OtherVelocity; // 0x40(0x0c)
	struct FVector AngularVelocity; // 0x4c(0x0c)
	struct FVector OtherAngularVelocity; // 0x58(0x0c)
	float Mass; // 0x64(0x04)
	float OtherMass; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// ScriptStruct ChaosSolverEngine.ChaosBreakEvent
// Size: 0x30 (Inherited: 0x00)
struct FChaosBreakEvent {
	struct UPrimitiveComponent* Component; // 0x00(0x08)
	struct FVector Location; // 0x08(0x0c)
	struct FVector Velocity; // 0x14(0x0c)
	struct FVector AngularVelocity; // 0x20(0x0c)
	float Mass; // 0x2c(0x04)
};

// ScriptStruct ChaosSolverEngine.ChaosHandlerSet
// Size: 0x58 (Inherited: 0x00)
struct FChaosHandlerSet {
	char pad_0[0x8]; // 0x00(0x08)
	struct TSet<struct UObject*> ChaosHandlers; // 0x08(0x50)
};

// ScriptStruct ChaosSolverEngine.BreakEventCallbackWrapper
// Size: 0x40 (Inherited: 0x00)
struct FBreakEventCallbackWrapper {
	char pad_0[0x40]; // 0x00(0x40)
};

// ScriptStruct ChaosSolverEngine.ChaosDebugSubstepControl
// Size: 0x03 (Inherited: 0x00)
struct FChaosDebugSubstepControl {
	bool bPause; // 0x00(0x01)
	bool bSubstep; // 0x01(0x01)
	bool bStep; // 0x02(0x01)
};

