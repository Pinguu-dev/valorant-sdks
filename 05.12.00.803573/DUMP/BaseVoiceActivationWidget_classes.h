// WidgetBlueprintGeneratedClass BaseVoiceActivationWidget.
// Size: 0x300 (Inherited: 0x2c8)
struct U : UDesignableUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct FString Subject; // 0x2d0(0x10)
	struct FMulticastInlineDelegate ; // 0x2e0(0x10)
	enum class SpeakingStates ; // 0x2f0(0x01)
	enum class EVoiceSessionType SessionType; // 0x2f1(0x01)
	char pad_2F2[0x6]; // 0x2f2(0x06)
	struct UVoiceSessionParticipantModel* ; // 0x2f8(0x08)

	void (); // Function BaseVoiceActivationWidget.. // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (enum class SpeakingStates NewState, int32_t ); // Function BaseVoiceActivationWidget.. // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (); // Function BaseVoiceActivationWidget.. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (bool NewValue); // Function BaseVoiceActivationWidget.. // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void OnEnergyChanged(int32_t NewValue); // Function BaseVoiceActivationWidget..OnEnergyChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (int32_t EntryPoint); // Function BaseVoiceActivationWidget.. // (Final|UbergraphFunction) // @ game+0x3322a60
	void (enum class SpeakingStates NewState, enum class SpeakingStates OldState, int32_t ); // Function BaseVoiceActivationWidget.. // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
};

