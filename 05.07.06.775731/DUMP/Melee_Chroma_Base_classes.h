// BlueprintGeneratedClass Melee_Chroma_Base.Melee_Chroma_Base_C
// Size: 0x320 (Inherited: 0x150)
struct UMelee_Chroma_Base_C : UChromaSkinOverride {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x150(0x08)
	struct TArray<struct UMaterialInterface*> MaterialOverrides; // 0x158(0x10)
	struct TArray<struct UMaterialInterface*> 3p Material Overrides; // 0x168(0x10)
	struct TMap<struct TSoftClassPtr<UObject>, struct AEffectContainer*> EffectContainerOverrides; // 0x178(0x50)
	struct TArray<struct UMaterialInterface*> VFX Spawned Mesh Material Override; // 0x1c8(0x10)
	struct UBaseGunSkinVOComponent_C* VO Component; // 0x1d8(0x08)
	struct TMap<struct UAnimSlot1P*, struct UAnimationAsset*> AnimationOverridesMap; // 0x1e0(0x50)
	struct TMap<struct UAnimSlotUpperBody3P*, struct UAnimationAsset*> AnimUpperBody3POverridesMap; // 0x230(0x50)
	struct TMap<struct UAnimSlotLowerBody3P*, struct UAnimationAsset*> AnimLowerBody3POverridesMap; // 0x280(0x50)
	struct TMap<struct UAnimSlot1P*, struct UAnimationAsset*> AltMode_AnimationOverridesMap; // 0x2d0(0x50)

	void ResetMaterialToDefault(int32_t Index, struct UMaterialInterface* Original Material, struct FString& Ignore This); // Function Melee_Chroma_Base.Melee_Chroma_Base_C.ResetMaterialToDefault // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void GetFirstPersonMagazineMaterial(int32_t MaterialSlot, struct UMaterialInstanceDynamic*& DynamicMaterial); // Function Melee_Chroma_Base.Melee_Chroma_Base_C.GetFirstPersonMagazineMaterial // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void GenerateRandomValue(int32_t MaxInts, int32_t& Random Int); // Function Melee_Chroma_Base.Melee_Chroma_Base_C.GenerateRandomValue // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void GetVFXMeshes(struct TArray<struct UStaticMeshComponent*>& Meshes, struct TArray<struct UMaterialInstanceDynamic*>& Dynamic Materials); // Function Melee_Chroma_Base.Melee_Chroma_Base_C.GetVFXMeshes // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void GetFirstPersonMaterial(int32_t MaterialSlot, struct UMaterialInstanceDynamic*& DynamicMaterial, struct UMaterialInterface*& Original Material); // Function Melee_Chroma_Base.Melee_Chroma_Base_C.GetFirstPersonMaterial // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void Get Spawned VFXMeshes from Base(struct TArray<struct UStaticMeshComponent*>& VFX Spawned Meshes); // Function Melee_Chroma_Base.Melee_Chroma_Base_C.Get Spawned VFXMeshes from Base // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void Override Spawned VFXMesh Materials(); // Function Melee_Chroma_Base.Melee_Chroma_Base_C.Override Spawned VFXMesh Materials // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void ReceiveBeginPlay(); // Function Melee_Chroma_Base.Melee_Chroma_Base_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x3511190
	void ExecuteUbergraph_Melee_Chroma_Base(int32_t EntryPoint); // Function Melee_Chroma_Base.Melee_Chroma_Base_C.ExecuteUbergraph_Melee_Chroma_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x3511190
};

