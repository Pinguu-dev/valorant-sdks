// BlueprintGeneratedClass ShooterCharacterAudioAttenuationComponent.ShooterCharacterAudioAttenuationComponent_C
// Size: 0x558 (Inherited: 0x500)
struct UShooterCharacterAudioAttenuationComponent_C : UAresMinimapComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x500(0x08)
	struct UFootstepsComponent* Footsteps Component; // 0x508(0x08)
	struct UUserWidget* Widget Class; // 0x510(0x08)
	float Radius; // 0x518(0x04)
	char pad_51C[0x4]; // 0x51c(0x04)
	struct FStruct_AttenuationInformation CurrentOneShotVisualization; // 0x520(0x18)
	float VisualizeDuration; // 0x538(0x04)
	char pad_53C[0x4]; // 0x53c(0x04)
	struct FTimerHandle ClearTimer; // 0x540(0x08)
	struct TArray<struct FStruct_AttenuationInformation> ConstantVisualizations; // 0x548(0x10)
};

