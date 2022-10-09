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
};

