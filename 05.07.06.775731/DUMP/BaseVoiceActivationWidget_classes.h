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

	void RefreshState(); // Function BaseVoiceActivationWidget.BaseVoiceActivationWidget_C.RefreshState // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void SetNewState(enum class SpeakingStates NewState, int32_t NewEnergy); // Function BaseVoiceActivationWidget.BaseVoiceActivationWidget_C.SetNewState // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void SetupVoiceEvents(); // Function BaseVoiceActivationWidget.BaseVoiceActivationWidget_C.SetupVoiceEvents // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void OnUpdated(bool NewValue); // Function BaseVoiceActivationWidget.BaseVoiceActivationWidget_C.OnUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void OnEnergyChanged(int32_t NewValue); // Function BaseVoiceActivationWidget.BaseVoiceActivationWidget_C.OnEnergyChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x3511190
	void ExecuteUbergraph_BaseVoiceActivationWidget(int32_t EntryPoint); // Function BaseVoiceActivationWidget.BaseVoiceActivationWidget_C.ExecuteUbergraph_BaseVoiceActivationWidget // (Final|UbergraphFunction) // @ game+0x3511190
	void VoiceStateChanged__DelegateSignature(enum class SpeakingStates NewState, enum class SpeakingStates OldState, int32_t NewEnergy); // Function BaseVoiceActivationWidget.BaseVoiceActivationWidget_C.VoiceStateChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x3511190
};

