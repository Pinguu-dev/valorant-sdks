// WidgetBlueprintGeneratedClass InitFailure.InitFailure_C
// Size: 0x308 (Inherited: 0x2c8)
struct UInitFailure_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct UImage* BackgrounTint; // 0x2d0(0x08)
	struct UTextBlock* ErrorCode; // 0x2d8(0x08)
	struct UTextBlock* ErrorText; // 0x2e0(0x08)
	struct UInitDirectConnect_C* InitDirectConnect; // 0x2e8(0x08)
	struct USharedButtonMaster_C* LogoutShared; // 0x2f0(0x08)
	struct USharedButtonMaster_C* QuitShared; // 0x2f8(0x08)
	struct UTextBlock* TickerText; // 0x300(0x08)

	void GetDirectConnectVisability(enum class ESlateVisibility& DirectConnectVisability); // Function InitFailure.InitFailure_C.GetDirectConnectVisability // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3520f50
	void GetTickerText(struct FText& TickerText); // Function InitFailure.InitFailure_C.GetTickerText // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3520f50
	void UpdateState(); // Function InitFailure.InitFailure_C.UpdateState // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void GetErrorCodeText(struct FText& ErrorCodeText); // Function InitFailure.InitFailure_C.GetErrorCodeText // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3520f50
	void GetErrorText(struct FText& ErrorText); // Function InitFailure.InitFailure_C.GetErrorText // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3520f50
	void Construct(); // Function InitFailure.InitFailure_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3520f50
	void BndEvt__ShipQuitShared_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature(); // Function InitFailure.InitFailure_C.BndEvt__ShipQuitShared_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x3520f50
	void BndEvt__ShipLogoutShared_K2Node_ComponentBoundEvent_7_Clicked__DelegateSignature(); // Function InitFailure.InitFailure_C.BndEvt__ShipLogoutShared_K2Node_ComponentBoundEvent_7_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x3520f50
	void OnSignoutAllowed(); // Function InitFailure.InitFailure_C.OnSignoutAllowed // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void OnSignoutNotAllowed(); // Function InitFailure.InitFailure_C.OnSignoutNotAllowed // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void ExecuteUbergraph_InitFailure(int32_t EntryPoint); // Function InitFailure.InitFailure_C.ExecuteUbergraph_InitFailure // (Final|UbergraphFunction) // @ game+0x3520f50
};

