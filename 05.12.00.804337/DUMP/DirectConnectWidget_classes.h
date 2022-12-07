// WidgetBlueprintGeneratedClass DirectConnectWidget.
// Size: 0x339 (Inherited: 0x2c8)
struct U : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct UEditableTextBox* Address; // 0x2d0(0x08)
	struct U* Button; // 0x2d8(0x08)
	struct UComboBoxString* ; // 0x2e0(0x08)
	struct UEditableTextBox* PlayerName; // 0x2e8(0x08)
	struct UHorizontalBox* ; // 0x2f0(0x08)
	struct UHorizontalBox* ; // 0x2f8(0x08)
	struct UEditableTextBox* Port; // 0x300(0x08)
	struct UComboBoxString* ; // 0x308(0x08)
	struct UHorizontalBox* ; // 0x310(0x08)
	struct FString DisplayName; // 0x318(0x10)
	struct FString PlayerGuid; // 0x328(0x10)
	bool Team; // 0x338(0x01)

	void (struct FString Team, struct FString Player); // Function DirectConnectWidget.. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct FDirectConnectSettings& Settings); // Function DirectConnectWidget.. // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct FDirectConnectSettings Settings); // Function DirectConnectWidget.. // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a90
	void (struct FText& Text); // Function DirectConnectWidget.. // (HasOutParms|BlueprintEvent) // @ game+0x3322a90
	void (struct FText& Text); // Function DirectConnectWidget.. // (HasOutParms|BlueprintEvent) // @ game+0x3322a90
	void (struct U* ); // Function DirectConnectWidget.. // (BlueprintEvent) // @ game+0x3322a90
	void Construct(); // Function DirectConnectWidget..Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3322a90
	void (struct FString SelectedItem, enum class ESelectInfo SelectionType); // Function DirectConnectWidget.. // (BlueprintEvent) // @ game+0x3322a90
	void (struct FString SelectedItem, enum class ESelectInfo SelectionType); // Function DirectConnectWidget.. // (BlueprintEvent) // @ game+0x3322a90
	void (int32_t EntryPoint); // Function DirectConnectWidget.. // (Final|UbergraphFunction|HasDefaults) // @ game+0x3322a90
};

