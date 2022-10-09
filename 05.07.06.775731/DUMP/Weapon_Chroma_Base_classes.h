// BlueprintGeneratedClass Weapon_Chroma_Base.Weapon_Chroma_Base_C
// Size: 0x261 (Inherited: 0x150)
struct UWeapon_Chroma_Base_C : UChromaSkinOverride {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x150(0x08)
	struct TArray<struct UMaterialInterface*> MaterialOverrides; // 0x158(0x10)
	struct TArray<struct UMaterialInterface*> 1pMagazine MaterialOverrides; // 0x168(0x10)
	struct TArray<struct UMaterialInterface*> 3p Material Overrides; // 0x178(0x10)
	struct TArray<struct UMaterialInterface*> 3pMagazineMaterial Overrides; // 0x188(0x10)
	struct AProjectile_Gun_C* Projectile; // 0x198(0x08)
	struct FLinearColor KillBannerChromaColor; // 0x1a0(0x10)
	struct AEffectContainer* FXC Kill Effect; // 0x1b0(0x08)
	struct TMap<struct TSoftClassPtr<UObject>, struct AEffectContainer*> EffectContainerOverrides; // 0x1b8(0x50)
	struct AEffectContainer* FXC Victim Finisher; // 0x208(0x08)
	struct AEffectContainer* FXC Killer Finisher; // 0x210(0x08)
	struct UMaterialInterface* Bullet Material; // 0x218(0x08)
	struct UMaterialInterface* BuddyMountMaterial; // 0x220(0x08)
	struct UMaterialInterface* Shell Casing Material 1P; // 0x228(0x08)
	struct UMaterialInterface* Shell Casing Material 3P; // 0x230(0x08)
	struct TArray<struct UMaterialInterface*> VFX Spawned Mesh Material Override; // 0x238(0x10)
	struct UKillBannerData* KillBannerData; // 0x248(0x08)
	struct UBaseGunSkinVOComponent_C* NewVar_1; // 0x250(0x08)
	struct UBaseGunSkinVOComponent_C* VO Component; // 0x258(0x08)
	enum class Variant_Color_Enum Variant Color; // 0x260(0x01)

	void ResetMaterialToDefault(int32_t Index, struct UMaterialInterface* Original Material, struct FString& Ignore This); // Function Weapon_Chroma_Base.Weapon_Chroma_Base_C.ResetMaterialToDefault // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void GetFirstPersonMagazineMaterial(int32_t MaterialSlot, struct UMaterialInstanceDynamic*& DynamicMaterial); // Function Weapon_Chroma_Base.Weapon_Chroma_Base_C.GetFirstPersonMagazineMaterial // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void GenerateRandomValue(int32_t MaxInts, int32_t& Random Int); // Function Weapon_Chroma_Base.Weapon_Chroma_Base_C.GenerateRandomValue // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void GetVFXMeshes(struct TArray<struct UStaticMeshComponent*>& Meshes, struct TArray<struct UMaterialInstanceDynamic*>& Dynamic Materials); // Function Weapon_Chroma_Base.Weapon_Chroma_Base_C.GetVFXMeshes // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void GetFirstPersonMaterial(int32_t MaterialSlot, struct UMaterialInstanceDynamic*& DynamicMaterial, struct UMaterialInterface*& Original Material); // Function Weapon_Chroma_Base.Weapon_Chroma_Base_C.GetFirstPersonMaterial // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void Override Variant Color(struct TArray<struct UMaterialInterface*>& Material Array); // Function Weapon_Chroma_Base.Weapon_Chroma_Base_C.Override Variant Color // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void Create Variant Materials(); // Function Weapon_Chroma_Base.Weapon_Chroma_Base_C.Create Variant Materials // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void AreSoftRefsLoaded(bool& Are Loaded); // Function Weapon_Chroma_Base.Weapon_Chroma_Base_C.AreSoftRefsLoaded // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void K2_GetPreloadAssetPaths(int32_t AssetTypes, struct TArray<struct FSoftObjectPath>& AssetPathsToPreload); // Function Weapon_Chroma_Base.Weapon_Chroma_Base_C.K2_GetPreloadAssetPaths // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void Get Spawned VFXMeshes from Base(struct TArray<struct UStaticMeshComponent*>& VFX Spawned Meshes); // Function Weapon_Chroma_Base.Weapon_Chroma_Base_C.Get Spawned VFXMeshes from Base // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void Override Spawned VFXMesh Materials(); // Function Weapon_Chroma_Base.Weapon_Chroma_Base_C.Override Spawned VFXMesh Materials // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void ReceiveBeginPlay(); // Function Weapon_Chroma_Base.Weapon_Chroma_Base_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x3511190
	void K2_OnAssetsLoaded(int32_t AssetTypes); // Function Weapon_Chroma_Base.Weapon_Chroma_Base_C.K2_OnAssetsLoaded // (Event|Public|BlueprintEvent) // @ game+0x3511190
	void ExecuteUbergraph_Weapon_Chroma_Base(int32_t EntryPoint); // Function Weapon_Chroma_Base.Weapon_Chroma_Base_C.ExecuteUbergraph_Weapon_Chroma_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x3511190
};

