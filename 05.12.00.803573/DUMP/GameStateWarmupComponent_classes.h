// BlueprintGeneratedClass GameStateWarmupComponent.GameStateWarmupComponent_C
// Size: 0x1e9 (Inherited: 0x1d0)
struct UGameStateWarmupComponent_C : UTimeGameStateComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1d0(0x08)
	struct ABaseGameMode_C* BaseGameMode; // 0x1d8(0x08)
	bool ShouldResetWeaponsAfterWarmup; // 0x1e0(0x01)
	char pad_1E1[0x3]; // 0x1e1(0x03)
	float ; // 0x1e4(0x04)
	bool IsStoreEnabled; // 0x1e8(0x01)

	void (); // Function GameStateWarmupComponent.GameStateWarmupComponent_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function GameStateWarmupComponent.GameStateWarmupComponent_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function GameStateWarmupComponent.GameStateWarmupComponent_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void OnStateEnterImplementation(); // Function GameStateWarmupComponent.GameStateWarmupComponent_C.OnStateEnterImplementation // (Event|Protected|BlueprintEvent) // @ game+0x3322a60
	void OnStateTickImplementation(); // Function GameStateWarmupComponent.GameStateWarmupComponent_C.OnStateTickImplementation // (Event|Protected|BlueprintEvent) // @ game+0x3322a60
	void OnStateExitImplementation(); // Function GameStateWarmupComponent.GameStateWarmupComponent_C.OnStateExitImplementation // (Event|Protected|BlueprintEvent) // @ game+0x3322a60
	void (int32_t EntryPoint); // Function GameStateWarmupComponent.GameStateWarmupComponent_C. // (Final|UbergraphFunction) // @ game+0x3322a60
};

