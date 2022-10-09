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
	OverTargetAccelerationFlatScale = 18,
	OverTargetAccelerationScaleFloor = 19,
	OverTargetAccelerationExponent = 20,
	FrameOfReferenceMinOverTargetPct = 21,
	FrameOfReferenceMinOverTargetPctZoomed = 22,
	FrameOfReferenceMovementDeltaScale = 23,
	FrameOfReferenceMovementDeltaScaleZoomed = 24,
	StrafeAssistMovementDeltaScale = 25,
	StrafeAssistMovementDeltaScaleZoomed = 26,
	StrafeAssistMode = 27,
	StrafeAssistModeZoomed = 28,
	PullToCenterRadialTowardExponent = 29,
	PullToCenterRadialTowardExponentZoomed = 30,
	PullToCenterRadialTowardScale = 31,
	PullToCenterRadialTowardScaleZoomed = 32,
	PullToCenterRadialAwayExponent = 33,
	PullToCenterRadialAwayExponentZoomed = 34,
	PullToCenterRadialAwayScale = 35,
	PullToCenterRadialAwayScaleZoomed = 36,
	PullToCenterTangentialTowardExponent = 37,
	PullToCenterTangentialTowardExponentZoomed = 38,
	PullToCenterTangentialTowardScale = 39,
	PullToCenterTangentialTowardScaleZoomed = 40,
	PullToCenterTangentialAwayExponent = 41,
	PullToCenterTangentialAwayExponentZoomed = 42,
	PullToCenterTangentialAwayScale = 43,
	PullToCenterTangentialAwayScaleZoomed = 44,
	PullToCenterMovePenaltyScale = 45,
	PullToCenterMovePenaltyScaleZoomed = 46,
	PullToCenterRecoilEfficacyScale = 47,
	PullToCenterRecoilEfficacyScaleZoomed = 48,
	PullToCenterAdjustmentClampThreshold = 49,
	PullToCenterAdjustmentClampThresholdZoomed = 50,
	PullToCenterAdjustmentClampScale = 51,
	PullToCenterAdjustmentClampScaleZoomed = 52,
	AimAccelerationDelayScaleDecayRate = 53,
	AimAccelerationDelayMinOverTargetPct = 54,
	DecelerationTime = 55,
	DecelerationAverageWindow = 56,
	DecelerationExponent = 57,
	DecelerationHalfAngle = 58,
	DecelerationMaxShift = 59,
	DecelerationStartThreshold = 60,
	FlashTurningAimAccelerationScale = 61,
	FlashTurningPitchSensitivityScale = 62,
	FlashTurningYawSensitivityScale = 63,
	Count = 64,
	Invalid = 254,
	EPMAimToolingFeature_MAX = 255,
	EPMAimToolingConfig_MAX = 256
};

// Enum PMAimTooling.EPMAimToolingCurve
enum class EPMAimToolingCurve : uint8 {
	PullToCenterRadialTowardCurve = 0,
	PullToCenterRadialTowardCurveZoomed = 1,
	PullToCenterRadialAwayCurve = 2,
	PullToCenterRadialAwayCurveZoomed = 3,
	PullToCenterTangentialTowardCurve = 4,
	PullToCenterTangentialTowardCurveZoomed = 5,
	PullToCenterTangentialAwayCurve = 6,
	PullToCenterTangentialAwayCurveZoomed = 7,
	PullToCenterWorldDistFromTargetCurve = 8,
	PullToCenterWorldDistFromTargetCurveZoomed = 9,
	PullToCenterScreenDistFromTargetCurve = 10,
	PullToCenterScreenDistFromTargetCurveZoomed = 11,
	PullToCenterStickDeflectionCurve = 12,
	PullToCenterStickDeflectionCurveZoomed = 13,
	AimAccelerationScaleCurve = 14,
	TargetFrictionOverTargetPctCurve = 15,
	TargetFrictionOverTargetPctCurveZoomed = 16,
	TargetFrictionWorldDistFromTargetCurve = 17,
	TargetFrictionWorldDistFromTargetCurveZoomed = 18,
	TargetFrictionScreenDistFromTargetCurve = 19,
	TargetFrictionScreenDistFromTargetCurveZoomed = 20,
	TargetFrictionStickDeflectionCurve = 21,
	TargetFrictionStickDeflectionCurveZoomed = 22,
	StrafeAssistOverTargetPctCurve = 23,
	StrafeAssistOverTargetPctCurveZoomed = 24,
	StrafeAssistWorldDistFromTargetCurve = 25,
	StrafeAssistWorldDistFromTargetCurveZoomed = 26,
	StrafeAssistScreenDistFromTargetCurve = 27,
	StrafeAssistScreenDistFromTargetCurveZoomed = 28,
	StrafeAssistPlayerSpeedCurve = 29,
	StrafeAssistPlayerSpeedCurveZoomed = 30,
	FrameOfReferenceWorldDistFromTargetCurve = 31,
	FrameOfReferenceWorldDistFromTargetCurveZoomed = 32,
	FrameOfReferenceScreenDistFromTargetCurve = 33,
	FrameOfReferenceScreenDistFromTargetCurveZoomed = 34,
	FrameOfReferenceStickDeflectionCurve = 35,
	FrameOfReferenceStickDeflectionCurveZoomed = 36,
	FrameOfReferenceOverTargetPctCurve = 37,
	FrameOfReferenceOverTargetPctCurveZoomed = 38,
	Count = 39,
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

