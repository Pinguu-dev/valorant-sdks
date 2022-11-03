// Class ClothingSystemRuntimeNv.ClothConfigNv
// Size: 0x148 (Inherited: 0x30)
struct UClothConfigNv : UClothConfigCommon {
	enum class EClothingWindMethodNv ClothingWindMethod; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	struct FClothConstraintSetupNv VerticalConstraint; // 0x34(0x10)
	struct FClothConstraintSetupNv HorizontalConstraint; // 0x44(0x10)
	struct FClothConstraintSetupNv BendConstraint; // 0x54(0x10)
	struct FClothConstraintSetupNv ShearConstraint; // 0x64(0x10)
	float SelfCollisionRadius; // 0x74(0x04)
	float SelfCollisionStiffness; // 0x78(0x04)
	float SelfCollisionCullScale; // 0x7c(0x04)
	struct FVector Damping; // 0x80(0x0c)
	float Friction; // 0x8c(0x04)
	float WindDragCoefficient; // 0x90(0x04)
	float WindLiftCoefficient; // 0x94(0x04)
	struct FVector LinearDrag; // 0x98(0x0c)
	struct FVector AngularDrag; // 0xa4(0x0c)
	struct FVector LinearInertiaScale; // 0xb0(0x0c)
	struct FVector AngularInertiaScale; // 0xbc(0x0c)
	struct FVector CentrifugalInertiaScale; // 0xc8(0x0c)
	float SolverFrequency; // 0xd4(0x04)
	float StiffnessFrequency; // 0xd8(0x04)
	float GravityScale; // 0xdc(0x04)
	struct FVector GravityOverride; // 0xe0(0x0c)
	bool bUseGravityOverride; // 0xec(0x01)
	char pad_ED[0x3]; // 0xed(0x03)
	float TetherStiffness; // 0xf0(0x04)
	float TetherLimit; // 0xf4(0x04)
	float CollisionThickness; // 0xf8(0x04)
	float AnimDriveSpringStiffness; // 0xfc(0x04)
	float AnimDriveDamperStiffness; // 0x100(0x04)
	enum class EClothingWindMethod_Legacy WindMethod; // 0x104(0x01)
	char pad_105[0x3]; // 0x105(0x03)
	struct FClothConstraintSetup_Legacy VerticalConstraintConfig; // 0x108(0x10)
	struct FClothConstraintSetup_Legacy HorizontalConstraintConfig; // 0x118(0x10)
	struct FClothConstraintSetup_Legacy BendConstraintConfig; // 0x128(0x10)
	struct FClothConstraintSetup_Legacy ShearConstraintConfig; // 0x138(0x10)
};

// Class ClothingSystemRuntimeNv.ClothingSimulationFactoryNv
// Size: 0x30 (Inherited: 0x30)
struct UClothingSimulationFactoryNv : UClothingSimulationFactory {
};

// Class ClothingSystemRuntimeNv.ClothingSimulationInteractorNv
// Size: 0x48 (Inherited: 0x38)
struct UClothingSimulationInteractorNv : UClothingSimulationInteractor {
	char pad_38[0x10]; // 0x38(0x10)

	void SetAnimDriveDamperStiffness(float InStiffness); // Function ClothingSystemRuntimeNv.ClothingSimulationInteractorNv.SetAnimDriveDamperStiffness // (Final|Native|Public|BlueprintCallable) // @ game+0x53938b0
};

// Class ClothingSystemRuntimeNv.ClothPhysicalMeshDataNv_Legacy
// Size: 0x128 (Inherited: 0xe8)
struct UClothPhysicalMeshDataNv_Legacy : UClothPhysicalMeshDataBase_Legacy {
	struct TArray<float> MaxDistances; // 0xe8(0x10)
	struct TArray<float> BackstopDistances; // 0xf8(0x10)
	struct TArray<float> BackstopRadiuses; // 0x108(0x10)
	struct TArray<float> AnimDriveMultipliers; // 0x118(0x10)
};

