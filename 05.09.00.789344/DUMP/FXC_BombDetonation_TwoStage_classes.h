// BlueprintGeneratedClass FXC_BombDetonation_TwoStage.FXC_BombDetonation_TwoStage_C
// Size: 0x5c4 (Inherited: 0x530)
struct AFXC_BombDetonation_TwoStage_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x530(0x08)
	struct UComp_FXC_AudioBasic_C* ExplosionBlastSound; // 0x538(0x08)
	struct UStaticMeshComponent* Sphere; // 0x540(0x08)
	struct UComp_FXC_AudioBasic_C* RadialExplosionSound; // 0x548(0x08)
	struct UParticleSystemComponent* ParticleSystem; // 0x550(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x558(0x08)
	float Explosion Delay; // 0x560(0x04)
	float Windup; // 0x564(0x04)
	struct FTimerHandle WindUp Timer; // 0x568(0x08)
	struct FTimerHandle Blow up timer; // 0x570(0x08)
	struct FTimerHandle Dome Timer; // 0x578(0x08)
	struct FVector VFX Scale; // 0x580(0x0c)
	struct FVector original Character Direction; // 0x58c(0x0c)
	struct ABombDetonationActor_TwoStage_C* Detonation Actor; // 0x598(0x08)
	struct FVector Bomb Location; // 0x5a0(0x0c)
	char pad_5AC[0x4]; // 0x5ac(0x04)
	struct FTimerHandle Return timer handle; // 0x5b0(0x08)
	struct FVector Current Sound Location; // 0x5b8(0x0c)

	void ReceiveTick(float DeltaSeconds); // Function FXC_BombDetonation_TwoStage.FXC_BombDetonation_TwoStage_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x32f73d0
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_BombDetonation_TwoStage.FXC_BombDetonation_TwoStage_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x32f73d0
	void ExecuteUbergraph_FXC_BombDetonation_TwoStage(int32_t EntryPoint); // Function FXC_BombDetonation_TwoStage.FXC_BombDetonation_TwoStage_C.ExecuteUbergraph_FXC_BombDetonation_TwoStage // (Final|UbergraphFunction|HasDefaults) // @ game+0x32f73d0
};

