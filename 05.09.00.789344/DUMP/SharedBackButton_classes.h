// WidgetBlueprintGeneratedClass SharedBackButton.SharedBackButton_C
// Size: 0x39b (Inherited: 0x2c8)
struct USharedBackButton_C : UDesignableUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct UWidgetAnimation* HoverAnim; // 0x2d0(0x08)
	struct UImage* BackArrowBg; // 0x2d8(0x08)
	struct UImage* BackArrowImage; // 0x2e0(0x08)
	struct UButton* BackButton; // 0x2e8(0x08)
	struct UHorizontalBox* BackButtonMode; // 0x2f0(0x08)
	struct UButton* BackgroundBackButton; // 0x2f8(0x08)
	struct UImage* BackImage; // 0x300(0x08)
	struct UHorizontalBox* CloseButtonMode; // 0x308(0x08)
	struct UImage* ForwardArrowBg; // 0x310(0x08)
	struct UImage* ForwardArrowImage; // 0x318(0x08)
	struct UHorizontalBox* ForwardButtonMode; // 0x320(0x08)
	struct UImage* Image_406; // 0x328(0x08)
	struct UVerticalBox* KeybindClose; // 0x330(0x08)
	struct UOverlay* KeyBindContainer; // 0x338(0x08)
	struct UOverlay* KeyBindContainer_2; // 0x340(0x08)
	struct UTextBlock* KeybindTextBack; // 0x348(0x08)
	struct UTextBlock* KeybindTextForward; // 0x350(0x08)
	struct UMenuAnchor* MenuAnchor_127; // 0x358(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_1; // 0x360(0x08)
	struct FMulticastInlineDelegate OnBackRequested; // 0x368(0x10)
	bool ListenToEscapeKey; // 0x378(0x01)
	char pad_379[0x7]; // 0x379(0x07)
	struct UAkAudioEvent* AUD_Hovered; // 0x380(0x08)
	struct UAkAudioEvent* AUD_Unhovered; // 0x388(0x08)
	struct UAkAudioEvent* AUD_Click; // 0x390(0x08)
	bool ShowKeybind; // 0x398(0x01)
	enum class SharedBackButtonTypes ButtonType; // 0x399(0x01)
	bool UsingUpdatedNavBar_OVERRIDE; // 0x39a(0x01)

	struct UWidget* OnGetUserMenuContent(); // Function SharedBackButton.SharedBackButton_C.OnGetUserMenuContent // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x32f73d0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function SharedBackButton.SharedBackButton_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x32f73d0
	void BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function SharedBackButton.SharedBackButton_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x32f73d0
	void BndEvt__BackButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function SharedBackButton.SharedBackButton_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x32f73d0
	void BndEvt__BackButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function SharedBackButton.SharedBackButton_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x32f73d0
	void BndEvt__BackgroundBackButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature(); // Function SharedBackButton.SharedBackButton_C.BndEvt__BackgroundBackButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x32f73d0
	void BndEvt__BackgroundBackButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature(); // Function SharedBackButton.SharedBackButton_C.BndEvt__BackgroundBackButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x32f73d0
	void BndEvt__BackgroundBackButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature(); // Function SharedBackButton.SharedBackButton_C.BndEvt__BackgroundBackButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x32f73d0
	void OnSynchronizeProperties(); // Function SharedBackButton.SharedBackButton_C.OnSynchronizeProperties // (Event|Public|BlueprintEvent) // @ game+0x32f73d0
	void ExecuteUbergraph_SharedBackButton(int32_t EntryPoint); // Function SharedBackButton.SharedBackButton_C.ExecuteUbergraph_SharedBackButton // (Final|UbergraphFunction|HasDefaults) // @ game+0x32f73d0
	void OnBackRequested__DelegateSignature(); // Function SharedBackButton.SharedBackButton_C.OnBackRequested__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
};

