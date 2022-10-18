// WidgetBlueprintGeneratedClass GamepadInputChordWidget.GamepadInputChordWidget_C
// Size: 0x360 (Inherited: 0x2c8)
struct UGamepadInputChordWidget_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct UHorizontalBox* ChordedInputBox; // 0x2d0(0x08)
	struct UBorder* GamepadLeftInput; // 0x2d8(0x08)
	struct UBorder* GamepadRightInput; // 0x2e0(0x08)
	struct UTextBlock* GamepadShiftLinkText; // 0x2e8(0x08)
	struct UHorizontalBox* IconBox; // 0x2f0(0x08)
	struct UBorder* RootBorder; // 0x2f8(0x08)
	struct UGamepadInputIconBase* LeftInputIcon; // 0x300(0x08)
	struct UGamepadInputIconBase* RightInputIcon; // 0x308(0x08)
	struct TMap<struct FName, struct FName> KBToGamepadActionNameMap; // 0x310(0x50)

	void ConvertActionMappinToGamepad(struct FName PCActionMapping, struct FName& GamepadActionMapping); // Function GamepadInputChordWidget.GamepadInputChordWidget_C.ConvertActionMappinToGamepad // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3520f50
	void SetInputAction(struct FName ActionName); // Function GamepadInputChordWidget.GamepadInputChordWidget_C.SetInputAction // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void PreConstruct(bool IsDesignTime); // Function GamepadInputChordWidget.GamepadInputChordWidget_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3520f50
	void ExecuteUbergraph_GamepadInputChordWidget(int32_t EntryPoint); // Function GamepadInputChordWidget.GamepadInputChordWidget_C.ExecuteUbergraph_GamepadInputChordWidget // (Final|UbergraphFunction) // @ game+0x3520f50
};

