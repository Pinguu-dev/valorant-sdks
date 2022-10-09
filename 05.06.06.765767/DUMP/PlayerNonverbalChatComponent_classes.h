// BlueprintGeneratedClass PlayerNonverbalChatComponent.PlayerNonverbalChatComponent_C
// Size: 0x168 (Inherited: 0xe8)
struct UPlayerNonverbalChatComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	struct FText CharacterName; // 0xf0(0x18)
	struct ABaseController_C* BaseController; // 0x108(0x08)
	struct TMap<float, enum class NonVerbalCommTypesEnum> TimeToVOMap; // 0x110(0x50)
	bool PlayedRecently; // 0x160(0x01)
	char pad_161[0x3]; // 0x161(0x03)
	int32_t ShopButtonAction; // 0x164(0x04)
};

