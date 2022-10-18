// BlueprintGeneratedClass Comp_FXC_AudioLoop_ContextPerspective.Comp_FXC_AudioLoop_ContextPerspective_C
// Size: 0x1a0 (Inherited: 0x18a)
struct UComp_FXC_AudioLoop_ContextPerspective_C : UComp_FXC_AudioLoop_C {
	char pad_18A[0x6]; // 0x18a(0x06)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x190(0x08)
	struct UObject* Context_1; // 0x198(0x08)

	void GetPerspectiveSwitch(struct FString& Switch); // Function Comp_FXC_AudioLoop_ContextPerspective.Comp_FXC_AudioLoop_ContextPerspective_C.GetPerspectiveSwitch // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3520f50
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function Comp_FXC_AudioLoop_ContextPerspective.Comp_FXC_AudioLoop_ContextPerspective_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x3520f50
	void ExecuteUbergraph_Comp_FXC_AudioLoop_ContextPerspective(int32_t EntryPoint); // Function Comp_FXC_AudioLoop_ContextPerspective.Comp_FXC_AudioLoop_ContextPerspective_C.ExecuteUbergraph_Comp_FXC_AudioLoop_ContextPerspective // (Final|UbergraphFunction) // @ game+0x3520f50
};

