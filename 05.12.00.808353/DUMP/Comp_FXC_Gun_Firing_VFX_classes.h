// BlueprintGeneratedClass Comp_FXC_Gun_Firing_VFX.Comp_FXC_Gun_Firing_VFX_C
// Size: 0x158 (Inherited: 0xf8)
struct UComp_FXC_Gun_Firing_VFX_C : UEffectComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf8(0x08)
	struct AAresEquippable* OwningEquippable; // 0x100(0x08)
	enum class PreviousFiringParticleBehaviorEnum PreviousFiringParticleBehavior; // 0x108(0x01)
	enum class FiringParticleFrequencyEnum FiringParticleFrequency; // 0x109(0x01)
	char pad_10A[0x6]; // 0x10a(0x06)
	struct TArray<struct UParticleSystemComponent*> ActiveEffects; // 0x110(0x10)
	struct TArray<struct FEquippableParticleEffect> FXs1P; // 0x120(0x10)
	struct TArray<struct FEquippableParticleEffect> FXs1PZoomed; // 0x130(0x10)
	struct TArray<struct FEquippableParticleEffect> FXs3P; // 0x140(0x10)
	struct UFiringEffectComponent* FiringComponent; // 0x150(0x08)

	void OverrideVariantColors(enum class EAresParticleVariantColor Variant Color); // Function Comp_FXC_Gun_Firing_VFX.Comp_FXC_Gun_Firing_VFX_C.OverrideVariantColors // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x33231a0
	void Get Preload Asset Paths From Particle Overrides(struct TArray<struct FStruct_ParticleOverrides>& particleOverrides, struct TArray<struct FSoftObjectPath>& PreloadAssetPaths); // Function Comp_FXC_Gun_Firing_VFX.Comp_FXC_Gun_Firing_VFX_C.Get Preload Asset Paths From Particle Overrides // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x33231a0
	void OverrideParticleSystemMaterials(struct TArray<struct FStruct_ParticleOverrides>& particleOverrides, struct UParticleSystemComponent* ParticleSystem); // Function Comp_FXC_Gun_Firing_VFX.Comp_FXC_Gun_Firing_VFX_C.OverrideParticleSystemMaterials // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x33231a0
	void K2_GetPreloadAssetPaths(int32_t AssetTypes, struct TArray<struct FSoftObjectPath>& AssetPathsToPreload); // Function Comp_FXC_Gun_Firing_VFX.Comp_FXC_Gun_Firing_VFX_C.K2_GetPreloadAssetPaths // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x33231a0
	void HandlePreviousEffect(enum class PreviousFiringParticleBehaviorEnum Behavior); // Function Comp_FXC_Gun_Firing_VFX.Comp_FXC_Gun_Firing_VFX_C.HandlePreviousEffect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x33231a0
	void PlayFiringParticles(struct TArray<struct FEquippableParticleEffect>& FiringEffects, bool IsFirstPerson, struct TArray<struct UParticleSystemComponent*>& Registered effects); // Function Comp_FXC_Gun_Firing_VFX.Comp_FXC_Gun_Firing_VFX_C.PlayFiringParticles // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x33231a0
	void HandlePreviousEffects(); // Function Comp_FXC_Gun_Firing_VFX.Comp_FXC_Gun_Firing_VFX_C.HandlePreviousEffects // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x33231a0
	void GetEquippable(struct UObject* OnObject, struct AAresEquippable*& Equippable); // Function Comp_FXC_Gun_Firing_VFX.Comp_FXC_Gun_Firing_VFX_C.GetEquippable // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x33231a0
	void StopEffect(enum class EStopEffectType StopEffectType); // Function Comp_FXC_Gun_Firing_VFX.Comp_FXC_Gun_Firing_VFX_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x33231a0
	void FxcOnStartedShooting(); // Function Comp_FXC_Gun_Firing_VFX.Comp_FXC_Gun_Firing_VFX_C.FxcOnStartedShooting // (BlueprintCallable|BlueprintEvent) // @ game+0x33231a0
	void FxcOnShot(int32_t ShotIndex, bool bTracerEnabled, bool bWasLastShot, struct TArray<struct FFiringResults>& FiringResults); // Function Comp_FXC_Gun_Firing_VFX.Comp_FXC_Gun_Firing_VFX_C.FxcOnShot // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x33231a0
	void ResetEffect(); // Function Comp_FXC_Gun_Firing_VFX.Comp_FXC_Gun_Firing_VFX_C.ResetEffect // (Event|Public|BlueprintEvent) // @ game+0x33231a0
	void ReceiveBeginPlay(); // Function Comp_FXC_Gun_Firing_VFX.Comp_FXC_Gun_Firing_VFX_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x33231a0
	void FxcOnRegisterFiringState_Event_1(struct UFiringStateComponent* FiringState); // Function Comp_FXC_Gun_Firing_VFX.Comp_FXC_Gun_Firing_VFX_C.FxcOnRegisterFiringState_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x33231a0
	void OnFiringParticleFinished(struct UParticleSystemComponent* PSystem); // Function Comp_FXC_Gun_Firing_VFX.Comp_FXC_Gun_Firing_VFX_C.OnFiringParticleFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x33231a0
	void ExecuteUbergraph_Comp_FXC_Gun_Firing_VFX(int32_t EntryPoint); // Function Comp_FXC_Gun_Firing_VFX.Comp_FXC_Gun_Firing_VFX_C.ExecuteUbergraph_Comp_FXC_Gun_Firing_VFX // (Final|UbergraphFunction|HasDefaults) // @ game+0x33231a0
};

