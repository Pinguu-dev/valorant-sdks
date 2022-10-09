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
	BendingInnerRadiusCm = 11,
	BendingOuterRadiusCm = 12,
	BendingMaxAngleDegs = 13,
	BendingExponent = 14,
	BendingMovePenaltyScale = 15,
	MoveErrorMax = 16,
	MoveErrorExponent = 17,
	ShotRootingDeadzone = 18,
	ShotRootingDuration = 19,
	ShotRootingFalloffSeconds = 20,
	ShotRootingFalloffExponent = 21,
	OverTargetAccelerationFlatScale = 22,
	OverTargetAccelerationScaleFloor = 23,
	OverTargetAccelerationExponent = 24,
	FrameOfReferenceMinOverTargetPct = 25,
	FrameOfReferenceMovementDeltaScale = 26,
	FastStrafingStickDeltaThreshold = 27,
	FastStrafingApplyYAxisOverride = 28,
	StrafeAssistMovementDeltaScale = 29,
	StrafeAssistMode = 30,
	PullToCenterRadialTowardExponent = 31,
	PullToCenterRadialTowardScale = 32,
	PullToCenterRadialAwayExponent = 33,
	PullToCenterRadialAwayScale = 34,
	PullToCenterTangentialTowardExponent = 35,
	PullToCenterTangentialTowardScale = 36,
	PullToCenterTangentialAwayExponent = 37,
	PullToCenterTangentialAwayScale = 38,
	PullToCenterMovePenaltyScale = 39,
	PullToCenterRecoilEfficacyScale = 40,
	PullToCenterAdjustmentClampThreshold = 41,
	PullToCenterAdjustmentClampScale = 42,
	AimAccelerationDelayScaleDecayRate = 43,
	AimAccelerationDelayMinOverTargetPct = 44,
	DecelerationTime = 45,
	DecelerationAverageWindow = 46,
	DecelerationExponent = 47,
	DecelerationHalfAngle = 48,
	DecelerationMaxShift = 49,
	DecelerationStartThreshold = 50,
	Count = 51,
	Invalid = 254,
	EPMAimToolingFeature_MAX = 255,
	EPMAimToolingConfig_MAX = 256
};

// Enum PMAimTooling.EPMAimToolingCurve
enum class EPMAimToolingCurve : uint8 {
	PullToCenterRadialTowardCurve = 0,
	PullToCenterRadialAwayCurve = 1,
	PullToCenterTangentialTowardCurve = 2,
	PullToCenterTangentialAwayCurve = 3,
	PullToCenterWorldDistFromTargetCurve = 4,
	PullToCenterScreenDistFromTargetCurve = 5,
	PullToCenterStickDeflectionCurve = 6,
	AimAccelerationScaleCurve = 7,
	TargetFrictionOverTargetPctCurve = 8,
	TargetFrictionWorldDistFromTargetCurve = 9,
	TargetFrictionScreenDistFromTargetCurve = 10,
	TargetFrictionStickDeflectionCurve = 11,
	StrafeAssistOverTargetPctCurve = 12,
	StrafeAssistWorldDistFromTargetCurve = 13,
	StrafeAssistScreenDistFromTargetCurve = 14,
	StrafeAssistPlayerSpeedCurve = 15,
	FrameOfReferenceWorldDistFromTargetCurve = 16,
	FrameOfReferenceScreenDistFromTargetCurve = 17,
	FrameOfReferenceStickDeflectionCurve = 18,
	FrameOfReferenceOverTargetPctCurve = 19,
	Count = 20,
	Invalid = 254,
	EPMAimToolingCurve_MAX = 255
};

// Enum PMAimTooling.EPMAimToolingFeature
enum class EPMAimToolingFeature : uint8 {
	TargetManagement = 0,
	PullToCenter = 1,
	Bending = 2,
	ShotRooting = 3,
	OverTargetAcceleration = 4,
	AimAccelerationDelay = 5,
	Deceleration = 6,
	FrameOfReference = 7,
	FastStrafing = 8,
	StrafeAssist = 9,
	TargetFriction = 10,
	Count = 11,
	Invalid = 254,
	EPMAimToolingFeature_MAX = 255
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
// Size: 0x1c (Inherited: 0x00)
struct FPMAimToolingModifiers {
	char pad_0[0x10]; // 0x00(0x10)
	struct FRotator CurrentTrajectoryOffset; // 0x10(0x0c)
};

// ScriptStruct PMAimTooling.PMAimToolingFeatureConfigMapping
// Size: 0x18 (Inherited: 0x00)
struct FPMAimToolingFeatureConfigMapping {
	enum class EPMAimToolingFeature Feature; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<enum class EPMAimToolingConfig> ConfigList; // 0x08(0x10)
};

