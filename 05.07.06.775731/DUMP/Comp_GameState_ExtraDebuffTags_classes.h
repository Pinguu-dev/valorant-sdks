// BlueprintGeneratedClass Comp_GameState_ExtraDebuffTags.Comp_GameState_ExtraDebuffTags_C
// Size: 0x1a0 (Inherited: 0xe8)
struct UComp_GameState_ExtraDebuffTags_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	struct TArray<struct FStruct_GameplayTagAndHUD_Info> HUDTrackedTags; // 0xf0(0x10)
	struct TMap<struct FGameplayTag, struct AEffectContainer*> VisualsTrackedTagAndFXC; // 0x100(0x50)
	struct TMap<struct FGameplayTag, struct FName> VisualsTrackedTagAndName; // 0x150(0x50)

	void ReceiveBeginPlay(); // Function Comp_GameState_ExtraDebuffTags.Comp_GameState_ExtraDebuffTags_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x3511190
	void ExecuteUbergraph_Comp_GameState_ExtraDebuffTags(int32_t EntryPoint); // Function Comp_GameState_ExtraDebuffTags.Comp_GameState_ExtraDebuffTags_C.ExecuteUbergraph_Comp_GameState_ExtraDebuffTags // (Final|UbergraphFunction) // @ game+0x3511190
};

