// BlueprintGeneratedClass Comp_PlayerState_DownedState.Comp_PlayerState_DownedState_C
// Size: 0x128 (Inherited: 0xe8)
struct UComp_PlayerState_DownedState_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	struct FTimerHandle ; // 0xf0(0x08)
	struct FMulticastInlineDelegate ; // 0xf8(0x10)
	struct FMulticastInlineDelegate ; // 0x108(0x10)
	struct FMulticastInlineDelegate ; // 0x118(0x10)

	void IsDowned(bool& bIsDowned); // Function Comp_PlayerState_DownedState.Comp_PlayerState_DownedState_C.IsDowned // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x3322a90
	void (float& ); // Function Comp_PlayerState_DownedState.Comp_PlayerState_DownedState_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x3322a90
	void AuthExitDowned(); // Function Comp_PlayerState_DownedState.Comp_PlayerState_DownedState_C.AuthExitDowned // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void AuthUnpauseDownedTimer(); // Function Comp_PlayerState_DownedState.Comp_PlayerState_DownedState_C.AuthUnpauseDownedTimer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void AuthPauseDownedTimer(); // Function Comp_PlayerState_DownedState.Comp_PlayerState_DownedState_C.AuthPauseDownedTimer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void AuthEnterDowned(float ); // Function Comp_PlayerState_DownedState.Comp_PlayerState_DownedState_C.AuthEnterDowned // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (float ); // Function Comp_PlayerState_DownedState.Comp_PlayerState_DownedState_C. // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (); // Function Comp_PlayerState_DownedState.Comp_PlayerState_DownedState_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (); // Function Comp_PlayerState_DownedState.Comp_PlayerState_DownedState_C. // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (); // Function Comp_PlayerState_DownedState.Comp_PlayerState_DownedState_C. // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (); // Function Comp_PlayerState_DownedState.Comp_PlayerState_DownedState_C. // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void ReceiveBeginPlay(); // Function Comp_PlayerState_DownedState.Comp_PlayerState_DownedState_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x3322a90
	void OnRoundEnd(int32_t RoundNumberEnded); // Function Comp_PlayerState_DownedState.Comp_PlayerState_DownedState_C.OnRoundEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void OnAliveStateChanged(bool NewValue); // Function Comp_PlayerState_DownedState.Comp_PlayerState_DownedState_C.OnAliveStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (int32_t EntryPoint); // Function Comp_PlayerState_DownedState.Comp_PlayerState_DownedState_C. // (Final|UbergraphFunction|HasDefaults) // @ game+0x3322a90
	void (); // Function Comp_PlayerState_DownedState.Comp_PlayerState_DownedState_C. // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (); // Function Comp_PlayerState_DownedState.Comp_PlayerState_DownedState_C. // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (); // Function Comp_PlayerState_DownedState.Comp_PlayerState_DownedState_C. // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
};

