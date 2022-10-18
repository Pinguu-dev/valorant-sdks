// BlueprintGeneratedClass Gun_Particle_Component.Gun_Particle_Component_C
// Size: 0x130 (Inherited: 0xf8)
struct UGun_Particle_Component_C : UEffectComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf8(0x08)
	struct USceneComponent* WeaponAttachComponent; // 0x100(0x08)
	struct TArray<struct FGunSkinParticleInfo> Weapon Particle Info; // 0x108(0x10)
	struct AGun_C* Weapon; // 0x118(0x08)
	struct TArray<struct UParticleSystemComponent*> EquipVFX_Weapon; // 0x120(0x10)

	void K2_GetPreloadAssetPaths(int32_t AssetTypes, struct TArray<struct FSoftObjectPath>& AssetPathsToPreload); // Function Gun_Particle_Component.Gun_Particle_Component_C.K2_GetPreloadAssetPaths // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function Gun_Particle_Component.Gun_Particle_Component_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x3520f50
	void StopEffect(enum class EStopEffectType StopEffectType); // Function Gun_Particle_Component.Gun_Particle_Component_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x3520f50
	void ExecuteUbergraph_Gun_Particle_Component(int32_t EntryPoint); // Function Gun_Particle_Component.Gun_Particle_Component_C.ExecuteUbergraph_Gun_Particle_Component // (Final|UbergraphFunction|HasDefaults) // @ game+0x3520f50
};

