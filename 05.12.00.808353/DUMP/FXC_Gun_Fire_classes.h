// BlueprintGeneratedClass FXC_Gun_Fire.FXC_Gun_Fire_C
// Size: 0x580 (Inherited: 0x530)
struct AFXC_Gun_Fire_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x530(0x08)
	struct UCompFXC_AudioVisualizer_Signal_C* CompFXC_AudioVisualizer_Signal; // 0x538(0x08)
	struct UFiringEffectComponent* FiringEffectComponent; // 0x540(0x08)
	struct UComp_FXC_PlayAnimation_ShooterCharacter_GunFire_C* Comp_FXC_PlayAnimation_ShooterCharacter_GunFire; // 0x548(0x08)
	struct UComp_FXC_PlayAnimation_Gun_C* Comp_FXC_PlayAnimation_Gun; // 0x550(0x08)
	struct UComp_FXC_Gun_Firing_VFX_C* Comp_FXC_Gun_Firing_VFX; // 0x558(0x08)
	struct UComp_FXC_Gun_Firing_Audio_C* Comp_FXC_Gun_Audio; // 0x560(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x568(0x08)
	struct UWeapon_Skin_Base_C* Owned Gun Skin; // 0x570(0x08)
	struct UObject* Context; // 0x578(0x08)

	void Get Owning Player Info(struct ABasePlayerCharacter_C*& Owning Player, enum class EAresTeamRole& Team Role, float& Health, float& Shield, bool& isAlive?); // Function FXC_Gun_Fire.FXC_Gun_Fire_C.Get Owning Player Info // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x33231a0
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_Gun_Fire.FXC_Gun_Fire_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x33231a0
	void ExecuteUbergraph_FXC_Gun_Fire(int32_t EntryPoint); // Function FXC_Gun_Fire.FXC_Gun_Fire_C.ExecuteUbergraph_FXC_Gun_Fire // (Final|UbergraphFunction) // @ game+0x33231a0
};

