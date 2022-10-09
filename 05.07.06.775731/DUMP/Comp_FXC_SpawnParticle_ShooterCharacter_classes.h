// BlueprintGeneratedClass Comp_FXC_SpawnParticle_ShooterCharacter.Comp_FXC_SpawnParticle_ShooterCharacter_C
// Size: 0x209 (Inherited: 0xf8)
struct UComp_FXC_SpawnParticle_ShooterCharacter_C : UEffectComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf8(0x08)
	struct UParticleSystemComponent* VFX_1P; // 0x100(0x08)
	struct UParticleSystemComponent* VFX_3P; // 0x108(0x08)
	struct UParticleSystem* EmitterTemplate1P; // 0x110(0x08)
	struct FName AttachPoint1P; // 0x118(0x0c)
	struct FVector EmitterOffset1P; // 0x124(0x0c)
	struct FRotator EmitterRotation1P; // 0x130(0x0c)
	struct FVector EmitterScale1P; // 0x13c(0x0c)
	bool Attach1PEffectToCamera; // 0x148(0x01)
	char pad_149[0x3]; // 0x149(0x03)
	float ParticleStartDelay1P; // 0x14c(0x04)
	float WarmupTime1P; // 0x150(0x04)
	char pad_154[0x4]; // 0x154(0x04)
	struct FTimerHandle StartTimer1P; // 0x158(0x08)
	struct UParticleSystem* EmitterTemplate3P; // 0x160(0x08)
	struct FName AttachPoint3P; // 0x168(0x0c)
	struct FVector EmitterOffset3P; // 0x174(0x0c)
	struct FRotator EmitterRotation3P; // 0x180(0x0c)
	struct FVector EmitterScale3P; // 0x18c(0x0c)
	float ParticleStartDelay3P; // 0x198(0x04)
	float WarmupTime3P; // 0x19c(0x04)
	struct FTimerHandle StartTimer3P; // 0x1a0(0x08)
	enum class Struct_ParticleStopBehavior StopEffectBehavior; // 0x1a8(0x01)
	bool StopEmitterOnEffectStop; // 0x1a9(0x01)
	bool StopEmitterOnEffectEndPlay; // 0x1aa(0x01)
	bool AttachToCosmeticMesh; // 0x1ab(0x01)
	char pad_1AC[0x4]; // 0x1ac(0x04)
	struct FMulticastInlineDelegate OnEmitterSpawned1P; // 0x1b0(0x10)
	struct FMulticastInlineDelegate OnEmitterSpawned3P; // 0x1c0(0x10)
	struct FMulticastInlineDelegate OnPreEmitterSpawn1P; // 0x1d0(0x10)
	struct FMulticastInlineDelegate OnPreEmitterSpawn3P; // 0x1e0(0x10)
	bool DestroyEffectIfCameraSocketDoesNotExist; // 0x1f0(0x01)
	bool SpawnOnStartEffect; // 0x1f1(0x01)
	bool ParticlesActive; // 0x1f2(0x01)
	char pad_1F3[0x5]; // 0x1f3(0x05)
	struct AActor* Target; // 0x1f8(0x08)
	struct UObject* Context; // 0x200(0x08)
	bool ParticlesManuallyQueued; // 0x208(0x01)

	void IsValidTarget(struct AActor* Actor, bool& Valid); // Function Comp_FXC_SpawnParticle_ShooterCharacter.Comp_FXC_SpawnParticle_ShooterCharacter_C.IsValidTarget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void GetEffectCharacter(struct AActor* Target, struct UObject* Context, struct AShooterCharacter*& Character); // Function Comp_FXC_SpawnParticle_ShooterCharacter.Comp_FXC_SpawnParticle_ShooterCharacter_C.GetEffectCharacter // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void GetAttachComponent3P(struct AActor* Target, struct UObject* Context, struct USceneComponent*& ParentComponent3P); // Function Comp_FXC_SpawnParticle_ShooterCharacter.Comp_FXC_SpawnParticle_ShooterCharacter_C.GetAttachComponent3P // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void GetAttachComponent1P(struct AActor* Target, struct UObject* Context, struct USceneComponent*& ParentComponent1P); // Function Comp_FXC_SpawnParticle_ShooterCharacter.Comp_FXC_SpawnParticle_ShooterCharacter_C.GetAttachComponent1P // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void TrySetVisibility(struct USceneComponent* VFX, bool bNewVisibility); // Function Comp_FXC_SpawnParticle_ShooterCharacter.Comp_FXC_SpawnParticle_ShooterCharacter_C.TrySetVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void GetEmitter3P(struct UParticleSystemComponent*& Emitter3P); // Function Comp_FXC_SpawnParticle_ShooterCharacter.Comp_FXC_SpawnParticle_ShooterCharacter_C.GetEmitter3P // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3511190
	void GetEmitter1P(struct UParticleSystemComponent*& Emitter1P); // Function Comp_FXC_SpawnParticle_ShooterCharacter.Comp_FXC_SpawnParticle_ShooterCharacter_C.GetEmitter1P // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3511190
	void Event Update Visibility(); // Function Comp_FXC_SpawnParticle_ShooterCharacter.Comp_FXC_SpawnParticle_ShooterCharacter_C.Event Update Visibility // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function Comp_FXC_SpawnParticle_ShooterCharacter.Comp_FXC_SpawnParticle_ShooterCharacter_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x3511190
	void UpdateEffectPerspective(float CurrentTime, bool FirstPerson); // Function Comp_FXC_SpawnParticle_ShooterCharacter.Comp_FXC_SpawnParticle_ShooterCharacter_C.UpdateEffectPerspective // (Event|Public|BlueprintEvent) // @ game+0x3511190
	void StopEffect(enum class EStopEffectType StopEffectType); // Function Comp_FXC_SpawnParticle_ShooterCharacter.Comp_FXC_SpawnParticle_ShooterCharacter_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x3511190
	void Event Deactivate Particles(); // Function Comp_FXC_SpawnParticle_ShooterCharacter.Comp_FXC_SpawnParticle_ShooterCharacter_C.Event Deactivate Particles // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void Event Destroy Particles(); // Function Comp_FXC_SpawnParticle_ShooterCharacter.Comp_FXC_SpawnParticle_ShooterCharacter_C.Event Destroy Particles // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void OnEndPlay_Event_1(struct AActor* Actor, enum class EEndPlayReason EndPlayReason); // Function Comp_FXC_SpawnParticle_ShooterCharacter.Comp_FXC_SpawnParticle_ShooterCharacter_C.OnEndPlay_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void StartDelay1PFinished(); // Function Comp_FXC_SpawnParticle_ShooterCharacter.Comp_FXC_SpawnParticle_ShooterCharacter_C.StartDelay1PFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void ResetEffect(); // Function Comp_FXC_SpawnParticle_ShooterCharacter.Comp_FXC_SpawnParticle_ShooterCharacter_C.ResetEffect // (Event|Public|BlueprintEvent) // @ game+0x3511190
	void StartDelay3PFinished(); // Function Comp_FXC_SpawnParticle_ShooterCharacter.Comp_FXC_SpawnParticle_ShooterCharacter_C.StartDelay3PFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void ManualStart(); // Function Comp_FXC_SpawnParticle_ShooterCharacter.Comp_FXC_SpawnParticle_ShooterCharacter_C.ManualStart // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void ExecuteUbergraph_Comp_FXC_SpawnParticle_ShooterCharacter(int32_t EntryPoint); // Function Comp_FXC_SpawnParticle_ShooterCharacter.Comp_FXC_SpawnParticle_ShooterCharacter_C.ExecuteUbergraph_Comp_FXC_SpawnParticle_ShooterCharacter // (Final|UbergraphFunction|HasDefaults) // @ game+0x3511190
	void OnPreEmitterSpawn3P__DelegateSignature(); // Function Comp_FXC_SpawnParticle_ShooterCharacter.Comp_FXC_SpawnParticle_ShooterCharacter_C.OnPreEmitterSpawn3P__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void OnPreEmitterSpawn1P__DelegateSignature(); // Function Comp_FXC_SpawnParticle_ShooterCharacter.Comp_FXC_SpawnParticle_ShooterCharacter_C.OnPreEmitterSpawn1P__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void OnEmitterSpawned3P__DelegateSignature(struct UParticleSystemComponent* Emitter3P); // Function Comp_FXC_SpawnParticle_ShooterCharacter.Comp_FXC_SpawnParticle_ShooterCharacter_C.OnEmitterSpawned3P__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void OnEmitterSpawned1P__DelegateSignature(struct UParticleSystemComponent* Emitter1P); // Function Comp_FXC_SpawnParticle_ShooterCharacter.Comp_FXC_SpawnParticle_ShooterCharacter_C.OnEmitterSpawned1P__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
};

