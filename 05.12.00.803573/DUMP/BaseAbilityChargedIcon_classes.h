// WidgetBlueprintGeneratedClass BaseAbilityChargedIcon.
// Size: 0x358 (Inherited: 0x310)
struct U : U {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x310(0x08)
	struct UImage* ; // 0x318(0x08)
	enum class ECharacterAbilitySlot ; // 0x320(0x01)
	char pad_321[0x7]; // 0x321(0x07)
	struct FSlateColor IconTint; // 0x328(0x28)
	struct UTexture2D* ; // 0x350(0x08)

	void (struct UCharacterUIData* CharacterUIData, enum class ECharacterAbilitySlot ); // Function BaseAbilityChargedIcon.. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct UObject* Loaded); // Function BaseAbilityChargedIcon.. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void SetHUDModel(struct UCoordinatedHUDModel* HUDModel); // Function BaseAbilityChargedIcon..SetHUDModel // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (struct AAbility_Base_C* Ability); // Function BaseAbilityChargedIcon.. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void PreConstruct(bool IsDesignTime); // Function BaseAbilityChargedIcon..PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x3322a60
	void DisplayEditorPreview(); // Function BaseAbilityChargedIcon..DisplayEditorPreview // (Event|Public|BlueprintEvent) // @ game+0x3322a60
	void (int32_t EntryPoint); // Function BaseAbilityChargedIcon.. // (Final|UbergraphFunction) // @ game+0x3322a60
};

