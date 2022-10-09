// BlueprintGeneratedClass FXC_GroundSound.FXC_GroundSound_C
// Size: 0x568 (Inherited: 0x530)
struct AFXC_GroundSound_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x530(0x08)
	struct UCompFXC_AudioVisualizer_Signal_C* CompFXC_AudioVisualizer_Signal; // 0x538(0x08)
	struct UAresAudioComponent* AresAudio; // 0x540(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x548(0x08)
	enum class EGroundSoundType GroundSoundType; // 0x550(0x01)
	char pad_551[0x7]; // 0x551(0x07)
	struct AShooterCharacter* Character; // 0x558(0x08)
	struct UFootstepsComponent* FootstepsComponent; // 0x560(0x08)
};

