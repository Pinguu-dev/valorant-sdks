// BlueprintGeneratedClass Comp_PlayerState_DownedState.Comp_PlayerState_DownedState_C
// Size: 0x128 (Inherited: 0xe8)
struct UComp_PlayerState_DownedState_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	struct FTimerHandle DownedTimerHandle; // 0xf0(0x08)
	struct FMulticastInlineDelegate OnDownedTimedOut; // 0xf8(0x10)
	struct FMulticastInlineDelegate OnTimerPaused; // 0x108(0x10)
	struct FMulticastInlineDelegate OnTimerUnpaused; // 0x118(0x10)
};

