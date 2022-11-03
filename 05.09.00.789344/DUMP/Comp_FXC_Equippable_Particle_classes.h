// BlueprintGeneratedClass Comp_FXC_Equippable_Particle.Comp_FXC_Equippable_Particle_C
// Size: 0x1a0 (Inherited: 0xf8)
struct UComp_FXC_Equippable_Particle_C : UEffectComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf8(0x08)
	struct TArray<struct FEquippableParticleInfo> ParticleInfo; // 0x100(0x10)
	struct AShooterCharacter* ShooterCharacter; // 0x110(0x08)
	struct TMap<struct UParticleSystemComponent*, int32_t> SpawnedParticlesMap; // 0x118(0x50)
	struct UAnimInstance* AnimInstance; // 0x168(0x08)
	struct UAnimMontage* Montage; // 0x170(0x08)
	bool IsADS; // 0x178(0x01)
	enum class EAresEquippableState ChangeState; // 0x179(0x01)
	char pad_17A[0x6]; // 0x17a(0x06)
	struct FTimerHandle FireTimer; // 0x180(0x08)
	float IdleSetAfterFireDelay; // 0x188(0x04)
	float LastFireTime; // 0x18c(0x04)
	int32_t NumInspectRunning; // 0x190(0x04)
	char pad_194[0x4]; // 0x194(0x04)
	struct AAresEquippable* Equippable; // 0x198(0x08)

	void Override Variant Colors(struct TArray<struct UParticleSystemComponent*>& Spawned Particle Systems, enum class EAresParticleVariantColor Variant); // Function Comp_FXC_Equippable_Particle.Comp_FXC_Equippable_Particle_C.Override Variant Colors // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void HandleParticlesStateChanged(struct UParticleSystemComponent* CurrentParticle, bool Enabled, struct FEquippableParticleInfo Particle Info); // Function Comp_FXC_Equippable_Particle.Comp_FXC_Equippable_Particle_C.HandleParticlesStateChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void RespawnParticlesCheck(); // Function Comp_FXC_Equippable_Particle.Comp_FXC_Equippable_Particle_C.RespawnParticlesCheck // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void K2_GetPreloadAssetPaths(int32_t AssetTypes, struct TArray<struct FSoftObjectPath>& AssetPathsToPreload); // Function Comp_FXC_Equippable_Particle.Comp_FXC_Equippable_Particle_C.K2_GetPreloadAssetPaths // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void DestroySpawnedParticles(); // Function Comp_FXC_Equippable_Particle.Comp_FXC_Equippable_Particle_C.DestroySpawnedParticles // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void GetLastFireTime(float& LastFireTime); // Function Comp_FXC_Equippable_Particle.Comp_FXC_Equippable_Particle_C.GetLastFireTime // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x32f73d0
	void TransitionFromFireState(); // Function Comp_FXC_Equippable_Particle.Comp_FXC_Equippable_Particle_C.TransitionFromFireState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void particleOverride(struct UParticleSystemComponent* ParticleSystem, struct TArray<struct FStruct_ParticleOverrides>& Overrides); // Function Comp_FXC_Equippable_Particle.Comp_FXC_Equippable_Particle_C.particleOverride // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void HandleADSStateChange(bool ZoomIn); // Function Comp_FXC_Equippable_Particle.Comp_FXC_Equippable_Particle_C.HandleADSStateChange // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void HandleEquippableStateChanged(enum class EAresEquippableState NewState); // Function Comp_FXC_Equippable_Particle.Comp_FXC_Equippable_Particle_C.HandleEquippableStateChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void GetDefaultTransform(struct FTransform Transform, enum class ELHMMirroringIgnoreType MirroringType, struct FVector& Location, struct FRotator& Rotation, struct FVector& Scale); // Function Comp_FXC_Equippable_Particle.Comp_FXC_Equippable_Particle_C.GetDefaultTransform // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x32f73d0
	void GetAttachComponent(bool IsCharacter, struct USceneComponent*& Component); // Function Comp_FXC_Equippable_Particle.Comp_FXC_Equippable_Particle_C.GetAttachComponent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x32f73d0
	void SpawnParticleEffects(struct TArray<int32_t>& RespawnIndicies); // Function Comp_FXC_Equippable_Particle.Comp_FXC_Equippable_Particle_C.SpawnParticleEffects // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function Comp_FXC_Equippable_Particle.Comp_FXC_Equippable_Particle_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x32f73d0
	void StateChanged(enum class EAresEquippableState State); // Function Comp_FXC_Equippable_Particle.Comp_FXC_Equippable_Particle_C.StateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void StopEffect(enum class EStopEffectType StopEffectType); // Function Comp_FXC_Equippable_Particle.Comp_FXC_Equippable_Particle_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x32f73d0
	void OnMontageStarted(struct UAnimMontage* Montage); // Function Comp_FXC_Equippable_Particle.Comp_FXC_Equippable_Particle_C.OnMontageStarted // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void OnMontageEnded(struct UAnimMontage* Montage, bool bInterrupted); // Function Comp_FXC_Equippable_Particle.Comp_FXC_Equippable_Particle_C.OnMontageEnded // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void UpdateFiringState(); // Function Comp_FXC_Equippable_Particle.Comp_FXC_Equippable_Particle_C.UpdateFiringState // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void ZoomStateChanged(bool ZoomIn); // Function Comp_FXC_Equippable_Particle.Comp_FXC_Equippable_Particle_C.ZoomStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void ExecuteUbergraph_Comp_FXC_Equippable_Particle(int32_t EntryPoint); // Function Comp_FXC_Equippable_Particle.Comp_FXC_Equippable_Particle_C.ExecuteUbergraph_Comp_FXC_Equippable_Particle // (Final|UbergraphFunction|HasDefaults) // @ game+0x32f73d0
};

