// BlueprintGeneratedClass FXC_Melee_Parent.FXC_Melee_Parent_C
// Size: 0x550 (Inherited: 0x530)
struct AFXC_Melee_Parent_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x530(0x08)
	struct UComp_FXC_ManualAttenuationIndicator_C* Comp_FXC_ManualAttenuationIndicator; // 0x538(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x540(0x08)
	struct AAresEquippable* Equippable; // 0x548(0x08)

	void Get Owning Player Info(struct ABasePlayerCharacter_C*& Owning Player, enum class EAresTeamRole& Team Role, float& Health, float& Shield, bool& isAlive?); // Function FXC_Melee_Parent.FXC_Melee_Parent_C.Get Owning Player Info // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_Melee_Parent.FXC_Melee_Parent_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x3322a90
	void (int32_t EntryPoint); // Function FXC_Melee_Parent.FXC_Melee_Parent_C. // (Final|UbergraphFunction) // @ game+0x3322a90
};

