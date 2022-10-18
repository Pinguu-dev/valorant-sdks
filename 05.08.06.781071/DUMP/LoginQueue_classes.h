// WidgetBlueprintGeneratedClass LoginQueue.LoginQueue_C
// Size: 0x308 (Inherited: 0x2c8)
struct ULoginQueue_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct UImage* BackgroundTint; // 0x2d0(0x08)
	struct USharedButtonMaster_C* ExitButton; // 0x2d8(0x08)
	struct USharedButtonMaster_C* LogoutButton; // 0x2e0(0x08)
	struct UTextBlock* QueueInfoText; // 0x2e8(0x08)
	struct UTextBlock* QueueWaitText; // 0x2f0(0x08)
	int32_t QueuePosition; // 0x2f8(0x04)
	int32_t SecondsLeftInQueue; // 0x2fc(0x04)
	struct FTimerHandle QueueCountdownTimer; // 0x300(0x08)

	void UpdateWaitTime(); // Function LoginQueue.LoginQueue_C.UpdateWaitTime // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void UpdateQueueStatus(); // Function LoginQueue.LoginQueue_C.UpdateQueueStatus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void Construct(); // Function LoginQueue.LoginQueue_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3520f50
	void OnQueueUpdated(); // Function LoginQueue.LoginQueue_C.OnQueueUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void OnLoginReady(); // Function LoginQueue.LoginQueue_C.OnLoginReady // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void BndEvt__LogoutButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(); // Function LoginQueue.LoginQueue_C.BndEvt__LogoutButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x3520f50
	void BndEvt__ExitButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(); // Function LoginQueue.LoginQueue_C.BndEvt__ExitButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x3520f50
	void OnSignoutAllowed(); // Function LoginQueue.LoginQueue_C.OnSignoutAllowed // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void OnSignoutNotAllowed(); // Function LoginQueue.LoginQueue_C.OnSignoutNotAllowed // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void ExecuteUbergraph_LoginQueue(int32_t EntryPoint); // Function LoginQueue.LoginQueue_C.ExecuteUbergraph_LoginQueue // (Final|UbergraphFunction|HasDefaults) // @ game+0x3520f50
};

