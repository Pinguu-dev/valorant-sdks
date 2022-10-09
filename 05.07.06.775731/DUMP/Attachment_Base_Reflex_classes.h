// BlueprintGeneratedClass Attachment_Base_Reflex.Attachment_Base_Reflex_C
// Size: 0x1e1 (Inherited: 0x120)
struct UAttachment_Base_Reflex_C : UAttachment_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x120(0x08)
	struct FName SocketName; // 0x128(0x0c)
	char pad_134[0x4]; // 0x134(0x04)
	struct TSoftObjectPtr<USkeletalMesh> 1pReflexMesh; // 0x138(0x30)
	struct USkeletalMeshComponent* ReflexMesh1PSpawned; // 0x168(0x08)
	struct UStaticMeshComponent* ReflexMesh3PSpawned; // 0x170(0x08)
	float ScopedStabilityMultiplier; // 0x178(0x04)
	char pad_17C[0x4]; // 0x17c(0x04)
	struct TArray<struct UMaterialInterface*> MaterialOverrides; // 0x180(0x10)
	struct TSoftObjectPtr<UStaticMesh> 3pReflexMesh; // 0x190(0x30)
	struct TArray<struct UMaterialInterface*> 3pMaterialOverrides; // 0x1c0(0x10)
	struct USkeletalMeshComponent* 1P Parent Mesh; // 0x1d0(0x08)
	struct UObject* AnimBlueprint; // 0x1d8(0x08)
	enum class Variant_Color_Enum Variant Color; // 0x1e0(0x01)

	void GetVFXMeshes(struct TArray<struct UStaticMeshComponent*>& Meshes, struct TArray<struct UMaterialInstanceDynamic*>& Dynamic Materials); // Function Attachment_Base_Reflex.Attachment_Base_Reflex_C.GetVFXMeshes // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void GetFirstPersonMaterial(int32_t MaterialSlot, struct UMaterialInstanceDynamic*& DynamicMaterial, struct UMaterialInterface*& Original Material); // Function Attachment_Base_Reflex.Attachment_Base_Reflex_C.GetFirstPersonMaterial // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void GenerateRandomValue(int32_t MaxInts, int32_t& Random Int); // Function Attachment_Base_Reflex.Attachment_Base_Reflex_C.GenerateRandomValue // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void GetFirstPersonMagazineMaterial(int32_t MaterialSlot, struct UMaterialInstanceDynamic*& DynamicMaterial); // Function Attachment_Base_Reflex.Attachment_Base_Reflex_C.GetFirstPersonMagazineMaterial // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void ResetMaterialToDefault(int32_t Index, struct UMaterialInterface* Original Material, struct FString& Ignore This); // Function Attachment_Base_Reflex.Attachment_Base_Reflex_C.ResetMaterialToDefault // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void Override Variant Color(struct TArray<struct UMaterialInterface*>& Material Array); // Function Attachment_Base_Reflex.Attachment_Base_Reflex_C.Override Variant Color // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void PlayInspect(struct AEffectContainer* Inspect FXC, struct FEffectID& Effect ID); // Function Attachment_Base_Reflex.Attachment_Base_Reflex_C.PlayInspect // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void K2_GetPreloadAssetPaths(int32_t AssetTypes, struct TArray<struct FSoftObjectPath>& AssetPathsToPreload); // Function Attachment_Base_Reflex.Attachment_Base_Reflex_C.K2_GetPreloadAssetPaths // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void PlayReload(struct AEffectContainer* Reload FXC, struct FEffectID& Effect ID); // Function Attachment_Base_Reflex.Attachment_Base_Reflex_C.PlayReload // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void PlayEquip(struct AEffectContainer* EquipFXC, struct FEffectID& Effect ID); // Function Attachment_Base_Reflex.Attachment_Base_Reflex_C.PlayEquip // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void Begin Idle Sequence(); // Function Attachment_Base_Reflex.Attachment_Base_Reflex_C.Begin Idle Sequence // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void ToggleScopeVisibility(bool Visible); // Function Attachment_Base_Reflex.Attachment_Base_Reflex_C.ToggleScopeVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void SetScopeColor(struct FColor NewColor); // Function Attachment_Base_Reflex.Attachment_Base_Reflex_C.SetScopeColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void OnRep_Stablity(); // Function Attachment_Base_Reflex.Attachment_Base_Reflex_C.OnRep_Stablity // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void AddToGun (Override This One)(); // Function Attachment_Base_Reflex.Attachment_Base_Reflex_C.AddToGun (Override This One) // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void ExecuteUbergraph_Attachment_Base_Reflex(int32_t EntryPoint); // Function Attachment_Base_Reflex.Attachment_Base_Reflex_C.ExecuteUbergraph_Attachment_Base_Reflex // (Final|UbergraphFunction|HasDefaults) // @ game+0x3511190
};

