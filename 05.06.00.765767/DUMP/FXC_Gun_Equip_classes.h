// BlueprintGeneratedClass FXC_Gun_Equip.FXC_Gun_Equip_C
// Size: 0x561 (Inherited: 0x530)
struct AFXC_Gun_Equip_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x530(0x08)
	struct UComp_FXC_PlayAnimation_Equippable_C* EquippableAnimation; // 0x538(0x08)
	struct UComp_FXC_PlayAnimation_ShooterCharacter_C* CharacterAnimation; // 0x540(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x548(0x08)
	struct UWeapon_Skin_Base_C* Owned Gun Skin; // 0x550(0x08)
	struct AAresEquippable* CurrentEquippable; // 0x558(0x08)
	enum class EEquipSpeed CurrentVFXEquipSpeed; // 0x560(0x01)
};

