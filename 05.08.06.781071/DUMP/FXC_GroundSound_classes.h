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

	void ChooseSounds(struct TArray<struct UAkAudioEvent*>& Events); // Function FXC_GroundSound.FXC_GroundSound_C.ChooseSounds // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3520f50
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_GroundSound.FXC_GroundSound_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x3520f50
	void PlaySound(); // Function FXC_GroundSound.FXC_GroundSound_C.PlaySound // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void ResetEffect(); // Function FXC_GroundSound.FXC_GroundSound_C.ResetEffect // (Event|Public|BlueprintEvent) // @ game+0x3520f50
	void ExecuteUbergraph_FXC_GroundSound(int32_t EntryPoint); // Function FXC_GroundSound.FXC_GroundSound_C.ExecuteUbergraph_FXC_GroundSound // (Final|UbergraphFunction|HasDefaults) // @ game+0x3520f50
};

