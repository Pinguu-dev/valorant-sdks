// WidgetBlueprintGeneratedClass MissingMinimapWidget.MissingMinimapWidget_C
// Size: 0x3c0 (Inherited: 0x3a9)
struct UMissingMinimapWidget_C : UMissingMinimapWidgetBase_C {
	char pad_3A9[0x7]; // 0x3a9(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3b0(0x08)
	float Visible Lifetime; // 0x3b8(0x04)
	float Fadeout Time; // 0x3bc(0x04)

	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function MissingMinimapWidget.MissingMinimapWidget_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3520f50
	void ExecuteUbergraph_MissingMinimapWidget(int32_t EntryPoint); // Function MissingMinimapWidget.MissingMinimapWidget_C.ExecuteUbergraph_MissingMinimapWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x3520f50
};

