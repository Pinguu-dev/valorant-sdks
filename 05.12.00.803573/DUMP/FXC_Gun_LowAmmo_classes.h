// BlueprintGeneratedClass FXC_Gun_LowAmmo.FXC_Gun_LowAmmo_C
// Size: 0x548 (Inherited: 0x530)
struct AFXC_Gun_LowAmmo_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x530(0x08)
	struct UGun_Particle_Component_C* Gun_Particle_Component; // 0x538(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x540(0x08)

	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_Gun_LowAmmo.FXC_Gun_LowAmmo_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x3322a60
	void (int32_t EntryPoint); // Function FXC_Gun_LowAmmo.FXC_Gun_LowAmmo_C. // (Final|UbergraphFunction) // @ game+0x3322a60
};

