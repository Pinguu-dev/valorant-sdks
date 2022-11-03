// BlueprintGeneratedClass Comp_FXC_AudioBasic.Comp_FXC_AudioBasic_C
// Size: 0x172 (Inherited: 0xf8)
struct UComp_FXC_AudioBasic_C : UEffectComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf8(0x08)
	struct UBaseAudioComponent_C* AudioEmitter; // 0x100(0x08)
	struct UAkAudioEvent* PlayOnStart; // 0x108(0x08)
	bool MuteThirdPerson; // 0x110(0x01)
	bool AddTailForSound; // 0x111(0x01)
	bool EnableOcclusion; // 0x112(0x01)
	bool EndOnOwnerDeath; // 0x113(0x01)
	char pad_114[0x4]; // 0x114(0x04)
	struct FMulticastInlineDelegate OnAudioEmitterStarted; // 0x118(0x10)
	bool PostImmediatelty; // 0x128(0x01)
	char pad_129[0x7]; // 0x129(0x07)
	struct UAkAudioEvent* PlayingEvent; // 0x130(0x08)
	int32_t FowHandle; // 0x138(0x04)
	bool MuteFirstPerson; // 0x13c(0x01)
	char pad_13D[0x3]; // 0x13d(0x03)
	struct TArray<struct AActor*> OcclusionIgnoreActors; // 0x140(0x10)
	struct UFogOfWarComponent* FogOfWarComponent; // 0x150(0x08)
	bool PlayEnemyAudioDuringPreRound; // 0x158(0x01)
	bool EnableDopplerRTPC; // 0x159(0x01)
	enum class Enum_AttenuationVisualization VisualizeAttenuation; // 0x15a(0x01)
	bool ContinuousOcclusion; // 0x15b(0x01)
	bool SetFacingAngle; // 0x15c(0x01)
	char pad_15D[0x3]; // 0x15d(0x03)
	int32_t MinSeekTime; // 0x160(0x04)
	char pad_164[0x4]; // 0x164(0x04)
	struct UObject* Context; // 0x168(0x08)
	bool MuteContext; // 0x170(0x01)
	bool MuteNonContext; // 0x171(0x01)

	bool ShouldPlayForContext(); // Function Comp_FXC_AudioBasic.Comp_FXC_AudioBasic_C.ShouldPlayForContext // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x32f73d0
	void ShouldPlaySound(struct AActor* Actor, struct UObject* Context, bool& Should Play); // Function Comp_FXC_AudioBasic.Comp_FXC_AudioBasic_C.ShouldPlaySound // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x32f73d0
	void StopFogOfWar(); // Function Comp_FXC_AudioBasic.Comp_FXC_AudioBasic_C.StopFogOfWar // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void StartFogOfWar(); // Function Comp_FXC_AudioBasic.Comp_FXC_AudioBasic_C.StartFogOfWar // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void GetAudioEmitter(struct UBaseAudioComponent_C*& AudioEmitter); // Function Comp_FXC_AudioBasic.Comp_FXC_AudioBasic_C.GetAudioEmitter // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x32f73d0
	bool ShouldPlayForPerspective(bool IsFirstPerson); // Function Comp_FXC_AudioBasic.Comp_FXC_AudioBasic_C.ShouldPlayForPerspective // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x32f73d0
	void GetPerspectiveSwitch(struct FString& Switch); // Function Comp_FXC_AudioBasic.Comp_FXC_AudioBasic_C.GetPerspectiveSwitch // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x32f73d0
	void ValidContext(struct UObject* Context, bool& Valid); // Function Comp_FXC_AudioBasic.Comp_FXC_AudioBasic_C.ValidContext // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x32f73d0
	void GetPlayOnStartEvent(bool FirstPerson, struct UAkAudioEvent*& PlayOnStart); // Function Comp_FXC_AudioBasic.Comp_FXC_AudioBasic_C.GetPlayOnStartEvent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x32f73d0
	void GetAkComponent(struct UBaseAudioComponent_C*& AudioEmitter); // Function Comp_FXC_AudioBasic.Comp_FXC_AudioBasic_C.GetAkComponent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x32f73d0
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function Comp_FXC_AudioBasic.Comp_FXC_AudioBasic_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x32f73d0
	void StopEffect(enum class EStopEffectType StopEffectType); // Function Comp_FXC_AudioBasic.Comp_FXC_AudioBasic_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x32f73d0
	void UpdateEffectPerspective(float CurrentTime, bool FirstPerson); // Function Comp_FXC_AudioBasic.Comp_FXC_AudioBasic_C.UpdateEffectPerspective // (Event|Public|BlueprintEvent) // @ game+0x32f73d0
	void PlayNewEvent(float StartTime); // Function Comp_FXC_AudioBasic.Comp_FXC_AudioBasic_C.PlayNewEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void ResetEffect(); // Function Comp_FXC_AudioBasic.Comp_FXC_AudioBasic_C.ResetEffect // (Event|Public|BlueprintEvent) // @ game+0x32f73d0
	void Stop Sound(); // Function Comp_FXC_AudioBasic.Comp_FXC_AudioBasic_C.Stop Sound // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void ExecuteUbergraph_Comp_FXC_AudioBasic(int32_t EntryPoint); // Function Comp_FXC_AudioBasic.Comp_FXC_AudioBasic_C.ExecuteUbergraph_Comp_FXC_AudioBasic // (Final|UbergraphFunction|HasDefaults) // @ game+0x32f73d0
	void OnAudioEmitterStarted__DelegateSignature(struct UBaseAudioComponent_C* AudioEmitter); // Function Comp_FXC_AudioBasic.Comp_FXC_AudioBasic_C.OnAudioEmitterStarted__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
};

