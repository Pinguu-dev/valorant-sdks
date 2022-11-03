// BlueprintGeneratedClass FXC_Finisher_Base_Victim.FXC_Finisher_Base_Victim_C
// Size: 0x5a0 (Inherited: 0x530)
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
	struct AShooterCharacter* Triggering Player; // 0x598(0x08)

	void OverrideVariantColor(); // Function FXC_Finisher_Base_Victim.FXC_Finisher_Base_Victim_C.OverrideVariantColor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void GetPreloadAssetPathsOnContainer(int32_t AssetTypes, struct TArray<struct FSoftObjectPath>& AssetPathsToPreload); // Function FXC_Finisher_Base_Victim.FXC_Finisher_Base_Victim_C.GetPreloadAssetPathsOnContainer // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_Finisher_Base_Victim.FXC_Finisher_Base_Victim_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x32f73d0
	void StopEffect(enum class EStopEffectType StopEffectType); // Function FXC_Finisher_Base_Victim.FXC_Finisher_Base_Victim_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x32f73d0
	void Hide Character(); // Function FXC_Finisher_Base_Victim.FXC_Finisher_Base_Victim_C.Hide Character // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void Hide CorpseReplace(); // Function FXC_Finisher_Base_Victim.FXC_Finisher_Base_Victim_C.Hide CorpseReplace // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void ExecuteUbergraph_FXC_Finisher_Base_Victim(int32_t EntryPoint); // Function FXC_Finisher_Base_Victim.FXC_Finisher_Base_Victim_C.ExecuteUbergraph_FXC_Finisher_Base_Victim // (Final|UbergraphFunction|HasDefaults) // @ game+0x32f73d0
};

