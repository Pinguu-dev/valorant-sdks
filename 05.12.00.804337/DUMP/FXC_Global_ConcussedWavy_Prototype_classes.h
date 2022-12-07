// BlueprintGeneratedClass FXC_Global_ConcussedWavy_Prototype.FXC_Global_ConcussedWavy_Prototype_C
// Size: 0x749 (Inherited: 0x530)
struct AFXC_Global_ConcussedWavy_Prototype_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x530(0x08)
	struct UPostProcessComponent* ; // 0x538(0x08)
	struct UStaticMeshComponent* Blind; // 0x540(0x08)
	struct UStaticMeshComponent* ; // 0x548(0x08)
	struct UComp_FXC_CameraShake_C* Comp_FXC_CameraShake; // 0x550(0x08)
	struct UParticleSystemComponent* ; // 0x558(0x08)
	struct UComp_FXC_HUD_Particle_C* Comp_FXC_HUD_Particle; // 0x560(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x568(0x08)
	struct TArray<struct UAresAudioComponent*> ; // 0x570(0x10)
	struct UParticleSystemComponent* ; // 0x580(0x08)
	struct AShooterCharacter* ShooterCharacter; // 0x588(0x08)
	struct AController* Controller; // 0x590(0x08)
	bool ; // 0x598(0x01)
	char pad_599[0x7]; // 0x599(0x07)
	struct FExplicitFloatCurve ; // 0x5a0(0x88)
	struct FExplicitFloatCurve ; // 0x628(0x88)
	struct FExplicitFloatCurve ; // 0x6b0(0x88)
	struct UMaterialInstanceDynamic* ; // 0x738(0x08)
	struct UAresAudioComponent* ; // 0x740(0x08)
	bool ; // 0x748(0x01)

	void (); // Function FXC_Global_ConcussedWavy_Prototype.FXC_Global_ConcussedWavy_Prototype_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (); // Function FXC_Global_ConcussedWavy_Prototype.FXC_Global_ConcussedWavy_Prototype_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (); // Function FXC_Global_ConcussedWavy_Prototype.FXC_Global_ConcussedWavy_Prototype_C. // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (float& BuffLevel); // Function FXC_Global_ConcussedWavy_Prototype.FXC_Global_ConcussedWavy_Prototype_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322a90
	void (); // Function FXC_Global_ConcussedWavy_Prototype.FXC_Global_ConcussedWavy_Prototype_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void UpdatePerspective(bool FirstPerson); // Function FXC_Global_ConcussedWavy_Prototype.FXC_Global_ConcussedWavy_Prototype_C.UpdatePerspective // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_Global_ConcussedWavy_Prototype.FXC_Global_ConcussedWavy_Prototype_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x3322a90
	void StopEffect(enum class EStopEffectType StopEffectType); // Function FXC_Global_ConcussedWavy_Prototype.FXC_Global_ConcussedWavy_Prototype_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x3322a90
	void ReceiveTick(float DeltaSeconds); // Function FXC_Global_ConcussedWavy_Prototype.FXC_Global_ConcussedWavy_Prototype_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x3322a90
	void UpdateEffectPerspective(float CurrentTime, bool FirstPerson); // Function FXC_Global_ConcussedWavy_Prototype.FXC_Global_ConcussedWavy_Prototype_C.UpdateEffectPerspective // (Event|Public|BlueprintEvent) // @ game+0x3322a90
	void (int32_t EntryPoint); // Function FXC_Global_ConcussedWavy_Prototype.FXC_Global_ConcussedWavy_Prototype_C. // (Final|UbergraphFunction) // @ game+0x3322a90
};

