// BlueprintGeneratedClass FXC_Bomb_While_Defusing.FXC_Bomb_While_Defusing_C
// Size: 0x55c (Inherited: 0x530)
struct AFXC_Bomb_While_Defusing_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x530(0x08)
	struct UCompFXC_AudioVisualizer_Signal_C* CompFXC_AudioVisualizer_Signal; // 0x538(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x540(0x08)
	struct UMaterialInterface* OriginalMaterial; // 0x548(0x08)
	struct FTimerHandle AudioTimer; // 0x550(0x08)
	int32_t CurrentBombSection; // 0x558(0x04)

	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_Bomb_While_Defusing.FXC_Bomb_While_Defusing_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x3520f50
	void StopEffect(enum class EStopEffectType StopEffectType); // Function FXC_Bomb_While_Defusing.FXC_Bomb_While_Defusing_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x3520f50
	void PlayDefauseAudio(); // Function FXC_Bomb_While_Defusing.FXC_Bomb_While_Defusing_C.PlayDefauseAudio // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void ExecuteUbergraph_FXC_Bomb_While_Defusing(int32_t EntryPoint); // Function FXC_Bomb_While_Defusing.FXC_Bomb_While_Defusing_C.ExecuteUbergraph_FXC_Bomb_While_Defusing // (Final|UbergraphFunction|HasDefaults) // @ game+0x3520f50
};

