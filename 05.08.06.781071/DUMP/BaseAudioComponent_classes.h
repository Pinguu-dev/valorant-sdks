// BlueprintGeneratedClass BaseAudioComponent.BaseAudioComponent_C
// Size: 0x568 (Inherited: 0x560)
struct UBaseAudioComponent_C : UAresAudioComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x560(0x08)

	void GetComponentDebugString(struct FString& DebugString); // Function BaseAudioComponent.BaseAudioComponent_C.GetComponentDebugString // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void AudioTick(float DeltaTime); // Function BaseAudioComponent.BaseAudioComponent_C.AudioTick // (Event|Public|BlueprintEvent) // @ game+0x3520f50
	void ExecuteUbergraph_BaseAudioComponent(int32_t EntryPoint); // Function BaseAudioComponent.BaseAudioComponent_C.ExecuteUbergraph_BaseAudioComponent // (Final|UbergraphFunction) // @ game+0x3520f50
};

