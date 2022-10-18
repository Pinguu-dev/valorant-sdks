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

	void ResetFieldSystem(); // Function FieldSystemEngine.FieldSystemComponent.ResetFieldSystem // (Final|Native|Public|BlueprintCallable) // @ game+0x5828ee0
	void ApplyUniformVectorFalloffForce(bool Enabled, struct FVector Position, struct FVector Direction, float Radius, float Magnitude); // Function FieldSystemEngine.FieldSystemComponent.ApplyUniformVectorFalloffForce // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x5828d20
	void ApplyStrainField(bool Enabled, struct FVector Position, float Radius, float Magnitude, int32_t Iterations); // Function FieldSystemEngine.FieldSystemComponent.ApplyStrainField // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x5828b50
	void ApplyStayDynamicField(bool Enabled, struct FVector Position, float Radius); // Function FieldSystemEngine.FieldSystemComponent.ApplyStayDynamicField // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x5828a20
	void ApplyRadialVectorFalloffForce(bool Enabled, struct FVector Position, float Radius, float Magnitude); // Function FieldSystemEngine.FieldSystemComponent.ApplyRadialVectorFalloffForce // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x5828890
	void ApplyRadialForce(bool Enabled, struct FVector Position, float Magnitude); // Function FieldSystemEngine.FieldSystemComponent.ApplyRadialForce // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x5828760
	void ApplyPhysicsField(bool Enabled, enum class EFieldPhysicsType Target, struct UFieldSystemMetaData* MetaData, struct UFieldNodeBase* Field); // Function FieldSystemEngine.FieldSystemComponent.ApplyPhysicsField // (Final|Native|Public|BlueprintCallable) // @ game+0x5828600
	void ApplyLinearForce(bool Enabled, struct FVector Direction, float Magnitude); // Function FieldSystemEngine.FieldSystemComponent.ApplyLinearForce // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x58284d0
	void AddFieldCommand(bool Enabled, enum class EFieldPhysicsType Target, struct UFieldSystemMetaData* MetaData, struct UFieldNodeBase* Field); // Function FieldSystemEngine.FieldSystemComponent.AddFieldCommand // (Final|Native|Public|BlueprintCallable) // @ game+0x5828370
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

	struct UFieldSystemMetaDataIteration* SetMetaDataIteration(int32_t Iterations); // Function FieldSystemEngine.FieldSystemMetaDataIteration.SetMetaDataIteration // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x5829260
};

// Class FieldSystemEngine.FieldSystemMetaDataProcessingResolution
// Size: 0xf0 (Inherited: 0xe8)
struct UFieldSystemMetaDataProcessingResolution : UFieldSystemMetaData {
	enum class EFieldResolutionType ResolutionType; // 0xe8(0x01)
	char pad_E9[0x7]; // 0xe9(0x07)

	struct UFieldSystemMetaDataProcessingResolution* SetMetaDataaProcessingResolutionType(enum class EFieldResolutionType ResolutionType); // Function FieldSystemEngine.FieldSystemMetaDataProcessingResolution.SetMetaDataaProcessingResolutionType // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x5829300
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

	struct UUniformInteger* SetUniformInteger(int32_t Magnitude); // Function FieldSystemEngine.UniformInteger.SetUniformInteger // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x5829260
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

	struct URadialIntMask* SetRadialIntMask(float Radius, struct FVector Position, int32_t InteriorValue, int32_t ExteriorValue, enum class ESetMaskConditionType SetMaskConditionIn); // Function FieldSystemEngine.RadialIntMask.SetRadialIntMask // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x5829b70
};

// Class FieldSystemEngine.UniformScalar
// Size: 0xf0 (Inherited: 0xe8)
struct UUniformScalar : UFieldNodeFloat {
	float Magnitude; // 0xe8(0x04)
	char pad_EC[0x4]; // 0xec(0x04)

	struct UUniformScalar* SetUniformScalar(float Magnitude); // Function FieldSystemEngine.UniformScalar.SetUniformScalar // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x5829e40
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

	struct URadialFalloff* SetRadialFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Radius, struct FVector Position, enum class EFieldFalloffType Falloff); // Function FieldSystemEngine.RadialFalloff.SetRadialFalloff // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x5829920
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

	struct UPlaneFalloff* SetPlaneFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Distance, struct FVector Position, struct FVector Normal, enum class EFieldFalloffType Falloff); // Function FieldSystemEngine.PlaneFalloff.SetPlaneFalloff // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x5829680
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

	struct UBoxFalloff* SetBoxFalloff(float Magnitude, float MinRange, float MaxRange, float Default, struct FTransform Transform, enum class EFieldFalloffType Falloff); // Function FieldSystemEngine.BoxFalloff.SetBoxFalloff // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x5828f00
};

// Class FieldSystemEngine.NoiseField
// Size: 0x120 (Inherited: 0xe8)
struct UNoiseField : UFieldNodeFloat {
	float MinRange; // 0xe8(0x04)
	float MaxRange; // 0xec(0x04)
	struct FTransform Transform; // 0xf0(0x30)

	struct UNoiseField* SetNoiseField(float MinRange, float MaxRange, struct FTransform Transform); // Function FieldSystemEngine.NoiseField.SetNoiseField // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x5829390
};

// Class FieldSystemEngine.UniformVector
// Size: 0xf8 (Inherited: 0xe8)
struct UUniformVector : UFieldNodeVector {
	float Magnitude; // 0xe8(0x04)
	struct FVector Direction; // 0xec(0x0c)

	struct UUniformVector* SetUniformVector(float Magnitude, struct FVector Direction); // Function FieldSystemEngine.UniformVector.SetUniformVector // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x5829d50
};

// Class FieldSystemEngine.RadialVector
// Size: 0xf8 (Inherited: 0xe8)
struct URadialVector : UFieldNodeVector {
	float Magnitude; // 0xe8(0x04)
	struct FVector Position; // 0xec(0x0c)

	struct URadialVector* SetRadialVector(float Magnitude, struct FVector Position); // Function FieldSystemEngine.RadialVector.SetRadialVector // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x5829d50
};

// Class FieldSystemEngine.RandomVector
// Size: 0xf0 (Inherited: 0xe8)
struct URandomVector : UFieldNodeVector {
	float Magnitude; // 0xe8(0x04)
	char pad_EC[0x4]; // 0xec(0x04)

	struct URandomVector* SetRandomVector(float Magnitude); // Function FieldSystemEngine.RandomVector.SetRandomVector // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x5829e40
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

	struct UOperatorField* SetOperatorField(float Magnitude, struct UFieldNodeBase* RightField, struct UFieldNodeBase* LeftField, enum class EFieldOperationType Operation); // Function FieldSystemEngine.OperatorField.SetOperatorField // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x5829520
};

// Class FieldSystemEngine.ToIntegerField
// Size: 0xf0 (Inherited: 0xe8)
struct UToIntegerField : UFieldNodeInt {
	struct UFieldNodeFloat* FloatField; // 0xe8(0x08)

	struct UToIntegerField* SetToIntegerField(struct UFieldNodeFloat* FloatField); // Function FieldSystemEngine.ToIntegerField.SetToIntegerField // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x5829f00
};

// Class FieldSystemEngine.ToFloatField
// Size: 0xf0 (Inherited: 0xe8)
struct UToFloatField : UFieldNodeFloat {
	struct UFieldNodeInt* IntField; // 0xe8(0x08)

	struct UToFloatField* SetToFloatField(struct UFieldNodeInt* IntegerField); // Function FieldSystemEngine.ToFloatField.SetToFloatField // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x5829f00
};

// Class FieldSystemEngine.CullingField
// Size: 0x100 (Inherited: 0xe8)
struct UCullingField : UFieldNodeBase {
	struct UFieldNodeBase* Culling; // 0xe8(0x08)
	struct UFieldNodeBase* Field; // 0xf0(0x08)
	enum class EFieldCullingOperationType Operation; // 0xf8(0x01)
	char pad_F9[0x7]; // 0xf9(0x07)

	struct UCullingField* SetCullingField(struct UFieldNodeBase* Culling, struct UFieldNodeBase* Field, enum class EFieldCullingOperationType Operation); // Function FieldSystemEngine.CullingField.SetCullingField // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x5829150
};

// Class FieldSystemEngine.ReturnResultsTerminal
// Size: 0xe8 (Inherited: 0xe8)
struct UReturnResultsTerminal : UFieldNodeBase {

	struct UReturnResultsTerminal* SetReturnResultsTerminal(); // Function FieldSystemEngine.ReturnResultsTerminal.SetReturnResultsTerminal // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x5829ed0
};

