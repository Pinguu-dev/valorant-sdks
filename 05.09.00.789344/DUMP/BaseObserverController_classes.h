// BlueprintGeneratedClass BaseObserverController.BaseObserverController_C
// Size: 0xa54 (Inherited: 0xa30)
struct ABaseObserverController_C : AObserverPlayerController {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa30(0x08)
	struct FMulticastInlineDelegate OnScoreboardUpdated; // 0xa38(0x10)
	bool IsScoreboardVisible; // 0xa48(0x01)
	char pad_A49[0x3]; // 0xa49(0x03)
	struct FColor BlueTeamColor; // 0xa4c(0x04)
	struct FColor RedTeamColor; // 0xa50(0x04)

	void InpActEvt_TogglePlayerLoadoutVisibility_K2Node_InputActionEvent_1(struct FKey Key); // Function BaseObserverController.BaseObserverController_C.InpActEvt_TogglePlayerLoadoutVisibility_K2Node_InputActionEvent_1 // (BlueprintEvent) // @ game+0x32f73d0
	void ReceiveBeginPlay(); // Function BaseObserverController.BaseObserverController_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x32f73d0
	void OnScreenTransitionUpdated_Event_1(bool TransitionActive); // Function BaseObserverController.BaseObserverController_C.OnScreenTransitionUpdated_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void OnScoreboardUpdatedEvent(bool Visible); // Function BaseObserverController.BaseObserverController_C.OnScoreboardUpdatedEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void UpdateOutlines(); // Function BaseObserverController.BaseObserverController_C.UpdateOutlines // (Event|Protected|BlueprintEvent) // @ game+0x32f73d0
	void ExecuteUbergraph_BaseObserverController(int32_t EntryPoint); // Function BaseObserverController.BaseObserverController_C.ExecuteUbergraph_BaseObserverController // (Final|UbergraphFunction|HasDefaults) // @ game+0x32f73d0
	void OnScoreboardUpdated__DelegateSignature(bool Visible); // Function BaseObserverController.BaseObserverController_C.OnScoreboardUpdated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
};

