// WidgetBlueprintGeneratedClass MissingMinimapWidgetBase.
// Size: 0x3a9 (Inherited: 0x2e8)
struct U : UMissingMinimapWidget {
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

	void (); // Function MissingMinimapWidgetBase.. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void PreConstruct(bool IsDesignTime); // Function MissingMinimapWidgetBase..PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3322a60
	void Construct(); // Function MissingMinimapWidgetBase..Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3322a60
	void (int32_t EntryPoint); // Function MissingMinimapWidgetBase.. // (Final|UbergraphFunction) // @ game+0x3322a60
};

