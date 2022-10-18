// BlueprintGeneratedClass Comp_FXC_HUD_Particle.Comp_FXC_HUD_Particle_C
// Size: 0x155 (Inherited: 0xf8)
struct UComp_FXC_HUD_Particle_C : UEffectComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf8(0x08)
	struct UParticleSystemComponent* HUD_VFX; // 0x100(0x08)
	struct UParticleSystem* HUD_Particle_Template; // 0x108(0x08)
	float ParticleDuration; // 0x110(0x04)
	bool AutoDestroyParticle; // 0x114(0x01)
	char pad_115[0x3]; // 0x115(0x03)
	struct FMulticastInlineDelegate HUD_ParticleCreated; // 0x118(0x10)
	bool DestroyHUD_OnFXC_Stop; // 0x128(0x01)
	char pad_129[0x7]; // 0x129(0x07)
	struct AShooterCharacter* OwningShooterCharacter; // 0x130(0x08)
	bool HUD_ParticleActive; // 0x138(0x01)
	bool StartActive; // 0x139(0x01)
	bool DestroyHUD_OnFXC_End; // 0x13a(0x01)
	bool InFirstPerson; // 0x13b(0x01)
	struct FName AttachSocket; // 0x13c(0x0c)
	struct FVector ParticleOffset; // 0x148(0x0c)
	bool UpdateVisibilityDuringTailTime; // 0x154(0x01)

	void UpdateVisibility(); // Function Comp_FXC_HUD_Particle.Comp_FXC_HUD_Particle_C.UpdateVisibility // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void StopParticle(); // Function Comp_FXC_HUD_Particle.Comp_FXC_HUD_Particle_C.StopParticle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void SetHUD_VFX(struct UParticleSystemComponent* HUD_VFX); // Function Comp_FXC_HUD_Particle.Comp_FXC_HUD_Particle_C.SetHUD_VFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	bool ShouldBeVisible(); // Function Comp_FXC_HUD_Particle.Comp_FXC_HUD_Particle_C.ShouldBeVisible // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3520f50
	void CreateHUD_Particle(); // Function Comp_FXC_HUD_Particle.Comp_FXC_HUD_Particle_C.CreateHUD_Particle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void GetHUD_VFX(struct UParticleSystemComponent*& HUD_VFX); // Function Comp_FXC_HUD_Particle.Comp_FXC_HUD_Particle_C.GetHUD_VFX // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3520f50
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function Comp_FXC_HUD_Particle.Comp_FXC_HUD_Particle_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x3520f50
	void StopEffect(enum class EStopEffectType StopEffectType); // Function Comp_FXC_HUD_Particle.Comp_FXC_HUD_Particle_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x3520f50
	void UpdateEffectPerspective(float CurrentTime, bool FirstPerson); // Function Comp_FXC_HUD_Particle.Comp_FXC_HUD_Particle_C.UpdateEffectPerspective // (Event|Public|BlueprintEvent) // @ game+0x3520f50
	void ManualActivateHUD_Particle(); // Function Comp_FXC_HUD_Particle.Comp_FXC_HUD_Particle_C.ManualActivateHUD_Particle // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void ManualDeactivateHUD_Particle(); // Function Comp_FXC_HUD_Particle.Comp_FXC_HUD_Particle_C.ManualDeactivateHUD_Particle // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void OnEndPlay_Event_1(struct AActor* Actor, enum class EEndPlayReason EndPlayReason); // Function Comp_FXC_HUD_Particle.Comp_FXC_HUD_Particle_C.OnEndPlay_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void ResetEffect(); // Function Comp_FXC_HUD_Particle.Comp_FXC_HUD_Particle_C.ResetEffect // (Event|Public|BlueprintEvent) // @ game+0x3520f50
	void PerspectiveChanged(struct AShooterCharacter* Character); // Function Comp_FXC_HUD_Particle.Comp_FXC_HUD_Particle_C.PerspectiveChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void ExecuteUbergraph_Comp_FXC_HUD_Particle(int32_t EntryPoint); // Function Comp_FXC_HUD_Particle.Comp_FXC_HUD_Particle_C.ExecuteUbergraph_Comp_FXC_HUD_Particle // (Final|UbergraphFunction) // @ game+0x3520f50
	void HUD_ParticleCreated__DelegateSignature(struct UParticleSystemComponent* ParticleSystem); // Function Comp_FXC_HUD_Particle.Comp_FXC_HUD_Particle_C.HUD_ParticleCreated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
};

