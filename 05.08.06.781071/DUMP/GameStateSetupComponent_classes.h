// BlueprintGeneratedClass GameStateSetupComponent.GameStateSetupComponent_C
// Size: 0x1e0 (Inherited: 0x1d0)
struct UGameStateSetupComponent_C : UTimeGameStateComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1d0(0x08)
	struct ABaseGameMode_C* BaseGameMode; // 0x1d8(0x08)

	void DestroyDisconnectedPlayerCharacters(); // Function GameStateSetupComponent.GameStateSetupComponent_C.DestroyDisconnectedPlayerCharacters // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void ReceiveBeginPlay(); // Function GameStateSetupComponent.GameStateSetupComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x3520f50
	void OnStateExitImplementation(); // Function GameStateSetupComponent.GameStateSetupComponent_C.OnStateExitImplementation // (Event|Protected|BlueprintEvent) // @ game+0x3520f50
	void OnStateTickImplementation(); // Function GameStateSetupComponent.GameStateSetupComponent_C.OnStateTickImplementation // (Event|Protected|BlueprintEvent) // @ game+0x3520f50
	void OnStateEnterImplementation(); // Function GameStateSetupComponent.GameStateSetupComponent_C.OnStateEnterImplementation // (Event|Protected|BlueprintEvent) // @ game+0x3520f50
	void ExecuteUbergraph_GameStateSetupComponent(int32_t EntryPoint); // Function GameStateSetupComponent.GameStateSetupComponent_C.ExecuteUbergraph_GameStateSetupComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0x3520f50
};

