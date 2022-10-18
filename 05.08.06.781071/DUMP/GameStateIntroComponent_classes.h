// BlueprintGeneratedClass GameStateIntroComponent.GameStateIntroComponent_C
// Size: 0x180 (Inherited: 0x170)
struct UGameStateIntroComponent_C : UBaseGameStateComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x170(0x08)
	struct ABaseGameMode_C* BaseGameMode; // 0x178(0x08)

	void ReceiveBeginPlay(); // Function GameStateIntroComponent.GameStateIntroComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x3520f50
	void OnStateEnterImplementation(); // Function GameStateIntroComponent.GameStateIntroComponent_C.OnStateEnterImplementation // (Event|Protected|BlueprintEvent) // @ game+0x3520f50
	void ExecuteUbergraph_GameStateIntroComponent(int32_t EntryPoint); // Function GameStateIntroComponent.GameStateIntroComponent_C.ExecuteUbergraph_GameStateIntroComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0x3520f50
};

