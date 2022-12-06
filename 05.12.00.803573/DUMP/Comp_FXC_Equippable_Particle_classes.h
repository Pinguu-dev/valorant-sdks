// BlueprintGeneratedClass Comp_FXC_Equippable_Particle.Comp_FXC_Equippable_Particle_C
// Size: 0x1a0 (Inherited: 0xf8)
struct UComp_FXC_Equippable_Particle_C : UEffectComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf8(0x08)
	struct TArray<struct FEquippableParticleInfo> ; // 0x100(0x10)
	struct AShooterCharacter* ShooterCharacter; // 0x110(0x08)
	struct TMap<struct UParticleSystemComponent*, int32_t> ; // 0x118(0x50)
	struct UAnimInstance* AnimInstance; // 0x168(0x08)
	struct UAnimMontage* Montage; // 0x170(0x08)
	bool ; // 0x178(0x01)
	enum class EAresEquippableState ; // 0x179(0x01)
	char pad_17A[0x6]; // 0x17a(0x06)
	struct FTimerHandle ; // 0x180(0x08)
	float ; // 0x188(0x04)
	float ; // 0x18c(0x04)
	int32_t ; // 0x190(0x04)
	char pad_194[0x4]; // 0x194(0x04)
	struct AAresEquippable* Equippable; // 0x198(0x08)

	void (struct TArray<struct UParticleSystemComponent*>& , enum class EAresParticleVariantColor Variant); // Function Comp_FXC_Equippable_Particle.Comp_FXC_Equippable_Particle_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct UParticleSystemComponent* , bool Enabled, struct FEquippableParticleInfo ); // Function Comp_FXC_Equippable_Particle.Comp_FXC_Equippable_Particle_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function Comp_FXC_Equippable_Particle.Comp_FXC_Equippable_Particle_C. // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void K2_GetPreloadAssetPaths(int32_t AssetTypes, struct TArray<struct FSoftObjectPath>& AssetPathsToPreload); // Function Comp_FXC_Equippable_Particle.Comp_FXC_Equippable_Particle_C.K2_GetPreloadAssetPaths // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function Comp_FXC_Equippable_Particle.Comp_FXC_Equippable_Particle_C. // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (float& ); // Function Comp_FXC_Equippable_Particle.Comp_FXC_Equippable_Particle_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322a60
	void (); // Function Comp_FXC_Equippable_Particle.Comp_FXC_Equippable_Particle_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct UParticleSystemComponent* ParticleSystem, struct TArray<struct FStruct_ParticleOverrides>& Overrides); // Function Comp_FXC_Equippable_Particle.Comp_FXC_Equippable_Particle_C. // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (bool ZoomIn); // Function Comp_FXC_Equippable_Particle.Comp_FXC_Equippable_Particle_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (enum class EAresEquippableState NewState); // Function Comp_FXC_Equippable_Particle.Comp_FXC_Equippable_Particle_C. // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct FTransform Transform, enum class ELHMMirroringIgnoreType MirroringType, struct FVector& Location, struct FRotator& Rotation, struct FVector& Scale); // Function Comp_FXC_Equippable_Particle.Comp_FXC_Equippable_Particle_C. // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322a60
	void (bool , struct USceneComponent*& Component); // Function Comp_FXC_Equippable_Particle.Comp_FXC_Equippable_Particle_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322a60
	void (struct TArray<int32_t>& ); // Function Comp_FXC_Equippable_Particle.Comp_FXC_Equippable_Particle_C. // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function Comp_FXC_Equippable_Particle.Comp_FXC_Equippable_Particle_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x3322a60
	void (enum class EAresEquippableState State); // Function Comp_FXC_Equippable_Particle.Comp_FXC_Equippable_Particle_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void StopEffect(enum class EStopEffectType StopEffectType); // Function Comp_FXC_Equippable_Particle.Comp_FXC_Equippable_Particle_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x3322a60
	void OnMontageStarted(struct UAnimMontage* Montage); // Function Comp_FXC_Equippable_Particle.Comp_FXC_Equippable_Particle_C.OnMontageStarted // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void OnMontageEnded(struct UAnimMontage* Montage, bool bInterrupted); // Function Comp_FXC_Equippable_Particle.Comp_FXC_Equippable_Particle_C.OnMontageEnded // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function Comp_FXC_Equippable_Particle.Comp_FXC_Equippable_Particle_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (bool ZoomIn); // Function Comp_FXC_Equippable_Particle.Comp_FXC_Equippable_Particle_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (int32_t EntryPoint); // Function Comp_FXC_Equippable_Particle.Comp_FXC_Equippable_Particle_C. // (Final|UbergraphFunction|HasDefaults) // @ game+0x3322a60
};

