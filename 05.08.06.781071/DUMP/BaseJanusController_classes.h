// BlueprintGeneratedClass BaseJanusController.BaseJanusController_C
// Size: 0x86c (Inherited: 0x840)
struct ABaseJanusController_C : AReplayPlayerController {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x840(0x08)
	struct ULocationalEffectManagerComponent* LocationalEffectManager; // 0x848(0x08)
	struct UReplayEffectComponent* ReplayEffect; // 0x850(0x08)
	float ReplaySpeedIncrement; // 0x858(0x04)
	char pad_85C[0x4]; // 0x85c(0x04)
	struct UJanusLineWidget_C* TimelineWidget; // 0x860(0x08)
	float MaxReplaySpeed; // 0x868(0x04)

	void InpActEvt_ToggleJanusUI_K2Node_InputActionEvent_5(struct FKey Key); // Function BaseJanusController.BaseJanusController_C.InpActEvt_ToggleJanusUI_K2Node_InputActionEvent_5 // (BlueprintEvent) // @ game+0x3520f50
	void InpActEvt_ToggleJanusProgress_K2Node_InputActionEvent_4(struct FKey Key); // Function BaseJanusController.BaseJanusController_C.InpActEvt_ToggleJanusProgress_K2Node_InputActionEvent_4 // (BlueprintEvent) // @ game+0x3520f50
	void InpActEvt_JanusSpdUp_K2Node_InputActionEvent_3(struct FKey Key); // Function BaseJanusController.BaseJanusController_C.InpActEvt_JanusSpdUp_K2Node_InputActionEvent_3 // (BlueprintEvent) // @ game+0x3520f50
	void InpActEvt_JanusSpdDown_K2Node_InputActionEvent_2(struct FKey Key); // Function BaseJanusController.BaseJanusController_C.InpActEvt_JanusSpdDown_K2Node_InputActionEvent_2 // (BlueprintEvent) // @ game+0x3520f50
	void InpActEvt_ToggleMouseCursor_K2Node_InputActionEvent_1(struct FKey Key); // Function BaseJanusController.BaseJanusController_C.InpActEvt_ToggleMouseCursor_K2Node_InputActionEvent_1 // (BlueprintEvent) // @ game+0x3520f50
	void ReceiveBeginPlay(); // Function BaseJanusController.BaseJanusController_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x3520f50
	void ExecuteUbergraph_BaseJanusController(int32_t EntryPoint); // Function BaseJanusController.BaseJanusController_C.ExecuteUbergraph_BaseJanusController // (Final|UbergraphFunction|HasDefaults) // @ game+0x3520f50
};

