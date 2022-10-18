// BlueprintGeneratedClass CompFXC_AudioVisualizer_Signal.CompFXC_AudioVisualizer_Signal_C
// Size: 0x109 (Inherited: 0xf8)
struct UCompFXC_AudioVisualizer_Signal_C : UEffectComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf8(0x08)
	struct UAudioVisualizationDispatcherComponent* AudioVisualizationDispatcher; // 0x100(0x08)
	enum class EVisualizedSoundTypes SoundType; // 0x108(0x01)

	void ShouldVisualizeSound(struct AActor* OwnerOfSound, bool& ShouldVisualizeSound); // Function CompFXC_AudioVisualizer_Signal.CompFXC_AudioVisualizer_Signal_C.ShouldVisualizeSound // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x3520f50
	void ReceiveBeginPlay(); // Function CompFXC_AudioVisualizer_Signal.CompFXC_AudioVisualizer_Signal_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x3520f50
	void VisualizeSound(struct AActor* OwnerOfSound, float SoundFacingAngle); // Function CompFXC_AudioVisualizer_Signal.CompFXC_AudioVisualizer_Signal_C.VisualizeSound // (BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void ExecuteUbergraph_CompFXC_AudioVisualizer_Signal(int32_t EntryPoint); // Function CompFXC_AudioVisualizer_Signal.CompFXC_AudioVisualizer_Signal_C.ExecuteUbergraph_CompFXC_AudioVisualizer_Signal // (Final|UbergraphFunction) // @ game+0x3520f50
};

