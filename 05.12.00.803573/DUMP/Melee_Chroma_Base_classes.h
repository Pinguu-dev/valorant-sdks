// BlueprintGeneratedClass Melee_Chroma_Base.Melee_Chroma_Base_C
// Size: 0x321 (Inherited: 0x150)
struct UMelee_Chroma_Base_C : UChromaSkinOverride {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x150(0x08)
	struct TArray<struct UMaterialInterface*> MaterialOverrides; // 0x158(0x10)
	struct TArray<struct UMaterialInterface*> 3p Material Overrides; // 0x168(0x10)
	struct TMap<struct TSoftClassPtr<UObject>, struct AEffectContainer*> EffectContainerOverrides; // 0x178(0x50)
	struct TArray<struct UMaterialInterface*> ; // 0x1c8(0x10)
	struct UBaseGunSkinVOComponent_C* VO Component; // 0x1d8(0x08)
	struct TMap<struct UAnimSlot1P*, struct UAnimationAsset*> ; // 0x1e0(0x50)
	struct TMap<struct UAnimSlotUpperBody3P*, struct UAnimationAsset*> ; // 0x230(0x50)
	struct TMap<struct UAnimSlotLowerBody3P*, struct UAnimationAsset*> ; // 0x280(0x50)
	struct TMap<struct UAnimSlot1P*, struct UAnimationAsset*> ; // 0x2d0(0x50)
	enum class Variant_Color_Enum Variant Color; // 0x320(0x01)

	void ResetMaterialToDefault(int32_t Index, struct UMaterialInterface* Original Material, struct FString& Ignore This); // Function Melee_Chroma_Base.Melee_Chroma_Base_C.ResetMaterialToDefault // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void GetFirstPersonMagazineMaterial(int32_t MaterialSlot, struct UMaterialInstanceDynamic*& DynamicMaterial); // Function Melee_Chroma_Base.Melee_Chroma_Base_C.GetFirstPersonMagazineMaterial // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void GenerateRandomValue(int32_t MaxInts, int32_t& Random Int); // Function Melee_Chroma_Base.Melee_Chroma_Base_C.GenerateRandomValue // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void GetVFXMeshes(struct TArray<struct UStaticMeshComponent*>& Meshes, struct TArray<struct UMaterialInstanceDynamic*>& Dynamic Materials); // Function Melee_Chroma_Base.Melee_Chroma_Base_C.GetVFXMeshes // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void GetFirstPersonMaterial(int32_t MaterialSlot, struct UMaterialInstanceDynamic*& DynamicMaterial, struct UMaterialInterface*& Original Material); // Function Melee_Chroma_Base.Melee_Chroma_Base_C.GetFirstPersonMaterial // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function Melee_Chroma_Base.Melee_Chroma_Base_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct TArray<struct UMaterialInterface*>& ); // Function Melee_Chroma_Base.Melee_Chroma_Base_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct TArray<struct UStaticMeshComponent*>& VFX Spawned Meshes); // Function Melee_Chroma_Base.Melee_Chroma_Base_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function Melee_Chroma_Base.Melee_Chroma_Base_C. // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void ReceiveBeginPlay(); // Function Melee_Chroma_Base.Melee_Chroma_Base_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x3322a60
	void (int32_t EntryPoint); // Function Melee_Chroma_Base.Melee_Chroma_Base_C. // (Final|UbergraphFunction|HasDefaults) // @ game+0x3322a60
};

