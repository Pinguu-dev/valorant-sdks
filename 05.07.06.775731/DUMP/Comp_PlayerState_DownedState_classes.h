// BlueprintGeneratedClass Comp_PlayerState_DownedState.Comp_PlayerState_DownedState_C
// Size: 0x128 (Inherited: 0xe8)
struct UComp_PlayerState_DownedState_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	struct FTimerHandle DownedTimerHandle; // 0xf0(0x08)
	struct FMulticastInlineDelegate OnDownedTimedOut; // 0xf8(0x10)
	struct FMulticastInlineDelegate OnTimerPaused; // 0x108(0x10)
	struct FMulticastInlineDelegate OnTimerUnpaused; // 0x118(0x10)

	void IsDowned(bool& bIsDowned); // Function Comp_PlayerState_DownedState.Comp_PlayerState_DownedState_C.IsDowned // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x3511190
	void GetRemainingDownedTime(float& Time Remaining); // Function Comp_PlayerState_DownedState.Comp_PlayerState_DownedState_C.GetRemainingDownedTime // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x3511190
	void AuthExitDowned(); // Function Comp_PlayerState_DownedState.Comp_PlayerState_DownedState_C.AuthExitDowned // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void AuthUnpauseDownedTimer(); // Function Comp_PlayerState_DownedState.Comp_PlayerState_DownedState_C.AuthUnpauseDownedTimer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void AuthPauseDownedTimer(); // Function Comp_PlayerState_DownedState.Comp_PlayerState_DownedState_C.AuthPauseDownedTimer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void AuthEnterDowned(float DownedTimeLimit); // Function Comp_PlayerState_DownedState.Comp_PlayerState_DownedState_C.AuthEnterDowned // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void MulticastStartDownedTimer(float DownedTimeLimit); // Function Comp_PlayerState_DownedState.Comp_PlayerState_DownedState_C.MulticastStartDownedTimer // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void OnDownedTimerExpired(); // Function Comp_PlayerState_DownedState.Comp_PlayerState_DownedState_C.OnDownedTimerExpired // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void MulticastPauseDownedTimer(); // Function Comp_PlayerState_DownedState.Comp_PlayerState_DownedState_C.MulticastPauseDownedTimer // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void MulticastUnpauseDownedTimer(); // Function Comp_PlayerState_DownedState.Comp_PlayerState_DownedState_C.MulticastUnpauseDownedTimer // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void MulticastEndDownedTimer(); // Function Comp_PlayerState_DownedState.Comp_PlayerState_DownedState_C.MulticastEndDownedTimer // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void ReceiveBeginPlay(); // Function Comp_PlayerState_DownedState.Comp_PlayerState_DownedState_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x3511190
	void OnRoundEnd(int32_t RoundNumberEnded); // Function Comp_PlayerState_DownedState.Comp_PlayerState_DownedState_C.OnRoundEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void OnAliveStateChanged(bool NewValue); // Function Comp_PlayerState_DownedState.Comp_PlayerState_DownedState_C.OnAliveStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void ExecuteUbergraph_Comp_PlayerState_DownedState(int32_t EntryPoint); // Function Comp_PlayerState_DownedState.Comp_PlayerState_DownedState_C.ExecuteUbergraph_Comp_PlayerState_DownedState // (Final|UbergraphFunction|HasDefaults) // @ game+0x3511190
	void OnTimerUnpaused__DelegateSignature(); // Function Comp_PlayerState_DownedState.Comp_PlayerState_DownedState_C.OnTimerUnpaused__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void OnTimerPaused__DelegateSignature(); // Function Comp_PlayerState_DownedState.Comp_PlayerState_DownedState_C.OnTimerPaused__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void OnDownedTimedOut__DelegateSignature(); // Function Comp_PlayerState_DownedState.Comp_PlayerState_DownedState_C.OnDownedTimedOut__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
};

