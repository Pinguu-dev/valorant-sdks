// BlueprintGeneratedClass PlayerMelee_Particle_Component.PlayerMelee_Particle_Component_C
// Size: 0x1a8 (Inherited: 0xf8)
struct UPlayerMelee_Particle_Component_C : UEffectComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf8(0x08)
	struct USceneComponent* WeaponAttachComponent; // 0x100(0x08)
	struct TArray<struct FGunSkinParticleInfo> Weapon Particle Info; // 0x108(0x10)
	struct AAbility_Melee_Base_C* Weapon; // 0x118(0x08)
	struct TArray<struct UParticleSystemComponent*> EquipVFX_Weapon; // 0x120(0x10)
	struct TArray<struct FGunSkinParticleInfo> Character Particle Info; // 0x130(0x10)
	struct AShooterCharacter* ShooterCharacter; // 0x140(0x08)
	struct TArray<struct UParticleSystemComponent*> EquipVFX_Character; // 0x148(0x10)
	struct TMap<struct FName, struct UMaterialInstanceDynamic*> Weapon Override Dynamic Materials; // 0x158(0x50)
};

