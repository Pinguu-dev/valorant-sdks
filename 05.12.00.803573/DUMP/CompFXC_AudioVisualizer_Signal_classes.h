// BlueprintGeneratedClass CompFXC_AudioVisualizer_Signal.CompFXC_AudioVisualizer_Signal_C
// Size: 0x109 (Inherited: 0xf8)
struct UCompFXC_AudioVisualizer_Signal_C : UEffectComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf8(0x08)
	struct UAudioVisualizationDispatcherComponent* ; // 0x100(0x08)
	enum class EVisualizedSoundTypes SoundType; // 0x108(0x01)

	void (struct AActor* , bool& ); // Function CompFXC_AudioVisualizer_Signal.CompFXC_AudioVisualizer_Signal_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3322a60
	void ReceiveBeginPlay(); // Function CompFXC_AudioVisualizer_Signal.CompFXC_AudioVisualizer_Signal_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x3322a60
	void VisualizeSound(struct AActor* , float SoundFacingAngle); // Function CompFXC_AudioVisualizer_Signal.CompFXC_AudioVisualizer_Signal_C.VisualizeSound // (BlueprintCallable|BlueprintEvent) // @ game+0x3322a60
	void (int32_t EntryPoint); // Function CompFXC_AudioVisualizer_Signal.CompFXC_AudioVisualizer_Signal_C. // (Final|UbergraphFunction) // @ game+0x3322a60
};

