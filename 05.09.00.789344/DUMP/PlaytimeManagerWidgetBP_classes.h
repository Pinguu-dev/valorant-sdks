// WidgetBlueprintGeneratedClass PlaytimeManagerWidgetBP.PlaytimeManagerWidgetBP_C
// Size: 0x300 (Inherited: 0x2c8)
struct UPlaytimeManagerWidgetBP_C : UCrossWorldUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct UImage* CloseImage; // 0x2d0(0x08)
	struct UTextBlock* CursorHelperText; // 0x2d8(0x08)
	struct UBorder* NotificationBorder; // 0x2e0(0x08)
	struct UVerticalBox* NotificationBox; // 0x2e8(0x08)
	struct UButton* NotificationCloseButton; // 0x2f0(0x08)
	struct UTextBlock* NotificationText; // 0x2f8(0x08)

	void UpdateCursorHelpTextVisibility(); // Function PlaytimeManagerWidgetBP.PlaytimeManagerWidgetBP_C.UpdateCursorHelpTextVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void Construct(); // Function PlaytimeManagerWidgetBP.PlaytimeManagerWidgetBP_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x32f73d0
	void HandlePlaytimeNotification(struct FString Notification, int32_t Minutes); // Function PlaytimeManagerWidgetBP.PlaytimeManagerWidgetBP_C.HandlePlaytimeNotification // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void BndEvt__NotificationCloseButton_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature(); // Function PlaytimeManagerWidgetBP.PlaytimeManagerWidgetBP_C.BndEvt__NotificationCloseButton_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x32f73d0
	void HandleSessionLoopStateChanged(); // Function PlaytimeManagerWidgetBP.PlaytimeManagerWidgetBP_C.HandleSessionLoopStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void ExecuteUbergraph_PlaytimeManagerWidgetBP(int32_t EntryPoint); // Function PlaytimeManagerWidgetBP.PlaytimeManagerWidgetBP_C.ExecuteUbergraph_PlaytimeManagerWidgetBP // (Final|UbergraphFunction|HasDefaults) // @ game+0x32f73d0
};

