// BlueprintGeneratedClass FXC_Buff_Decay.FXC_Buff_Decay_C
// Size: 0x5a0 (Inherited: 0x530)
struct AFXC_Buff_Decay_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x530(0x08)
	struct UComp_FXC_AudioLoop_C* Comp_FXC_AudioLoop; // 0x538(0x08)
	struct UParticleSystemComponent* ParticleSystem; // 0x540(0x08)
	struct UComp_FXC_HUD_Particle_C* Comp_FXC_HUD_Particle; // 0x548(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x550(0x08)
	float FadeOut_Opacity_2F6212FA49C90168591D14B9D5631A8C; // 0x558(0x04)
	enum class ETimelineDirection FadeOut__Direction_2F6212FA49C90168591D14B9D5631A8C; // 0x55c(0x01)
	char pad_55D[0x3]; // 0x55d(0x03)
	struct UTimelineComponent* FadeOut; // 0x560(0x08)
	float FadeIn_Opacity_A4A51A754B839D2078993095630A1D8B; // 0x568(0x04)
	enum class ETimelineDirection FadeIn__Direction_A4A51A754B839D2078993095630A1D8B; // 0x56c(0x01)
	char pad_56D[0x3]; // 0x56d(0x03)
	struct UTimelineComponent* FadeIn; // 0x570(0x08)
	struct AShooterCharacter* OwningShooterCharacter; // 0x578(0x08)
	struct TArray<struct UMaterialInstanceDynamic*> Dynamic3P_Materials; // 0x580(0x10)
	struct UParticleSystemComponent* OutroParticle; // 0x590(0x08)
	float FadeInTime; // 0x598(0x04)
	float MaxStrength; // 0x59c(0x04)

	void FadeIn__FinishedFunc(); // Function FXC_Buff_Decay.FXC_Buff_Decay_C.FadeIn__FinishedFunc // (BlueprintEvent) // @ game+0x3520f50
	void FadeIn__UpdateFunc(); // Function FXC_Buff_Decay.FXC_Buff_Decay_C.FadeIn__UpdateFunc // (BlueprintEvent) // @ game+0x3520f50
	void FadeOut__FinishedFunc(); // Function FXC_Buff_Decay.FXC_Buff_Decay_C.FadeOut__FinishedFunc // (BlueprintEvent) // @ game+0x3520f50
	void FadeOut__UpdateFunc(); // Function FXC_Buff_Decay.FXC_Buff_Decay_C.FadeOut__UpdateFunc // (BlueprintEvent) // @ game+0x3520f50
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_Buff_Decay.FXC_Buff_Decay_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x3520f50
	void StopEffect(enum class EStopEffectType StopEffectType); // Function FXC_Buff_Decay.FXC_Buff_Decay_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x3520f50
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function FXC_Buff_Decay.FXC_Buff_Decay_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x3520f50
	void UpdateEffectPerspective(float CurrentTime, bool FirstPerson); // Function FXC_Buff_Decay.FXC_Buff_Decay_C.UpdateEffectPerspective // (Event|Public|BlueprintEvent) // @ game+0x3520f50
	void ReceiveTick(float DeltaSeconds); // Function FXC_Buff_Decay.FXC_Buff_Decay_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x3520f50
	void ExecuteUbergraph_FXC_Buff_Decay(int32_t EntryPoint); // Function FXC_Buff_Decay.FXC_Buff_Decay_C.ExecuteUbergraph_FXC_Buff_Decay // (Final|UbergraphFunction) // @ game+0x3520f50
};

