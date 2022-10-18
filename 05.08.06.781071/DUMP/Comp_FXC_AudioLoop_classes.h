// BlueprintGeneratedClass Comp_FXC_AudioLoop.Comp_FXC_AudioLoop_C
// Size: 0x18a (Inherited: 0x172)
struct UComp_FXC_AudioLoop_C : UComp_FXC_AudioBasic_C {
	char pad_172[0x6]; // 0x172(0x06)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x178(0x08)
	struct UAkAudioEvent* StopEvent; // 0x180(0x08)
	bool StopPlayed; // 0x188(0x01)
	bool PlayStopEventOnPerspectiveSwitch; // 0x189(0x01)

	void AttemptToStopAttenuationVisualization(); // Function Comp_FXC_AudioLoop.Comp_FXC_AudioLoop_C.AttemptToStopAttenuationVisualization // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void StopEffect(enum class EStopEffectType StopEffectType); // Function Comp_FXC_AudioLoop.Comp_FXC_AudioLoop_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x3520f50
	void UpdateEffectPerspective(float CurrentTime, bool FirstPerson); // Function Comp_FXC_AudioLoop.Comp_FXC_AudioLoop_C.UpdateEffectPerspective // (Event|Public|BlueprintEvent) // @ game+0x3520f50
	void ResetEffect(); // Function Comp_FXC_AudioLoop.Comp_FXC_AudioLoop_C.ResetEffect // (Event|Public|BlueprintEvent) // @ game+0x3520f50
	void ExecuteUbergraph_Comp_FXC_AudioLoop(int32_t EntryPoint); // Function Comp_FXC_AudioLoop.Comp_FXC_AudioLoop_C.ExecuteUbergraph_Comp_FXC_AudioLoop // (Final|UbergraphFunction) // @ game+0x3520f50
};

