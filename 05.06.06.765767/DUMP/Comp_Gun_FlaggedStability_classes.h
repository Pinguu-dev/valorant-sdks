// BlueprintGeneratedClass Comp_Gun_FlaggedStability.Comp_Gun_FlaggedStability_C
// Size: 0x151 (Inherited: 0xe8)
struct UComp_Gun_FlaggedStability_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	struct AGun_C* OwningGun; // 0xf0(0x08)
	struct UStabilityComponent* DefaultStability; // 0xf8(0x08)
	struct UStabilityComponent* PrototypeStability; // 0x100(0x08)
	struct UFiringStateComponent* FiringState; // 0x108(0x08)
	struct UStabilityVisualizationComponent* DefaultStabilityVisualization; // 0x110(0x08)
	struct UStabilityVisualizationComponent* PrototypeStabilityVisualization; // 0x118(0x08)
	struct UStabilityVisualizationManagerComponent* StabilityVisualizationManager; // 0x120(0x08)
	bool IsEnabled; // 0x128(0x01)
	enum class EGameFeatureToggleName FeatureToggle; // 0x129(0x01)
	char pad_12A[0x2]; // 0x12a(0x02)
	float ZoomFiringRateMultiplier; // 0x12c(0x04)
	float DefaultFiringRate; // 0x130(0x04)
	bool ShouldOverrideZoomStability; // 0x134(0x01)
	char pad_135[0x3]; // 0x135(0x03)
	struct FName PrototypeTag; // 0x138(0x0c)
	struct FName DefaultTag; // 0x144(0x0c)
	bool ShouldOverrideVisualization; // 0x150(0x01)
};

