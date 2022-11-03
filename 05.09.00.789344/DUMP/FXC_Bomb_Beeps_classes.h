// BlueprintGeneratedClass FXC_Bomb_Beeps.FXC_Bomb_Beeps_C
// Size: 0x558 (Inherited: 0x530)
struct AFXC_Bomb_Beeps_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x530(0x08)
	struct UCompFXC_AudioVisualizer_Signal_C* CompFXC_AudioVisualizer_Signal; // 0x538(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x540(0x08)
	struct TArray<struct UParticleSystemComponent*> SpawnedVFX; // 0x548(0x10)

	void ReceiveBeginPlay(); // Function FXC_Bomb_Beeps.FXC_Bomb_Beeps_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x32f73d0
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_Bomb_Beeps.FXC_Bomb_Beeps_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x32f73d0
	void StopEffect(enum class EStopEffectType StopEffectType); // Function FXC_Bomb_Beeps.FXC_Bomb_Beeps_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x32f73d0
	void ExecuteUbergraph_FXC_Bomb_Beeps(int32_t EntryPoint); // Function FXC_Bomb_Beeps.FXC_Bomb_Beeps_C.ExecuteUbergraph_FXC_Bomb_Beeps // (Final|UbergraphFunction) // @ game+0x32f73d0
};

