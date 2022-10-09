// BlueprintGeneratedClass FXC_Finisher_Base_Victim.FXC_Finisher_Base_Victim_C
// Size: 0x598 (Inherited: 0x530)
struct AFXC_Finisher_Base_Victim_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x530(0x08)
	struct UComp_FXC_AudioBasic_C* Comp_FXC_AudioBasic; // 0x538(0x08)
	struct UComp_FXC_PlayAnimation_ShooterCharacter_C* VictimAnimation; // 0x540(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x548(0x08)
	struct TArray<struct FGunSkinParticleInfo> Particle System; // 0x550(0x10)
	float AdditionalDeathSwapDelay; // 0x560(0x04)
	char pad_564[0x4]; // 0x564(0x04)
	struct TArray<struct UParticleSystemComponent*> SpawnedPartciles; // 0x568(0x10)
	bool HideCorpse; // 0x578(0x01)
	char pad_579[0x3]; // 0x579(0x03)
	float HideCorpseTime; // 0x57c(0x04)
	struct FTimerHandle Hide Corpse Timer; // 0x580(0x08)
	struct FTimerHandle Hide Body Timer; // 0x588(0x08)
	struct ABasePawn_C* Victim Player; // 0x590(0x08)
};

