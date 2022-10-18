// BlueprintGeneratedClass BaseMovementSoundComponent.BaseMovementSoundComponent_C
// Size: 0x140 (Inherited: 0xe8)
struct UBaseMovementSoundComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	struct TMap<enum class ArmMovementType, struct UAkAudioEvent*> MovementSounds; // 0xf0(0x50)

	void OnArmMovementAnimNotify(struct UAnimSequenceBase* AnimSequence, struct USkeletalMeshComponent* SkelMeshComp, enum class ArmMovementType MovementType); // Function BaseMovementSoundComponent.BaseMovementSoundComponent_C.OnArmMovementAnimNotify // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3520f50
	void ExecuteUbergraph_BaseMovementSoundComponent(int32_t EntryPoint); // Function BaseMovementSoundComponent.BaseMovementSoundComponent_C.ExecuteUbergraph_BaseMovementSoundComponent // (Final|UbergraphFunction) // @ game+0x3520f50
};

