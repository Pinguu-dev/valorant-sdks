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

	void CheckIfTailTag(struct UAbilitySystemComponent* AbilitySystem, struct FGameplayTag Tag, bool& BuffIsATail); // Function Comp_PlayerCharacter_DebuffTagHUD.Comp_PlayerCharacter_DebuffTagHUD_C.CheckIfTailTag // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x32f73d0
	void GetActiveHUD_Tags(struct TArray<struct FStruct_GameplayTagAndHUD_Info>& ActiveGameplayTags); // Function Comp_PlayerCharacter_DebuffTagHUD.Comp_PlayerCharacter_DebuffTagHUD_C.GetActiveHUD_Tags // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x32f73d0
	void GetFullInfoStructureFromActiveTags(struct FGameplayTag InTag, bool& Success, struct FStruct_GameplayTagAndHUD_Info& Array Element, int32_t& Array Index); // Function Comp_PlayerCharacter_DebuffTagHUD.Comp_PlayerCharacter_DebuffTagHUD_C.GetFullInfoStructureFromActiveTags // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void MatchTagInArray(struct FGameplayTag InTag, struct TArray<struct FStruct_GameplayTagAndHUD_Info>& TagArray, bool& Success, struct FStruct_GameplayTagAndHUD_Info& Array Element, int32_t& Array Index); // Function Comp_PlayerCharacter_DebuffTagHUD.Comp_PlayerCharacter_DebuffTagHUD_C.MatchTagInArray // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void Handle Tag Update(struct UAresAbilitySystemComponent* AresAbilitySystem, struct FGameplayTag GameplayTag, bool Active); // Function Comp_PlayerCharacter_DebuffTagHUD.Comp_PlayerCharacter_DebuffTagHUD_C.Handle Tag Update // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void ReceiveBeginPlay(); // Function Comp_PlayerCharacter_DebuffTagHUD.Comp_PlayerCharacter_DebuffTagHUD_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x32f73d0
	void HandleGameplayTagChanged(struct UAresAbilitySystemComponent* AbilitySystem, struct FGameplayTag Tag, bool TagActive); // Function Comp_PlayerCharacter_DebuffTagHUD.Comp_PlayerCharacter_DebuffTagHUD_C.HandleGameplayTagChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void ExecuteUbergraph_Comp_PlayerCharacter_DebuffTagHUD(int32_t EntryPoint); // Function Comp_PlayerCharacter_DebuffTagHUD.Comp_PlayerCharacter_DebuffTagHUD_C.ExecuteUbergraph_Comp_PlayerCharacter_DebuffTagHUD // (Final|UbergraphFunction|HasDefaults) // @ game+0x32f73d0
	void TagRemoved__DelegateSignature(struct FStruct_GameplayTagAndHUD_Info TagInfo); // Function Comp_PlayerCharacter_DebuffTagHUD.Comp_PlayerCharacter_DebuffTagHUD_C.TagRemoved__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void TagAdded__DelegateSignature(struct FStruct_GameplayTagAndHUD_Info TagInfo); // Function Comp_PlayerCharacter_DebuffTagHUD.Comp_PlayerCharacter_DebuffTagHUD_C.TagAdded__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
};

