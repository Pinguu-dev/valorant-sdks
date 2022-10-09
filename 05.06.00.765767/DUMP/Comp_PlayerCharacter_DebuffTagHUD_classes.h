// BlueprintGeneratedClass Comp_PlayerCharacter_DebuffTagHUD.Comp_PlayerCharacter_DebuffTagHUD_C
// Size: 0x148 (Inherited: 0xe8)
struct UComp_PlayerCharacter_DebuffTagHUD_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	struct TArray<struct FStruct_GameplayTagAndHUD_Info> ActiveGameplayTags; // 0xf0(0x10)
	struct FMulticastInlineDelegate TagAdded; // 0x100(0x10)
	struct FMulticastInlineDelegate TagRemoved; // 0x110(0x10)
	struct TArray<struct FStruct_GameplayTagAndHUD_Info> CharacterTrackedGameplayTags; // 0x120(0x10)
	struct UAresAbilitySystemComponent* OwnerAbilitySystem; // 0x130(0x08)
	struct UComp_GameState_TrackedDebuffTags_C* Comp_GameState_TrackedDebuffTags; // 0x138(0x08)
	struct ABaseGameState_C* OwningGameState; // 0x140(0x08)
};

