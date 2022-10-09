// Class ChaosCloth.ChaosClothConfig
// Size: 0xb8 (Inherited: 0x30)
struct UChaosClothConfig : UClothConfigCommon {
	enum class EClothMassMode MassMode; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float UniformMass; // 0x34(0x04)
	float TotalMass; // 0x38(0x04)
	float Density; // 0x3c(0x04)
	float MinPerParticleMass; // 0x40(0x04)
	float EdgeStiffness; // 0x44(0x04)
	float BendingStiffness; // 0x48(0x04)
	bool bUseBendingElements; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	float AreaStiffness; // 0x50(0x04)
	float VolumeStiffness; // 0x54(0x04)
	float StrainLimitingStiffness; // 0x58(0x04)
	float LimitScale; // 0x5c(0x04)
	enum class EChaosClothTetherMode TetherMode; // 0x60(0x01)
	bool bUseGeodesicDistance; // 0x61(0x01)
	char pad_62[0x2]; // 0x62(0x02)
	float ShapeTargetStiffness; // 0x64(0x04)
	float CollisionThickness; // 0x68(0x04)
	float FrictionCoefficient; // 0x6c(0x04)
	bool bUseSelfCollisions; // 0x70(0x01)
	char pad_71[0x3]; // 0x71(0x03)
	float SelfCollisionThickness; // 0x74(0x04)
	bool bUseLegacyBackstop; // 0x78(0x01)
	char pad_79[0x3]; // 0x79(0x03)
	float DampingCoefficient; // 0x7c(0x04)
	bool bUsePointBasedWindModel; // 0x80(0x01)
	char pad_81[0x3]; // 0x81(0x03)
	float DragCoefficient; // 0x84(0x04)
	float LiftCoefficient; // 0x88(0x04)
	bool bUseGravityOverride; // 0x8c(0x01)
	char pad_8D[0x3]; // 0x8d(0x03)
	float GravityScale; // 0x90(0x04)
	struct FVector Gravity; // 0x94(0x0c)
	float AnimDriveSpringStiffness; // 0xa0(0x04)
	struct FVector LinearVelocityScale; // 0xa4(0x0c)
	float AngularVelocityScale; // 0xb0(0x04)
	bool bUseTetrahedralConstraints; // 0xb4(0x01)
	bool bUseThinShellVolumeConstraints; // 0xb5(0x01)
	bool bUseContinuousCollisionDetection; // 0xb6(0x01)
	char pad_B7[0x1]; // 0xb7(0x01)
};

// Class ChaosCloth.ChaosClothSharedSimConfig
// Size: 0x60 (Inherited: 0x30)
struct UChaosClothSharedSimConfig : UClothSharedConfigCommon {
	int32_t IterationCount; // 0x30(0x04)
	int32_t SubdivisionCount; // 0x34(0x04)
	float SelfCollisionThickness; // 0x38(0x04)
	float CollisionThickness; // 0x3c(0x04)
	bool bUseDampingOverride; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	float Damping; // 0x44(0x04)
	bool bUseGravityOverride; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	float GravityScale; // 0x4c(0x04)
	struct FVector Gravity; // 0x50(0x0c)
	bool bUseLocalSpaceSimulation; // 0x5c(0x01)
	bool bUseXPBDConstraints; // 0x5d(0x01)
	char pad_5E[0x2]; // 0x5e(0x02)
};

// Class ChaosCloth.ChaosClothingSimulationFactory
// Size: 0x30 (Inherited: 0x30)
struct UChaosClothingSimulationFactory : UClothingSimulationFactory {
};

// Class ChaosCloth.ChaosClothingSimulationInteractor
// Size: 0x60 (Inherited: 0x38)
struct UChaosClothingSimulationInteractor : UClothingSimulationInteractor {
	char pad_38[0x28]; // 0x38(0x28)
};

