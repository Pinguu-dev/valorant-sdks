// WidgetBlueprintGeneratedClass FatalVanguardErrorNotification.FatalVanguardErrorNotification_C
// Size: 0x2f8 (Inherited: 0x2c8)
struct UFatalVanguardErrorNotification_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct UImage* bgcolor; // 0x2d0(0x08)
	struct UTextBlock* ConnectionErrorHeaderText; // 0x2d8(0x08)
	struct UTextBlock* ErrorCodeValueLabel; // 0x2e0(0x08)
	struct UHorizontalBox* GenericErrorCodeContainer; // 0x2e8(0x08)
	struct USharedButtonMaster_C* SharedButtonMaster; // 0x2f0(0x08)

	void Update(); // Function FatalVanguardErrorNotification.FatalVanguardErrorNotification_C.Update // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void BndEvt__SharedButtonMaster_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(); // Function FatalVanguardErrorNotification.FatalVanguardErrorNotification_C.BndEvt__SharedButtonMaster_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x3511190
	void Construct(); // Function FatalVanguardErrorNotification.FatalVanguardErrorNotification_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3511190
	void ExecuteUbergraph_FatalVanguardErrorNotification(int32_t EntryPoint); // Function FatalVanguardErrorNotification.FatalVanguardErrorNotification_C.ExecuteUbergraph_FatalVanguardErrorNotification // (Final|UbergraphFunction|HasDefaults) // @ game+0x3511190
};

