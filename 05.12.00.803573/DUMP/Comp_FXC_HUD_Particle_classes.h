// BlueprintGeneratedClass Comp_FXC_HUD_Particle.Comp_FXC_HUD_Particle_C
// Size: 0x155 (Inherited: 0xf8)
struct UComp_FXC_HUD_Particle_C : UEffectComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf8(0x08)
	struct UParticleSystemComponent* ; // 0x100(0x08)
	struct UParticleSystem* ; // 0x108(0x08)
	float ; // 0x110(0x04)
	bool ; // 0x114(0x01)
	char pad_115[0x3]; // 0x115(0x03)
	struct FMulticastInlineDelegate ; // 0x118(0x10)
	bool ; // 0x128(0x01)
	char pad_129[0x7]; // 0x129(0x07)
	struct AShooterCharacter* OwningShooterCharacter; // 0x130(0x08)
	bool ; // 0x138(0x01)
	bool ; // 0x139(0x01)
	bool ; // 0x13a(0x01)
	bool ; // 0x13b(0x01)
	struct FName AttachSocket; // 0x13c(0x0c)
	struct FVector ; // 0x148(0x0c)
	bool ; // 0x154(0x01)

	void UpdateVisibility(); // Function Comp_FXC_HUD_Particle.Comp_FXC_HUD_Particle_C.UpdateVisibility // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function Comp_FXC_HUD_Particle.Comp_FXC_HUD_Particle_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct UParticleSystemComponent* ); // Function Comp_FXC_HUD_Particle.Comp_FXC_HUD_Particle_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	bool (); // Function Comp_FXC_HUD_Particle.Comp_FXC_HUD_Particle_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322a60
	void (); // Function Comp_FXC_HUD_Particle.Comp_FXC_HUD_Particle_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct UParticleSystemComponent*& ); // Function Comp_FXC_HUD_Particle.Comp_FXC_HUD_Particle_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322a60
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function Comp_FXC_HUD_Particle.Comp_FXC_HUD_Particle_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x3322a60
	void StopEffect(enum class EStopEffectType StopEffectType); // Function Comp_FXC_HUD_Particle.Comp_FXC_HUD_Particle_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x3322a60
	void UpdateEffectPerspective(float CurrentTime, bool FirstPerson); // Function Comp_FXC_HUD_Particle.Comp_FXC_HUD_Particle_C.UpdateEffectPerspective // (Event|Public|BlueprintEvent) // @ game+0x3322a60
	void (); // Function Comp_FXC_HUD_Particle.Comp_FXC_HUD_Particle_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function Comp_FXC_HUD_Particle.Comp_FXC_HUD_Particle_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void _1(struct AActor* Actor, enum class EEndPlayReason EndPlayReason); // Function Comp_FXC_HUD_Particle.Comp_FXC_HUD_Particle_C._1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void ResetEffect(); // Function Comp_FXC_HUD_Particle.Comp_FXC_HUD_Particle_C.ResetEffect // (Event|Public|BlueprintEvent) // @ game+0x3322a60
	void PerspectiveChanged(struct AShooterCharacter* Character); // Function Comp_FXC_HUD_Particle.Comp_FXC_HUD_Particle_C.PerspectiveChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (int32_t EntryPoint); // Function Comp_FXC_HUD_Particle.Comp_FXC_HUD_Particle_C. // (Final|UbergraphFunction) // @ game+0x3322a60
	void (struct UParticleSystemComponent* ParticleSystem); // Function Comp_FXC_HUD_Particle.Comp_FXC_HUD_Particle_C. // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
};

