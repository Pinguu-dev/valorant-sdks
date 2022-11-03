// WidgetBlueprintGeneratedClass MissingMinimapWidgetBase.MissingMinimapWidgetBase_C
// Size: 0x3a9 (Inherited: 0x2e8)
struct UMissingMinimapWidgetBase_C : UMissingMinimapWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e8(0x08)
	enum class EAresMinimapLayer MinimapLayer; // 0x2f0(0x01)
	enum class EAresMinimapPositionSpace Minimap Position Space; // 0x2f1(0x01)
	enum class EAresMinimapRotationSpace Minimap Rotation Space; // 0x2f2(0x01)
	enum class EAresMinimapSizeSpace Minimap Size Space; // 0x2f3(0x01)
	struct FVector Minimap Position; // 0x2f4(0x0c)
	float Minimap Rotation; // 0x300(0x04)
	struct FVector Minimap Size; // 0x304(0x0c)
	struct FSlateBrush Brush; // 0x310(0x90)
	struct FVector2D Alignment; // 0x3a0(0x08)
	bool Draw Off Map; // 0x3a8(0x01)

	void SetAuthoredSlotValues(); // Function MissingMinimapWidgetBase.MissingMinimapWidgetBase_C.SetAuthoredSlotValues // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void PreConstruct(bool IsDesignTime); // Function MissingMinimapWidgetBase.MissingMinimapWidgetBase_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x32f73d0
	void Construct(); // Function MissingMinimapWidgetBase.MissingMinimapWidgetBase_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x32f73d0
	void ExecuteUbergraph_MissingMinimapWidgetBase(int32_t EntryPoint); // Function MissingMinimapWidgetBase.MissingMinimapWidgetBase_C.ExecuteUbergraph_MissingMinimapWidgetBase // (Final|UbergraphFunction) // @ game+0x32f73d0
};

