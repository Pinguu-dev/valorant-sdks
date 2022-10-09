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
};

