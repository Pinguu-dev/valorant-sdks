// Class PMAimTooling.PMAimToolingTracker
// Size: 0xf8 (Inherited: 0xe8)
struct UPMAimToolingTracker : UActorComponent {
	char pad_E8[0x10]; // 0xe8(0x10)
};

// Class PMAimTooling.PMAimToolingComponent
// Size: 0x2d0 (Inherited: 0xe8)
struct UPMAimToolingComponent : UActorComponent {
	char pad_E8[0x8]; // 0xe8(0x08)
	struct TArray<bool> FeaturesEnabledValues; // 0xf0(0x10)
	struct TArray<float> FeatureConfigValues; // 0x100(0x10)
	struct TArray<struct UCurveFloat*> FeatureConfigCurves; // 0x110(0x10)
	char pad_120[0x8]; // 0x120(0x08)
	struct APlayerController* OwningPC; // 0x128(0x08)
	struct FPMAimToolingCachedProjectionData CachedProjectionData; // 0x130(0x120)
	struct FPMAimToolingDecelerationState DecelerationState; // 0x250(0x40)
	bool bAimToolingEnabled; // 0x290(0x01)
	char pad_291[0x3]; // 0x291(0x03)
	float CurrentAimAccelerationDelayScale; // 0x294(0x04)
	struct FVector2D GamepadPreviousWalkStickVector; // 0x298(0x08)
	struct TArray<struct FPMAimToolingTarget> Targets; // 0x2a0(0x10)
	char pad_2B0[0x20]; // 0x2b0(0x20)

	bool IsFeatureEnabled(enum class EPMAimToolingFeature Feature); // Function PMAimTooling.PMAimToolingComponent.IsFeatureEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x580f0b0
	bool IsAimToolingEnabled(); // Function PMAimTooling.PMAimToolingComponent.IsAimToolingEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2e60190
	float GetFeatureConfig(enum class EPMAimToolingConfig ConfigName); // Function PMAimTooling.PMAimToolingComponent.GetFeatureConfig // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x580f020
};

// Class PMAimTooling.PMAimToolingControllerInterface
// Size: 0x30 (Inherited: 0x30)
struct UPMAimToolingControllerInterface : UInterface {
};

// Class PMAimTooling.PMAimToolingFlashingTargetComponent
// Size: 0x2a0 (Inherited: 0x290)
struct UPMAimToolingFlashingTargetComponent : USceneComponent {
	bool ShouldAffectAllies; // 0x288(0x01)
	struct AActor* OwningActor; // 0x290(0x08)
	char pad_299[0x7]; // 0x299(0x07)
};

// Class PMAimTooling.PMAimToolingTargetComponentBase
// Size: 0x290 (Inherited: 0x290)
struct UPMAimToolingTargetComponentBase : USceneComponent {
	char TargetId; // 0x288(0x01)
};

// Class PMAimTooling.PMAimToolingPointsTargetComponent
// Size: 0x2c0 (Inherited: 0x290)
struct UPMAimToolingPointsTargetComponent : UPMAimToolingTargetComponentBase {
	struct FName CenterTargetPointName; // 0x290(0x0c)
	char pad_29C[0x4]; // 0x29c(0x04)
	struct TArray<struct UActorComponent*> AimToolingTargetPoints; // 0x2a0(0x10)
	struct AActor* OwningActor; // 0x2b0(0x08)
	char pad_2B8[0x8]; // 0x2b8(0x08)
};

// Class PMAimTooling.PMAimToolingSkeletalTargetComponent
// Size: 0x2d0 (Inherited: 0x290)
struct UPMAimToolingSkeletalTargetComponent : UPMAimToolingTargetComponentBase {
	struct TArray<struct FPMAimToolingBoneDef> AimToolingBones; // 0x290(0x10)
	struct FPMAimToolingAxis AimToolingAxis; // 0x2a0(0x24)
	char pad_2C4[0xc]; // 0x2c4(0x0c)
};

// Class PMAimTooling.PMAimToolingStatics
// Size: 0x30 (Inherited: 0x30)
struct UPMAimToolingStatics : UBlueprintFunctionLibrary {
};

// Class PMAimTooling.PMAimToolingTargetManager
// Size: 0x150 (Inherited: 0xe8)
struct UPMAimToolingTargetManager : UActorComponent {
	char LastUsedTargetID; // 0xe8(0x01)
	char pad_E9[0x7]; // 0xe9(0x07)
	struct TArray<struct UPMAimToolingTargetComponentBase*> TrackedTargets; // 0xf0(0x10)
	struct TSet<struct AActor*> FlashingTargets; // 0x100(0x50)
};

// Class PMAimTooling.PMAimToolingTargetPoint
// Size: 0x2a0 (Inherited: 0x290)
struct UPMAimToolingTargetPoint : USceneComponent {
	struct FPMAimToolingTargetPointDef TargetPoint; // 0x288(0x14)
};

