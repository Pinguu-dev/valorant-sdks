// WidgetBlueprintGeneratedClass RadialTotemSelectorMenu.RadialTotemSelectorMenu_C
// Size: 0x301 (Inherited: 0x2c8)
struct URadialTotemSelectorMenu_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct U* RadialMenu; // 0x2d0(0x08)
	struct FMulticastInlineDelegate Selected Equippable; // 0x2d8(0x10)
	struct TArray<struct AAresEquippable*> Equippables; // 0x2e8(0x10)
	struct AAresEquippable* ; // 0x2f8(0x08)
	bool Valid; // 0x300(0x01)

	void Show(); // Function RadialTotemSelectorMenu.RadialTotemSelectorMenu_C.Show // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void Initialize(struct TArray<struct AAresEquippable*>& Equippables, struct AAresEquippable* ); // Function RadialTotemSelectorMenu.RadialTotemSelectorMenu_C.Initialize // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void Cancel(); // Function RadialTotemSelectorMenu.RadialTotemSelectorMenu_C.Cancel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void Close(); // Function RadialTotemSelectorMenu.RadialTotemSelectorMenu_C.Close // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void Hide(); // Function RadialTotemSelectorMenu.RadialTotemSelectorMenu_C.Hide // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function RadialTotemSelectorMenu.RadialTotemSelectorMenu_C. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (int32_t EntryPoint); // Function RadialTotemSelectorMenu.RadialTotemSelectorMenu_C. // (Final|UbergraphFunction) // @ game+0x3322a60
	void Selected Equippable__DelegateSignature(struct AAresEquippable* Equippable); // Function RadialTotemSelectorMenu.RadialTotemSelectorMenu_C.Selected Equippable__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
};

