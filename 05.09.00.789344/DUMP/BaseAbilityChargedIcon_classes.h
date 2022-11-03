// WidgetBlueprintGeneratedClass BaseAbilityChargedIcon.BaseAbilityChargedIcon_C
// Size: 0x358 (Inherited: 0x310)
struct UBaseAbilityChargedIcon_C : UBaseGameplayNotificationWidget_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x310(0x08)
	struct UImage* AbilityIcon; // 0x318(0x08)
	enum class ECharacterAbilitySlot AbilitySlot; // 0x320(0x01)
	char pad_321[0x7]; // 0x321(0x07)
	struct FSlateColor IconTint; // 0x328(0x28)
	struct UTexture2D* PreviewIcon; // 0x350(0x08)

	void SetAbilityIcon(struct UCharacterUIData* CharacterUIData, enum class ECharacterAbilitySlot AbilitySlot); // Function BaseAbilityChargedIcon.BaseAbilityChargedIcon_C.SetAbilityIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void OnLoaded_E60D2467470A6473169C00BE3DEC2F84(struct UObject* Loaded); // Function BaseAbilityChargedIcon.BaseAbilityChargedIcon_C.OnLoaded_E60D2467470A6473169C00BE3DEC2F84 // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void SetHUDModel(struct UCoordinatedHUDModel* HUDModel); // Function BaseAbilityChargedIcon.BaseAbilityChargedIcon_C.SetHUDModel // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void HandleAbilityChanged(struct AAbility_Base_C* Ability); // Function BaseAbilityChargedIcon.BaseAbilityChargedIcon_C.HandleAbilityChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void PreConstruct(bool IsDesignTime); // Function BaseAbilityChargedIcon.BaseAbilityChargedIcon_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x32f73d0
	void DisplayEditorPreview(); // Function BaseAbilityChargedIcon.BaseAbilityChargedIcon_C.DisplayEditorPreview // (Event|Public|BlueprintEvent) // @ game+0x32f73d0
	void ExecuteUbergraph_BaseAbilityChargedIcon(int32_t EntryPoint); // Function BaseAbilityChargedIcon.BaseAbilityChargedIcon_C.ExecuteUbergraph_BaseAbilityChargedIcon // (Final|UbergraphFunction) // @ game+0x32f73d0
};

