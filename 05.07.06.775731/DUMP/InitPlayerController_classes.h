// BlueprintGeneratedClass InitPlayerController.InitPlayerController_C
// Size: 0x748 (Inherited: 0x738)
struct AInitPlayerController_C : ARNetInitPlayerController {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x738(0x08)
	struct UInitScreenBase_C* InitScreen; // 0x740(0x08)

	void RestoreDefaultInputMode(); // Function InitPlayerController.InitPlayerController_C.RestoreDefaultInputMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void ReceiveBeginPlay(); // Function InitPlayerController.InitPlayerController_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x3511190
	void ExecuteUbergraph_InitPlayerController(int32_t EntryPoint); // Function InitPlayerController.InitPlayerController_C.ExecuteUbergraph_InitPlayerController // (Final|UbergraphFunction|HasDefaults) // @ game+0x3511190
};

