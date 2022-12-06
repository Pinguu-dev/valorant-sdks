// BlueprintGeneratedClass FXC_BombDetonation_TwoStage.FXC_BombDetonation_TwoStage_C
// Size: 0x5c4 (Inherited: 0x530)
struct AFXC_BombDetonation_TwoStage_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x530(0x08)
	struct UComp_FXC_AudioBasic_C* ; // 0x538(0x08)
	struct UStaticMeshComponent* Sphere; // 0x540(0x08)
	struct UComp_FXC_AudioBasic_C* ; // 0x548(0x08)
	struct UParticleSystemComponent* ParticleSystem; // 0x550(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x558(0x08)
	float ; // 0x560(0x04)
	float ; // 0x564(0x04)
	struct FTimerHandle ; // 0x568(0x08)
	struct FTimerHandle ; // 0x570(0x08)
	struct FTimerHandle ; // 0x578(0x08)
	struct FVector ; // 0x580(0x0c)
	struct FVector ; // 0x58c(0x0c)
	struct ABombDetonationActor_TwoStage_C* ; // 0x598(0x08)
	struct FVector ; // 0x5a0(0x0c)
	char pad_5AC[0x4]; // 0x5ac(0x04)
	struct FTimerHandle ; // 0x5b0(0x08)
	struct FVector ; // 0x5b8(0x0c)

	void ReceiveTick(float DeltaSeconds); // Function FXC_BombDetonation_TwoStage.FXC_BombDetonation_TwoStage_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x3322a60
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_BombDetonation_TwoStage.FXC_BombDetonation_TwoStage_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x3322a60
	void (int32_t EntryPoint); // Function FXC_BombDetonation_TwoStage.FXC_BombDetonation_TwoStage_C. // (Final|UbergraphFunction|HasDefaults) // @ game+0x3322a60
};

