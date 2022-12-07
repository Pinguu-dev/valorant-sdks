// BlueprintGeneratedClass Comp_FXC_AudioBasic.Comp_FXC_AudioBasic_C
// Size: 0x172 (Inherited: 0xf8)
struct UComp_FXC_AudioBasic_C : UEffectComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf8(0x08)
	struct UBaseAudioComponent_C* ; // 0x100(0x08)
	struct UAkAudioEvent* ; // 0x108(0x08)
	bool ; // 0x110(0x01)
	bool ; // 0x111(0x01)
	bool EnableOcclusion; // 0x112(0x01)
	bool EndOnOwnerDeath; // 0x113(0x01)
	char pad_114[0x4]; // 0x114(0x04)
	struct FMulticastInlineDelegate ; // 0x118(0x10)
	bool ; // 0x128(0x01)
	char pad_129[0x7]; // 0x129(0x07)
	struct UAkAudioEvent* ; // 0x130(0x08)
	int32_t FowHandle; // 0x138(0x04)
	bool ; // 0x13c(0x01)
	char pad_13D[0x3]; // 0x13d(0x03)
	struct TArray<struct AActor*> ; // 0x140(0x10)
	struct UFogOfWarComponent* FogOfWarComponent; // 0x150(0x08)
	bool ; // 0x158(0x01)
	bool ; // 0x159(0x01)
	enum class Enum_AttenuationVisualization VisualizeAttenuation; // 0x15a(0x01)
	bool ContinuousOcclusion; // 0x15b(0x01)
	bool SetFacingAngle; // 0x15c(0x01)
	char pad_15D[0x3]; // 0x15d(0x03)
	int32_t ; // 0x160(0x04)
	char pad_164[0x4]; // 0x164(0x04)
	struct UObject* Context; // 0x168(0x08)
	bool ; // 0x170(0x01)
	bool ; // 0x171(0x01)

	bool (); // Function Comp_FXC_AudioBasic.Comp_FXC_AudioBasic_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322a90
	void (struct AActor* Actor, struct UObject* Context, bool& Should Play); // Function Comp_FXC_AudioBasic.Comp_FXC_AudioBasic_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322a90
	void (); // Function Comp_FXC_AudioBasic.Comp_FXC_AudioBasic_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (); // Function Comp_FXC_AudioBasic.Comp_FXC_AudioBasic_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct UBaseAudioComponent_C*& ); // Function Comp_FXC_AudioBasic.Comp_FXC_AudioBasic_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322a90
	bool (bool IsFirstPerson); // Function Comp_FXC_AudioBasic.Comp_FXC_AudioBasic_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322a90
	void (struct FString& Switch); // Function Comp_FXC_AudioBasic.Comp_FXC_AudioBasic_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322a90
	void (struct UObject* Context, bool& Valid); // Function Comp_FXC_AudioBasic.Comp_FXC_AudioBasic_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322a90
	void (bool FirstPerson, struct UAkAudioEvent*& ); // Function Comp_FXC_AudioBasic.Comp_FXC_AudioBasic_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322a90
	void (struct UBaseAudioComponent_C*& ); // Function Comp_FXC_AudioBasic.Comp_FXC_AudioBasic_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322a90
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function Comp_FXC_AudioBasic.Comp_FXC_AudioBasic_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x3322a90
	void StopEffect(enum class EStopEffectType StopEffectType); // Function Comp_FXC_AudioBasic.Comp_FXC_AudioBasic_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x3322a90
	void UpdateEffectPerspective(float CurrentTime, bool FirstPerson); // Function Comp_FXC_AudioBasic.Comp_FXC_AudioBasic_C.UpdateEffectPerspective // (Event|Public|BlueprintEvent) // @ game+0x3322a90
	void (float StartTime); // Function Comp_FXC_AudioBasic.Comp_FXC_AudioBasic_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void ResetEffect(); // Function Comp_FXC_AudioBasic.Comp_FXC_AudioBasic_C.ResetEffect // (Event|Public|BlueprintEvent) // @ game+0x3322a90
	void (); // Function Comp_FXC_AudioBasic.Comp_FXC_AudioBasic_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (int32_t EntryPoint); // Function Comp_FXC_AudioBasic.Comp_FXC_AudioBasic_C. // (Final|UbergraphFunction|HasDefaults) // @ game+0x3322a90
	void (struct UBaseAudioComponent_C* ); // Function Comp_FXC_AudioBasic.Comp_FXC_AudioBasic_C. // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
};

