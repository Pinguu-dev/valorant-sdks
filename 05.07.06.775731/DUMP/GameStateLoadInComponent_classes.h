// BlueprintGeneratedClass GameStateLoadInComponent.GameStateLoadInComponent_C
// Size: 0x1e7 (Inherited: 0x1d0)
struct UGameStateLoadInComponent_C : UTimeGameStateComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1d0(0x08)
	struct ABaseGameMode_C* BaseGameMode; // 0x1d8(0x08)
	float TransitionScreenGracePeriod; // 0x1e0(0x04)
	bool LevelStreamingComplete; // 0x1e4(0x01)
	bool TransitionGracePeriodEnded; // 0x1e5(0x01)
	bool AllPlayersAreReady; // 0x1e6(0x01)

	void OnRoundPlayersReady_Event(); // Function GameStateLoadInComponent.GameStateLoadInComponent_C.OnRoundPlayersReady_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void OnTransitionGracePeriodEnded(); // Function GameStateLoadInComponent.GameStateLoadInComponent_C.OnTransitionGracePeriodEnded // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void CheckLoadInComplete(); // Function GameStateLoadInComponent.GameStateLoadInComponent_C.CheckLoadInComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void CheckLevelStreaming(); // Function GameStateLoadInComponent.GameStateLoadInComponent_C.CheckLevelStreaming // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void ReceiveBeginPlay(); // Function GameStateLoadInComponent.GameStateLoadInComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x3511190
	void OnStateExit (GameStateWarmup)(struct UBaseGameStateComponent* ExitedState, struct UStateTransitionContext* StateTransitionContext); // Function GameStateLoadInComponent.GameStateLoadInComponent_C.OnStateExit (GameStateWarmup) // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void OnStateExit (GameStateIntro)(struct UBaseGameStateComponent* ExitedState, struct UStateTransitionContext* StateTransitionContext); // Function GameStateLoadInComponent.GameStateLoadInComponent_C.OnStateExit (GameStateIntro) // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void OnStateEnterImplementation(); // Function GameStateLoadInComponent.GameStateLoadInComponent_C.OnStateEnterImplementation // (Event|Protected|BlueprintEvent) // @ game+0x3511190
	void OnStateTickImplementation(); // Function GameStateLoadInComponent.GameStateLoadInComponent_C.OnStateTickImplementation // (Event|Protected|BlueprintEvent) // @ game+0x3511190
	void OnStateExitImplementation(); // Function GameStateLoadInComponent.GameStateLoadInComponent_C.OnStateExitImplementation // (Event|Protected|BlueprintEvent) // @ game+0x3511190
	void ExecuteUbergraph_GameStateLoadInComponent(int32_t EntryPoint); // Function GameStateLoadInComponent.GameStateLoadInComponent_C.ExecuteUbergraph_GameStateLoadInComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0x3511190
};

