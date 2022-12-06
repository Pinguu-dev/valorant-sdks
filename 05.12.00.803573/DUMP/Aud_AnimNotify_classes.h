// BlueprintGeneratedClass Aud_AnimNotify.Aud_AnimNotify_C
// Size: 0x70 (Inherited: 0x40)
struct UAud_AnimNotify_C : UAnimNotify {
	struct UAkAudioEvent* Event; // 0x40(0x08)
	struct FName AttachName; // 0x48(0x0c)
	struct FVector Offset; // 0x54(0x0c)
	bool ; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
	struct UAresAudioComponentManagerComponent* ; // 0x68(0x08)

	void (struct UAresAudioComponent* AudioComponent, struct UAnimSequenceBase* Animation, struct USkeletalMeshComponent* MeshComponent); // Function Aud_AnimNotify.Aud_AnimNotify_C. // (Public|BlueprintCallable|BlueprintEvent|Const) // @ game+0x3322a60
	bool Received_Notify(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation); // Function Aud_AnimNotify.Aud_AnimNotify_C.Received_Notify // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x3322a60
};

