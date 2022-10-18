// WidgetBlueprintGeneratedClass Ping_Base_MinimapWidget.Ping_Base_MinimapWidget_C
// Size: 0x3d8 (Inherited: 0x3c0)
struct UPing_Base_MinimapWidget_C : UMissingMinimapWidget_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3c0(0x08)
	struct UWidgetAnimation* Pulse; // 0x3c8(0x08)
	struct UImage* Icon; // 0x3d0(0x08)

	void Construct(); // Function Ping_Base_MinimapWidget.Ping_Base_MinimapWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3520f50
	void ReceiveSetState(); // Function Ping_Base_MinimapWidget.Ping_Base_MinimapWidget_C.ReceiveSetState // (Event|Public|BlueprintEvent) // @ game+0x3520f50
	void ExecuteUbergraph_Ping_Base_MinimapWidget(int32_t EntryPoint); // Function Ping_Base_MinimapWidget.Ping_Base_MinimapWidget_C.ExecuteUbergraph_Ping_Base_MinimapWidget // (Final|UbergraphFunction) // @ game+0x3520f50
};

