// BlueprintGeneratedClass Comp_FXC_AudioLoop.Comp_FXC_AudioLoop_C
// Size: 0x18a (Inherited: 0x172)
struct UComp_FXC_AudioLoop_C : UComp_FXC_AudioBasic_C {
	char pad_172[0x6]; // 0x172(0x06)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x178(0x08)
	struct UAkAudioEvent* ; // 0x180(0x08)
	bool ; // 0x188(0x01)
	bool ; // 0x189(0x01)

	void (); // Function Comp_FXC_AudioLoop.Comp_FXC_AudioLoop_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void StopEffect(enum class EStopEffectType StopEffectType); // Function Comp_FXC_AudioLoop.Comp_FXC_AudioLoop_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x3322a90
	void UpdateEffectPerspective(float CurrentTime, bool FirstPerson); // Function Comp_FXC_AudioLoop.Comp_FXC_AudioLoop_C.UpdateEffectPerspective // (Event|Public|BlueprintEvent) // @ game+0x3322a90
	void ResetEffect(); // Function Comp_FXC_AudioLoop.Comp_FXC_AudioLoop_C.ResetEffect // (Event|Public|BlueprintEvent) // @ game+0x3322a90
	void (int32_t EntryPoint); // Function Comp_FXC_AudioLoop.Comp_FXC_AudioLoop_C. // (Final|UbergraphFunction) // @ game+0x3322a90
};

