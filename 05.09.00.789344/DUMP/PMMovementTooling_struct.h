// Enum PMMovementTooling.EPMMovementToolingConfig
enum class EPMMovementToolingConfig : uint8 {
	ShotRootingDeadzone = 0,
	ShotRootingDuration = 1,
	ShotRootingFalloffSeconds = 2,
	ShotRootingFalloffExponent = 3,
	FastStrafingMode = 4,
	FastStrafingStickDeltaThreshold = 5,
	FastStrafingApplyYAxisOverride = 6,
	FastStrafingStickDeltaInitialThreshold = 7,
	FastStrafingStickDeltaReleaseThreshold = 8,
	FastStrafingYInitialThreshold = 9,
	FastStrafingYReleaseThreshold = 10,
	FastStrafingInterpolationSpeed = 11,
	FastReleasePower = 12,
	FastReleaseMinSpeed = 13,
	Count = 14,
	Invalid = 254,
	EPMMovementToolingFeature_MAX = 255,
	EPMMovementToolingConfig_MAX = 256
};

// Enum PMMovementTooling.EPMMovementToolingFeature
enum class EPMMovementToolingFeature : uint8 {
	ShotRooting = 0,
	FastStrafing = 1,
	FastRelease = 2,
	AngularDeadzones = 3,
	RadialDeadzones = 4,
	Count = 5,
	Invalid = 254,
	EPMMovementToolingFeature_MAX = 255
};

// ScriptStruct PMMovementTooling.PMMovementToolingFeatureConfigMapping
// Size: 0x18 (Inherited: 0x00)
struct FPMMovementToolingFeatureConfigMapping {
	enum class EPMMovementToolingFeature Feature; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<enum class EPMMovementToolingConfig> ConfigList; // 0x08(0x10)
};

