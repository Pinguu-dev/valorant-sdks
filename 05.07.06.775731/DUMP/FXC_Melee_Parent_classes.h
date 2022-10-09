// BlueprintGeneratedClass FXC_Melee_Parent.FXC_Melee_Parent_C
// Size: 0x550 (Inherited: 0x530)
struct AFXC_Melee_Parent_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x530(0x08)
	struct UComp_FXC_ManualAttenuationIndicator_C* Comp_FXC_ManualAttenuationIndicator; // 0x538(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x540(0x08)
	struct AAresEquippable* Equippable; // 0x548(0x08)

	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_Melee_Parent.FXC_Melee_Parent_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x3511190
	void ExecuteUbergraph_FXC_Melee_Parent(int32_t EntryPoint); // Function FXC_Melee_Parent.FXC_Melee_Parent_C.ExecuteUbergraph_FXC_Melee_Parent // (Final|UbergraphFunction) // @ game+0x3511190
};

