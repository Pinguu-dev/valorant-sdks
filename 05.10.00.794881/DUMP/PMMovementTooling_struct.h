// Enum PMMovementTooling.EPMMovementToolingConfig
enum class EPMMovementToolingConfig : uint8 {
	ShotRootingDeadzone = 0,
	ShotRootingDuration = 1,
	ShotRootingFalloffSeconds = 2,
	ShotRootingFalloffExponent = 3,
	FastStrafingStickDeltaInitialThreshold = 4,
	FastStrafingStickDeltaReleaseThreshold = 5,
	FastStrafingYInitialThreshold = 6,
	FastStrafingYReleaseThreshold = 7,
	FastStrafingCounterStrafeMinSpeed = 8,
	InitialFastStrafingStickDeltaThreshold = 9,
	InitialFastStrafingPlayerSpeedCutoff = 10,
	FastReleasePower = 11,
	FastReleaseMinSpeed = 12,
	Count = 13,
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

