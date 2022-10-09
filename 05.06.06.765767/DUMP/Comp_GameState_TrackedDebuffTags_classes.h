// BlueprintGeneratedClass Comp_GameState_TrackedDebuffTags.Comp_GameState_TrackedDebuffTags_C
// Size: 0x280 (Inherited: 0xe8)
struct UComp_GameState_TrackedDebuffTags_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	struct TMap<struct FGameplayTag, struct FStruct_GameplayTagAndHUD_Info> TrackedTagsAndHUDInfo; // 0xf0(0x50)
	struct TMap<struct FGameplayTag, struct AEffectContainer*> VisualsTrackedTagsAndFXC; // 0x140(0x50)
	struct TMap<struct FGameplayTag, struct FName> VisualsTrackedTagsAndParameterName; // 0x190(0x50)
	struct TSet<struct FGameplayTag> AllTrackedTags; // 0x1e0(0x50)
	struct TSet<struct APawn*> CharacterClassesLoaded; // 0x230(0x50)
};

