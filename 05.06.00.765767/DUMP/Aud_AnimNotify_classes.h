// BlueprintGeneratedClass Aud_AnimNotify.Aud_AnimNotify_C
// Size: 0x70 (Inherited: 0x40)
struct UAud_AnimNotify_C : UAnimNotify {
	struct UAkAudioEvent* Event; // 0x40(0x08)
	struct FName AttachName; // 0x48(0x0c)
	struct FVector Offset; // 0x54(0x0c)
	bool bStopOnMontageInterrupted; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
	struct UAresAudioComponentManagerComponent* AudioManager; // 0x68(0x08)
};

