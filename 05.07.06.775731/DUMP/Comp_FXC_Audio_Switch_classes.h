// BlueprintGeneratedClass Comp_FXC_Audio_Switch.Comp_FXC_Audio_Switch_C
// Size: 0x1a0 (Inherited: 0x172)
struct UComp_FXC_Audio_Switch_C : UComp_FXC_AudioBasic_C {
	char pad_172[0x6]; // 0x172(0x06)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x178(0x08)
	struct FString SwitchName; // 0x180(0x10)
	struct FString SwitchValue; // 0x190(0x10)

	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function Comp_FXC_Audio_Switch.Comp_FXC_Audio_Switch_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x3511190
	void ExecuteUbergraph_Comp_FXC_Audio_Switch(int32_t EntryPoint); // Function Comp_FXC_Audio_Switch.Comp_FXC_Audio_Switch_C.ExecuteUbergraph_Comp_FXC_Audio_Switch // (Final|UbergraphFunction|HasDefaults) // @ game+0x3511190
};

