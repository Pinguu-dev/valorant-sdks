// BlueprintGeneratedClass Reflex_Particle_Component.Reflex_Particle_Component_C
// Size: 0x158 (Inherited: 0xf8)
struct UReflex_Particle_Component_C : UEffectComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf8(0x08)
	struct USceneComponent* WeaponAttachComponent; // 0x100(0x08)
	struct TArray<struct FGunSkinParticleInfo> Weapon Particle Info; // 0x108(0x10)
	struct AGun_C* Weapon; // 0x118(0x08)
	struct TArray<struct UParticleSystemComponent*> EquipVFX_Weapon; // 0x120(0x10)
	struct FLinearColor NewVar_1; // 0x130(0x10)
	struct TArray<struct FName> Color Parameters; // 0x140(0x10)
	struct UTexture* GradientTexture; // 0x150(0x08)
};

