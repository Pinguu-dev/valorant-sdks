// BlueprintGeneratedClass Comp_FXC_Gun_Firing_Audio.Comp_FXC_Gun_Firing_Audio_C
// Size: 0x148 (Inherited: 0xf8)
struct UComp_FXC_Gun_Firing_Audio_C : UEffectComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf8(0x08)
	struct AAresEquippable* OwningEquippable; // 0x100(0x08)
	struct UFiringStateComponent* FiringStateComponent; // 0x108(0x08)
	struct TArray<struct FEquippableSoundEffect> Gun Shot Sound FX; // 0x110(0x10)
	struct UAresAudioComponent* ReusableAudioComponent; // 0x120(0x08)
	bool DegreeFacingAngle; // 0x128(0x01)
	char pad_129[0x7]; // 0x129(0x07)
	struct UAresAudioComponent* PooledAudioComponent; // 0x130(0x08)
	struct TArray<struct UAresAudioComponent*> ReusableAudioComponentList; // 0x138(0x10)

	bool ShouldStartEffect(struct AActor* Target); // Function Comp_FXC_Gun_Firing_Audio.Comp_FXC_Gun_Firing_Audio_C.ShouldStartEffect // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x33231a0
	void GetReusableAudioComponent(struct UAresAudioComponent*& Component); // Function Comp_FXC_Gun_Firing_Audio.Comp_FXC_Gun_Firing_Audio_C.GetReusableAudioComponent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x33231a0
	void GetSoundFX(int32_t ShotIndex, bool LastShot, struct FEquippableSoundEffect& SoundFX); // Function Comp_FXC_Gun_Firing_Audio.Comp_FXC_Gun_Firing_Audio_C.GetSoundFX // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x33231a0
	void GetEquippable(struct UObject* OnObject, struct AAresEquippable*& Equippable); // Function Comp_FXC_Gun_Firing_Audio.Comp_FXC_Gun_Firing_Audio_C.GetEquippable // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x33231a0
	void StopEffect(enum class EStopEffectType StopEffectType); // Function Comp_FXC_Gun_Firing_Audio.Comp_FXC_Gun_Firing_Audio_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x33231a0
	void FxcOnShot(int32_t ShotIndex, bool bTracerEnabled, bool bWasLastShot, struct TArray<struct FFiringResults>& FiringResults); // Function Comp_FXC_Gun_Firing_Audio.Comp_FXC_Gun_Firing_Audio_C.FxcOnShot // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x33231a0
	void ResetEffect(); // Function Comp_FXC_Gun_Firing_Audio.Comp_FXC_Gun_Firing_Audio_C.ResetEffect // (Event|Public|BlueprintEvent) // @ game+0x33231a0
	void ReceiveBeginPlay(); // Function Comp_FXC_Gun_Firing_Audio.Comp_FXC_Gun_Firing_Audio_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x33231a0
	void FxcOnRegisterFiringState_Event_1(struct UFiringStateComponent* FiringState); // Function Comp_FXC_Gun_Firing_Audio.Comp_FXC_Gun_Firing_Audio_C.FxcOnRegisterFiringState_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x33231a0
	void ExecuteUbergraph_Comp_FXC_Gun_Firing_Audio(int32_t EntryPoint); // Function Comp_FXC_Gun_Firing_Audio.Comp_FXC_Gun_Firing_Audio_C.ExecuteUbergraph_Comp_FXC_Gun_Firing_Audio // (Final|UbergraphFunction|HasDefaults) // @ game+0x33231a0
};

