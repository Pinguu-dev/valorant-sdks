// BlueprintGeneratedClass FXC_PumpShotgun_AirBurst.FXC_PumpShotgun_AirBurst_C
// Size: 0x558 (Inherited: 0x530)
struct AFXC_PumpShotgun_AirBurst_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x530(0x08)
	struct UParticleSystemComponent* ParticleSystem; // 0x538(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x540(0x08)
	struct UParticleSystem* 1P Particle System; // 0x548(0x08)
	struct UParticleSystem* DefaultParticleSystem; // 0x550(0x08)

	void PumpShotgun_AirBurst_Aud(struct AActor* Target, struct UObject* Context); // Function FXC_PumpShotgun_AirBurst.FXC_PumpShotgun_AirBurst_C.PumpShotgun_AirBurst_Aud // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x33231a0
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_PumpShotgun_AirBurst.FXC_PumpShotgun_AirBurst_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x33231a0
	void ExecuteUbergraph_FXC_PumpShotgun_AirBurst(int32_t EntryPoint); // Function FXC_PumpShotgun_AirBurst.FXC_PumpShotgun_AirBurst_C.ExecuteUbergraph_FXC_PumpShotgun_AirBurst // (Final|UbergraphFunction) // @ game+0x33231a0
};

