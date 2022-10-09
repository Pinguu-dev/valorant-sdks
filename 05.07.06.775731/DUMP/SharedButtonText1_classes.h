// WidgetBlueprintGeneratedClass SharedButtonText1.SharedButtonText1_C
// Size: 0x3b8 (Inherited: 0x2c8)
struct USharedButtonText1_C : UDesignableUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct UImage* AccentTriangle; // 0x2d0(0x08)
	struct UButton* Button; // 0x2d8(0x08)
	struct UImage* ButtonBGOrnament01; // 0x2e0(0x08)
	struct UTextBlock* DisabledLabel; // 0x2e8(0x08)
	struct UOverlay* DisabledState; // 0x2f0(0x08)
	struct UWidgetSwitcher* EnabledButtonSwitcher; // 0x2f8(0x08)
	struct UTextBlock* EnabledLabel; // 0x300(0x08)
	struct UOverlay* EnabledState; // 0x308(0x08)
	struct UImage* hover; // 0x310(0x08)
	struct UImage* Image_2; // 0x318(0x08)
	struct UImage* Image_3; // 0x320(0x08)
	struct UImage* Image_4; // 0x328(0x08)
	struct UImage* NormalBackground; // 0x330(0x08)
	struct UImage* OnClickBacking; // 0x338(0x08)
	struct FText ButtonText; // 0x340(0x18)
	struct FMulticastInlineDelegate OnClicked; // 0x358(0x10)
	struct FMulticastInlineDelegate OnHovered; // 0x368(0x10)
	struct FMulticastInlineDelegate OnUnhovered; // 0x378(0x10)
	struct FMulticastInlineDelegate OnPressed; // 0x388(0x10)
	bool Enabled; // 0x398(0x01)
	char pad_399[0x7]; // 0x399(0x07)
	struct UAkAudioEvent* AUD_Hover; // 0x3a0(0x08)
	struct UAkAudioEvent* AUD_UnHover; // 0x3a8(0x08)
	struct UAkAudioEvent* AUD_ButtonClicked; // 0x3b0(0x08)

	void UpdateButtonText(struct FText ButtonText); // Function SharedButtonText1.SharedButtonText1_C.UpdateButtonText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void SetIsEnabledOverride(bool InIsEnabled); // Function SharedButtonText1.SharedButtonText1_C.SetIsEnabledOverride // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void BndEvt__RematchButton_K2Node_ComponentBoundEvent_203_OnButtonHoverEvent__DelegateSignature(); // Function SharedButtonText1.SharedButtonText1_C.BndEvt__RematchButton_K2Node_ComponentBoundEvent_203_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x3511190
	void BndEvt__RematchButton_K2Node_ComponentBoundEvent_257_OnButtonHoverEvent__DelegateSignature(); // Function SharedButtonText1.SharedButtonText1_C.BndEvt__RematchButton_K2Node_ComponentBoundEvent_257_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x3511190
	void Construct(); // Function SharedButtonText1.SharedButtonText1_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3511190
	void BndEvt__RematchButton_K2Node_ComponentBoundEvent_476_OnButtonClickedEvent__DelegateSignature(); // Function SharedButtonText1.SharedButtonText1_C.BndEvt__RematchButton_K2Node_ComponentBoundEvent_476_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x3511190
	void BndEvt__RematchButton_K2Node_ComponentBoundEvent_18_OnButtonPressedEvent__DelegateSignature(); // Function SharedButtonText1.SharedButtonText1_C.BndEvt__RematchButton_K2Node_ComponentBoundEvent_18_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x3511190
	void OnSynchronizeProperties(); // Function SharedButtonText1.SharedButtonText1_C.OnSynchronizeProperties // (Event|Public|BlueprintEvent) // @ game+0x3511190
	void ExecuteUbergraph_SharedButtonText1(int32_t EntryPoint); // Function SharedButtonText1.SharedButtonText1_C.ExecuteUbergraph_SharedButtonText1 // (Final|UbergraphFunction) // @ game+0x3511190
	void OnPressed__DelegateSignature(struct USharedButtonText1_C* NewParam); // Function SharedButtonText1.SharedButtonText1_C.OnPressed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void OnUnHovered__DelegateSignature(struct USharedButtonText1_C* TextButton); // Function SharedButtonText1.SharedButtonText1_C.OnUnHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void OnHovered__DelegateSignature(struct USharedButtonText1_C* TextButton); // Function SharedButtonText1.SharedButtonText1_C.OnHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void OnClicked__DelegateSignature(struct USharedButtonText1_C* TextButton); // Function SharedButtonText1.SharedButtonText1_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
};

