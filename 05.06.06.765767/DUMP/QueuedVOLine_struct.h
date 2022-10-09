// UserDefinedStruct QueuedVOLine.QueuedVOLine
// Size: 0x38 (Inherited: 0x00)
struct FQueuedVOLine {
	struct UAkAudioEvent* Event_2_529A5E5D4B60F1E43232A59FEC9793E2; // 0x00(0x08)
	enum class VOPriorityEnum Priority_5_AF5BA7CE4DC714091C7E7FAA54965E68; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float QueueTimeout_12_A77F45DB41FC418F06DA09A1D1F8705F; // 0x0c(0x04)
	float TimeEnteredQueue_13_1DE7B838470528CF3AD4119633892D46; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<struct FAkSwitch> AkSwitchAray_18_D0C320494486C17C523462BBE5DF22F2; // 0x18(0x10)
	bool WaitsOnAnnouncer_20_CC93F1E2469639814AB5D5909C19B3CF; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	int32_t RandomSeed_23_E3A4049B4C6F301C1927C5AA33E5EB26; // 0x2c(0x04)
	struct UBaseVOComponent_C* WaitOnCharacter_27_DC473ED848FB67A5523E7686CD70D581; // 0x30(0x08)
};

