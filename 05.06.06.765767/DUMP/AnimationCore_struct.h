// Enum AnimationCore.ETransformConstraintType
enum class ETransformConstraintType : uint8 {
	Translation = 0,
	Rotation = 1,
	Scale = 2,
	Parent = 3,
	ETransformConstraintType_MAX = 4
};

// Enum AnimationCore.EConstraintType
enum class EConstraintType : uint8 {
	Transform = 0,
	Aim = 1,
	MAX = 2
};

// ScriptStruct AnimationCore.CCDIKChainLink
// Size: 0x80 (Inherited: 0x00)
struct FCCDIKChainLink {
	char pad_0[0x80]; // 0x00(0x80)
};

// ScriptStruct AnimationCore.Axis
// Size: 0x10 (Inherited: 0x00)
struct FAxis {
	struct FVector Axis; // 0x00(0x0c)
	bool bInLocalSpace; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct AnimationCore.ConstraintData
// Size: 0x80 (Inherited: 0x00)
struct FConstraintData {
	struct FConstraintDescriptor Constraint; // 0x00(0x10)
	float Weight; // 0x10(0x04)
	bool bMaintainOffset; // 0x14(0x01)
	char pad_15[0xb]; // 0x15(0x0b)
	struct FTransform Offset; // 0x20(0x30)
	struct FTransform CurrentTransform; // 0x50(0x30)
};

// ScriptStruct AnimationCore.ConstraintDescriptor
// Size: 0x10 (Inherited: 0x00)
struct FConstraintDescriptor {
	enum class EConstraintType Type; // 0x00(0x01)
	char pad_1[0xf]; // 0x01(0x0f)
};

// ScriptStruct AnimationCore.ConstraintDescriptionEx
// Size: 0x10 (Inherited: 0x00)
struct FConstraintDescriptionEx {
	char pad_0[0x8]; // 0x00(0x08)
	struct FFilterOptionPerAxis AxesFilterOption; // 0x08(0x03)
	char pad_B[0x5]; // 0x0b(0x05)
};

// ScriptStruct AnimationCore.FilterOptionPerAxis
// Size: 0x03 (Inherited: 0x00)
struct FFilterOptionPerAxis {
	bool bX; // 0x00(0x01)
	bool bY; // 0x01(0x01)
	bool bZ; // 0x02(0x01)
};

// ScriptStruct AnimationCore.AimConstraintDescription
// Size: 0x40 (Inherited: 0x10)
struct FAimConstraintDescription : FConstraintDescriptionEx {
	struct FAxis LookAt_Axis; // 0x10(0x10)
	struct FAxis LookUp_Axis; // 0x20(0x10)
	bool bUseLookUp; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	struct FVector LookUpTarget; // 0x34(0x0c)
};

// ScriptStruct AnimationCore.TransformConstraintDescription
// Size: 0x18 (Inherited: 0x10)
struct FTransformConstraintDescription : FConstraintDescriptionEx {
	enum class ETransformConstraintType TransformType; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct AnimationCore.TransformConstraint
// Size: 0x30 (Inherited: 0x00)
struct FTransformConstraint {
	struct FConstraintDescription Operator; // 0x00(0x0d)
	char pad_D[0x3]; // 0x0d(0x03)
	struct FName SourceNode; // 0x10(0x0c)
	struct FName TargetNode; // 0x1c(0x0c)
	float Weight; // 0x28(0x04)
	bool bMaintainOffset; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
};

// ScriptStruct AnimationCore.ConstraintDescription
// Size: 0x0d (Inherited: 0x00)
struct FConstraintDescription {
	bool bTranslation; // 0x00(0x01)
	bool bRotation; // 0x01(0x01)
	bool bScale; // 0x02(0x01)
	bool bParent; // 0x03(0x01)
	struct FFilterOptionPerAxis TranslationAxes; // 0x04(0x03)
	struct FFilterOptionPerAxis RotationAxes; // 0x07(0x03)
	struct FFilterOptionPerAxis ScaleAxes; // 0x0a(0x03)
};

// ScriptStruct AnimationCore.ConstraintOffset
// Size: 0x60 (Inherited: 0x00)
struct FConstraintOffset {
	struct FVector Translation; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FQuat Rotation; // 0x10(0x10)
	struct FVector Scale; // 0x20(0x0c)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FTransform Parent; // 0x30(0x30)
};

// ScriptStruct AnimationCore.TransformFilter
// Size: 0x09 (Inherited: 0x00)
struct FTransformFilter {
	struct FFilterOptionPerAxis TranslationFilter; // 0x00(0x03)
	struct FFilterOptionPerAxis RotationFilter; // 0x03(0x03)
	struct FFilterOptionPerAxis ScaleFilter; // 0x06(0x03)
};

// ScriptStruct AnimationCore.EulerTransform
// Size: 0x24 (Inherited: 0x00)
struct FEulerTransform {
	struct FVector Location; // 0x00(0x0c)
	struct FRotator Rotation; // 0x0c(0x0c)
	struct FVector Scale; // 0x18(0x0c)
};

// ScriptStruct AnimationCore.FABRIKChainLink
// Size: 0x38 (Inherited: 0x00)
struct FFABRIKChainLink {
	char pad_0[0x38]; // 0x00(0x38)
};

// ScriptStruct AnimationCore.NodeChain
// Size: 0x10 (Inherited: 0x00)
struct FNodeChain {
	struct TArray<struct FName> Nodes; // 0x00(0x10)
};

// ScriptStruct AnimationCore.NodeHierarchyWithUserData
// Size: 0x78 (Inherited: 0x00)
struct FNodeHierarchyWithUserData {
	char pad_0[0x8]; // 0x00(0x08)
	struct FNodeHierarchyData Hierarchy; // 0x08(0x70)
};

// ScriptStruct AnimationCore.NodeHierarchyData
// Size: 0x70 (Inherited: 0x00)
struct FNodeHierarchyData {
	struct TArray<struct FNodeObject> Nodes; // 0x00(0x10)
	struct TArray<struct FTransform> Transforms; // 0x10(0x10)
	struct TMap<struct FName, int32_t> NodeNameToIndexMapping; // 0x20(0x50)
};

// ScriptStruct AnimationCore.NodeObject
// Size: 0x18 (Inherited: 0x00)
struct FNodeObject {
	struct FName Name; // 0x00(0x0c)
	struct FName ParentName; // 0x0c(0x0c)
};

// ScriptStruct AnimationCore.TransformNoScale
// Size: 0x20 (Inherited: 0x00)
struct FTransformNoScale {
	struct FVector Location; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FQuat Rotation; // 0x10(0x10)
};

