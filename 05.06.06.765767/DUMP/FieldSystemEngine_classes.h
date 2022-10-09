// Class FieldSystemEngine.FieldSystemActor
// Size: 0x3d8 (Inherited: 0x3d0)
struct AFieldSystemActor : AActor {
	struct UFieldSystemComponent* FieldSystemComponent; // 0x3d0(0x08)
};

// Class FieldSystemEngine.FieldSystem
// Size: 0x40 (Inherited: 0x30)
struct UFieldSystem : UObject {
	char pad_30[0x10]; // 0x30(0x10)
};

// Class FieldSystemEngine.FieldSystemComponent
// Size: 0x580 (Inherited: 0x550)
struct UFieldSystemComponent : UPrimitiveComponent {
	struct UFieldSystem* FieldSystem; // 0x548(0x08)
	char pad_558[0x8]; // 0x558(0x08)
	struct TArray<struct TSoftObjectPtr<AChaosSolverActor>> SupportedSolvers; // 0x560(0x10)
	char pad_570[0x10]; // 0x570(0x10)
};

// Class FieldSystemEngine.FieldSystemMetaData
// Size: 0xe8 (Inherited: 0xe8)
struct UFieldSystemMetaData : UActorComponent {
};

// Class FieldSystemEngine.FieldSystemMetaDataIteration
// Size: 0xf0 (Inherited: 0xe8)
struct UFieldSystemMetaDataIteration : UFieldSystemMetaData {
	int32_t Iterations; // 0xe8(0x04)
	char pad_EC[0x4]; // 0xec(0x04)
};

// Class FieldSystemEngine.FieldSystemMetaDataProcessingResolution
// Size: 0xf0 (Inherited: 0xe8)
struct UFieldSystemMetaDataProcessingResolution : UFieldSystemMetaData {
	enum class EFieldResolutionType ResolutionType; // 0xe8(0x01)
	char pad_E9[0x7]; // 0xe9(0x07)
};

// Class FieldSystemEngine.FieldNodeBase
// Size: 0xe8 (Inherited: 0xe8)
struct UFieldNodeBase : UActorComponent {
};

// Class FieldSystemEngine.FieldNodeInt
// Size: 0xe8 (Inherited: 0xe8)
struct UFieldNodeInt : UFieldNodeBase {
};

// Class FieldSystemEngine.FieldNodeFloat
// Size: 0xe8 (Inherited: 0xe8)
struct UFieldNodeFloat : UFieldNodeBase {
};

// Class FieldSystemEngine.FieldNodeVector
// Size: 0xe8 (Inherited: 0xe8)
struct UFieldNodeVector : UFieldNodeBase {
};

// Class FieldSystemEngine.UniformInteger
// Size: 0xf0 (Inherited: 0xe8)
struct UUniformInteger : UFieldNodeInt {
	int32_t Magnitude; // 0xe8(0x04)
	char pad_EC[0x4]; // 0xec(0x04)
};

// Class FieldSystemEngine.RadialIntMask
// Size: 0x108 (Inherited: 0xe8)
struct URadialIntMask : UFieldNodeInt {
	float Radius; // 0xe8(0x04)
	struct FVector Position; // 0xec(0x0c)
	int32_t InteriorValue; // 0xf8(0x04)
	int32_t ExteriorValue; // 0xfc(0x04)
	enum class ESetMaskConditionType SetMaskCondition; // 0x100(0x01)
	char pad_101[0x7]; // 0x101(0x07)
};

// Class FieldSystemEngine.UniformScalar
// Size: 0xf0 (Inherited: 0xe8)
struct UUniformScalar : UFieldNodeFloat {
	float Magnitude; // 0xe8(0x04)
	char pad_EC[0x4]; // 0xec(0x04)
};

// Class FieldSystemEngine.RadialFalloff
// Size: 0x110 (Inherited: 0xe8)
struct URadialFalloff : UFieldNodeFloat {
	float Magnitude; // 0xe8(0x04)
	float MinRange; // 0xec(0x04)
	float MaxRange; // 0xf0(0x04)
	float Default; // 0xf4(0x04)
	float Radius; // 0xf8(0x04)
	struct FVector Position; // 0xfc(0x0c)
	enum class EFieldFalloffType Falloff; // 0x108(0x01)
	char pad_109[0x7]; // 0x109(0x07)
};

// Class FieldSystemEngine.PlaneFalloff
// Size: 0x118 (Inherited: 0xe8)
struct UPlaneFalloff : UFieldNodeFloat {
	float Magnitude; // 0xe8(0x04)
	float MinRange; // 0xec(0x04)
	float MaxRange; // 0xf0(0x04)
	float Default; // 0xf4(0x04)
	float Distance; // 0xf8(0x04)
	struct FVector Position; // 0xfc(0x0c)
	struct FVector Normal; // 0x108(0x0c)
	enum class EFieldFalloffType Falloff; // 0x114(0x01)
	char pad_115[0x3]; // 0x115(0x03)
};

// Class FieldSystemEngine.BoxFalloff
// Size: 0x140 (Inherited: 0xe8)
struct UBoxFalloff : UFieldNodeFloat {
	float Magnitude; // 0xe8(0x04)
	float MinRange; // 0xec(0x04)
	float MaxRange; // 0xf0(0x04)
	float Default; // 0xf4(0x04)
	char pad_F8[0x8]; // 0xf8(0x08)
	struct FTransform Transform; // 0x100(0x30)
	enum class EFieldFalloffType Falloff; // 0x130(0x01)
	char pad_131[0xf]; // 0x131(0x0f)
};

// Class FieldSystemEngine.NoiseField
// Size: 0x120 (Inherited: 0xe8)
struct UNoiseField : UFieldNodeFloat {
	float MinRange; // 0xe8(0x04)
	float MaxRange; // 0xec(0x04)
	struct FTransform Transform; // 0xf0(0x30)
};

// Class FieldSystemEngine.UniformVector
// Size: 0xf8 (Inherited: 0xe8)
struct UUniformVector : UFieldNodeVector {
	float Magnitude; // 0xe8(0x04)
	struct FVector Direction; // 0xec(0x0c)
};

// Class FieldSystemEngine.RadialVector
// Size: 0xf8 (Inherited: 0xe8)
struct URadialVector : UFieldNodeVector {
	float Magnitude; // 0xe8(0x04)
	struct FVector Position; // 0xec(0x0c)
};

// Class FieldSystemEngine.RandomVector
// Size: 0xf0 (Inherited: 0xe8)
struct URandomVector : UFieldNodeVector {
	float Magnitude; // 0xe8(0x04)
	char pad_EC[0x4]; // 0xec(0x04)
};

// Class FieldSystemEngine.OperatorField
// Size: 0x108 (Inherited: 0xe8)
struct UOperatorField : UFieldNodeBase {
	float Magnitude; // 0xe8(0x04)
	char pad_EC[0x4]; // 0xec(0x04)
	struct UFieldNodeBase* RightField; // 0xf0(0x08)
	struct UFieldNodeBase* LeftField; // 0xf8(0x08)
	enum class EFieldOperationType Operation; // 0x100(0x01)
	char pad_101[0x7]; // 0x101(0x07)
};

// Class FieldSystemEngine.ToIntegerField
// Size: 0xf0 (Inherited: 0xe8)
struct UToIntegerField : UFieldNodeInt {
	struct UFieldNodeFloat* FloatField; // 0xe8(0x08)
};

// Class FieldSystemEngine.ToFloatField
// Size: 0xf0 (Inherited: 0xe8)
struct UToFloatField : UFieldNodeFloat {
	struct UFieldNodeInt* IntField; // 0xe8(0x08)
};

// Class FieldSystemEngine.CullingField
// Size: 0x100 (Inherited: 0xe8)
struct UCullingField : UFieldNodeBase {
	struct UFieldNodeBase* Culling; // 0xe8(0x08)
	struct UFieldNodeBase* Field; // 0xf0(0x08)
	enum class EFieldCullingOperationType Operation; // 0xf8(0x01)
	char pad_F9[0x7]; // 0xf9(0x07)
};

// Class FieldSystemEngine.ReturnResultsTerminal
// Size: 0xe8 (Inherited: 0xe8)
struct UReturnResultsTerminal : UFieldNodeBase {
};

