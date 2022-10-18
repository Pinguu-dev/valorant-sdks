// WidgetBlueprintGeneratedClass DirectConnectWidget.DirectConnectWidget_C
// Size: 0x339 (Inherited: 0x2c8)
struct UDirectConnectWidget_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct UEditableTextBox* Address; // 0x2d0(0x08)
	struct USharedSecondaryButtonText_C* Button; // 0x2d8(0x08)
	struct UComboBoxString* PlayerDropdown; // 0x2e0(0x08)
	struct UEditableTextBox* PlayerName; // 0x2e8(0x08)
	struct UHorizontalBox* PlayerNameBox; // 0x2f0(0x08)
	struct UHorizontalBox* PlayerWidget; // 0x2f8(0x08)
	struct UEditableTextBox* Port; // 0x300(0x08)
	struct UComboBoxString* TeamDropdown; // 0x308(0x08)
	struct UHorizontalBox* TeamWidget; // 0x310(0x08)
	struct FString DisplayName; // 0x318(0x10)
	struct FString PlayerGuid; // 0x328(0x10)
	bool Team; // 0x338(0x01)

	void SetGUID(struct FString Team, struct FString Player); // Function DirectConnectWidget.DirectConnectWidget_C.SetGUID // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void GetConnectSettings(struct FDirectConnectSettings& Settings); // Function DirectConnectWidget.DirectConnectWidget_C.GetConnectSettings // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void PopulateCachedSettings(struct FDirectConnectSettings Settings); // Function DirectConnectWidget.DirectConnectWidget_C.PopulateCachedSettings // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void BndEvt__Port_K2Node_ComponentBoundEvent_98_OnEditableTextChangedEvent__DelegateSignature(struct FText& Text); // Function DirectConnectWidget.DirectConnectWidget_C.BndEvt__Port_K2Node_ComponentBoundEvent_98_OnEditableTextChangedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x3520f50
	void BndEvt__Address_K2Node_ComponentBoundEvent_104_OnEditableTextChangedEvent__DelegateSignature(struct FText& Text); // Function DirectConnectWidget.DirectConnectWidget_C.BndEvt__Address_K2Node_ComponentBoundEvent_104_OnEditableTextChangedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x3520f50
	void BndEvt__Button_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature(struct USharedSecondaryButtonText_C* TextButton); // Function DirectConnectWidget.DirectConnectWidget_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature // (BlueprintEvent) // @ game+0x3520f50
	void Construct(); // Function DirectConnectWidget.DirectConnectWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3520f50
	void BndEvt__TeamADropdown_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, enum class ESelectInfo SelectionType); // Function DirectConnectWidget.DirectConnectWidget_C.BndEvt__TeamADropdown_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x3520f50
	void BndEvt__TeamBDropdown_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, enum class ESelectInfo SelectionType); // Function DirectConnectWidget.DirectConnectWidget_C.BndEvt__TeamBDropdown_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x3520f50
	void ExecuteUbergraph_DirectConnectWidget(int32_t EntryPoint); // Function DirectConnectWidget.DirectConnectWidget_C.ExecuteUbergraph_DirectConnectWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x3520f50
};

