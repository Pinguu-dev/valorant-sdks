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
};

