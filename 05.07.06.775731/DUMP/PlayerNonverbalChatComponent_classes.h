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

	void TryConsumeRateLimitedComm(bool& bSuccess); // Function PlayerNonverbalChatComponent.PlayerNonverbalChatComponent_C.TryConsumeRateLimitedComm // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void ChatMsgDupeCheck(enum class NonVerbalCommTypesEnum VO, bool& MakeChatMsg); // Function PlayerNonverbalChatComponent.PlayerNonverbalChatComponent_C.ChatMsgDupeCheck // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void GenerateChatMsgWithRegions(enum class NonVerbalCommTypesEnum VO, struct FText& ChatMessageText); // Function PlayerNonverbalChatComponent.PlayerNonverbalChatComponent_C.GenerateChatMsgWithRegions // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void RadioCommand(enum class NonVerbalCommTypesEnum RadioCommand); // Function PlayerNonverbalChatComponent.PlayerNonverbalChatComponent_C.RadioCommand // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void I_GOT_DA_THING(struct UCharacterHandle* CharacterHandle); // Function PlayerNonverbalChatComponent.PlayerNonverbalChatComponent_C.I_GOT_DA_THING // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void ReceiveBeginPlay(); // Function PlayerNonverbalChatComponent.PlayerNonverbalChatComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x3511190
	void ResetMessageLog(); // Function PlayerNonverbalChatComponent.PlayerNonverbalChatComponent_C.ResetMessageLog // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void TacticalCommand(enum class TacticalCommTypesEnum Comm); // Function PlayerNonverbalChatComponent.PlayerNonverbalChatComponent_C.TacticalCommand // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void ExecuteUbergraph_PlayerNonverbalChatComponent(int32_t EntryPoint); // Function PlayerNonverbalChatComponent.PlayerNonverbalChatComponent_C.ExecuteUbergraph_PlayerNonverbalChatComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0x3511190
};

