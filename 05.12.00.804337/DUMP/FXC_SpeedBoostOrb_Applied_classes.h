// BlueprintGeneratedClass FXC_SpeedBoostOrb_Applied.FXC_SpeedBoostOrb_Applied_C
// Size: 0x560 (Inherited: 0x530)
struct AFXC_SpeedBoostOrb_Applied_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x530(0x08)
	struct UComp_FXC_AudioBasic_C* ; // 0x538(0x08)
	struct UComp_FXC_AudioBasic_C* ; // 0x540(0x08)
	struct UComp_FXC_SpawnParticle_ShooterCharacter_C* Comp_FXC_SpawnParticle_ShooterCharacter; // 0x548(0x08)
	struct UComp_FXC_HUD_Particle_C* Comp_FXC_HUD_Particle; // 0x550(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x558(0x08)

	void StopEffect(enum class EStopEffectType StopEffectType); // Function FXC_SpeedBoostOrb_Applied.FXC_SpeedBoostOrb_Applied_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x3322a90
	void (int32_t EntryPoint); // Function FXC_SpeedBoostOrb_Applied.FXC_SpeedBoostOrb_Applied_C. // (Final|UbergraphFunction|HasDefaults) // @ game+0x3322a90
};

