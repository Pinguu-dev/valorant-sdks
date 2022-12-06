// BlueprintGeneratedClass FXC_Finisher_Base_Victim.FXC_Finisher_Base_Victim_C
// Size: 0x5a0 (Inherited: 0x530)
struct AFXC_Finisher_Base_Victim_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x530(0x08)
	struct UComp_FXC_AudioBasic_C* Comp_FXC_AudioBasic; // 0x538(0x08)
	struct UComp_FXC_PlayAnimation_ShooterCharacter_C* ; // 0x540(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x548(0x08)
	struct TArray<struct FGunSkinParticleInfo> ; // 0x550(0x10)
	float ; // 0x560(0x04)
	char pad_564[0x4]; // 0x564(0x04)
	struct TArray<struct UParticleSystemComponent*> ; // 0x568(0x10)
	bool ; // 0x578(0x01)
	char pad_579[0x3]; // 0x579(0x03)
	float ; // 0x57c(0x04)
	struct FTimerHandle ; // 0x580(0x08)
	struct FTimerHandle ; // 0x588(0x08)
	struct ABasePawn_C* ; // 0x590(0x08)
	struct AShooterCharacter* ; // 0x598(0x08)

	void (); // Function FXC_Finisher_Base_Victim.FXC_Finisher_Base_Victim_C. // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void GetPreloadAssetPathsOnContainer(int32_t AssetTypes, struct TArray<struct FSoftObjectPath>& AssetPathsToPreload); // Function FXC_Finisher_Base_Victim.FXC_Finisher_Base_Victim_C.GetPreloadAssetPathsOnContainer // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_Finisher_Base_Victim.FXC_Finisher_Base_Victim_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x3322a60
	void StopEffect(enum class EStopEffectType StopEffectType); // Function FXC_Finisher_Base_Victim.FXC_Finisher_Base_Victim_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x3322a60
	void (); // Function FXC_Finisher_Base_Victim.FXC_Finisher_Base_Victim_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function FXC_Finisher_Base_Victim.FXC_Finisher_Base_Victim_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (int32_t EntryPoint); // Function FXC_Finisher_Base_Victim.FXC_Finisher_Base_Victim_C. // (Final|UbergraphFunction|HasDefaults) // @ game+0x3322a60
};

