// BlueprintGeneratedClass GameStateGameOverComponent.GameStateGameOverComponent_C
// Size: 0x1e0 (Inherited: 0x1d0)
struct UGameStateGameOverComponent_C : UTimeGameStateComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1d0(0x08)
	struct ABaseGameMode_C* BaseGameMode; // 0x1d8(0x08)

	void OnStateEnterImplementation(); // Function GameStateGameOverComponent.GameStateGameOverComponent_C.OnStateEnterImplementation // (Event|Protected|BlueprintEvent) // @ game+0x3520f50
	void OnStateExitImplementation(); // Function GameStateGameOverComponent.GameStateGameOverComponent_C.OnStateExitImplementation // (Event|Protected|BlueprintEvent) // @ game+0x3520f50
	void ReceiveBeginPlay(); // Function GameStateGameOverComponent.GameStateGameOverComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x3520f50
	void ExecuteUbergraph_GameStateGameOverComponent(int32_t EntryPoint); // Function GameStateGameOverComponent.GameStateGameOverComponent_C.ExecuteUbergraph_GameStateGameOverComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0x3520f50
};

