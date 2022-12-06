// BlueprintGeneratedClass Reflex_Particle_Component.Reflex_Particle_Component_C
// Size: 0x158 (Inherited: 0xf8)
struct UReflex_Particle_Component_C : UEffectComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf8(0x08)
	struct USceneComponent* ; // 0x100(0x08)
	struct TArray<struct FGunSkinParticleInfo> ; // 0x108(0x10)
	struct AGun_C* Weapon; // 0x118(0x08)
	struct TArray<struct UParticleSystemComponent*> ; // 0x120(0x10)
	struct FLinearColor NewVar_1; // 0x130(0x10)
	struct TArray<struct FName> ; // 0x140(0x10)
	struct UTexture* GradientTexture; // 0x150(0x08)

	void (enum class EAresParticleVariantColor Variant Color); // Function Reflex_Particle_Component.Reflex_Particle_Component_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct UParticleSystemComponent* , struct AGun_Zoomable_C* Gun); // Function Reflex_Particle_Component.Reflex_Particle_Component_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	bool (struct AGun_Zoomable_C* Gun); // Function Reflex_Particle_Component.Reflex_Particle_Component_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322a60
	void K2_GetPreloadAssetPaths(int32_t AssetTypes, struct TArray<struct FSoftObjectPath>& AssetPathsToPreload); // Function Reflex_Particle_Component.Reflex_Particle_Component_C.K2_GetPreloadAssetPaths // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct TArray<struct UParticleSystemComponent*>& ); // Function Reflex_Particle_Component.Reflex_Particle_Component_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322a60
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function Reflex_Particle_Component.Reflex_Particle_Component_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x3322a60
	void StopEffect(enum class EStopEffectType StopEffectType); // Function Reflex_Particle_Component.Reflex_Particle_Component_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x3322a60
	void (int32_t EntryPoint); // Function Reflex_Particle_Component.Reflex_Particle_Component_C. // (Final|UbergraphFunction|HasDefaults) // @ game+0x3322a60
};

