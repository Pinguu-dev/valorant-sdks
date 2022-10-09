// WidgetBlueprintGeneratedClass BaseVoiceActivationWidget.BaseVoiceActivationWidget_C
// Size: 0x300 (Inherited: 0x2c8)
struct UBaseVoiceActivationWidget_C : UDesignableUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct FString Subject; // 0x2d0(0x10)
	struct FMulticastInlineDelegate VoiceStateChanged; // 0x2e0(0x10)
	enum class SpeakingStates VoiceState; // 0x2f0(0x01)
	enum class EVoiceSessionType SessionType; // 0x2f1(0x01)
	char pad_2F2[0x6]; // 0x2f2(0x06)
	struct UVoiceSessionParticipantModel* VoiceParticipantModel; // 0x2f8(0x08)
};

