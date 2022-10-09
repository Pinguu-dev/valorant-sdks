// BlueprintGeneratedClass Comp_PlayerState_TimedVO.Comp_PlayerState_TimedVO_C
// Size: 0x108 (Inherited: 0xe8)
struct UComp_PlayerState_TimedVO_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	struct UAudBasePawnVOComponent_C* VOComponent; // 0xf0(0x08)
	struct TArray<struct UAkAudioEvent*> AudioEvents; // 0xf8(0x10)

	void PlayDelayedSounds(float Delay, struct TArray<struct UAkAudioEvent*>& Sounds); // Function Comp_PlayerState_TimedVO.Comp_PlayerState_TimedVO_C.PlayDelayedSounds // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void PlaySounds(); // Function Comp_PlayerState_TimedVO.Comp_PlayerState_TimedVO_C.PlaySounds // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void ExecuteUbergraph_Comp_PlayerState_TimedVO(int32_t EntryPoint); // Function Comp_PlayerState_TimedVO.Comp_PlayerState_TimedVO_C.ExecuteUbergraph_Comp_PlayerState_TimedVO // (Final|UbergraphFunction|HasDefaults) // @ game+0x3511190
};

