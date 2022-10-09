// BlueprintGeneratedClass Comp_Gun_FlaggedErrorCurve.Comp_Gun_FlaggedErrorCurve_C
// Size: 0x1b0 (Inherited: 0xe8)
struct UComp_Gun_FlaggedErrorCurve_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	enum class EGameFeatureToggleName FeatureToggle; // 0xf0(0x01)
	char pad_F1[0x3]; // 0xf1(0x03)
	struct FName DefaultTag; // 0xf4(0x0c)
	struct FName PrototypeTag; // 0x100(0x0c)
	char pad_10C[0x4]; // 0x10c(0x04)
	struct UStabilityComponent* DefaultStability; // 0x110(0x08)
	struct UStabilityComponent* PrototypeStability; // 0x118(0x08)
	struct AGun_C* OwningGun; // 0x120(0x08)
	struct FRuntimeFloatCurve OriginalErrorCurve; // 0x128(0x88)
};

