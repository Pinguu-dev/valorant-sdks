// WidgetBlueprintGeneratedClass FatalVanguardRebootNotification.FatalVanguardRebootNotification_C
// Size: 0x310 (Inherited: 0x2c8)
struct UFatalVanguardRebootNotification_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct UImage* bgcolor; // 0x2d0(0x08)
	struct UTextBlock* ErrorCodeValueLabel; // 0x2d8(0x08)
	struct UHorizontalBox* GenericErrorCodeContainer; // 0x2e0(0x08)
	struct UTextBlock* IncompatibleSoftware; // 0x2e8(0x08)
	struct UHorizontalBox* IncompatibleSoftwareContainer; // 0x2f0(0x08)
	struct USharedButtonMaster_C* QuitButton; // 0x2f8(0x08)
	struct USharedButtonMaster_C* RebootButton; // 0x300(0x08)
	struct UImage* VanguardLogo; // 0x308(0x08)

	void Update(); // Function FatalVanguardRebootNotification.FatalVanguardRebootNotification_C.Update // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void BndEvt__SharedButtonMaster_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(); // Function FatalVanguardRebootNotification.FatalVanguardRebootNotification_C.BndEvt__SharedButtonMaster_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x3511190
	void BndEvt__SharedButtonMaster_1_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(); // Function FatalVanguardRebootNotification.FatalVanguardRebootNotification_C.BndEvt__SharedButtonMaster_1_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x3511190
	void Construct(); // Function FatalVanguardRebootNotification.FatalVanguardRebootNotification_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3511190
	void ExecuteUbergraph_FatalVanguardRebootNotification(int32_t EntryPoint); // Function FatalVanguardRebootNotification.FatalVanguardRebootNotification_C.ExecuteUbergraph_FatalVanguardRebootNotification // (Final|UbergraphFunction|HasDefaults) // @ game+0x3511190
};

