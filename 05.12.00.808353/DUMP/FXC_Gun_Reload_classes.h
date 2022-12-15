// BlueprintGeneratedClass FXC_Gun_Reload.FXC_Gun_Reload_C
// Size: 0x578 (Inherited: 0x530)
struct AFXC_Gun_Reload_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x530(0x08)
	struct UComp_FXC_ManualAttenuationIndicator_C* Comp_FXC_ManualAttenuationIndicator; // 0x538(0x08)
	struct UComp_FXC_PlayAnimation_Equippable_C* EquippableAnimation; // 0x540(0x08)
	struct UComp_FXC_PlayAnimation_ShooterCharacter_C* CharacterAnimation; // 0x548(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x550(0x08)
	int32_t NumReloadCycles; // 0x558(0x04)
	char pad_55C[0x4]; // 0x55c(0x04)
	struct UWeapon_Skin_Base_C* Owned Gun Skin; // 0x560(0x08)
	struct AAresEquippable* CurrentEquippable; // 0x568(0x08)
	struct UReloadStateComponent* ReloadStateComponent; // 0x570(0x08)

	void Get Particle Component(struct UPlayerGun_Particle_Component_C*& Particle Component); // Function FXC_Gun_Reload.FXC_Gun_Reload_C.Get Particle Component // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x33231a0
	void OnReloadLoopComplete(); // Function FXC_Gun_Reload.FXC_Gun_Reload_C.OnReloadLoopComplete // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x33231a0
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_Gun_Reload.FXC_Gun_Reload_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x33231a0
	void StopEffect(enum class EStopEffectType StopEffectType); // Function FXC_Gun_Reload.FXC_Gun_Reload_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x33231a0
	void OnVFXSpawned(); // Function FXC_Gun_Reload.FXC_Gun_Reload_C.OnVFXSpawned // (BlueprintCallable|BlueprintEvent) // @ game+0x33231a0
	void ExecuteUbergraph_FXC_Gun_Reload(int32_t EntryPoint); // Function FXC_Gun_Reload.FXC_Gun_Reload_C.ExecuteUbergraph_FXC_Gun_Reload // (Final|UbergraphFunction) // @ game+0x33231a0
};

