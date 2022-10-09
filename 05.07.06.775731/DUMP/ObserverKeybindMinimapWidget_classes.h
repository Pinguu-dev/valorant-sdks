// WidgetBlueprintGeneratedClass ObserverKeybindMinimapWidget.ObserverKeybindMinimapWidget_C
// Size: 0x308 (Inherited: 0x2f0)
struct UObserverKeybindMinimapWidget_C : UShooterCharacterMinimapWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2f0(0x08)
	struct UTextBlock* InputActionLabel; // 0x2f8(0x08)
	struct AShooterCharacter* Character; // 0x300(0x08)

	void ReceiveSetState(); // Function ObserverKeybindMinimapWidget.ObserverKeybindMinimapWidget_C.ReceiveSetState // (Event|Public|BlueprintEvent) // @ game+0x3511190
	void ExecuteUbergraph_ObserverKeybindMinimapWidget(int32_t EntryPoint); // Function ObserverKeybindMinimapWidget.ObserverKeybindMinimapWidget_C.ExecuteUbergraph_ObserverKeybindMinimapWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x3511190
};

