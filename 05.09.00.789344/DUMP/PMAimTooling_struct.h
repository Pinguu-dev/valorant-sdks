// Enum PMAimTooling.EPMAimToolingStrafeAssistMode
enum class EPMAimToolingStrafeAssistMode : uint8 {
	AlwaysTowardsTarget = 0,
	ConditionalCounterStrafe = 1,
	AlwaysCounterStrafe = 2,
	Count = 3,
	Invalid = 254,
	EPMAimToolingFeature_MAX = 255,
	EPMAimToolingStrafeAssistMode_MAX = 256
};

// Enum PMAimTooling.EPMAimToolingConfig
enum class EPMAimToolingConfig : uint8 {
	PotentialTargetMaxAngle = 0,
	PotentialTargetQueryDist = 1,
	DefaultRawInputVectorSize = 2,
	MinimumMaxSpeedThreshold = 3,
	MinimumMaxSpeedOverride = 4,
	TargetManagementOuterRadius = 5,
	TargetManagementOuterRadiusMinScalePct = 6,
	TargetManagementOuterRadiusMaxScalePct = 7,
	TargetManagementMinDistance = 8,
	TargetManagementMaxDistance = 9,
	TargetManagementPreviousTargetDecay = 10,
	MoveErrorMax = 11,
	MoveErrorExponent = 12,
	OverTargetAccelerationFlatScale = 13,
	OverTargetAccelerationScaleFloor = 14,
	OverTargetAccelerationExponent = 15,
	AimAccelerationDelayScaleDecayRate = 16,
	AimAccelerationDelayMinOverTargetPct = 17,
	DecelerationTime = 18,
	DecelerationAverageWindow = 19,
	DecelerationExponent = 20,
	DecelerationHalfAngle = 21,
	DecelerationMaxShift = 22,
	DecelerationStartThreshold = 23,
	FlashTurningAimAccelerationScale = 24,
	FlashTurningPitchSensitivityScale = 25,
	FlashTurningYawSensitivityScale = 26,
	Count = 27,
	Invalid = 254,
	EPMAimToolingFeature_MAX = 255,
	EPMAimToolingConfig_MAX = 256
};

// Enum PMAimTooling.EPMAimToolingCurve
enum class EPMAimToolingCurve : uint8 {
	AimAccelerationScaleCurve = 0,
	Count = 1,
	Invalid = 254,
	EPMAimToolingCurve_MAX = 255
};

// Enum PMAimTooling.EPMAimToolingFeature
enum class EPMAimToolingFeature : uint8 {
	TargetManagement = 0,
	PullToCenter = 1,
	Bending = 2,
	OverTargetAcceleration = 3,
	AimAccelerationDelay = 4,
	Deceleration = 5,
	FrameOfReference = 6,
	StrafeAssist = 7,
	TargetFriction = 8,
	FlashTurning = 9,
	Count = 10,
	Invalid = 254,
	EPMAimToolingFeature_MAX = 255
};

// ScriptStruct PMAimTooling.PMAimToolingBendingWeaponTuningSet
// Size: 0x08 (Inherited: 0x00)
struct FPMAimToolingBendingWeaponTuningSet {
	float AimToolingBendingExponent; // 0x00(0x04)
	float AimToolingBendingMovePenaltyScale; // 0x04(0x04)
};

// ScriptStruct PMAimTooling.PMAimToolingBendingFeatureTuningSet
// Size: 0x18 (Inherited: 0x00)
struct FPMAimToolingBendingFeatureTuningSet {
	float AimToolingBendingInnerRadiusCm; // 0x00(0x04)
	float AimToolingBendingOuterRadiusCm; // 0x04(0x04)
	float AimToolingBendingMaxAngleDegs; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UCurveFloat* AimToolingBendingEfficacyScaleForErrorCurve; // 0x10(0x08)
};

// ScriptStruct PMAimTooling.PMAimToolingPullToCenterWeaponTuningSet
// Size: 0x18 (Inherited: 0x00)
struct FPMAimToolingPullToCenterWeaponTuningSet {
	struct UCurveFloat* PullToCenterWorldDistFromTargetCurve; // 0x00(0x08)
	struct UCurveFloat* PullToCenterScreenDistFromTargetCurve; // 0x08(0x08)
	struct UCurveFloat* PullToCenterStickDeflectionCurve; // 0x10(0x08)
};

// ScriptStruct PMAimTooling.PMAimToolingPullToCenterFeatureTuningSet
// Size: 0x50 (Inherited: 0x00)
struct FPMAimToolingPullToCenterFeatureTuningSet {
	float AimToolingPullToCenterRadialTowardExponent; // 0x00(0x04)
	float AimToolingPullToCenterRadialTowardScale; // 0x04(0x04)
	float AimToolingPullToCenterRadialAwayExponent; // 0x08(0x04)
	float AimToolingPullToCenterRadialAwayScale; // 0x0c(0x04)
	float AimToolingPullToCenterTangentialTowardExponent; // 0x10(0x04)
	float AimToolingPullToCenterTangentialTowardScale; // 0x14(0x04)
	float AimToolingPullToCenterTangentialAwayExponent; // 0x18(0x04)
	float AimToolingPullToCenterTangentialAwayScale; // 0x1c(0x04)
	float AimToolingPullToCenterMovePenaltyScale; // 0x20(0x04)
	float AimToolingPullToCenterRecoilEfficacyScale; // 0x24(0x04)
	float AimToolingPullToCenterAdjustmentClampThreshold; // 0x28(0x04)
	float AimToolingPullToCenterAdjustmentClampScale; // 0x2c(0x04)
	struct UCurveFloat* PullToCenterRadialTowardCurve; // 0x30(0x08)
	struct UCurveFloat* PullToCenterRadialAwayCurve; // 0x38(0x08)
	struct UCurveFloat* PullToCenterTangentialTowardCurve; // 0x40(0x08)
	struct UCurveFloat* PullToCenterTangentialAwayCurve; // 0x48(0x08)
};

// ScriptStruct PMAimTooling.PMAimToolingFrameOfReferenceWeaponTuningSet
// Size: 0x20 (Inherited: 0x00)
struct FPMAimToolingFrameOfReferenceWeaponTuningSet {
	struct UCurveFloat* FrameOfReferenceWorldDistFromTargetCurve; // 0x00(0x08)
	struct UCurveFloat* FrameOfReferenceScreenDistFromTargetCurve; // 0x08(0x08)
	struct UCurveFloat* FrameOfReferenceStickDeflectionCurve; // 0x10(0x08)
	struct UCurveFloat* FrameOfReferenceOverTargetPctCurve; // 0x18(0x08)
};

// ScriptStruct PMAimTooling.PMAimToolingFrameOfReferenceFeatureTuningSet
// Size: 0x08 (Inherited: 0x00)
struct FPMAimToolingFrameOfReferenceFeatureTuningSet {
	float AimToolingFrameOfReferenceMinOverTargetPct; // 0x00(0x04)
	float AimToolingFrameOfReferenceMovementDeltaScale; // 0x04(0x04)
};

// ScriptStruct PMAimTooling.PMAimToolingStrafeAssistWeaponTuningSet
// Size: 0x20 (Inherited: 0x00)
struct FPMAimToolingStrafeAssistWeaponTuningSet {
	struct UCurveFloat* StrafeAssistOverTargetPctCurve; // 0x00(0x08)
	struct UCurveFloat* StrafeAssistWorldDistFromTargetCurve; // 0x08(0x08)
	struct UCurveFloat* StrafeAssistScreenDistFromTargetCurve; // 0x10(0x08)
	struct UCurveFloat* StrafeAssistPlayerSpeedCurve; // 0x18(0x08)
};

// ScriptStruct PMAimTooling.PMAimToolingStrafeAssistFeatureTuningSet
// Size: 0x08 (Inherited: 0x00)
struct FPMAimToolingStrafeAssistFeatureTuningSet {
	float AimToolingStrafeAssistMovementDeltaScale; // 0x00(0x04)
	enum class EPMAimToolingStrafeAssistMode AimToolingStrafeAssistMode; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct PMAimTooling.PMAimToolingTargetFrictionWeaponTuningSet
// Size: 0x20 (Inherited: 0x00)
struct FPMAimToolingTargetFrictionWeaponTuningSet {
	struct UCurveFloat* TargetFrictionOverTargetPctCurve; // 0x00(0x08)
	struct UCurveFloat* TargetFrictionWorldDistFromTargetCurve; // 0x08(0x08)
	struct UCurveFloat* TargetFrictionScreenDistFromTargetCurve; // 0x10(0x08)
	struct UCurveFloat* TargetFrictionStickDeflectionCurve; // 0x18(0x08)
};

// ScriptStruct PMAimTooling.PMAimToolingDecelerationState
// Size: 0x40 (Inherited: 0x00)
struct FPMAimToolingDecelerationState {
	struct TArray<struct FPMAimToolingDecelerationEntry> InputEntries; // 0x00(0x10)
	struct FVector2D AverageInput; // 0x10(0x08)
	float TimeTotal; // 0x18(0x04)
	bool bIsDecelerating; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	float DecelerationAmount; // 0x20(0x04)
	struct FVector2D DecelerationStartDirection; // 0x24(0x08)
	struct FVector2D DecelerationLastKnownDirection; // 0x2c(0x08)
	float DecelerationStartSize; // 0x34(0x04)
	struct FVector2D ToTargetStartVector; // 0x38(0x08)
};

// ScriptStruct PMAimTooling.PMAimToolingDecelerationEntry
// Size: 0x0c (Inherited: 0x00)
struct FPMAimToolingDecelerationEntry {
	struct FVector2D Input; // 0x00(0x08)
	float Duration; // 0x08(0x04)
};

// ScriptStruct PMAimTooling.PMAimToolingAxis
// Size: 0x24 (Inherited: 0x00)
struct FPMAimToolingAxis {
	struct FName TopBone; // 0x00(0x0c)
	struct FName MiddleBone; // 0x0c(0x0c)
	struct FName BottomBone; // 0x18(0x0c)
};

// ScriptStruct PMAimTooling.PMAimToolingTargetPointDef
// Size: 0x14 (Inherited: 0x00)
struct FPMAimToolingTargetPointDef {
	struct FName TargetPointName; // 0x00(0x0c)
	float Weight; // 0x0c(0x04)
	float RadiusScale; // 0x10(0x04)
};

// ScriptStruct PMAimTooling.PMAimToolingBoneDef
// Size: 0x14 (Inherited: 0x00)
struct FPMAimToolingBoneDef {
	struct FName Bone; // 0x00(0x0c)
	float Weight; // 0x0c(0x04)
	float RadiusScale; // 0x10(0x04)
};

// ScriptStruct PMAimTooling.PMAimToolingTarget
// Size: 0x20 (Inherited: 0x00)
struct FPMAimToolingTarget {
	struct UPMAimToolingTargetComponentBase* TargetComponent; // 0x00(0x08)
	float Weight; // 0x08(0x04)
	float OverTargetPercent; // 0x0c(0x04)
	float Dist; // 0x10(0x04)
	struct FVector AssistLocation; // 0x14(0x0c)
};

// ScriptStruct PMAimTooling.PMAimToolingCachedProjectionData
// Size: 0x120 (Inherited: 0x00)
struct FPMAimToolingCachedProjectionData {
	struct APlayerController* OwningPC; // 0x00(0x08)
	char pad_8[0x118]; // 0x08(0x118)
};

// ScriptStruct PMAimTooling.PMAimToolingModifiers
// Size: 0x40 (Inherited: 0x00)
struct FPMAimToolingModifiers {
	char pad_0[0x10]; // 0x00(0x10)
	struct FRotator CurrentTrajectoryOffset; // 0x10(0x0c)
	char pad_1C[0x24]; // 0x1c(0x24)
};

// ScriptStruct PMAimTooling.PMAimToolingFeatureConfigMapping
// Size: 0x18 (Inherited: 0x00)
struct FPMAimToolingFeatureConfigMapping {
	enum class EPMAimToolingFeature Feature; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<enum class EPMAimToolingConfig> ConfigList; // 0x08(0x10)
};

