// WidgetBlueprintGeneratedClass ConsoleSoftwareCursor.ConsoleSoftwareCursor_C
// Size: 0x2d8 (Inherited: 0x2c8)
struct UConsoleSoftwareCursor_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct UImage* CursorImage; // 0x2d0(0x08)

	void Construct(); // Function ConsoleSoftwareCursor.ConsoleSoftwareCursor_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3511190
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function ConsoleSoftwareCursor.ConsoleSoftwareCursor_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3511190
	void ExecuteUbergraph_ConsoleSoftwareCursor(int32_t EntryPoint); // Function ConsoleSoftwareCursor.ConsoleSoftwareCursor_C.ExecuteUbergraph_ConsoleSoftwareCursor // (Final|UbergraphFunction|HasDefaults) // @ game+0x3511190
};

