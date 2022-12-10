// BlueprintGeneratedClass FXC_Equippable_WhileEquipped_Base.FXC_Equippable_WhileEquipped_Base_C
// Size: 0x550 (Inherited: 0x530)
struct AFXC_Equippable_WhileEquipped_Base_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x530(0x08)
	struct UComp_FXC_Equippable_Particle_C* Comp_FXC_Equippable_Particle; // 0x538(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x540(0x08)
	struct AAresEquippable* Equippable; // 0x548(0x08)

	void Get Owning Player Info(struct ABasePlayerCharacter_C*& Owning Player, enum class EAresTeamRole& Team Role, float& Health, float& Shield, bool& isAlive?); // Function FXC_Equippable_WhileEquipped_Base.FXC_Equippable_WhileEquipped_Base_C.Get Owning Player Info // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322f00
	void CheckLocalOnly(bool& Is Local Client); // Function FXC_Equippable_WhileEquipped_Base.FXC_Equippable_WhileEquipped_Base_C.CheckLocalOnly // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322f00
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_Equippable_WhileEquipped_Base.FXC_Equippable_WhileEquipped_Base_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x3322f00
	void ResetEffect(); // Function FXC_Equippable_WhileEquipped_Base.FXC_Equippable_WhileEquipped_Base_C.ResetEffect // (Event|Public|BlueprintEvent) // @ game+0x3322f00
	void ExecuteUbergraph_FXC_Equippable_WhileEquipped_Base(int32_t EntryPoint); // Function FXC_Equippable_WhileEquipped_Base.FXC_Equippable_WhileEquipped_Base_C.ExecuteUbergraph_FXC_Equippable_WhileEquipped_Base // (Final|UbergraphFunction) // @ game+0x3322f00
};

