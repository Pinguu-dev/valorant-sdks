// BlueprintGeneratedClass Comp_Gun_FlaggedZoomSettings.Comp_Gun_FlaggedZoomSettings_C
// Size: 0x19a (Inherited: 0xe8)
struct UComp_Gun_FlaggedZoomSettings_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	struct TMap<struct UZoomComponent*, struct FZoomTransitionSettings> OriginalSettings; // 0xf0(0x50)
	struct TMap<struct UZoomComponent*, struct FZoomTransitionSettings> PrototypeSettings; // 0x140(0x50)
	float ZoomTransitionDurationMultiplier; // 0x190(0x04)
	float CosmeticZoomInTriggerPercent; // 0x194(0x04)
	enum class EGameRuleBoolName GameRule; // 0x198(0x01)
	bool IsManuallyDisabled; // 0x199(0x01)
};

