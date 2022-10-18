// WidgetBlueprintGeneratedClass KeyboardKeyBTN.KeyboardKeyBTN_C
// Size: 0x320 (Inherited: 0x2d8)
struct UKeyboardKeyBTN_C : UCoordinatedHUDElement {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d8(0x08)
	struct UImage* BG; // 0x2e0(0x08)
	struct UImage* Image_291; // 0x2e8(0x08)
	struct UInvalidationBox* InvalidationBox_KeyboardKeyBTN; // 0x2f0(0x08)
	struct UTextBlock* KeyText; // 0x2f8(0x08)
	struct UScaleBox* ScaleBox_1; // 0x300(0x08)
	struct FName ActionMapping; // 0x308(0x0c)
	char pad_314[0x4]; // 0x314(0x04)
	struct UActionBindSet* ActionBindSet; // 0x318(0x08)

	void Construct(); // Function KeyboardKeyBTN.KeyboardKeyBTN_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3520f50
	void Destruct(); // Function KeyboardKeyBTN.KeyboardKeyBTN_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3520f50
	void UpdateHotkeyText(); // Function KeyboardKeyBTN.KeyboardKeyBTN_C.UpdateHotkeyText // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void ChangeActionMapping(struct FName Action); // Function KeyboardKeyBTN.KeyboardKeyBTN_C.ChangeActionMapping // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void BindingChanged(struct UActionBindSet* ActionBindSet, int32_t BindIndex, enum class EActionBindChangeSource ChangeSource, struct FName Character); // Function KeyboardKeyBTN.KeyboardKeyBTN_C.BindingChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void ExecuteUbergraph_KeyboardKeyBTN(int32_t EntryPoint); // Function KeyboardKeyBTN.KeyboardKeyBTN_C.ExecuteUbergraph_KeyboardKeyBTN // (Final|UbergraphFunction|HasDefaults) // @ game+0x3520f50
};

