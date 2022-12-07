// BlueprintGeneratedClass PlayerMelee_Particle_Component.PlayerMelee_Particle_Component_C
// Size: 0x1a8 (Inherited: 0xf8)
struct UPlayerMelee_Particle_Component_C : UEffectComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf8(0x08)
	struct USceneComponent* ; // 0x100(0x08)
	struct TArray<struct FGunSkinParticleInfo> ; // 0x108(0x10)
	struct AAbility_Melee_Base_C* Weapon; // 0x118(0x08)
	struct TArray<struct UParticleSystemComponent*> ; // 0x120(0x10)
	struct TArray<struct FGunSkinParticleInfo> ; // 0x130(0x10)
	struct AShooterCharacter* ShooterCharacter; // 0x140(0x08)
	struct TArray<struct UParticleSystemComponent*> ; // 0x148(0x10)
	struct TMap<struct FName, struct UMaterialInstanceDynamic*> ; // 0x158(0x50)

	void (struct USceneComponent*& Component); // Function PlayerMelee_Particle_Component.PlayerMelee_Particle_Component_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (enum class EAresParticleVariantColor Variant Color, struct TArray<struct UParticleSystemComponent*>& ); // Function PlayerMelee_Particle_Component.PlayerMelee_Particle_Component_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void K2_GetPreloadAssetPaths(int32_t AssetTypes, struct TArray<struct FSoftObjectPath>& AssetPathsToPreload); // Function PlayerMelee_Particle_Component.PlayerMelee_Particle_Component_C.K2_GetPreloadAssetPaths // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct FVector OriginalLocation, struct FRotator OriginalRotation, enum class ELHMMirroringIgnoreType MirroringType, struct FVector& Location, struct FRotator& Rotation, struct FVector& Scale); // Function PlayerMelee_Particle_Component.PlayerMelee_Particle_Component_C. // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322a90
	void StopEffect(enum class EStopEffectType StopEffectType); // Function PlayerMelee_Particle_Component.PlayerMelee_Particle_Component_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x3322a90
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function PlayerMelee_Particle_Component.PlayerMelee_Particle_Component_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x3322a90
	void (float StartTime); // Function PlayerMelee_Particle_Component.PlayerMelee_Particle_Component_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (); // Function PlayerMelee_Particle_Component.PlayerMelee_Particle_Component_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (int32_t EntryPoint); // Function PlayerMelee_Particle_Component.PlayerMelee_Particle_Component_C. // (Final|UbergraphFunction|HasDefaults) // @ game+0x3322a90
};

